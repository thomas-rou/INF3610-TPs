#include <stdio.h>
#include <stdlib.h>

#include "mmult.h"

void standalone_mmult (uint8_t A[DIM][DIM], uint8_t B[DIM][DIM], uint8_t C[DIM][DIM])
{

	mmult_hw <uint8_t, DIM>(A, B, C);

}



void HLS_accel (AXI_VAL INPUT_STREAM[2*MCR_SIZE], AXI_VAL OUTPUT_STREAM[MCR_SIZE])
{
#pragma HLS INTERFACE s_axilite port=return     bundle=CONTROL_BUS
#pragma HLS INTERFACE axis      port=OUTPUT_STREAM
#pragma HLS INTERFACE axis      port=INPUT_STREAM


wrapped_mmult_hw <uint8_t, DIM, DIM*DIM, 4, 5, 5>(INPUT_STREAM, OUTPUT_STREAM);

	return;
}

