############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_array_reshape -type block -factor 21 -dim 2 "mmult_hw" a
set_directive_array_reshape -type block -factor 21 -dim 1 "mmult_hw" b
set_directive_pipeline -II 1 "mmult_hw/L2"
