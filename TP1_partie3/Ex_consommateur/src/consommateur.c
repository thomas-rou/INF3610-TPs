/*
*********************************************************************************************************
*                                                 uC/OS-III
*                                          The Real-Time Kernel
*                                               PORT Windows
*
*
*            		          					Guy BOIS
*                                  Polytechnique Montreal, Qc, CANADA
*                                                 
*
*
*********************************************************************************************************
*/

#include  <cpu.h>
#include  <lib_mem.h>

#include <os.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>

#include <app_cfg.h>
#include <cpu.h>
#include <ucos_bsp.h>
#include <ucos_int.h>
#include <xparameters.h>
#include <KAL/kal.h>

#include <xil_printf.h>

#include  <stdio.h>
#include  <ucos_bsp.h>

#include <Source/os.h>
#include <os_cfg_app.h>

#include <xgpio.h>
#include <xintc.h>
#include <xil_exception.h>

XIntc axi_intc;
XGpio gpSwitch;

#define GIC_DEVICE_ID	        XPAR_PS7_SCUGIC_0_DEVICE_ID
#define PL_INTC_IRQ_ID          XPS_IRQ_INT_ID
#define FIT_1S_IRQ_ID           XPAR_AXI_INTC_0_FIT_TIMER_0_INTERRUPT_INTR
#define FIT_3S_IRQ_ID			XPAR_AXI_INTC_0_FIT_TIMER_1_INTERRUPT_INTR
#define GPIO_SW_IRQ_ID			XPAR_AXI_INTC_0_AXI_GPIO_0_IP2INTC_IRPT_INTR
#define GPIO_SW_DEVICE_ID		XPAR_AXI_GPIO_0_DEVICE_ID

#define XGPIO_IR_MASK		0x3 /**< Mask of all bits */


/*
*********************************************************************************************************
*                                              CONSTANTS
*********************************************************************************************************
*/

// Attention ce programme loge � l'adresse 0x2000000 et possede une dimension de 0x1000000
// V�rifier lsscript.ld

// Comme consommateur n est pas maitre (UCOS_AMP_MASTER doit etre a false)

// Attention ce programma va partager avec consommateur.c une zone de m�moire
const uint32_t 	BASEADDR = 0x3000000;


#define         TASK_STK_SIZE    8192                // Size of each task's stacks (# of WORDs)

#define 		TASK_CONSOMMATEUR_PRIO	  15   				// Priorit� de TaskActive

/*
*********************************************************************************************************
*                                              VARIABLES
*********************************************************************************************************
*/


CPU_STK           TaskConsommateurStk[TASK_STK_SIZE];
CPU_STK 		  StartupTaskStk[UCOS_START_TASK_STACK_SIZE];

OS_TCB			  TaskConsommateurTCB;
OS_TCB 			  StartupTaskTCB;

/*
 *********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/

void    TaskConsommateur(void *data);
void 	StartupTask (void *p_arg);

/*
*********************************************************************************************************
*                                                  MAIN
*********************************************************************************************************
*/

