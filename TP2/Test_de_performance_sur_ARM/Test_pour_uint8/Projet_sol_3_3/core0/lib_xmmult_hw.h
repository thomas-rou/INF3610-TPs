
#ifndef H_LIB_EXAMPLE_HW_H
#define H_LIB_EXAMPLE_HW_H

#define DIM    160					// Valeur de défault
#define SIZE  ((DIM)*(DIM))

int Setup_HW_Accelerator(uint8_t A[DIM][DIM], uint8_t B[DIM][DIM], uint8_t res_hw[DIM][DIM], int dma_size);

int Run_HW_Accelerator(uint8_t A[DIM][DIM], uint8_t B[DIM][DIM], uint8_t res_hw[DIM][DIM], int dma_size);

int Start_HW_Accelerator(void);

void matrix_multiply_ref(uint8_t a[DIM][DIM], uint8_t b[DIM][DIM], uint8_t out[DIM][DIM]);

#endif
