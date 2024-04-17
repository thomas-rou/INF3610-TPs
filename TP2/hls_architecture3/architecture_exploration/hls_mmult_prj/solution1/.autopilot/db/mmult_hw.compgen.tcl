# This script segment is generated automatically by AutoPilot

set id 1
set name mmult_hw_mul_8s_8bkb
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 8
set in0_signed 1
set in1_width 8
set in1_signed 1
set out_width 8
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename Mul_LUT
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 81
set name mmult_hw_add_8ns_cud
set corename simcore_add
set op add
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 8
set in0_signed 0
set in1_width 8
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 8
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_add] == "ap_gen_simcore_add"} {
eval "ap_gen_simcore_add { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_add, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op add
set corename AddSubnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipeaddsub] == "::AESL_LIB_VIRTEX::xil_gen_pipeaddsub"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipeaddsub { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipeaddsub, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 242 \
    name a_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_0 \
    op interface \
    ports { a_0_address0 { O 10 vector } a_0_ce0 { O 1 bit } a_0_q0 { I 8 vector } a_0_address1 { O 10 vector } a_0_ce1 { O 1 bit } a_0_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 243 \
    name a_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_1 \
    op interface \
    ports { a_1_address0 { O 10 vector } a_1_ce0 { O 1 bit } a_1_q0 { I 8 vector } a_1_address1 { O 10 vector } a_1_ce1 { O 1 bit } a_1_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 244 \
    name a_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_2 \
    op interface \
    ports { a_2_address0 { O 10 vector } a_2_ce0 { O 1 bit } a_2_q0 { I 8 vector } a_2_address1 { O 10 vector } a_2_ce1 { O 1 bit } a_2_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 245 \
    name a_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_3 \
    op interface \
    ports { a_3_address0 { O 10 vector } a_3_ce0 { O 1 bit } a_3_q0 { I 8 vector } a_3_address1 { O 10 vector } a_3_ce1 { O 1 bit } a_3_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 246 \
    name a_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_4 \
    op interface \
    ports { a_4_address0 { O 10 vector } a_4_ce0 { O 1 bit } a_4_q0 { I 8 vector } a_4_address1 { O 10 vector } a_4_ce1 { O 1 bit } a_4_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 247 \
    name a_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_5 \
    op interface \
    ports { a_5_address0 { O 10 vector } a_5_ce0 { O 1 bit } a_5_q0 { I 8 vector } a_5_address1 { O 10 vector } a_5_ce1 { O 1 bit } a_5_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 248 \
    name a_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_6 \
    op interface \
    ports { a_6_address0 { O 10 vector } a_6_ce0 { O 1 bit } a_6_q0 { I 8 vector } a_6_address1 { O 10 vector } a_6_ce1 { O 1 bit } a_6_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 249 \
    name a_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_7 \
    op interface \
    ports { a_7_address0 { O 10 vector } a_7_ce0 { O 1 bit } a_7_q0 { I 8 vector } a_7_address1 { O 10 vector } a_7_ce1 { O 1 bit } a_7_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 250 \
    name a_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_8 \
    op interface \
    ports { a_8_address0 { O 10 vector } a_8_ce0 { O 1 bit } a_8_q0 { I 8 vector } a_8_address1 { O 10 vector } a_8_ce1 { O 1 bit } a_8_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 251 \
    name a_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_9 \
    op interface \
    ports { a_9_address0 { O 10 vector } a_9_ce0 { O 1 bit } a_9_q0 { I 8 vector } a_9_address1 { O 10 vector } a_9_ce1 { O 1 bit } a_9_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 252 \
    name a_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_10 \
    op interface \
    ports { a_10_address0 { O 10 vector } a_10_ce0 { O 1 bit } a_10_q0 { I 8 vector } a_10_address1 { O 10 vector } a_10_ce1 { O 1 bit } a_10_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 253 \
    name a_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_11 \
    op interface \
    ports { a_11_address0 { O 10 vector } a_11_ce0 { O 1 bit } a_11_q0 { I 8 vector } a_11_address1 { O 10 vector } a_11_ce1 { O 1 bit } a_11_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 254 \
    name a_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_12 \
    op interface \
    ports { a_12_address0 { O 10 vector } a_12_ce0 { O 1 bit } a_12_q0 { I 8 vector } a_12_address1 { O 10 vector } a_12_ce1 { O 1 bit } a_12_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 255 \
    name a_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_13 \
    op interface \
    ports { a_13_address0 { O 10 vector } a_13_ce0 { O 1 bit } a_13_q0 { I 8 vector } a_13_address1 { O 10 vector } a_13_ce1 { O 1 bit } a_13_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 256 \
    name a_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_14 \
    op interface \
    ports { a_14_address0 { O 10 vector } a_14_ce0 { O 1 bit } a_14_q0 { I 8 vector } a_14_address1 { O 10 vector } a_14_ce1 { O 1 bit } a_14_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 257 \
    name a_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_15 \
    op interface \
    ports { a_15_address0 { O 10 vector } a_15_ce0 { O 1 bit } a_15_q0 { I 8 vector } a_15_address1 { O 10 vector } a_15_ce1 { O 1 bit } a_15_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 258 \
    name a_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_16 \
    op interface \
    ports { a_16_address0 { O 10 vector } a_16_ce0 { O 1 bit } a_16_q0 { I 8 vector } a_16_address1 { O 10 vector } a_16_ce1 { O 1 bit } a_16_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 259 \
    name a_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_17 \
    op interface \
    ports { a_17_address0 { O 10 vector } a_17_ce0 { O 1 bit } a_17_q0 { I 8 vector } a_17_address1 { O 10 vector } a_17_ce1 { O 1 bit } a_17_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 260 \
    name a_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_18 \
    op interface \
    ports { a_18_address0 { O 10 vector } a_18_ce0 { O 1 bit } a_18_q0 { I 8 vector } a_18_address1 { O 10 vector } a_18_ce1 { O 1 bit } a_18_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 261 \
    name a_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_19 \
    op interface \
    ports { a_19_address0 { O 10 vector } a_19_ce0 { O 1 bit } a_19_q0 { I 8 vector } a_19_address1 { O 10 vector } a_19_ce1 { O 1 bit } a_19_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 262 \
    name a_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_20 \
    op interface \
    ports { a_20_address0 { O 10 vector } a_20_ce0 { O 1 bit } a_20_q0 { I 8 vector } a_20_address1 { O 10 vector } a_20_ce1 { O 1 bit } a_20_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 263 \
    name a_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_21 \
    op interface \
    ports { a_21_address0 { O 10 vector } a_21_ce0 { O 1 bit } a_21_q0 { I 8 vector } a_21_address1 { O 10 vector } a_21_ce1 { O 1 bit } a_21_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 264 \
    name a_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_22 \
    op interface \
    ports { a_22_address0 { O 10 vector } a_22_ce0 { O 1 bit } a_22_q0 { I 8 vector } a_22_address1 { O 10 vector } a_22_ce1 { O 1 bit } a_22_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 265 \
    name a_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_23 \
    op interface \
    ports { a_23_address0 { O 10 vector } a_23_ce0 { O 1 bit } a_23_q0 { I 8 vector } a_23_address1 { O 10 vector } a_23_ce1 { O 1 bit } a_23_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 266 \
    name a_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_24 \
    op interface \
    ports { a_24_address0 { O 10 vector } a_24_ce0 { O 1 bit } a_24_q0 { I 8 vector } a_24_address1 { O 10 vector } a_24_ce1 { O 1 bit } a_24_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 267 \
    name a_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_25 \
    op interface \
    ports { a_25_address0 { O 10 vector } a_25_ce0 { O 1 bit } a_25_q0 { I 8 vector } a_25_address1 { O 10 vector } a_25_ce1 { O 1 bit } a_25_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 268 \
    name a_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_26 \
    op interface \
    ports { a_26_address0 { O 10 vector } a_26_ce0 { O 1 bit } a_26_q0 { I 8 vector } a_26_address1 { O 10 vector } a_26_ce1 { O 1 bit } a_26_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 269 \
    name a_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_27 \
    op interface \
    ports { a_27_address0 { O 10 vector } a_27_ce0 { O 1 bit } a_27_q0 { I 8 vector } a_27_address1 { O 10 vector } a_27_ce1 { O 1 bit } a_27_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 270 \
    name a_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_28 \
    op interface \
    ports { a_28_address0 { O 10 vector } a_28_ce0 { O 1 bit } a_28_q0 { I 8 vector } a_28_address1 { O 10 vector } a_28_ce1 { O 1 bit } a_28_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 271 \
    name a_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_29 \
    op interface \
    ports { a_29_address0 { O 10 vector } a_29_ce0 { O 1 bit } a_29_q0 { I 8 vector } a_29_address1 { O 10 vector } a_29_ce1 { O 1 bit } a_29_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 272 \
    name a_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_30 \
    op interface \
    ports { a_30_address0 { O 10 vector } a_30_ce0 { O 1 bit } a_30_q0 { I 8 vector } a_30_address1 { O 10 vector } a_30_ce1 { O 1 bit } a_30_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 273 \
    name a_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_31 \
    op interface \
    ports { a_31_address0 { O 10 vector } a_31_ce0 { O 1 bit } a_31_q0 { I 8 vector } a_31_address1 { O 10 vector } a_31_ce1 { O 1 bit } a_31_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 274 \
    name a_32 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_32 \
    op interface \
    ports { a_32_address0 { O 10 vector } a_32_ce0 { O 1 bit } a_32_q0 { I 8 vector } a_32_address1 { O 10 vector } a_32_ce1 { O 1 bit } a_32_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 275 \
    name a_33 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_33 \
    op interface \
    ports { a_33_address0 { O 10 vector } a_33_ce0 { O 1 bit } a_33_q0 { I 8 vector } a_33_address1 { O 10 vector } a_33_ce1 { O 1 bit } a_33_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 276 \
    name a_34 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_34 \
    op interface \
    ports { a_34_address0 { O 10 vector } a_34_ce0 { O 1 bit } a_34_q0 { I 8 vector } a_34_address1 { O 10 vector } a_34_ce1 { O 1 bit } a_34_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 277 \
    name a_35 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_35 \
    op interface \
    ports { a_35_address0 { O 10 vector } a_35_ce0 { O 1 bit } a_35_q0 { I 8 vector } a_35_address1 { O 10 vector } a_35_ce1 { O 1 bit } a_35_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 278 \
    name a_36 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_36 \
    op interface \
    ports { a_36_address0 { O 10 vector } a_36_ce0 { O 1 bit } a_36_q0 { I 8 vector } a_36_address1 { O 10 vector } a_36_ce1 { O 1 bit } a_36_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 279 \
    name a_37 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_37 \
    op interface \
    ports { a_37_address0 { O 10 vector } a_37_ce0 { O 1 bit } a_37_q0 { I 8 vector } a_37_address1 { O 10 vector } a_37_ce1 { O 1 bit } a_37_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 280 \
    name a_38 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_38 \
    op interface \
    ports { a_38_address0 { O 10 vector } a_38_ce0 { O 1 bit } a_38_q0 { I 8 vector } a_38_address1 { O 10 vector } a_38_ce1 { O 1 bit } a_38_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 281 \
    name a_39 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_39 \
    op interface \
    ports { a_39_address0 { O 10 vector } a_39_ce0 { O 1 bit } a_39_q0 { I 8 vector } a_39_address1 { O 10 vector } a_39_ce1 { O 1 bit } a_39_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 282 \
    name b_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_0 \
    op interface \
    ports { b_0_address0 { O 10 vector } b_0_ce0 { O 1 bit } b_0_q0 { I 8 vector } b_0_address1 { O 10 vector } b_0_ce1 { O 1 bit } b_0_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 283 \
    name b_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_1 \
    op interface \
    ports { b_1_address0 { O 10 vector } b_1_ce0 { O 1 bit } b_1_q0 { I 8 vector } b_1_address1 { O 10 vector } b_1_ce1 { O 1 bit } b_1_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 284 \
    name b_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_2 \
    op interface \
    ports { b_2_address0 { O 10 vector } b_2_ce0 { O 1 bit } b_2_q0 { I 8 vector } b_2_address1 { O 10 vector } b_2_ce1 { O 1 bit } b_2_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 285 \
    name b_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_3 \
    op interface \
    ports { b_3_address0 { O 10 vector } b_3_ce0 { O 1 bit } b_3_q0 { I 8 vector } b_3_address1 { O 10 vector } b_3_ce1 { O 1 bit } b_3_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 286 \
    name b_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_4 \
    op interface \
    ports { b_4_address0 { O 10 vector } b_4_ce0 { O 1 bit } b_4_q0 { I 8 vector } b_4_address1 { O 10 vector } b_4_ce1 { O 1 bit } b_4_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 287 \
    name b_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_5 \
    op interface \
    ports { b_5_address0 { O 10 vector } b_5_ce0 { O 1 bit } b_5_q0 { I 8 vector } b_5_address1 { O 10 vector } b_5_ce1 { O 1 bit } b_5_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 288 \
    name b_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_6 \
    op interface \
    ports { b_6_address0 { O 10 vector } b_6_ce0 { O 1 bit } b_6_q0 { I 8 vector } b_6_address1 { O 10 vector } b_6_ce1 { O 1 bit } b_6_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 289 \
    name b_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_7 \
    op interface \
    ports { b_7_address0 { O 10 vector } b_7_ce0 { O 1 bit } b_7_q0 { I 8 vector } b_7_address1 { O 10 vector } b_7_ce1 { O 1 bit } b_7_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 290 \
    name b_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_8 \
    op interface \
    ports { b_8_address0 { O 10 vector } b_8_ce0 { O 1 bit } b_8_q0 { I 8 vector } b_8_address1 { O 10 vector } b_8_ce1 { O 1 bit } b_8_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 291 \
    name b_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_9 \
    op interface \
    ports { b_9_address0 { O 10 vector } b_9_ce0 { O 1 bit } b_9_q0 { I 8 vector } b_9_address1 { O 10 vector } b_9_ce1 { O 1 bit } b_9_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 292 \
    name b_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_10 \
    op interface \
    ports { b_10_address0 { O 10 vector } b_10_ce0 { O 1 bit } b_10_q0 { I 8 vector } b_10_address1 { O 10 vector } b_10_ce1 { O 1 bit } b_10_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 293 \
    name b_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_11 \
    op interface \
    ports { b_11_address0 { O 10 vector } b_11_ce0 { O 1 bit } b_11_q0 { I 8 vector } b_11_address1 { O 10 vector } b_11_ce1 { O 1 bit } b_11_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 294 \
    name b_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_12 \
    op interface \
    ports { b_12_address0 { O 10 vector } b_12_ce0 { O 1 bit } b_12_q0 { I 8 vector } b_12_address1 { O 10 vector } b_12_ce1 { O 1 bit } b_12_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 295 \
    name b_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_13 \
    op interface \
    ports { b_13_address0 { O 10 vector } b_13_ce0 { O 1 bit } b_13_q0 { I 8 vector } b_13_address1 { O 10 vector } b_13_ce1 { O 1 bit } b_13_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 296 \
    name b_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_14 \
    op interface \
    ports { b_14_address0 { O 10 vector } b_14_ce0 { O 1 bit } b_14_q0 { I 8 vector } b_14_address1 { O 10 vector } b_14_ce1 { O 1 bit } b_14_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 297 \
    name b_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_15 \
    op interface \
    ports { b_15_address0 { O 10 vector } b_15_ce0 { O 1 bit } b_15_q0 { I 8 vector } b_15_address1 { O 10 vector } b_15_ce1 { O 1 bit } b_15_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 298 \
    name b_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_16 \
    op interface \
    ports { b_16_address0 { O 10 vector } b_16_ce0 { O 1 bit } b_16_q0 { I 8 vector } b_16_address1 { O 10 vector } b_16_ce1 { O 1 bit } b_16_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 299 \
    name b_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_17 \
    op interface \
    ports { b_17_address0 { O 10 vector } b_17_ce0 { O 1 bit } b_17_q0 { I 8 vector } b_17_address1 { O 10 vector } b_17_ce1 { O 1 bit } b_17_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 300 \
    name b_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_18 \
    op interface \
    ports { b_18_address0 { O 10 vector } b_18_ce0 { O 1 bit } b_18_q0 { I 8 vector } b_18_address1 { O 10 vector } b_18_ce1 { O 1 bit } b_18_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 301 \
    name b_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_19 \
    op interface \
    ports { b_19_address0 { O 10 vector } b_19_ce0 { O 1 bit } b_19_q0 { I 8 vector } b_19_address1 { O 10 vector } b_19_ce1 { O 1 bit } b_19_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 302 \
    name b_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_20 \
    op interface \
    ports { b_20_address0 { O 10 vector } b_20_ce0 { O 1 bit } b_20_q0 { I 8 vector } b_20_address1 { O 10 vector } b_20_ce1 { O 1 bit } b_20_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 303 \
    name b_21 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_21 \
    op interface \
    ports { b_21_address0 { O 10 vector } b_21_ce0 { O 1 bit } b_21_q0 { I 8 vector } b_21_address1 { O 10 vector } b_21_ce1 { O 1 bit } b_21_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_21'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 304 \
    name b_22 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_22 \
    op interface \
    ports { b_22_address0 { O 10 vector } b_22_ce0 { O 1 bit } b_22_q0 { I 8 vector } b_22_address1 { O 10 vector } b_22_ce1 { O 1 bit } b_22_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_22'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 305 \
    name b_23 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_23 \
    op interface \
    ports { b_23_address0 { O 10 vector } b_23_ce0 { O 1 bit } b_23_q0 { I 8 vector } b_23_address1 { O 10 vector } b_23_ce1 { O 1 bit } b_23_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_23'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 306 \
    name b_24 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_24 \
    op interface \
    ports { b_24_address0 { O 10 vector } b_24_ce0 { O 1 bit } b_24_q0 { I 8 vector } b_24_address1 { O 10 vector } b_24_ce1 { O 1 bit } b_24_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_24'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 307 \
    name b_25 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_25 \
    op interface \
    ports { b_25_address0 { O 10 vector } b_25_ce0 { O 1 bit } b_25_q0 { I 8 vector } b_25_address1 { O 10 vector } b_25_ce1 { O 1 bit } b_25_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_25'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 308 \
    name b_26 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_26 \
    op interface \
    ports { b_26_address0 { O 10 vector } b_26_ce0 { O 1 bit } b_26_q0 { I 8 vector } b_26_address1 { O 10 vector } b_26_ce1 { O 1 bit } b_26_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_26'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 309 \
    name b_27 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_27 \
    op interface \
    ports { b_27_address0 { O 10 vector } b_27_ce0 { O 1 bit } b_27_q0 { I 8 vector } b_27_address1 { O 10 vector } b_27_ce1 { O 1 bit } b_27_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_27'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 310 \
    name b_28 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_28 \
    op interface \
    ports { b_28_address0 { O 10 vector } b_28_ce0 { O 1 bit } b_28_q0 { I 8 vector } b_28_address1 { O 10 vector } b_28_ce1 { O 1 bit } b_28_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_28'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 311 \
    name b_29 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_29 \
    op interface \
    ports { b_29_address0 { O 10 vector } b_29_ce0 { O 1 bit } b_29_q0 { I 8 vector } b_29_address1 { O 10 vector } b_29_ce1 { O 1 bit } b_29_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_29'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 312 \
    name b_30 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_30 \
    op interface \
    ports { b_30_address0 { O 10 vector } b_30_ce0 { O 1 bit } b_30_q0 { I 8 vector } b_30_address1 { O 10 vector } b_30_ce1 { O 1 bit } b_30_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_30'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 313 \
    name b_31 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_31 \
    op interface \
    ports { b_31_address0 { O 10 vector } b_31_ce0 { O 1 bit } b_31_q0 { I 8 vector } b_31_address1 { O 10 vector } b_31_ce1 { O 1 bit } b_31_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_31'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 314 \
    name b_32 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_32 \
    op interface \
    ports { b_32_address0 { O 10 vector } b_32_ce0 { O 1 bit } b_32_q0 { I 8 vector } b_32_address1 { O 10 vector } b_32_ce1 { O 1 bit } b_32_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_32'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 315 \
    name b_33 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_33 \
    op interface \
    ports { b_33_address0 { O 10 vector } b_33_ce0 { O 1 bit } b_33_q0 { I 8 vector } b_33_address1 { O 10 vector } b_33_ce1 { O 1 bit } b_33_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_33'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 316 \
    name b_34 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_34 \
    op interface \
    ports { b_34_address0 { O 10 vector } b_34_ce0 { O 1 bit } b_34_q0 { I 8 vector } b_34_address1 { O 10 vector } b_34_ce1 { O 1 bit } b_34_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_34'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 317 \
    name b_35 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_35 \
    op interface \
    ports { b_35_address0 { O 10 vector } b_35_ce0 { O 1 bit } b_35_q0 { I 8 vector } b_35_address1 { O 10 vector } b_35_ce1 { O 1 bit } b_35_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_35'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 318 \
    name b_36 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_36 \
    op interface \
    ports { b_36_address0 { O 10 vector } b_36_ce0 { O 1 bit } b_36_q0 { I 8 vector } b_36_address1 { O 10 vector } b_36_ce1 { O 1 bit } b_36_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_36'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 319 \
    name b_37 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_37 \
    op interface \
    ports { b_37_address0 { O 10 vector } b_37_ce0 { O 1 bit } b_37_q0 { I 8 vector } b_37_address1 { O 10 vector } b_37_ce1 { O 1 bit } b_37_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_37'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 320 \
    name b_38 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_38 \
    op interface \
    ports { b_38_address0 { O 10 vector } b_38_ce0 { O 1 bit } b_38_q0 { I 8 vector } b_38_address1 { O 10 vector } b_38_ce1 { O 1 bit } b_38_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_38'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 321 \
    name b_39 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename b_39 \
    op interface \
    ports { b_39_address0 { O 10 vector } b_39_ce0 { O 1 bit } b_39_q0 { I 8 vector } b_39_address1 { O 10 vector } b_39_ce1 { O 1 bit } b_39_q1 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'b_39'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 322 \
    name out_r \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_r \
    op interface \
    ports { out_r_address0 { O 15 vector } out_r_ce0 { O 1 bit } out_r_we0 { O 1 bit } out_r_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_r'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


