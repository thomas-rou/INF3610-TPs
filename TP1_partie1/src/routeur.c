/*
*********************************************************************************************************
*                                                 uC/OS-III
*                                          The Real-Time Kernel
*                                               PORT Windows
*
*
*            		          					Guy BOIS
*                                  Polytechnique Montreal, Qc, CANADA
*                                                  02/2021
*
*
*********************************************************************************************************
*/

#include "routeur.h"

#include <cpu.h>
#include <lib_mem.h>

#include <inttypes.h>
#include <os.h>
#include <stdbool.h>
#include <stdlib.h>

#include <KAL/kal.h>
#include <app_cfg.h>
#include <cpu.h>
#include <ucos_bsp.h>
#include <ucos_int.h>
#include <xparameters.h>

#include <xil_printf.h>

#include <stdio.h>
#include <ucos_bsp.h>

#include <Source/os.h>
#include <os_cfg_app.h>

#include <xgpio.h>
#include <xil_exception.h>
#include <xintc.h>

#define LLONG_MAX 9223372036854775807 // valeur maximum pour 64 bits
CPU_TS_TMR_FREQ freq_hz;              // Pour connaitre la frequence de mis e
                                      // jour du timestamp
int type_of_min_delay;
int type_of_max_delay;

CPU_TS64 max_delay_video = 0L; // On part avec le delai minimum
float max_delay_video_float;   // Equivalent float pour le xil_printf
CPU_TS64 max_delay_audio = 0L;
float max_delay_audio_float;
CPU_TS64 max_delay_autre = 0L;
float max_delay_autre_float;

