#include <stdio.h>
#include <stdlib.h>

#include "mmult.h"

// THIS IS THE TOP LEVEL DESIGN THAT WILL BE SYNTHESIZED

typedef float mat_type;

void mmult_hw (mat_type a[DIM][DIM], mat_type b[DIM][DIM], mat_type out[DIM][DIM])
{

	mat_type temp;
	L1:for (int ia = 0; ia < DIM; ++ia)
		L2:for (int ib = 0; ib < DIM; ++ib)
			{
				mat_type sum = 0;
				L3:for (int id = 0; id < DIM; ++id){
					temp = a[ia][id] * b[id][ib];
					sum = sum + temp;
				}
				out[ia][ib] = sum;
			};

			return;
}


}
void matrixmul(int A[N][M], int B[M][P], int AB[N][P]) {
}
#pragma HLS ARRAY RESHAPE variable-A complete dim=2 #pragma HLS ARRAY_RESHAPE variable=B complete dim=1 /* for each row and column of AB */ row: for(int i = 0; i < N; ++i) {
col: for(int j = 0; j < P; ++j) { #pragma HLS PIPELINE II=1 /* compute (AB)ij */
int ABij = 0;
product: for(int k = 0; k < M; ++k) { ABij + A[i][k] * B[k][j];
}
=
AB[i][j] = ABij;
