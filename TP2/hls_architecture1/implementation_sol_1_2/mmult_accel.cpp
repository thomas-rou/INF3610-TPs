#include <stdio.h>
#include <stdlib.h>

#include "mmult.h"

void standalone_mmult (float A[DIM][DIM], float B[DIM][DIM], float C[DIM][DIM])
{

	mmult_hw <float, DIM>(A, B, C);

}



void HLS_accel (AXI_VAL INPUT_STREAM[2*MCR_SIZE], AXI_VAL OUTPUT_STREAM[MCR_SIZE])
{
#pragma HLS INTERFACE s_axilite port=return     bundle=CONTROL_BUS
#pragma HLS INTERFACE axis      port=OUTPUT_STREAM
#pragma HLS INTERFACE axis      port=INPUT_STREAM


wrapped_mmult_hw <float, DIM, DIM*DIM, 4, 5, 5>(INPUT_STREAM, OUTPUT_STREAM);

	return;
}