// e utiliser pour suivre le remplissage et le vidage des fifos
// Mettre en commentaire et utiliser la fonction vide suivante si vous ne voulez
// pas de trace
#if FULL_TRACE == 1
#define safeprintf(fmt, ...)                                                   \
    {                                                                          \
        OSMutexPend(&mutPrint, 0, OS_OPT_PEND_BLOCKING, &ts, &perr);           \
        xil_printf(fmt, ##__VA_ARGS__);                                        \
        OSMutexPost(&mutPrint, OS_OPT_POST_NONE, &perr);                       \
    }
#else
#define safeprintf(fmt, ...)                                                   \
    {}
#endif

/*
*********************************************************************************************************
*                                                  MAIN
*********************************************************************************************************
*/

int main(void) {

    OS_ERR err;

    UCOS_LowLevelInit();

    CPU_Init();
    Mem_Init();
    OSInit(&err);

    create_application();

    OSMemCreate(&BLockMem, "BLockMem", &Tab_Block[0][0], 10000, sizeof(Packet) * sizeof(CPU_INT32U), &err);

    OSStart(&err);
    return 0; // Start multitasking
}

void create_application() {
    int error;

    error = create_events();
    if (error != 0)
        xil_printf("Error %d while creating events\n", error);

    error = create_tasks();
    if (error != 0)
        xil_printf("Error %d while creating tasks\n", error);
}

int create_tasks() {

    int i;
    OS_ERR err;

    OSTaskCreate(&StartupTaskTCB, "StartUp Task", StartupTask, (void *)0,
                 UCOS_START_TASK_PRIO, &StartupTaskStk[0u], TASK_STK_SIZE / 2,
                 TASK_STK_SIZE, 1, 0, (void *)0,
                 (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);

    return 0;
}

int create_events() {
    OS_ERR err;
    int i;

    // Creation des semaphores
    OSSemCreate(&Sem, "Sem", 0, &err);

    OSSemCreate(&NbPaquets, "NbPaquets", 10000, &err); // Feature 2
    // Creation des mutex
    OSMutexCreate(&mutPrint, "mutPrint", &err);

    OSFlagCreate(&RouterStatus, "Router Status", (OS_FLAGS)0, &err);

    return 0;
}

void Update_TS(Packet *packet) {

    CPU_TS64 delay;

    delay = CPU_TS_Get64() - packet->timestamp; // Valeur courante - valeur initiale

    if (delay < 0) {
        xil_printf("Attention overflow\n");
    } else {
        switch (packet->type) {
        case PACKET_VIDEO:
            if (max_delay_video < delay)
                max_delay_video = delay;
            break;
        case PACKET_AUDIO:
            if (max_delay_audio < delay)
                max_delay_audio = delay;
            break;
        case PACKET_AUTRE:
            if (max_delay_autre < delay)
                max_delay_autre = delay;
            break;
        default:
            break;
        }
    }
}

/*
*********************************************************************************************************
*                                               STARTUP TASK
*********************************************************************************************************
*/

///////////////////////////////////////////////////////////////////////////////////////
//									TASKS
///////////////////////////////////////////////////////////////////////////////////////

/*
 *********************************************************************************************************
 *											  TaskGeneratePacket
 *  - Genere des paquets et les envoie dans la InputQ.
 *
 *
 *********************************************************************************************************
 */
void TaskGenerate(void *data) {
    srand(42);
    OS_ERR err, perr;
    CPU_TS ts;
    bool isGenPhase =
        false; // Indique si on est dans la phase de generation ou non
    int nb_rafales = 0;
    int packGenQty = (rand() % 255);
    while (true) {
        OSFlagPend(&RouterStatus, TASK_GENERATE_RDY, 0,
                   OS_OPT_PEND_FLAG_SET_ALL + OS_OPT_PEND_BLOCKING, &ts, &err);

        if (isGenPhase) {
            // Nouveau paquet
        	OSSemPend(&NbPaquets, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
            Packet *packet = (Packet *)OSMemGet(&BLockMem, &err);
            OSSemPost(&NbPaquets, OS_OPT_POST_1, &err);

            if (packet == NULL) {
                xil_printf("\nAttention: Packet no %d est un NULL Pointer",
                           nbPacketCrees);
            };

            packet->src = rand() * (UINT32_MAX / RAND_MAX);
            packet->dst = rand() * (UINT32_MAX / RAND_MAX);
            packet->type = rand() % NB_PACKET_TYPE;

            for (int i = 0; i < ARRAY_SIZE(packet->data); ++i)
                packet->data[i] = (unsigned int)rand();

            packet->timestamp = CPU_TS_Get64(); // 1�re fonctionalit� - No. 4

            packet->data[0] = ++nbPacketCrees;

            // Calcul du CRC avec injection de fautes
            packet->crc = 0;
            packet->crc = computeCRC((uint16_t *)(packet), sizeof(*packet));
            if (nbPacketCrees % 100 == 0)
                packet->crc++;

#if FULL_TRACE == 1
            OSMutexPend(&mutPrint, 0, OS_OPT_PEND_BLOCKING, &ts, &perr);
            xil_printf("\nTaskGenerate : ********Generation du Paquet # %d "
                       "******** \n",
                       nbPacketCrees);
            xil_printf("ADD %x \n", packet);
            xil_printf("	** id : %d \n", packet->data[0]);
            xil_printf("	** src : %x \n", packet->src);
            xil_printf("	** dst : %x \n", packet->dst);
            xil_printf("	** type : %d \n", packet->type);
            OSMutexPost(&mutPrint, OS_OPT_POST_NONE, &perr);
#endif

            OSTaskQPost(&TaskComputingTCB, packet, sizeof(packet),
                        OS_OPT_POST_FIFO + OS_OPT_POST_NO_SCHED, &err);

            safeprintf("\nNb de paquets dans inputQ - apres production de "
                       "TaskGenenerate: %d \n",
                       TaskComputingTCB.MsgQ.NbrEntries);

            if (err == OS_ERR_Q_MAX || err == OS_ERR_MSG_POOL_EMPTY) {
            	OSSemPend(&NbPaquets, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
                safeprintf("\nGENERATE: Paquet rejete a l'entree car la FIFO "
                           "est pleine !\n");
                OSMemPut(&BLockMem, (void *)packet, &err);
                OSSemPost(&NbPaquets, OS_OPT_POST_1, &err);
                packet_rejete_fifo_pleine_inputQ++;
            }

            //	OSTimeDlyHMSM(0, 0, 0, 1, OS_OPT_TIME_HMSM_STRICT, &err);

            if ((nbPacketCrees % packGenQty) ==
                0) // On genere au maximum 255 paquets par phase de generation
            {
                safeprintf("\n***** FIN DE LA RAFALE No %d \n\n", nb_rafales);
                isGenPhase = false;
            }
        } else {
            OSTimeDlyHMSM(0, 0, delai_pour_vider_les_fifos_sec,
                          delai_pour_vider_les_fifos_msec,
                          OS_OPT_TIME_HMSM_STRICT, &err);
            isGenPhase = true;
            do {
                packGenQty = (rand() % 255);
            } while (packGenQty == 0);

            safeprintf("\n***** RAFALE No %d DE %d PAQUETS\n\n", ++nb_rafales,
                       packGenQty);
            safeprintf("\n***** DEMARRAGE \n\n");
        }
    }
}

/*
 *********************************************************************************************************
 *											  TaskReset
 *
 *********************************************************************************************************
 */
void TaskReset(void *data) {
    CPU_TS ts;
    OS_ERR err;
    int i;
    OS_FLAGS flags;
    while (true) {
        xil_printf("--------------------- Task Reset --------------------\n");
        flags =
            OSFlagPost(&RouterStatus, TASKS_ROUTER, OS_OPT_POST_FLAG_SET, &err);
        xil_printf(
            "--------------------- Flags: %x --------------------------\n",
            RouterStatus.Flags);
        OSTaskSuspend((OS_TCB *)0, &err);
    }
}

void TaskStop(void *data) {
    CPU_TS ts;
    OS_ERR err;
    OS_FLAGS flags;
    OSSemPend(&Sem, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
    // Suspend all tasks except statistics one
    xil_printf(
        "--------------------- Task stop suspend all tasks -------------\n");
    flags = OSFlagPost(&RouterStatus, TASKS_ROUTER, OS_OPT_POST_FLAG_CLR, &err);
    xil_printf("--------------------- Flags: %x "
               "---------------------------------------\n",
               RouterStatus.Flags);
    OSTaskSuspend((OS_TCB *)0, &err);
}

/*
 *********************************************************************************************************
 *                                            computeCRC
 * -Calcule la check value d'un pointeur quelconque (cyclic redudancy check)
 * -Retourne 0 si le CRC est correct, une autre valeur sinon.
 *********************************************************************************************************
 */

unsigned int computeCRC(uint16_t *w, int nleft) {

    unsigned int sum = 0;
    unsigned int nb_calls = 0;
    unsigned int Nb_of_ticks_in_CRC_init = 0;

    OS_ERR err;
    uint16_t answer = 0;

    // Code e completer pour le calcul du nombre de ticks dans la manipulation 1

    // Adding words of 16 bits
    while (nleft > 1) {
        sum += *w++;
        nleft -= 2;
    }

    // Handling the last byte
    if (nleft == 1) {
        *(unsigned char *)(&answer) = *(const unsigned char *)w;
        sum += answer;
    }

    // Handling overflow
    sum = (sum & 0xffff) + (sum >> 16);
    sum += (sum >> 16);

    answer = ~sum;

    ++nb_calls_CRC;

    // Code e completer pour le calcul du nombre de ticks dans la manipulation 1

    return answer;
}

/*
 *********************************************************************************************************
 *											  TaskComputing
 *  -Verifie si les paquets sont conformes i.e. qu on emule un CRC et on verifie
 *l espace addresse -Dispatche les paquets dans des files (HIGH,MEDIUM,LOW)
 *
 *********************************************************************************************************
 */
void TaskComputing(void *pdata) {
    OS_ERR err, perr;
    CPU_TS ts;
    OS_MSG_SIZE msg_size;
    Packet *packet = NULL;
    OS_TICK actualticks = 0;
    while (true) {

        OSFlagPend(&RouterStatus, TASK_COMPUTING_RDY, 0,
                   OS_OPT_PEND_FLAG_SET_ALL + OS_OPT_PEND_BLOCKING, &ts, &err);

        packet = OSTaskQPend(0, OS_OPT_PEND_BLOCKING, &msg_size, &ts, &err);

        safeprintf("\nNb de paquets dans inputQ - apres consommation de "
                   "TaskComputing: %d \n",
                   TaskComputingTCB.MsgQ.NbrEntries);

        err_msg("COMPUTING OSQPEND", err);

        /* On simule un certain temps de traitement propre a l'application */
        //actualticks = OSTimeGet(&err);
        //while (WAITFORComputing + actualticks > OSTimeGet(&err))
        //    ;
        // section pr�c�dente comment� car simule d�lais

        // Verification de l'espace d'addressage
        if ((packet->src > REJECT_LOW1 && packet->src < REJECT_HIGH1) ||
            (packet->src > REJECT_LOW2 && packet->src < REJECT_HIGH2) ||
            (packet->src > REJECT_LOW3 && packet->src < REJECT_HIGH3)) {

            ++nbPacketSourceRejete;
            OSTaskQPost(&TaskStatsTCB, packet, sizeof(packet),
                        OS_OPT_POST_FIFO + OS_OPT_POST_NO_SCHED, &err);

        }

        else if (computeCRC((uint16_t *)packet, sizeof(*packet)) != 0) {
            ++nbPacketCRCRejete;
            OSTaskQPost(&TaskStatsTCB, packet, sizeof(packet),
                        OS_OPT_POST_FIFO + OS_OPT_POST_NO_SCHED, &err);
        }

        else {

            // Dispatche les paquets selon leur type
            switch (packet->type) {
            case PACKET_VIDEO:
                OSTaskQPost(&TaskFIFOForwardingTCB[PACKET_VIDEO], packet,
                            sizeof(packet), OS_OPT_POST_FIFO, &err);
                safeprintf("\nNb de paquets dans highQ - apres production de "
                           "TaskComputing: %d \n",
                           TaskFIFOForwardingTCB[PACKET_VIDEO].MsgQ.NbrEntries);

                break;

            case PACKET_AUDIO:
                OSTaskQPost(&TaskFIFOForwardingTCB[PACKET_AUDIO], packet,
                            sizeof(packet), OS_OPT_POST_FIFO, &err);
                safeprintf("\nNb de paquets dans mediumQ - apres production de "
                           "TaskComputing: %d \n",
                           TaskFIFOForwardingTCB[PACKET_AUDIO].MsgQ.NbrEntries);
                break;

            case PACKET_AUTRE:
                OSTaskQPost(&TaskFIFOForwardingTCB[PACKET_AUTRE], packet,
                            sizeof(packet), OS_OPT_POST_FIFO, &err);
                safeprintf("\nNb de paquets dans lowQ - apres production de "
                           "TaskComputing: %d \n",
                           TaskFIFOForwardingTCB[PACKET_AUTRE].MsgQ.NbrEntries);
                break;

            default:
                break;
            }
            if (err == OS_ERR_Q_MAX || err == OS_ERR_MSG_POOL_EMPTY) {
            	OSSemPend(&NbPaquets, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
                safeprintf("\nTaskComputing: Paquet rejete car FIFO pleine\n");
                OSMemPut(&BLockMem, (void *)packet, &err);
                OSSemPost(&NbPaquets, OS_OPT_POST_1, &err);
                packet_rejete_fifo_pleine_Q++;
            }
        }
    }
}

/*
 *********************************************************************************************************
 *											  TaskForwarding
 *  -traite la priorite des paquets : si un paquet de haute priorite est pret,
 *   on l'envoie e l'aide de la fonction dispatch_packet, sinon on regarde les
 *paquets de moins haute priorite Remarque: on bloque jamais doionc la tache
 *doit avoir une basse priorite
 *********************************************************************************************************
 */
void TaskFIFOForwarding(void *data) {
    OS_ERR err, perr;
    CPU_TS ts;
    OS_MSG_SIZE msg_size;
    Packet *packet = NULL;
    Info_Port info = *(Info_Port *)data;

    while (1) {
        OSFlagPend(&RouterStatus, TASK_FORWARDING_RDY, 0,
                   OS_OPT_PEND_FLAG_SET_ALL + OS_OPT_PEND_BLOCKING, &ts, &err);

        packet = OSTaskQPend(0, OS_OPT_PEND_BLOCKING, &msg_size, &ts, &err);

        //		if (packet->type != info.id)
        //			{xil_printf("\n\n\n Attention priorite du paquet
        // no %d dans mauvaise fifo", packet->data[0]);}

        switch (packet->type) {
        case PACKET_VIDEO:
            safeprintf("\nNb de paquets dans HighQ - apres consommation de "
                       "TaskFowarding: %d \n",
                       TaskFIFOForwardingTCB[PACKET_VIDEO].MsgQ.NbrEntries);
            break;
        case PACKET_AUDIO:
            safeprintf("\nNb de paquets dans MediumQ - apres consommation de "
                       "TaskFowarding: %d \n",
                       TaskFIFOForwardingTCB[PACKET_AUDIO].MsgQ.NbrEntries);
            break;
        case PACKET_AUTRE:
            safeprintf("\nNb de paquets dans LowQ - apres consommation de "
                       "TaskFowarding: %d \n",
                       TaskFIFOForwardingTCB[PACKET_AUTRE].MsgQ.NbrEntries);
            break;
        }

        if (err == OS_ERR_NONE) {
            /* Envoi du paquet */
            dispatch_packet(packet);
        }
    }
}

/*
 *********************************************************************************************************
 *											  Fonction
 *Dispatch -Envoie le paquet passe en parametre vers la mailbox correspondante e
 *son adressage destination
 *********************************************************************************************************
 */
void dispatch_packet(Packet *packet) {
    OS_ERR err, perr;
    CPU_TS ts;
    OS_MSG_SIZE msg_size;

    Update_TS(packet);
    /* Test sur la destination du paquet */
    if (packet->dst >= INT1_LOW && packet->dst <= INT1_HIGH) {

        safeprintf("\n-- dispatch_packet - Paquet arrive dans interface 1\n");
        OSTaskQPost(&TaskOutputPortTCB[0], packet, sizeof(packet),
                    OS_OPT_POST_FIFO, &err);
    } else {
        if (packet->dst >= INT2_LOW && packet->dst <= INT2_HIGH) {
            safeprintf(
                "\n-- dispatch_packet - Paquet arrive dans interface 2\n");
            OSTaskQPost(&TaskOutputPortTCB[1], packet, sizeof(packet),
                        OS_OPT_POST_FIFO, &err);
        } else {
            if (packet->dst >= INT3_LOW && packet->dst <= INT3_HIGH) {
                safeprintf(
                    "\n-- dispatch_packet - Paquet arrive dans interface 3\n");
                OSTaskQPost(&TaskOutputPortTCB[2], packet, sizeof(packet),
                            OS_OPT_POST_FIFO, &err);
            } else {
                if (packet->dst >= INT_BC_LOW && packet->dst <= INT_BC_HIGH) {
                    Packet *others[2];
                    int i;
                    for (i = 0; i < ARRAY_SIZE(others); ++i) {
                    	OSSemPend(&NbPaquets, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
                        others[i] = (Packet *)OSMemGet(&BLockMem, &err);
                        OSSemPost(&NbPaquets, OS_OPT_POST_1, &err);
                        memcpy(others[i], packet, sizeof(Packet));
                    }
                    safeprintf("\n-- dispatch_packet - Paquet BC arrive dans "
                               "tous les interfaces\n");
                    OSTaskQPost(&TaskOutputPortTCB[0], packet, sizeof(packet),
                                OS_OPT_POST_FIFO, &err);
                    OSTaskQPost(&TaskOutputPortTCB[1], others[0],
                                sizeof(others[0]), OS_OPT_POST_FIFO, &err);
                    OSTaskQPost(&TaskOutputPortTCB[2], others[1],
                                sizeof(others[1]), OS_OPT_POST_FIFO, &err);
                }
            }
        }
    }

    if (err == OS_ERR_Q_MAX || err == OS_ERR_MSG_POOL_EMPTY) {
        /*Destruction du paquet si la mailbox de destination est pleine*/
    	OSSemPend(&NbPaquets, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
        safeprintf("\n--TaskForwarding: Erreur mailbox full\n");
        OSMemPut(&BLockMem, (void *)packet, &err);
        packet_rejete_output_port_plein++;
        OSSemPost(&NbPaquets, OS_OPT_POST_1, &err);

    } else {
        ++nbPacketTraites;
        safeprintf("\n--TaskForwarding:  paquets %d envoyes\n\n",
                   nbPacketTraites);
    }
}

/*
 *********************************************************************************************************
 *											  TaskPrint
 *  -Affiche les infos des paquets arrives e destination et libere la memoire
 *allouee
 *********************************************************************************************************
 */
void TaskOutputPort(void *data) {
    OS_ERR err, perr;
    CPU_TS ts;
    OS_MSG_SIZE msg_size;
    Packet *packet = NULL;
    Info_Port info = *(Info_Port *)data;

    while (1) {

        OSFlagPend(&RouterStatus, TASK_OUTPUTPORT_RDY, 0,
                   OS_OPT_PEND_FLAG_SET_ALL + OS_OPT_PEND_BLOCKING, &ts, &err);

        /*Attente d'un paquet*/
        packet = OSTaskQPend(0, OS_OPT_PEND_BLOCKING, &msg_size, &ts, &err);
        err_msg("PRINT : MBoxPend", err);

#if FULL_TRACE == 1
        OSMutexPend(&mutPrint, 0, OS_OPT_PEND_BLOCKING, &ts, &perr);
        xil_printf("\nPaquet recu en %d \n", info.id);
        xil_printf("	** id : %d \n", packet->data[0]);
        xil_printf("    >> src : %x \n", packet->src);
        xil_printf("    >> dst : %x \n", packet->dst);
        xil_printf("    >> type : %d \n", packet->type);
        OSMutexPost(&mutPrint, OS_OPT_POST_NONE, &perr);
#endif

        /*Liberation de la memoire*/
        OSSemPend(&NbPaquets, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
        OSMemPut(&BLockMem, (void *)packet, &err);
        OSSemPost(&NbPaquets, OS_OPT_POST_1, &err);
    }
}

/*
 *********************************************************************************************************
 *                                              TaskStats
 *  -Est declenchee lorsque le gpio_isr() libere le semaphore
 *  -Lorsque declenchee, imprime les statistiques du routeur e cet instant
 *********************************************************************************************************
 */
void TaskStats(void *pdata) {
    OS_ERR err, perr;
    CPU_TS ts;
    OS_TICK actualticks;
    Packet *packet = NULL;
    OS_MSG_SIZE msg_size;

    while (1) {

        OSFlagPend(&RouterStatus, TASK_STATS_RDY, 0,
                   OS_OPT_PEND_FLAG_SET_ALL + OS_OPT_PEND_BLOCKING, &ts, &err);

        OSMutexPend(&mutPrint, 0, OS_OPT_PEND_BLOCKING, &ts, &err);

        xil_printf("\n------------------ Affichage des statistiques "
                   "------------------\n\n");
        xil_printf("Delai pour vider les fifos sec: %d\n",
                   delai_pour_vider_les_fifos_sec);
        xil_printf("Delai pour vider les fifos msec: %d\n",
                   delai_pour_vider_les_fifos_msec);
        xil_printf("Frequence du systeme: %d\n", OS_CFG_TICK_RATE_HZ);
        xil_printf("1 - Nb de packets total crees : %d\n", nbPacketCrees);
        xil_printf("2 - Nb de packets total traites : %d\n", nbPacketTraites);
        xil_printf("3 - Nb de packets rejetes pour mauvaise source : %d\n",
                   nbPacketSourceRejete);
        xil_printf("4 - Nb de packets rejetes pour mauvaise source Total: %d\n",
                   nbPacketSourceRejeteTotal);
        xil_printf("5 - Nb de packets rejetes pour mauvais CRC : %d\n",
                   nbPacketCRCRejete);
        xil_printf("6 - Nb de packets rejetes pour mauvais CRC total : %d\n",
                   nbPacketCRCRejeteTotal);
        xil_printf("7 - Nb de paquets rejetes dans fifo d'entree: %d\n",
                   packet_rejete_fifo_pleine_inputQ);
        xil_printf("8 - Nb de paquets rejetes dans 3 Q: %d\n",
                   packet_rejete_fifo_pleine_Q);
        xil_printf(
            "9 - Nb de paquets rejetes dans l'interface de sortie: %d\n\n",
            packet_rejete_output_port_plein);
        xil_printf("10 - Nb de paquets maximum dans le fifo d'entree : %d \n",
                   TaskComputingTCB.MsgQ.NbrEntriesMax);
        xil_printf("11 - Nb de paquets maximum dans highQ : %d \n",
                   TaskFIFOForwardingTCB[0].MsgQ.NbrEntriesMax);
        xil_printf("12 - Nb de paquets maximum dans mediumQ : %d \n",
                   TaskFIFOForwardingTCB[1].MsgQ.NbrEntriesMax);
        xil_printf("13 - Nb de paquets maximum dans lowQ : %d \n\n",
                   TaskFIFOForwardingTCB[2].MsgQ.NbrEntriesMax);
        xil_printf("14 - Nb de paquets maximum dans port0 : %d \n",
                   TaskOutputPortTCB[0].MsgQ.NbrEntriesMax);
        xil_printf("15 - Nb de paquets maximum dans port1 : %d \n",
                   TaskOutputPortTCB[1].MsgQ.NbrEntriesMax);
        xil_printf("16 - Nb de paquets maximum dans port2 : %d \n\n",
                   TaskOutputPortTCB[2].MsgQ.NbrEntriesMax);
        xil_printf("17- Message free : %d \n", OSMsgPool.NbrFree);
        xil_printf("18- Message used : %d \n", OSMsgPool.NbrUsed);
        xil_printf("19- Message used max : %d \n", OSMsgPool.NbrUsedMax);
        xil_printf("20- Nombre de ticks depuis le debut de l'execution %d \n",
                   OSTimeGet(&err));
        xil_printf("21- Pire temps video ");
        printf("'%.10f'", max_delay_video_float);
        xil_printf("\r\n");
        max_delay_audio_float = (float) max_delay_audio / (float) freq_hz;
        xil_printf("22- Pire temps audio ");
        printf("'%.10f'", max_delay_audio_float);
        xil_printf("\r\n");
        max_delay_autre_float = (float) max_delay_autre / (float) freq_hz;
        xil_printf("23- Pire temps autre ");
        printf("'%.10f'", max_delay_autre_float);
        xil_printf("\r\n");

        OSMutexPost(&mutPrint, OS_OPT_POST_NONE, &err);

        // On vide la fifo des paquets rejetes et on imprime si l option est
        // demandee

        // Aussi le code suivant sera e modifier dans la manipulation 2

        while (1) {

            packet = OSTaskQPend(0, OS_OPT_PEND_NON_BLOCKING, &msg_size, &ts,
                                 &err); // On prend soin de ne pas reste bloque
            if (err == OS_ERR_PEND_WOULD_BLOCK) {
                break;
            } else {

                if (print_paquets_rejetes) {
                    OSMutexPend(&mutPrint, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
                    xil_printf("    >> paquet rejete # : %d \n",
                               packet->data[0]);
                    xil_printf("    >> src : %x \n", packet->src);
                    xil_printf("    >> dst : %x \n", packet->dst);
                    xil_printf("    >> type : %d \n", packet->type);
                    OSMutexPost(&mutPrint, OS_OPT_POST_NONE, &err);
                }

                OSSemPend(&NbPaquets, 0, OS_OPT_PEND_BLOCKING, &ts, &err);
                OSMemPut(&BLockMem, (void *)packet, &err);
                OSSemPost(&NbPaquets, OS_OPT_POST_1, &err);
                packet = NULL;
            };
        };

        nbPacketSourceRejeteTotal += nbPacketSourceRejete;
        nbPacketSourceRejete = 0;

        nbPacketCRCRejeteTotal += nbPacketCRCRejete;
        nbPacketCRCRejete = 0;

        // On stoppe tout le programme quand on a atteint la limite de paquets
        if (nbPacketCrees > limite_de_paquets)
            OSSemPost(&Sem, OS_OPT_POST_1 + OS_OPT_POST_NO_SCHED, &err);

        // On imprime ls statistiques e toutes les 30 secondes
        OSTimeDlyHMSM(0, 0, 30, 0, OS_OPT_TIME_HMSM_STRICT, &err);
    }
}

void err_msg(char *entete, uint8_t err) {
    if (err != 0) {
        xil_printf(entete);
        xil_printf(": Une erreur est retournee : code %d \n", err);
    }
}

void StartupTask(void *p_arg) {
    int i;
    OS_ERR err;
    KAL_ERR kal_err;
    CPU_INT32U tick_rate;
#if (UCOS_START_DEBUG_TRACE == DEF_ENABLED)
    MEM_SEG_INFO seg_info;
    LIB_ERR lib_err;
#endif
#if (APP_OSIII_ENABLED == DEF_ENABLED)
#if (OS_CFG_STAT_TASK_EN == DEF_ENABLED)
    OS_ERR os_err;
#endif
#endif

    UCOS_IntInit();

#if (APP_OSIII_ENABLED == DEF_ENABLED)
    tick_rate = OS_CFG_TICK_RATE_HZ;
#endif

#if (APP_OSII_ENABLED == DEF_ENABLED)
    tick_rate = OS_TICKS_PER_SEC;
#endif

    UCOS_TmrTickInit(tick_rate); /* Configure and enable OS tick interrupt. */

#if (APP_OSIII_ENABLED == DEF_ENABLED)
#if (OS_CFG_STAT_TASK_EN == DEF_ENABLED)
    OSStatTaskCPUUsageInit(&os_err);
#endif
#endif

    KAL_Init(DEF_NULL, &kal_err);
    UCOS_StdInOutInit();
    UCOS_PrintfInit();

#if (UCOS_START_DEBUG_TRACE == DEF_ENABLED)
    UCOS_Print("UCOS - uC/OS Init Started.\r\n");
    UCOS_Print("UCOS - STDIN/STDOUT Device Initialized.\r\n");
#endif

#if (APP_SHELL_ENABLED == DEF_ENABLED)
    UCOS_Shell_Init();
#endif

#if ((APP_FS_ENABLED == DEF_ENABLED) && (UCOS_CFG_INIT_FS == DEF_ENABLED))
    UCOS_FS_Init();
#endif

#if ((APP_TCPIP_ENABLED == DEF_ENABLED) && (UCOS_CFG_INIT_NET == DEF_ENABLED))
    UCOS_TCPIP_Init();
#endif /* (APP_TCPIP_ENABLED == DEF_ENABLED) */

#if ((APP_USBD_ENABLED == DEF_ENABLED) &&                                      \
     (UCOS_CFG_INIT_USBD == DEF_ENABLED) &&                                    \
     (UCOS_USB_TYPE == UCOS_USB_TYPE_DEVICE))
    UCOS_USBD_Init();
#endif /* #if (APP_USBD_ENABLED == DEF_ENABLED) */

#if ((APP_USBH_ENABLED == DEF_ENABLED) &&                                      \
     (UCOS_CFG_INIT_USBH == DEF_ENABLED) &&                                    \
     (UCOS_USB_TYPE == UCOS_USB_TYPE_HOST))
    UCOS_USBH_Init();
#endif /* #if (APP_USBH_ENABLED == DEF_ENABLED) */

#if (UCOS_START_DEBUG_TRACE == DEF_ENABLED)
    Mem_SegRemSizeGet(DEF_NULL, 4, &seg_info, &lib_err);

    UCOS_Printf("UCOS - UCOS init done\r\n");
    UCOS_Printf("UCOS - Total configured heap size. %d\r\n",
                seg_info.TotalSize);
    UCOS_Printf("UCOS - Total used size after init. %d\r\n", seg_info.UsedSize);
#endif

    UCOS_Print("Programme initialise - \r\n");
    // Point 1
    freq_hz = CPU_TS_TmrFreqGet(&err); /* Get CPU timestamp timer frequency. */
    xil_printf("\nfreq du timestamp: %d\n", freq_hz);
    xil_printf("test\n");

    // On cree les teches

    for (i = 0; i < NB_FIFO; i++) {
        switch (i) {
        case 0:
            FIFO[i].id = PACKET_VIDEO;
            FIFO[i].name = "HighQ";
            break;
        case 1:
            FIFO[i].id = PACKET_AUDIO;
            FIFO[i].name = "MediumQ";
            break;
        case 2:
            FIFO[i].id = PACKET_AUTRE;
            FIFO[i].name = "LowQ";
            break;
        default:
            break;
        };
    }

    for (i = 0; i < NB_OUTPUT_PORTS; i++) {
        Port[i].id = i;
        switch (i) {
        case 0:
            Port[i].name = "Port 0";
            break;
        case 1:
            Port[i].name = "Port 1";
            break;
        case 2:
            Port[i].name = "Port 2";
            break;
        default:
            break;
        };
    }

    OSTaskCreate(&TaskGenerateTCB, "TaskGenerate", TaskGenerate, (void *)0,
                 TaskGeneratePRIO, &TaskGenerateSTK[0u], TASK_STK_SIZE / 2,
                 TASK_STK_SIZE, 1, 0, (void *)0,
                 (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);

    OSTaskCreate(&TaskComputingTCB, "TaskComputing", TaskComputing, (void *)0,
                 TaskComputingPRIO, &TaskComputingSTK[0u], TASK_STK_SIZE / 2,
                 TASK_STK_SIZE, 1200, 0, (void *)0,
                 (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);

    for (i = 0; i < NB_FIFO; i++) {
        OSTaskCreate(&TaskFIFOForwardingTCB[i], "TaskForwarding",
                     TaskFIFOForwarding, &FIFO[i], TaskFIFOForwardingPRIO + i,
                     &TaskFIFOForwardingSTK[i][0u], TASK_STK_SIZE / 2,
                     TASK_STK_SIZE, 1200, 0, (void *)0,
                     (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);
    };

    for (i = 0; i < NB_OUTPUT_PORTS; i++) {
        OSTaskCreate(&TaskOutputPortTCB[i], "OutputPort", TaskOutputPort,
                     &Port[i], TaskOutputPortPRIO, &TaskOutputPortSTK[i][0u],
                     TASK_STK_SIZE / 2, TASK_STK_SIZE, 1, 0, (void *)0,
                     (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);
    };

    OSTaskCreate(&TaskStatsTCB, "TaskStats", TaskStats, (void *)0,
                 TaskStatsPRIO, &TaskStatsSTK[0u], TASK_STK_SIZE / 2,
                 TASK_STK_SIZE, 1200, 0, (void *)0,
                 (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);

    OSTaskCreate(&TaskResetTCB, "TaskReset", TaskReset, (void *)0,
                 TaskResetPRIO, &TaskResetSTK[0u], TASK_STK_SIZE / 2,
                 TASK_STK_SIZE, 1, 0, (void *)0,
                 (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);

    OSTaskCreate(&TaskStopTCB, "TaskStop", TaskStop, (void *)0, TaskStopPRIO,
                 &TaskStopSTK[0u], TASK_STK_SIZE / 2, TASK_STK_SIZE, 1, 0,
                 (void *)0, (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);

    UCOS_Print("Programme initialise - \r\n");
    UCOS_Printf("Frequence courante du tick d horloge - %d\r\n", tick_rate);

    OSTaskSuspend((OS_TCB *)0, &err);
}
