# ==============================================================
# File generated on Wed Apr 17 16:43:43 -0400 2024
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../../mmult_test.cpp -cflags { -DDB_DEBUG -Wno-unknown-pragmas}
add_files mmult_accel.cpp -cflags -DDB_DEBUG
set_part xc7z020clg484-1
create_clock -name default -period 10
set_directive_array_reshape mmult_hw 
set_directive_array_reshape mmult_hw 
set_directive_pipeline mmult_hw/L2 -II 1