int main (void)
{

 	OS_ERR  err;

    UCOS_LowLevelInit();

    CPU_Init();
    Mem_Init();
    OSInit(&err);

    OSTaskCreate(&StartupTaskTCB,"Main Task", StartupTask, (void *) 0, UCOS_START_TASK_PRIO,
                 &StartupTaskStk[0], 0, UCOS_START_TASK_STACK_SIZE,
                 0, 0, DEF_NULL, (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);

	OSTaskCreate(&TaskConsommateurTCB,"TaskConsommateur", TaskConsommateur, (void *) 0, TASK_CONSOMMATEUR_PRIO,
       &TaskConsommateurStk[0u], TASK_STK_SIZE/2, TASK_STK_SIZE, 20, 0, (void *) 0,
	   (OS_OPT_TASK_STK_CHK | OS_OPT_TASK_STK_CLR), &err);

	Xil_DCacheDisable();

    OSStart(&err);
    return 0;                                         // Start multitasking
}

void  TaskConsommateur (void *p_arg)
{
    OS_ERR       os_err;

	// Variables partagees entre core 0 et core 1 (shared memory de 3 mots de 32 bits � partir de BASEADDR)
	// Les 2 premiers mots servent � la synchronisation et le dernier au data echange
	// Attention ack de TaskProducteur doit �tre jumel� avec req de TaskConsommateur
	//        et req de TaskProducteur doit �tre jumel� avec ack de TaskConsommateur

	volatile uint32_t* req = (uint32_t*) (BASEADDR +0x4);	// signal comme quoi on est pr�t � recevoir un data
	volatile uint32_t* ack = (uint32_t*) (BASEADDR +0x0);	// signal comme quoi on attend que le producteur est ecrit un data
	volatile uint32_t* ptr = (uint32_t*) (BASEADDR +0x8);	// data partagee


	xil_printf ("Task Consommateur sur core 0\r\n");

//	*req = 0;
//	*ack = 0;


 while (DEF_TRUE) {

    *req = 1;        								// Je suis pret a consommer

    while(!*ack);   								// J'attends que le producteur est ecrit une donnee

	xil_printf("Je viens de recevoir la valeur de i: %d\n\r", *ptr) ;

	*req = 0;        								// J'ai fini de consommer

    while(*ack);									// J'attends que le producteur me dise de passer � une prochaine valeur � consommer

	OSTimeDlyHMSM(0, 0, 0, 10, OS_OPT_TIME_HMSM_STRICT, &os_err);       // Dans le lab 1, on peut supposer que c'est le delai pour vider les fifos...

}

}


/*
*********************************************************************************************************
*                                               STARTUP TASK
*********************************************************************************************************
*/

void StartupTask (void *p_arg)
{
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
    OS_ERR  os_err;
#endif
#endif


    UCOS_IntInit();

#if (APP_OSIII_ENABLED == DEF_ENABLED)
    tick_rate = OS_CFG_TICK_RATE_HZ;
#endif

#if (APP_OSII_ENABLED == DEF_ENABLED)
    tick_rate = OS_TICKS_PER_SEC;
#endif

    UCOS_TmrTickInit(tick_rate);                                /* Configure and enable OS tick interrupt.              */

#if (APP_OSIII_ENABLED == DEF_ENABLED)
#if (OS_CFG_STAT_TASK_EN == DEF_ENABLED)
    OSStatTaskCPUUsageInit(&os_err);
#endif
#endif

    KAL_Init(DEF_NULL, &kal_err);
    UCOS_StdInOutInit();
    UCOS_PrintfInit();


#if (UCOS_START_DEBUG_TRACE == DEF_ENABLED)
    xil_printf("UCOS - uC/OS Init Started.\r\n");
    xil_printf("UCOS - STDIN/STDOUT Device Initialized.\r\n");
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

#if ((APP_USBD_ENABLED == DEF_ENABLED) && (UCOS_CFG_INIT_USBD == DEF_ENABLED) && (UCOS_USB_TYPE == UCOS_USB_TYPE_DEVICE))
    UCOS_USBD_Init();
#endif /* #if (APP_USBD_ENABLED == DEF_ENABLED) */

#if ((APP_USBH_ENABLED == DEF_ENABLED) && (UCOS_CFG_INIT_USBH == DEF_ENABLED) && (UCOS_USB_TYPE == UCOS_USB_TYPE_HOST))
    UCOS_USBH_Init();
#endif /* #if (APP_USBH_ENABLED == DEF_ENABLED) */

#if (UCOS_START_DEBUG_TRACE == DEF_ENABLED)
    Mem_SegRemSizeGet(DEF_NULL, 4, &seg_info, &lib_err);

    xil_printf ("UCOS - UCOS init done\r\n");
    xil_printf ("UCOS - Total configured heap size. %d\r\n", seg_info.TotalSize);
    xil_printf ("UCOS - Total used size after init. %d\r\n", seg_info.UsedSize);
#endif

    xil_printf("Programme initialise - \r\n");
    xil_printf("Frequence courante du tick d horloge - %d\r\n", tick_rate);

    OSTaskSuspend((OS_TCB *)0,&err);

}

