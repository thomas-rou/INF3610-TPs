/******************************************************************************
*
* Copyright (C) 2009 - 2014 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include "platform.h"
#include "xparameters.h"
#include "xtmrctr.h"
#include "xaxidma.h"
#include "lib_xmmult_hw.h"


#define NUM_TESTS 100


//#define XPAR_AXI_TIMER_DEVICE_ID 		(XPAR_AXI_TIMER_1_DEVICE_ID) // Vivado 2014.4
#define XPAR_AXI_TIMER_DEVICE_ID 		(XPAR_AXI_TIMER_1_DEVICE_ID) // Vivado 2015.2.1

// TIMER Instance
XTmrCtr timer_dev;

// AXI DMA Instance
XAxiDma AxiDma;

//void print(char *str);

int init_dma(){
	XAxiDma_Config *CfgPtr;
	int status;

	CfgPtr = XAxiDma_LookupConfig( (XPAR_AXI_DMA_1_DEVICE_ID) );
	if(!CfgPtr){
		print("Error looking for AXI DMA config\n\r");
		return XST_FAILURE;
	}
	status = XAxiDma_CfgInitialize(&AxiDma,CfgPtr);
	if(status != XST_SUCCESS){
		print("Error initializing DMA\n\r");
		return XST_FAILURE;
	}
	//check for scatter gather mode
	if(XAxiDma_HasSg(&AxiDma)){
		print("Error DMA configured in SG mode\n\r");
		return XST_FAILURE;
	}
	/* Disable interrupts, we use polling mode */
	XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
	XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DMA_TO_DEVICE);

	// Reset DMA
	XAxiDma_Reset(&AxiDma);
	while (!XAxiDma_ResetIsDone(&AxiDma)) {}

	return XST_SUCCESS;
}


int main(int argc, char **argv)
{
	int i, j, k;
	int err=0;
	int status;
	int num_of_trials = 1;
	float A[DIM][DIM];
	float B[DIM][DIM];
	float res_hw[DIM][DIM];
	float res_sw[DIM][DIM];

	unsigned int dma_size = SIZE * sizeof(float);

    float acc_factor;
	unsigned int init_time, curr_time, calibration;
	unsigned int begin_time;
	unsigned int end_time;
	unsigned int run_time_sw = 0;
	unsigned int run_time_hw = 0;

	init_platform();

	if (argc >= 2)
	{
		num_of_trials = atoi(argv[1]);
	}

	xil_printf("**************************************************************************\r");
	xil_printf("  Float MATRIX MULT II = 1 -> AXI DMA -> ARM AXI HP                        \r");
	xil_printf("  Matrix %d x %d               \r", DIM, DIM								 );
	xil_printf("  Number de test effectues  %d \r", NUM_TESTS							     );
	xil_printf("  Inspire de l'application XAPP1170 de Xilinx                             \r");
	xil_printf("**************************************************************************\r");

//    for (i = 0; i<10; i++)
//    	print("\nHello World\n\r");

	/* ******************************************************************************* */
	// Init DMA
	status = init_dma();
	if(status != XST_SUCCESS){
		print("\rError: DMA init failed\n");
		return XST_FAILURE;
	}
	print("\nDMA Init done\n");

	/* ******************************************************************************* */
	// Setup HW timer
	status = XTmrCtr_Initialize(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);
	if(status != XST_SUCCESS)
	{
		print("Error: timer setup failed\n");
		//return XST_FAILURE;
	}
	XTmrCtr_SetOptions(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID, XTC_ENABLE_ALL_OPTION);

	// Calibrate HW timer
	XTmrCtr_Reset(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);
	init_time = XTmrCtr_GetValue(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);
	curr_time = XTmrCtr_GetValue(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);
	calibration = curr_time - init_time;

	// Loop measurement
	XTmrCtr_Reset(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);
	begin_time = XTmrCtr_GetValue(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);
	for (i = 0; i< NUM_TESTS; i++);
	end_time = XTmrCtr_GetValue(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);
	run_time_sw = end_time - begin_time - calibration;
	xil_printf("Loop time for %d iterations is %d cycles\n", NUM_TESTS, run_time_sw);

	/* ******************************************************************************* */
	// input data Initiation
	for(i = 0; i<DIM; i++)
		for(j = 0; j<DIM; j++)
		{
			A[i][j] = (float)(i+j);
			B[i][j] = (float)(i*j);
		}
	/** End of Initiation */


	//for (k=0; k<num_of_trials; k++)
	{

		/* ******************************************************************************* */
		// call the software version of the function
		xil_printf("Running Matrix Mult in SW\n");
		XTmrCtr_Reset(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);
		begin_time = XTmrCtr_GetValue(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);
		for (i = 0; i < NUM_TESTS; i++)
		{
			matrix_multiply_ref(A, B, res_sw);
		}
		end_time = XTmrCtr_GetValue(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);
		run_time_sw = end_time - begin_time - calibration;
		xil_printf("\nTotal run time for SW on Processor is %d microseconds over %d tests.\n",
				run_time_sw/100/NUM_TESTS, NUM_TESTS);

		/* ******************************************************************************* */
		// call the HW accelerator
		xil_printf("Running Matrix Mult in HW\n");
		XTmrCtr_Reset(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);
		begin_time = XTmrCtr_GetValue(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);
		// Setup the HW Accelerator
		status = Setup_HW_Accelerator(A, B, res_hw, dma_size);
		for (i = 0; i < NUM_TESTS; i++) {
			status = Start_HW_Accelerator();
			status = Run_HW_Accelerator(A, B, res_hw, dma_size);
		}
		end_time = XTmrCtr_GetValue(&timer_dev, XPAR_AXI_TIMER_DEVICE_ID);

		xil_printf("Call HW accelerator: %d \n", begin_time);
		xil_printf("End of HW accelerator: %d \n", end_time);

		run_time_hw = end_time - begin_time - calibration;
		xil_printf(
				"Total run time for AXI DMA + HW accelerator is %d microseconds over %d tests\n",
				run_time_hw/100/NUM_TESTS, NUM_TESTS);


		/* ******************************************************************************* */
		//Compare the results from sw and hw
		for (i = 0; i < DIM; i++)
			for (j = 0; j < DIM; j++)
				if (res_sw[i][j] != res_hw[i][j]) {
					err = 1;
				}

		// HW vs. SW speedup factor
		acc_factor = (float) run_time_sw / (float) run_time_hw;
		xil_printf("Acceleration factor: %d.%d \n\n",
				(int) acc_factor, (int) (acc_factor * 1000) % 1000);

	}


	if (err == 0)
		print("SW and HW results match!\n\n");
	else
		print("ERROR: results mismatch\n\n");

	xil_printf("Temps total avec 1 core: %d microsecondes pour 1 multiplication de matrices %d x %d\n", run_time_hw/100/NUM_TESTS, DIM, DIM);
    cleanup_platform();
    return 0;
}
