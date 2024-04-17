#include "HLS_accel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void HLS_accel::thread_INPUT_STREAM_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read())))) {
        INPUT_STREAM_TDATA_blk_n = INPUT_STREAM_data_V_0_state.read()[0];
    } else {
        INPUT_STREAM_TDATA_blk_n = ap_const_logic_1;
    }
}

void HLS_accel::thread_INPUT_STREAM_TREADY() {
    INPUT_STREAM_TREADY = INPUT_STREAM_dest_V_0_state.read()[1];
}

void HLS_accel::thread_INPUT_STREAM_data_V_0_ack_in() {
    INPUT_STREAM_data_V_0_ack_in = INPUT_STREAM_data_V_0_state.read()[1];
}

void HLS_accel::thread_INPUT_STREAM_data_V_0_ack_out() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))))) {
        INPUT_STREAM_data_V_0_ack_out = ap_const_logic_1;
    } else {
        INPUT_STREAM_data_V_0_ack_out = ap_const_logic_0;
    }
}

void HLS_accel::thread_INPUT_STREAM_data_V_0_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_sel.read())) {
        INPUT_STREAM_data_V_0_data_out = INPUT_STREAM_data_V_0_payload_B.read();
    } else {
        INPUT_STREAM_data_V_0_data_out = INPUT_STREAM_data_V_0_payload_A.read();
    }
}

void HLS_accel::thread_INPUT_STREAM_data_V_0_load_A() {
    INPUT_STREAM_data_V_0_load_A = (INPUT_STREAM_data_V_0_state_cmp_full.read() & ~INPUT_STREAM_data_V_0_sel_wr.read());
}

void HLS_accel::thread_INPUT_STREAM_data_V_0_load_B() {
    INPUT_STREAM_data_V_0_load_B = (INPUT_STREAM_data_V_0_sel_wr.read() & INPUT_STREAM_data_V_0_state_cmp_full.read());
}

void HLS_accel::thread_INPUT_STREAM_data_V_0_sel() {
    INPUT_STREAM_data_V_0_sel = INPUT_STREAM_data_V_0_sel_rd.read();
}

void HLS_accel::thread_INPUT_STREAM_data_V_0_state_cmp_full() {
    INPUT_STREAM_data_V_0_state_cmp_full =  (sc_logic) ((!INPUT_STREAM_data_V_0_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(INPUT_STREAM_data_V_0_state.read() != ap_const_lv2_1))[0];
}

void HLS_accel::thread_INPUT_STREAM_data_V_0_vld_in() {
    INPUT_STREAM_data_V_0_vld_in = INPUT_STREAM_TVALID.read();
}

void HLS_accel::thread_INPUT_STREAM_data_V_0_vld_out() {
    INPUT_STREAM_data_V_0_vld_out = INPUT_STREAM_data_V_0_state.read()[0];
}

void HLS_accel::thread_INPUT_STREAM_dest_V_0_ack_out() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))))) {
        INPUT_STREAM_dest_V_0_ack_out = ap_const_logic_1;
    } else {
        INPUT_STREAM_dest_V_0_ack_out = ap_const_logic_0;
    }
}

void HLS_accel::thread_INPUT_STREAM_dest_V_0_vld_in() {
    INPUT_STREAM_dest_V_0_vld_in = INPUT_STREAM_TVALID.read();
}

void HLS_accel::thread_OUTPUT_STREAM_TDATA() {
    OUTPUT_STREAM_TDATA = OUTPUT_STREAM_data_V_1_data_out.read();
}

void HLS_accel::thread_OUTPUT_STREAM_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428_pp3_iter1_reg.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428_pp3_iter2_reg.read())))) {
        OUTPUT_STREAM_TDATA_blk_n = OUTPUT_STREAM_data_V_1_state.read()[1];
    } else {
        OUTPUT_STREAM_TDATA_blk_n = ap_const_logic_1;
    }
}

void HLS_accel::thread_OUTPUT_STREAM_TDEST() {
    OUTPUT_STREAM_TDEST = OUTPUT_STREAM_dest_V_1_data_out.read();
}

void HLS_accel::thread_OUTPUT_STREAM_TID() {
    OUTPUT_STREAM_TID = OUTPUT_STREAM_id_V_1_data_out.read();
}

void HLS_accel::thread_OUTPUT_STREAM_TKEEP() {
    OUTPUT_STREAM_TKEEP = OUTPUT_STREAM_keep_V_1_data_out.read();
}

void HLS_accel::thread_OUTPUT_STREAM_TLAST() {
    OUTPUT_STREAM_TLAST = OUTPUT_STREAM_last_V_1_data_out.read();
}

void HLS_accel::thread_OUTPUT_STREAM_TSTRB() {
    OUTPUT_STREAM_TSTRB = OUTPUT_STREAM_strb_V_1_data_out.read();
}

void HLS_accel::thread_OUTPUT_STREAM_TUSER() {
    OUTPUT_STREAM_TUSER = OUTPUT_STREAM_user_V_1_data_out.read();
}

void HLS_accel::thread_OUTPUT_STREAM_TVALID() {
    OUTPUT_STREAM_TVALID = OUTPUT_STREAM_dest_V_1_state.read()[0];
}

void HLS_accel::thread_OUTPUT_STREAM_data_V_1_ack_in() {
    OUTPUT_STREAM_data_V_1_ack_in = OUTPUT_STREAM_data_V_1_state.read()[1];
}

void HLS_accel::thread_OUTPUT_STREAM_data_V_1_ack_out() {
    OUTPUT_STREAM_data_V_1_ack_out = OUTPUT_STREAM_TREADY.read();
}

void HLS_accel::thread_OUTPUT_STREAM_data_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_sel.read())) {
        OUTPUT_STREAM_data_V_1_data_out = OUTPUT_STREAM_data_V_1_payload_B.read();
    } else {
        OUTPUT_STREAM_data_V_1_data_out = OUTPUT_STREAM_data_V_1_payload_A.read();
    }
}

void HLS_accel::thread_OUTPUT_STREAM_data_V_1_load_A() {
    OUTPUT_STREAM_data_V_1_load_A = (OUTPUT_STREAM_data_V_1_state_cmp_full.read() & ~OUTPUT_STREAM_data_V_1_sel_wr.read());
}

void HLS_accel::thread_OUTPUT_STREAM_data_V_1_load_B() {
    OUTPUT_STREAM_data_V_1_load_B = (OUTPUT_STREAM_data_V_1_sel_wr.read() & OUTPUT_STREAM_data_V_1_state_cmp_full.read());
}

void HLS_accel::thread_OUTPUT_STREAM_data_V_1_sel() {
    OUTPUT_STREAM_data_V_1_sel = OUTPUT_STREAM_data_V_1_sel_rd.read();
}

void HLS_accel::thread_OUTPUT_STREAM_data_V_1_state_cmp_full() {
    OUTPUT_STREAM_data_V_1_state_cmp_full =  (sc_logic) ((!OUTPUT_STREAM_data_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(OUTPUT_STREAM_data_V_1_state.read() != ap_const_lv2_1))[0];
}

void HLS_accel::thread_OUTPUT_STREAM_data_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428_pp3_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        OUTPUT_STREAM_data_V_1_vld_in = ap_const_logic_1;
    } else {
        OUTPUT_STREAM_data_V_1_vld_in = ap_const_logic_0;
    }
}

void HLS_accel::thread_OUTPUT_STREAM_data_V_1_vld_out() {
    OUTPUT_STREAM_data_V_1_vld_out = OUTPUT_STREAM_data_V_1_state.read()[0];
}

void HLS_accel::thread_OUTPUT_STREAM_dest_V_1_ack_in() {
    OUTPUT_STREAM_dest_V_1_ack_in = OUTPUT_STREAM_dest_V_1_state.read()[1];
}

void HLS_accel::thread_OUTPUT_STREAM_dest_V_1_ack_out() {
    OUTPUT_STREAM_dest_V_1_ack_out = OUTPUT_STREAM_TREADY.read();
}

void HLS_accel::thread_OUTPUT_STREAM_dest_V_1_data_out() {
    OUTPUT_STREAM_dest_V_1_data_out = ap_const_lv5_0;
}

void HLS_accel::thread_OUTPUT_STREAM_dest_V_1_sel() {
    OUTPUT_STREAM_dest_V_1_sel = OUTPUT_STREAM_dest_V_1_sel_rd.read();
}

void HLS_accel::thread_OUTPUT_STREAM_dest_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428_pp3_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        OUTPUT_STREAM_dest_V_1_vld_in = ap_const_logic_1;
    } else {
        OUTPUT_STREAM_dest_V_1_vld_in = ap_const_logic_0;
    }
}

void HLS_accel::thread_OUTPUT_STREAM_dest_V_1_vld_out() {
    OUTPUT_STREAM_dest_V_1_vld_out = OUTPUT_STREAM_dest_V_1_state.read()[0];
}

void HLS_accel::thread_OUTPUT_STREAM_id_V_1_ack_in() {
    OUTPUT_STREAM_id_V_1_ack_in = OUTPUT_STREAM_id_V_1_state.read()[1];
}

void HLS_accel::thread_OUTPUT_STREAM_id_V_1_ack_out() {
    OUTPUT_STREAM_id_V_1_ack_out = OUTPUT_STREAM_TREADY.read();
}

void HLS_accel::thread_OUTPUT_STREAM_id_V_1_data_out() {
    OUTPUT_STREAM_id_V_1_data_out = ap_const_lv5_0;
}

void HLS_accel::thread_OUTPUT_STREAM_id_V_1_sel() {
    OUTPUT_STREAM_id_V_1_sel = OUTPUT_STREAM_id_V_1_sel_rd.read();
}

void HLS_accel::thread_OUTPUT_STREAM_id_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428_pp3_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        OUTPUT_STREAM_id_V_1_vld_in = ap_const_logic_1;
    } else {
        OUTPUT_STREAM_id_V_1_vld_in = ap_const_logic_0;
    }
}

void HLS_accel::thread_OUTPUT_STREAM_id_V_1_vld_out() {
    OUTPUT_STREAM_id_V_1_vld_out = OUTPUT_STREAM_id_V_1_state.read()[0];
}

void HLS_accel::thread_OUTPUT_STREAM_keep_V_1_ack_in() {
    OUTPUT_STREAM_keep_V_1_ack_in = OUTPUT_STREAM_keep_V_1_state.read()[1];
}

void HLS_accel::thread_OUTPUT_STREAM_keep_V_1_ack_out() {
    OUTPUT_STREAM_keep_V_1_ack_out = OUTPUT_STREAM_TREADY.read();
}

void HLS_accel::thread_OUTPUT_STREAM_keep_V_1_data_out() {
    OUTPUT_STREAM_keep_V_1_data_out = ap_const_lv1_1;
}

void HLS_accel::thread_OUTPUT_STREAM_keep_V_1_sel() {
    OUTPUT_STREAM_keep_V_1_sel = OUTPUT_STREAM_keep_V_1_sel_rd.read();
}

void HLS_accel::thread_OUTPUT_STREAM_keep_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428_pp3_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        OUTPUT_STREAM_keep_V_1_vld_in = ap_const_logic_1;
    } else {
        OUTPUT_STREAM_keep_V_1_vld_in = ap_const_logic_0;
    }
}

void HLS_accel::thread_OUTPUT_STREAM_keep_V_1_vld_out() {
    OUTPUT_STREAM_keep_V_1_vld_out = OUTPUT_STREAM_keep_V_1_state.read()[0];
}

void HLS_accel::thread_OUTPUT_STREAM_last_V_1_ack_in() {
    OUTPUT_STREAM_last_V_1_ack_in = OUTPUT_STREAM_last_V_1_state.read()[1];
}

void HLS_accel::thread_OUTPUT_STREAM_last_V_1_ack_out() {
    OUTPUT_STREAM_last_V_1_ack_out = OUTPUT_STREAM_TREADY.read();
}

void HLS_accel::thread_OUTPUT_STREAM_last_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_sel.read())) {
        OUTPUT_STREAM_last_V_1_data_out = OUTPUT_STREAM_last_V_1_payload_B.read();
    } else {
        OUTPUT_STREAM_last_V_1_data_out = OUTPUT_STREAM_last_V_1_payload_A.read();
    }
}

void HLS_accel::thread_OUTPUT_STREAM_last_V_1_load_A() {
    OUTPUT_STREAM_last_V_1_load_A = (OUTPUT_STREAM_last_V_1_state_cmp_full.read() & ~OUTPUT_STREAM_last_V_1_sel_wr.read());
}

void HLS_accel::thread_OUTPUT_STREAM_last_V_1_load_B() {
    OUTPUT_STREAM_last_V_1_load_B = (OUTPUT_STREAM_last_V_1_sel_wr.read() & OUTPUT_STREAM_last_V_1_state_cmp_full.read());
}

void HLS_accel::thread_OUTPUT_STREAM_last_V_1_sel() {
    OUTPUT_STREAM_last_V_1_sel = OUTPUT_STREAM_last_V_1_sel_rd.read();
}

void HLS_accel::thread_OUTPUT_STREAM_last_V_1_state_cmp_full() {
    OUTPUT_STREAM_last_V_1_state_cmp_full =  (sc_logic) ((!OUTPUT_STREAM_last_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(OUTPUT_STREAM_last_V_1_state.read() != ap_const_lv2_1))[0];
}

void HLS_accel::thread_OUTPUT_STREAM_last_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428_pp3_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        OUTPUT_STREAM_last_V_1_vld_in = ap_const_logic_1;
    } else {
        OUTPUT_STREAM_last_V_1_vld_in = ap_const_logic_0;
    }
}

void HLS_accel::thread_OUTPUT_STREAM_last_V_1_vld_out() {
    OUTPUT_STREAM_last_V_1_vld_out = OUTPUT_STREAM_last_V_1_state.read()[0];
}

void HLS_accel::thread_OUTPUT_STREAM_strb_V_1_ack_in() {
    OUTPUT_STREAM_strb_V_1_ack_in = OUTPUT_STREAM_strb_V_1_state.read()[1];
}

void HLS_accel::thread_OUTPUT_STREAM_strb_V_1_ack_out() {
    OUTPUT_STREAM_strb_V_1_ack_out = OUTPUT_STREAM_TREADY.read();
}

void HLS_accel::thread_OUTPUT_STREAM_strb_V_1_data_out() {
    OUTPUT_STREAM_strb_V_1_data_out = ap_const_lv1_1;
}

void HLS_accel::thread_OUTPUT_STREAM_strb_V_1_sel() {
    OUTPUT_STREAM_strb_V_1_sel = OUTPUT_STREAM_strb_V_1_sel_rd.read();
}

void HLS_accel::thread_OUTPUT_STREAM_strb_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428_pp3_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        OUTPUT_STREAM_strb_V_1_vld_in = ap_const_logic_1;
    } else {
        OUTPUT_STREAM_strb_V_1_vld_in = ap_const_logic_0;
    }
}

void HLS_accel::thread_OUTPUT_STREAM_strb_V_1_vld_out() {
    OUTPUT_STREAM_strb_V_1_vld_out = OUTPUT_STREAM_strb_V_1_state.read()[0];
}

void HLS_accel::thread_OUTPUT_STREAM_user_V_1_ack_in() {
    OUTPUT_STREAM_user_V_1_ack_in = OUTPUT_STREAM_user_V_1_state.read()[1];
}

void HLS_accel::thread_OUTPUT_STREAM_user_V_1_ack_out() {
    OUTPUT_STREAM_user_V_1_ack_out = OUTPUT_STREAM_TREADY.read();
}

void HLS_accel::thread_OUTPUT_STREAM_user_V_1_data_out() {
    OUTPUT_STREAM_user_V_1_data_out = ap_const_lv4_0;
}

void HLS_accel::thread_OUTPUT_STREAM_user_V_1_sel() {
    OUTPUT_STREAM_user_V_1_sel = OUTPUT_STREAM_user_V_1_sel_rd.read();
}

void HLS_accel::thread_OUTPUT_STREAM_user_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428_pp3_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        OUTPUT_STREAM_user_V_1_vld_in = ap_const_logic_1;
    } else {
        OUTPUT_STREAM_user_V_1_vld_in = ap_const_logic_0;
    }
}

void HLS_accel::thread_OUTPUT_STREAM_user_V_1_vld_out() {
    OUTPUT_STREAM_user_V_1_vld_out = OUTPUT_STREAM_user_V_1_state.read()[0];
}

void HLS_accel::thread_a_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_0_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_0_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_0_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_0_address1() {
    a_0_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_0_ce0 = ap_const_logic_1;
    } else {
        a_0_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_0_ce1 = ap_const_logic_1;
    } else {
        a_0_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_0_load_1_mid2_fu_6528_p3() {
    a_0_load_1_mid2_fu_6528_p3 = (!exitcond1_i_i_fu_6438_p2.read()[0].is_01())? sc_lv<64>(): ((exitcond1_i_i_fu_6438_p2.read()[0].to_bool())? tmp_15_fu_6466_p3.read(): tmp_12_fu_6412_p3.read());
}

void HLS_accel::thread_a_0_load_mid2_fu_6490_p1() {
    a_0_load_mid2_fu_6490_p1 = esl_zext<64,9>(a_0_load_mid2_v_fu_6482_p3.read());
}

void HLS_accel::thread_a_0_load_mid2_v_fu_6482_p3() {
    a_0_load_mid2_v_fu_6482_p3 = (!exitcond1_i_i_fu_6438_p2.read()[0].is_01())? sc_lv<9>(): ((exitcond1_i_i_fu_6438_p2.read()[0].to_bool())? tmp_13_fu_6452_p3.read(): tmp_10_fu_6398_p3.read());
}

void HLS_accel::thread_a_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_0))) {
        a_0_we0 = ap_const_logic_1;
    } else {
        a_0_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_10_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_10_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_10_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_10_address1() {
    a_10_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_10_ce0 = ap_const_logic_1;
    } else {
        a_10_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_10_ce1 = ap_const_logic_1;
    } else {
        a_10_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_A))) {
        a_10_we0 = ap_const_logic_1;
    } else {
        a_10_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_11_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_11_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_11_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_11_address1() {
    a_11_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_11_ce0 = ap_const_logic_1;
    } else {
        a_11_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_11_ce1 = ap_const_logic_1;
    } else {
        a_11_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_B))) {
        a_11_we0 = ap_const_logic_1;
    } else {
        a_11_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_12_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_12_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_12_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_12_address1() {
    a_12_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_12_ce0 = ap_const_logic_1;
    } else {
        a_12_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_12_ce1 = ap_const_logic_1;
    } else {
        a_12_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_C))) {
        a_12_we0 = ap_const_logic_1;
    } else {
        a_12_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_13_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_13_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_13_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_13_address1() {
    a_13_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_13_ce0 = ap_const_logic_1;
    } else {
        a_13_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_13_ce1 = ap_const_logic_1;
    } else {
        a_13_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_D))) {
        a_13_we0 = ap_const_logic_1;
    } else {
        a_13_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_14_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_14_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_14_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_14_address1() {
    a_14_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_14_ce0 = ap_const_logic_1;
    } else {
        a_14_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_14_ce1 = ap_const_logic_1;
    } else {
        a_14_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_E))) {
        a_14_we0 = ap_const_logic_1;
    } else {
        a_14_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_15_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_15_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_15_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_15_address1() {
    a_15_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_15_ce0 = ap_const_logic_1;
    } else {
        a_15_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_15_ce1 = ap_const_logic_1;
    } else {
        a_15_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_F))) {
        a_15_we0 = ap_const_logic_1;
    } else {
        a_15_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_16_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_16_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_16_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_16_address1() {
    a_16_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_16_ce0 = ap_const_logic_1;
    } else {
        a_16_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_16_ce1 = ap_const_logic_1;
    } else {
        a_16_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_10))) {
        a_16_we0 = ap_const_logic_1;
    } else {
        a_16_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_17_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_17_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_17_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_17_address1() {
    a_17_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_17_ce0 = ap_const_logic_1;
    } else {
        a_17_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_17_ce1 = ap_const_logic_1;
    } else {
        a_17_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_11))) {
        a_17_we0 = ap_const_logic_1;
    } else {
        a_17_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_18_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_18_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_18_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_18_address1() {
    a_18_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_18_ce0 = ap_const_logic_1;
    } else {
        a_18_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_18_ce1 = ap_const_logic_1;
    } else {
        a_18_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_12))) {
        a_18_we0 = ap_const_logic_1;
    } else {
        a_18_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_19_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_19_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_19_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_19_address1() {
    a_19_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_19_ce0 = ap_const_logic_1;
    } else {
        a_19_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_19_ce1 = ap_const_logic_1;
    } else {
        a_19_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_13))) {
        a_19_we0 = ap_const_logic_1;
    } else {
        a_19_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_1_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_1_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_1_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_1_address1() {
    a_1_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_1_ce0 = ap_const_logic_1;
    } else {
        a_1_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_1_ce1 = ap_const_logic_1;
    } else {
        a_1_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1))) {
        a_1_we0 = ap_const_logic_1;
    } else {
        a_1_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_20_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_20_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_20_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_20_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_20_address1() {
    a_20_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_20_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_20_ce0 = ap_const_logic_1;
    } else {
        a_20_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_20_ce1 = ap_const_logic_1;
    } else {
        a_20_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_20_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_14))) {
        a_20_we0 = ap_const_logic_1;
    } else {
        a_20_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_21_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_21_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_21_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_21_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_21_address1() {
    a_21_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_21_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_21_ce0 = ap_const_logic_1;
    } else {
        a_21_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_21_ce1 = ap_const_logic_1;
    } else {
        a_21_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_21_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_15))) {
        a_21_we0 = ap_const_logic_1;
    } else {
        a_21_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_22_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_22_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_22_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_22_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_22_address1() {
    a_22_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_22_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_22_ce0 = ap_const_logic_1;
    } else {
        a_22_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_22_ce1 = ap_const_logic_1;
    } else {
        a_22_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_22_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_16))) {
        a_22_we0 = ap_const_logic_1;
    } else {
        a_22_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_23_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_23_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_23_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_23_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_23_address1() {
    a_23_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_23_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_23_ce0 = ap_const_logic_1;
    } else {
        a_23_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_23_ce1 = ap_const_logic_1;
    } else {
        a_23_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_23_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_17))) {
        a_23_we0 = ap_const_logic_1;
    } else {
        a_23_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_24_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_24_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_24_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_24_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_24_address1() {
    a_24_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_24_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_24_ce0 = ap_const_logic_1;
    } else {
        a_24_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_24_ce1 = ap_const_logic_1;
    } else {
        a_24_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_24_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_18))) {
        a_24_we0 = ap_const_logic_1;
    } else {
        a_24_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_25_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_25_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_25_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_25_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_25_address1() {
    a_25_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_25_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_25_ce0 = ap_const_logic_1;
    } else {
        a_25_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_25_ce1 = ap_const_logic_1;
    } else {
        a_25_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_25_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_19))) {
        a_25_we0 = ap_const_logic_1;
    } else {
        a_25_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_26_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_26_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_26_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_26_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_26_address1() {
    a_26_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_26_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_26_ce0 = ap_const_logic_1;
    } else {
        a_26_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_26_ce1 = ap_const_logic_1;
    } else {
        a_26_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_26_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1A))) {
        a_26_we0 = ap_const_logic_1;
    } else {
        a_26_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_27_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_27_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_27_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_27_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_27_address1() {
    a_27_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_27_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_27_ce0 = ap_const_logic_1;
    } else {
        a_27_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_27_ce1 = ap_const_logic_1;
    } else {
        a_27_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_27_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1B))) {
        a_27_we0 = ap_const_logic_1;
    } else {
        a_27_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_28_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_28_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_28_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_28_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_28_address1() {
    a_28_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_28_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_28_ce0 = ap_const_logic_1;
    } else {
        a_28_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_28_ce1 = ap_const_logic_1;
    } else {
        a_28_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_28_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1C))) {
        a_28_we0 = ap_const_logic_1;
    } else {
        a_28_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_29_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_29_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_29_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_29_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_29_address1() {
    a_29_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_29_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_29_ce0 = ap_const_logic_1;
    } else {
        a_29_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_29_ce1 = ap_const_logic_1;
    } else {
        a_29_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_29_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1D))) {
        a_29_we0 = ap_const_logic_1;
    } else {
        a_29_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_2_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_2_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_2_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_2_address1() {
    a_2_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_2_ce0 = ap_const_logic_1;
    } else {
        a_2_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_2_ce1 = ap_const_logic_1;
    } else {
        a_2_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2))) {
        a_2_we0 = ap_const_logic_1;
    } else {
        a_2_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_30_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_30_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_30_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_30_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_30_address1() {
    a_30_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_30_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_30_ce0 = ap_const_logic_1;
    } else {
        a_30_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_30_ce1 = ap_const_logic_1;
    } else {
        a_30_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_30_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1E))) {
        a_30_we0 = ap_const_logic_1;
    } else {
        a_30_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_31_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_31_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_31_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_31_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_31_address1() {
    a_31_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_31_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_31_ce0 = ap_const_logic_1;
    } else {
        a_31_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_31_ce1 = ap_const_logic_1;
    } else {
        a_31_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_31_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1F))) {
        a_31_we0 = ap_const_logic_1;
    } else {
        a_31_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_32_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_32_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_32_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_32_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_32_address1() {
    a_32_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_32_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_32_ce0 = ap_const_logic_1;
    } else {
        a_32_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_32_ce1 = ap_const_logic_1;
    } else {
        a_32_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_32_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_20))) {
        a_32_we0 = ap_const_logic_1;
    } else {
        a_32_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_33_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_33_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_33_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_33_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_33_address1() {
    a_33_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_33_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_33_ce0 = ap_const_logic_1;
    } else {
        a_33_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_33_ce1 = ap_const_logic_1;
    } else {
        a_33_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_33_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_21))) {
        a_33_we0 = ap_const_logic_1;
    } else {
        a_33_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_34_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_34_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_34_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_34_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_34_address1() {
    a_34_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_34_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_34_ce0 = ap_const_logic_1;
    } else {
        a_34_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_34_ce1 = ap_const_logic_1;
    } else {
        a_34_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_34_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_22))) {
        a_34_we0 = ap_const_logic_1;
    } else {
        a_34_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_35_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_35_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_35_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_35_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_35_address1() {
    a_35_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_35_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_35_ce0 = ap_const_logic_1;
    } else {
        a_35_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_35_ce1 = ap_const_logic_1;
    } else {
        a_35_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_35_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_23))) {
        a_35_we0 = ap_const_logic_1;
    } else {
        a_35_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_36_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_36_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_36_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_36_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_36_address1() {
    a_36_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_36_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_36_ce0 = ap_const_logic_1;
    } else {
        a_36_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_36_ce1 = ap_const_logic_1;
    } else {
        a_36_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_36_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_24))) {
        a_36_we0 = ap_const_logic_1;
    } else {
        a_36_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_37_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_37_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_37_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_37_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_37_address1() {
    a_37_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_37_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_37_ce0 = ap_const_logic_1;
    } else {
        a_37_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_37_ce1 = ap_const_logic_1;
    } else {
        a_37_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_37_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_25))) {
        a_37_we0 = ap_const_logic_1;
    } else {
        a_37_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_38_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_38_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_38_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_38_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_38_address1() {
    a_38_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_38_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_38_ce0 = ap_const_logic_1;
    } else {
        a_38_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_38_ce1 = ap_const_logic_1;
    } else {
        a_38_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_38_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_26))) {
        a_38_we0 = ap_const_logic_1;
    } else {
        a_38_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_39_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_39_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_39_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_39_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_39_address1() {
    a_39_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_39_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_39_ce0 = ap_const_logic_1;
    } else {
        a_39_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_39_ce1 = ap_const_logic_1;
    } else {
        a_39_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_39_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_27))) {
        a_39_we0 = ap_const_logic_1;
    } else {
        a_39_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_3_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_3_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_3_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_3_address1() {
    a_3_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_3_ce0 = ap_const_logic_1;
    } else {
        a_3_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_3_ce1 = ap_const_logic_1;
    } else {
        a_3_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3))) {
        a_3_we0 = ap_const_logic_1;
    } else {
        a_3_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_40_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_40_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_40_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_40_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_40_address1() {
    a_40_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_40_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_40_ce0 = ap_const_logic_1;
    } else {
        a_40_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_40_ce1 = ap_const_logic_1;
    } else {
        a_40_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_40_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_28))) {
        a_40_we0 = ap_const_logic_1;
    } else {
        a_40_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_41_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_41_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_41_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_41_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_41_address1() {
    a_41_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_41_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_41_ce0 = ap_const_logic_1;
    } else {
        a_41_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_41_ce1 = ap_const_logic_1;
    } else {
        a_41_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_41_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_29))) {
        a_41_we0 = ap_const_logic_1;
    } else {
        a_41_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_42_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_42_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_42_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_42_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_42_address1() {
    a_42_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_42_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_42_ce0 = ap_const_logic_1;
    } else {
        a_42_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_42_ce1 = ap_const_logic_1;
    } else {
        a_42_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_42_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2A))) {
        a_42_we0 = ap_const_logic_1;
    } else {
        a_42_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_43_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_43_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_43_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_43_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_43_address1() {
    a_43_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_43_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_43_ce0 = ap_const_logic_1;
    } else {
        a_43_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_43_ce1 = ap_const_logic_1;
    } else {
        a_43_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_43_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2B))) {
        a_43_we0 = ap_const_logic_1;
    } else {
        a_43_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_44_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_44_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_44_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_44_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_44_address1() {
    a_44_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_44_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_44_ce0 = ap_const_logic_1;
    } else {
        a_44_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_44_ce1 = ap_const_logic_1;
    } else {
        a_44_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_44_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2C))) {
        a_44_we0 = ap_const_logic_1;
    } else {
        a_44_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_45_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_45_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_45_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_45_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_45_address1() {
    a_45_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_45_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_45_ce0 = ap_const_logic_1;
    } else {
        a_45_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_45_ce1 = ap_const_logic_1;
    } else {
        a_45_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_45_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2D))) {
        a_45_we0 = ap_const_logic_1;
    } else {
        a_45_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_46_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_46_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_46_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_46_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_46_address1() {
    a_46_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_46_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_46_ce0 = ap_const_logic_1;
    } else {
        a_46_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_46_ce1 = ap_const_logic_1;
    } else {
        a_46_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_46_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2E))) {
        a_46_we0 = ap_const_logic_1;
    } else {
        a_46_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_47_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_47_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_47_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_47_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_47_address1() {
    a_47_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_47_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_47_ce0 = ap_const_logic_1;
    } else {
        a_47_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_47_ce1 = ap_const_logic_1;
    } else {
        a_47_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_47_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2F))) {
        a_47_we0 = ap_const_logic_1;
    } else {
        a_47_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_48_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_48_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_48_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_48_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_48_address1() {
    a_48_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_48_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_48_ce0 = ap_const_logic_1;
    } else {
        a_48_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_48_ce1 = ap_const_logic_1;
    } else {
        a_48_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_48_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_30))) {
        a_48_we0 = ap_const_logic_1;
    } else {
        a_48_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_49_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_49_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_49_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_49_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_49_address1() {
    a_49_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_49_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_49_ce0 = ap_const_logic_1;
    } else {
        a_49_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_49_ce1 = ap_const_logic_1;
    } else {
        a_49_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_49_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_31))) {
        a_49_we0 = ap_const_logic_1;
    } else {
        a_49_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_4_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_4_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_4_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_4_address1() {
    a_4_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_4_ce0 = ap_const_logic_1;
    } else {
        a_4_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_4_ce1 = ap_const_logic_1;
    } else {
        a_4_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_4))) {
        a_4_we0 = ap_const_logic_1;
    } else {
        a_4_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_50_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_50_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_50_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_50_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_50_address1() {
    a_50_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_50_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_50_ce0 = ap_const_logic_1;
    } else {
        a_50_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_50_ce1 = ap_const_logic_1;
    } else {
        a_50_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_50_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_32))) {
        a_50_we0 = ap_const_logic_1;
    } else {
        a_50_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_51_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_51_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_51_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_51_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_51_address1() {
    a_51_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_51_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_51_ce0 = ap_const_logic_1;
    } else {
        a_51_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_51_ce1 = ap_const_logic_1;
    } else {
        a_51_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_51_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_33))) {
        a_51_we0 = ap_const_logic_1;
    } else {
        a_51_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_52_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_52_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_52_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_52_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_52_address1() {
    a_52_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_52_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_52_ce0 = ap_const_logic_1;
    } else {
        a_52_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_52_ce1 = ap_const_logic_1;
    } else {
        a_52_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_52_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_34))) {
        a_52_we0 = ap_const_logic_1;
    } else {
        a_52_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_53_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_53_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_53_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_53_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_53_address1() {
    a_53_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_53_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_53_ce0 = ap_const_logic_1;
    } else {
        a_53_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_53_ce1 = ap_const_logic_1;
    } else {
        a_53_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_53_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_35))) {
        a_53_we0 = ap_const_logic_1;
    } else {
        a_53_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_54_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_54_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_54_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_54_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_54_address1() {
    a_54_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_54_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_54_ce0 = ap_const_logic_1;
    } else {
        a_54_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_54_ce1 = ap_const_logic_1;
    } else {
        a_54_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_54_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_36))) {
        a_54_we0 = ap_const_logic_1;
    } else {
        a_54_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_55_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_55_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_55_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_55_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_55_address1() {
    a_55_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_55_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_55_ce0 = ap_const_logic_1;
    } else {
        a_55_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_55_ce1 = ap_const_logic_1;
    } else {
        a_55_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_55_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_37))) {
        a_55_we0 = ap_const_logic_1;
    } else {
        a_55_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_56_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_56_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_56_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_56_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_56_address1() {
    a_56_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_56_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_56_ce0 = ap_const_logic_1;
    } else {
        a_56_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_56_ce1 = ap_const_logic_1;
    } else {
        a_56_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_56_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_38))) {
        a_56_we0 = ap_const_logic_1;
    } else {
        a_56_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_57_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_57_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_57_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_57_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_57_address1() {
    a_57_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_57_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_57_ce0 = ap_const_logic_1;
    } else {
        a_57_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_57_ce1 = ap_const_logic_1;
    } else {
        a_57_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_57_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_39))) {
        a_57_we0 = ap_const_logic_1;
    } else {
        a_57_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_58_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_58_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_58_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_58_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_58_address1() {
    a_58_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_58_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_58_ce0 = ap_const_logic_1;
    } else {
        a_58_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_58_ce1 = ap_const_logic_1;
    } else {
        a_58_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_58_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3A))) {
        a_58_we0 = ap_const_logic_1;
    } else {
        a_58_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_59_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_59_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_59_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_59_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_59_address1() {
    a_59_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_59_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_59_ce0 = ap_const_logic_1;
    } else {
        a_59_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_59_ce1 = ap_const_logic_1;
    } else {
        a_59_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_59_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3B))) {
        a_59_we0 = ap_const_logic_1;
    } else {
        a_59_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_5_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_5_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_5_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_5_address1() {
    a_5_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_5_ce0 = ap_const_logic_1;
    } else {
        a_5_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_5_ce1 = ap_const_logic_1;
    } else {
        a_5_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_5))) {
        a_5_we0 = ap_const_logic_1;
    } else {
        a_5_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_60_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_60_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_60_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_60_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_60_address1() {
    a_60_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_60_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_60_ce0 = ap_const_logic_1;
    } else {
        a_60_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_60_ce1 = ap_const_logic_1;
    } else {
        a_60_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_60_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3C))) {
        a_60_we0 = ap_const_logic_1;
    } else {
        a_60_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_61_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_61_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_61_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_61_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_61_address1() {
    a_61_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_61_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_61_ce0 = ap_const_logic_1;
    } else {
        a_61_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_61_ce1 = ap_const_logic_1;
    } else {
        a_61_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_61_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3D))) {
        a_61_we0 = ap_const_logic_1;
    } else {
        a_61_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_62_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_62_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_62_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_62_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_62_address1() {
    a_62_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_62_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_62_ce0 = ap_const_logic_1;
    } else {
        a_62_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_62_ce1 = ap_const_logic_1;
    } else {
        a_62_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_62_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3E))) {
        a_62_we0 = ap_const_logic_1;
    } else {
        a_62_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_63_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_63_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_63_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_63_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_63_address1() {
    a_63_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_63_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_63_ce0 = ap_const_logic_1;
    } else {
        a_63_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_63_ce1 = ap_const_logic_1;
    } else {
        a_63_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_63_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3F))) {
        a_63_we0 = ap_const_logic_1;
    } else {
        a_63_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_64_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_64_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_64_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_64_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_64_address1() {
    a_64_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_64_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_64_ce0 = ap_const_logic_1;
    } else {
        a_64_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_64_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_64_ce1 = ap_const_logic_1;
    } else {
        a_64_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_64_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_40))) {
        a_64_we0 = ap_const_logic_1;
    } else {
        a_64_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_65_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_65_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_65_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_65_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_65_address1() {
    a_65_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_65_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_65_ce0 = ap_const_logic_1;
    } else {
        a_65_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_65_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_65_ce1 = ap_const_logic_1;
    } else {
        a_65_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_65_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_41))) {
        a_65_we0 = ap_const_logic_1;
    } else {
        a_65_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_66_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_66_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_66_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_66_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_66_address1() {
    a_66_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_66_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_66_ce0 = ap_const_logic_1;
    } else {
        a_66_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_66_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_66_ce1 = ap_const_logic_1;
    } else {
        a_66_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_66_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_42))) {
        a_66_we0 = ap_const_logic_1;
    } else {
        a_66_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_67_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_67_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_67_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_67_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_67_address1() {
    a_67_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_67_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_67_ce0 = ap_const_logic_1;
    } else {
        a_67_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_67_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_67_ce1 = ap_const_logic_1;
    } else {
        a_67_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_67_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_43))) {
        a_67_we0 = ap_const_logic_1;
    } else {
        a_67_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_68_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_68_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_68_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_68_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_68_address1() {
    a_68_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_68_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_68_ce0 = ap_const_logic_1;
    } else {
        a_68_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_68_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_68_ce1 = ap_const_logic_1;
    } else {
        a_68_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_68_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_44))) {
        a_68_we0 = ap_const_logic_1;
    } else {
        a_68_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_69_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_69_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_69_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_69_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_69_address1() {
    a_69_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_69_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_69_ce0 = ap_const_logic_1;
    } else {
        a_69_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_69_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_69_ce1 = ap_const_logic_1;
    } else {
        a_69_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_69_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_45))) {
        a_69_we0 = ap_const_logic_1;
    } else {
        a_69_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_6_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_6_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_6_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_6_address1() {
    a_6_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_6_ce0 = ap_const_logic_1;
    } else {
        a_6_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_6_ce1 = ap_const_logic_1;
    } else {
        a_6_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_6))) {
        a_6_we0 = ap_const_logic_1;
    } else {
        a_6_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_70_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_70_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_70_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_70_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_70_address1() {
    a_70_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_70_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_70_ce0 = ap_const_logic_1;
    } else {
        a_70_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_70_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_70_ce1 = ap_const_logic_1;
    } else {
        a_70_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_70_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_46))) {
        a_70_we0 = ap_const_logic_1;
    } else {
        a_70_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_71_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_71_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_71_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_71_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_71_address1() {
    a_71_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_71_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_71_ce0 = ap_const_logic_1;
    } else {
        a_71_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_71_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_71_ce1 = ap_const_logic_1;
    } else {
        a_71_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_71_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_47))) {
        a_71_we0 = ap_const_logic_1;
    } else {
        a_71_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_72_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_72_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_72_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_72_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_72_address1() {
    a_72_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_72_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_72_ce0 = ap_const_logic_1;
    } else {
        a_72_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_72_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_72_ce1 = ap_const_logic_1;
    } else {
        a_72_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_72_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_48))) {
        a_72_we0 = ap_const_logic_1;
    } else {
        a_72_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_73_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_73_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_73_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_73_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_73_address1() {
    a_73_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_73_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_73_ce0 = ap_const_logic_1;
    } else {
        a_73_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_73_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_73_ce1 = ap_const_logic_1;
    } else {
        a_73_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_73_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_49))) {
        a_73_we0 = ap_const_logic_1;
    } else {
        a_73_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_74_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_74_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_74_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_74_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_74_address1() {
    a_74_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_74_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_74_ce0 = ap_const_logic_1;
    } else {
        a_74_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_74_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_74_ce1 = ap_const_logic_1;
    } else {
        a_74_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_74_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_4A))) {
        a_74_we0 = ap_const_logic_1;
    } else {
        a_74_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_75_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_75_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_75_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_75_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_75_address1() {
    a_75_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_75_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_75_ce0 = ap_const_logic_1;
    } else {
        a_75_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_75_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_75_ce1 = ap_const_logic_1;
    } else {
        a_75_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_75_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_4B))) {
        a_75_we0 = ap_const_logic_1;
    } else {
        a_75_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_76_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_76_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_76_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_76_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_76_address1() {
    a_76_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_76_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_76_ce0 = ap_const_logic_1;
    } else {
        a_76_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_76_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_76_ce1 = ap_const_logic_1;
    } else {
        a_76_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_76_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_4C))) {
        a_76_we0 = ap_const_logic_1;
    } else {
        a_76_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_77_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_77_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_77_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_77_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_77_address1() {
    a_77_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_77_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_77_ce0 = ap_const_logic_1;
    } else {
        a_77_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_77_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_77_ce1 = ap_const_logic_1;
    } else {
        a_77_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_77_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_4D))) {
        a_77_we0 = ap_const_logic_1;
    } else {
        a_77_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_78_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_78_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_78_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_78_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_78_address1() {
    a_78_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_78_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_78_ce0 = ap_const_logic_1;
    } else {
        a_78_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_78_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_78_ce1 = ap_const_logic_1;
    } else {
        a_78_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_78_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_4E))) {
        a_78_we0 = ap_const_logic_1;
    } else {
        a_78_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_79_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_79_address0 =  (sc_lv<9>) (a_0_load_mid2_reg_8096.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_79_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_79_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_79_address1() {
    a_79_address1 =  (sc_lv<9>) (a_0_load_1_mid2_reg_8151.read());
}

void HLS_accel::thread_a_79_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        a_79_ce0 = ap_const_logic_1;
    } else {
        a_79_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_79_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        a_79_ce1 = ap_const_logic_1;
    } else {
        a_79_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_79_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_0) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_4) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_5) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_6) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_7) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_8) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_9) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_A) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_B) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_C) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_D) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_E) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_F) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_10) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_11) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_12) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_13) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_14) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_15) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_16) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_17) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_18) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_19) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1A) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1B) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1C) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1D) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1E) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_1F) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_20) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_21) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_22) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_23) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_24) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_25) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_26) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_27) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_28) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_29) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2A) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2B) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2C) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2D) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2E) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_2F) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_30) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_31) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_32) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_33) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_34) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_35) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_36) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_37) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_38) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_39) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3A) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3B) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3C) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3D) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3E) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_3F) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_40) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_41) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_42) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_43) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_44) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_45) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_46) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_47) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_48) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_49) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_4A) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_4B) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_4C) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_4D) && 
         !esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_4E))) {
        a_79_we0 = ap_const_logic_1;
    } else {
        a_79_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_7_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_7_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_7_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_7_address1() {
    a_7_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_7_ce0 = ap_const_logic_1;
    } else {
        a_7_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_7_ce1 = ap_const_logic_1;
    } else {
        a_7_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_7))) {
        a_7_we0 = ap_const_logic_1;
    } else {
        a_7_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_8_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_8_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_8_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_8_address1() {
    a_8_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_8_ce0 = ap_const_logic_1;
    } else {
        a_8_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_8_ce1 = ap_const_logic_1;
    } else {
        a_8_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_8))) {
        a_8_we0 = ap_const_logic_1;
    } else {
        a_8_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        a_9_address0 =  (sc_lv<9>) (a_0_load_mid2_fu_6490_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_9_address0 =  (sc_lv<9>) (tmp_2_fu_6146_p1.read());
    } else {
        a_9_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_a_9_address1() {
    a_9_address1 =  (sc_lv<9>) (a_0_load_1_mid2_fu_6528_p3.read());
}

void HLS_accel::thread_a_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        a_9_ce0 = ap_const_logic_1;
    } else {
        a_9_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        a_9_ce1 = ap_const_logic_1;
    } else {
        a_9_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_a_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(arrayNo_fu_6124_p4.read(), ap_const_lv7_9))) {
        a_9_we0 = ap_const_logic_1;
    } else {
        a_9_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[5];
}

void HLS_accel::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[7];
}

void HLS_accel::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void HLS_accel::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[6];
}

void HLS_accel::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[8];
}

void HLS_accel::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void HLS_accel::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void HLS_accel::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void HLS_accel::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void HLS_accel::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_pp3_stage0_01001() {
    ap_block_pp3_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state15_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state16_io.read())));
}

void HLS_accel::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state15_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state16_io.read())));
}

void HLS_accel::thread_ap_block_state10_pp2_stage0_iter4() {
    ap_block_state10_pp2_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_state11_pp2_stage0_iter5() {
    ap_block_state11_pp2_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_state13_pp3_stage0_iter0() {
    ap_block_state13_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_state14_pp3_stage0_iter1() {
    ap_block_state14_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_state15_io() {
    ap_block_state15_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428_pp3_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_ack_in.read()));
}

void HLS_accel::thread_ap_block_state15_pp3_stage0_iter2() {
    ap_block_state15_pp3_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_state16_io() {
    ap_block_state16_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428_pp3_iter2_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_ack_in.read()));
}

void HLS_accel::thread_ap_block_state16_pp3_stage0_iter3() {
    ap_block_state16_pp3_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_state17() {
    ap_block_state17 = (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_ack_in.read()));
}

void HLS_accel::thread_ap_block_state2() {
    ap_block_state2 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()));
}

void HLS_accel::thread_ap_block_state4() {
    ap_block_state4 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()));
}

void HLS_accel::thread_ap_block_state6_pp2_stage0_iter0() {
    ap_block_state6_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_state7_pp2_stage0_iter1() {
    ap_block_state7_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_state8_pp2_stage0_iter2() {
    ap_block_state8_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_block_state9_pp2_stage0_iter3() {
    ap_block_state9_pp2_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void HLS_accel::thread_ap_condition_pp2_exit_iter0_state6() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten1_fu_6420_p2.read())) {
        ap_condition_pp2_exit_iter0_state6 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state6 = ap_const_logic_0;
    }
}

void HLS_accel::thread_ap_condition_pp3_exit_iter0_state13() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten2_fu_7360_p2.read())) {
        ap_condition_pp3_exit_iter0_state13 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state13 = ap_const_logic_0;
    }
}

void HLS_accel::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_ack_in.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void HLS_accel::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void HLS_accel::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void HLS_accel::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void HLS_accel::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter5.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void HLS_accel::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter3.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void HLS_accel::thread_ap_phi_mux_i4_0_i_phi_fu_5902_p4() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        ap_phi_mux_i4_0_i_phi_fu_5902_p4 = p_shl4_mid2_v_v_reg_11443.read();
    } else {
        ap_phi_mux_i4_0_i_phi_fu_5902_p4 = i4_0_i_reg_5898.read();
    }
}

void HLS_accel::thread_ap_phi_mux_ia_0_i_i_phi_fu_5869_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_8075.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_ia_0_i_i_phi_fu_5869_p4 = tmp_8_mid2_v_reg_8089.read();
    } else {
        ap_phi_mux_ia_0_i_i_phi_fu_5869_p4 = ia_0_i_i_reg_5865.read();
    }
}

void HLS_accel::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_ack_in.read())))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void HLS_accel::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void HLS_accel::thread_arrayNo1_mid2_fu_6276_p4() {
    arrayNo1_mid2_fu_6276_p4 = arrayNo1_mid2_v_fu_6268_p3.read().range(7, 1);
}

void HLS_accel::thread_arrayNo1_mid2_v_fu_6268_p3() {
    arrayNo1_mid2_v_fu_6268_p3 = (!exitcond2_i_fu_6254_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond2_i_fu_6254_p2.read()[0].to_bool())? i_1_fu_6248_p2.read(): i1_0_i_reg_5832.read());
}

void HLS_accel::thread_arrayNo_fu_6124_p4() {
    arrayNo_fu_6124_p4 = j_0_i_mid2_fu_6108_p3.read().range(7, 1);
}

void HLS_accel::thread_b_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_0_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_0_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_0_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_0_address1() {
    b_0_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_0_ce0 = ap_const_logic_1;
    } else {
        b_0_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_0_ce1 = ap_const_logic_1;
    } else {
        b_0_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_0, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_0_we0 = ap_const_logic_1;
    } else {
        b_0_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_10_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_10_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_10_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_10_address1() {
    b_10_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_10_ce0 = ap_const_logic_1;
    } else {
        b_10_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_10_ce1 = ap_const_logic_1;
    } else {
        b_10_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_A, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_10_we0 = ap_const_logic_1;
    } else {
        b_10_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_11_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_11_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_11_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_11_address1() {
    b_11_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_11_ce0 = ap_const_logic_1;
    } else {
        b_11_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_11_ce1 = ap_const_logic_1;
    } else {
        b_11_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_B, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_11_we0 = ap_const_logic_1;
    } else {
        b_11_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_12_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_12_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_12_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_12_address1() {
    b_12_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_12_ce0 = ap_const_logic_1;
    } else {
        b_12_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_12_ce1 = ap_const_logic_1;
    } else {
        b_12_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_C, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_12_we0 = ap_const_logic_1;
    } else {
        b_12_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_13_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_13_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_13_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_13_address1() {
    b_13_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_13_ce0 = ap_const_logic_1;
    } else {
        b_13_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_13_ce1 = ap_const_logic_1;
    } else {
        b_13_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_D, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_13_we0 = ap_const_logic_1;
    } else {
        b_13_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_14_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_14_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_14_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_14_address1() {
    b_14_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_14_ce0 = ap_const_logic_1;
    } else {
        b_14_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_14_ce1 = ap_const_logic_1;
    } else {
        b_14_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_E, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_14_we0 = ap_const_logic_1;
    } else {
        b_14_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_15_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_15_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_15_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_15_address1() {
    b_15_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_15_ce0 = ap_const_logic_1;
    } else {
        b_15_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_15_ce1 = ap_const_logic_1;
    } else {
        b_15_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_F, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_15_we0 = ap_const_logic_1;
    } else {
        b_15_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_16_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_16_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_16_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_16_address1() {
    b_16_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_16_ce0 = ap_const_logic_1;
    } else {
        b_16_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_16_ce1 = ap_const_logic_1;
    } else {
        b_16_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_10, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_16_we0 = ap_const_logic_1;
    } else {
        b_16_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_17_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_17_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_17_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_17_address1() {
    b_17_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_17_ce0 = ap_const_logic_1;
    } else {
        b_17_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_17_ce1 = ap_const_logic_1;
    } else {
        b_17_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_11, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_17_we0 = ap_const_logic_1;
    } else {
        b_17_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_18_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_18_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_18_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_18_address1() {
    b_18_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_18_ce0 = ap_const_logic_1;
    } else {
        b_18_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_18_ce1 = ap_const_logic_1;
    } else {
        b_18_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_12, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_18_we0 = ap_const_logic_1;
    } else {
        b_18_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_19_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_19_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_19_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_19_address1() {
    b_19_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_19_ce0 = ap_const_logic_1;
    } else {
        b_19_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_19_ce1 = ap_const_logic_1;
    } else {
        b_19_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_13, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_19_we0 = ap_const_logic_1;
    } else {
        b_19_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_1_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_1_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_1_address1() {
    b_1_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_1_ce0 = ap_const_logic_1;
    } else {
        b_1_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_1_ce1 = ap_const_logic_1;
    } else {
        b_1_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_1, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_1_we0 = ap_const_logic_1;
    } else {
        b_1_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_20_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_20_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_20_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_20_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_20_address1() {
    b_20_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_20_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_20_ce0 = ap_const_logic_1;
    } else {
        b_20_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_20_ce1 = ap_const_logic_1;
    } else {
        b_20_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_20_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_14, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_20_we0 = ap_const_logic_1;
    } else {
        b_20_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_21_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_21_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_21_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_21_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_21_address1() {
    b_21_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_21_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_21_ce0 = ap_const_logic_1;
    } else {
        b_21_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_21_ce1 = ap_const_logic_1;
    } else {
        b_21_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_21_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_15, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_21_we0 = ap_const_logic_1;
    } else {
        b_21_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_22_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_22_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_22_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_22_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_22_address1() {
    b_22_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_22_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_22_ce0 = ap_const_logic_1;
    } else {
        b_22_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_22_ce1 = ap_const_logic_1;
    } else {
        b_22_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_22_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_16, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_22_we0 = ap_const_logic_1;
    } else {
        b_22_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_23_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_23_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_23_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_23_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_23_address1() {
    b_23_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_23_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_23_ce0 = ap_const_logic_1;
    } else {
        b_23_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_23_ce1 = ap_const_logic_1;
    } else {
        b_23_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_23_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_17, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_23_we0 = ap_const_logic_1;
    } else {
        b_23_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_24_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_24_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_24_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_24_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_24_address1() {
    b_24_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_24_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_24_ce0 = ap_const_logic_1;
    } else {
        b_24_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_24_ce1 = ap_const_logic_1;
    } else {
        b_24_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_24_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_18, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_24_we0 = ap_const_logic_1;
    } else {
        b_24_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_25_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_25_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_25_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_25_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_25_address1() {
    b_25_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_25_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_25_ce0 = ap_const_logic_1;
    } else {
        b_25_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_25_ce1 = ap_const_logic_1;
    } else {
        b_25_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_25_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_19, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_25_we0 = ap_const_logic_1;
    } else {
        b_25_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_26_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_26_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_26_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_26_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_26_address1() {
    b_26_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_26_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_26_ce0 = ap_const_logic_1;
    } else {
        b_26_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_26_ce1 = ap_const_logic_1;
    } else {
        b_26_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_26_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_1A, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_26_we0 = ap_const_logic_1;
    } else {
        b_26_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_27_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_27_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_27_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_27_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_27_address1() {
    b_27_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_27_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_27_ce0 = ap_const_logic_1;
    } else {
        b_27_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_27_ce1 = ap_const_logic_1;
    } else {
        b_27_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_27_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_1B, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_27_we0 = ap_const_logic_1;
    } else {
        b_27_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_28_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_28_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_28_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_28_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_28_address1() {
    b_28_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_28_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_28_ce0 = ap_const_logic_1;
    } else {
        b_28_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_28_ce1 = ap_const_logic_1;
    } else {
        b_28_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_28_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_1C, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_28_we0 = ap_const_logic_1;
    } else {
        b_28_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_29_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_29_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_29_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_29_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_29_address1() {
    b_29_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_29_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_29_ce0 = ap_const_logic_1;
    } else {
        b_29_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_29_ce1 = ap_const_logic_1;
    } else {
        b_29_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_29_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_1D, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_29_we0 = ap_const_logic_1;
    } else {
        b_29_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_2_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_2_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_2_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_2_address1() {
    b_2_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_2_ce0 = ap_const_logic_1;
    } else {
        b_2_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_2_ce1 = ap_const_logic_1;
    } else {
        b_2_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_2, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_2_we0 = ap_const_logic_1;
    } else {
        b_2_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_30_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_30_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_30_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_30_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_30_address1() {
    b_30_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_30_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_30_ce0 = ap_const_logic_1;
    } else {
        b_30_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_30_ce1 = ap_const_logic_1;
    } else {
        b_30_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_30_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_1E, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_30_we0 = ap_const_logic_1;
    } else {
        b_30_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_31_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_31_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_31_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_31_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_31_address1() {
    b_31_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_31_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_31_ce0 = ap_const_logic_1;
    } else {
        b_31_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_31_ce1 = ap_const_logic_1;
    } else {
        b_31_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_31_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_1F, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_31_we0 = ap_const_logic_1;
    } else {
        b_31_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_32_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_32_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_32_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_32_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_32_address1() {
    b_32_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_32_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_32_ce0 = ap_const_logic_1;
    } else {
        b_32_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_32_ce1 = ap_const_logic_1;
    } else {
        b_32_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_32_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_20, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_32_we0 = ap_const_logic_1;
    } else {
        b_32_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_33_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_33_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_33_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_33_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_33_address1() {
    b_33_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_33_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_33_ce0 = ap_const_logic_1;
    } else {
        b_33_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_33_ce1 = ap_const_logic_1;
    } else {
        b_33_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_33_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_21, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_33_we0 = ap_const_logic_1;
    } else {
        b_33_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_34_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_34_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_34_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_34_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_34_address1() {
    b_34_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_34_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_34_ce0 = ap_const_logic_1;
    } else {
        b_34_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_34_ce1 = ap_const_logic_1;
    } else {
        b_34_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_34_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_22, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_34_we0 = ap_const_logic_1;
    } else {
        b_34_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_35_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_35_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_35_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_35_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_35_address1() {
    b_35_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_35_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_35_ce0 = ap_const_logic_1;
    } else {
        b_35_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_35_ce1 = ap_const_logic_1;
    } else {
        b_35_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_35_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_23, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_35_we0 = ap_const_logic_1;
    } else {
        b_35_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_36_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_36_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_36_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_36_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_36_address1() {
    b_36_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_36_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_36_ce0 = ap_const_logic_1;
    } else {
        b_36_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_36_ce1 = ap_const_logic_1;
    } else {
        b_36_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_36_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_24, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_36_we0 = ap_const_logic_1;
    } else {
        b_36_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_37_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_37_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_37_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_37_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_37_address1() {
    b_37_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_37_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_37_ce0 = ap_const_logic_1;
    } else {
        b_37_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_37_ce1 = ap_const_logic_1;
    } else {
        b_37_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_37_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_25, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_37_we0 = ap_const_logic_1;
    } else {
        b_37_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_38_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_38_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_38_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_38_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_38_address1() {
    b_38_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_38_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_38_ce0 = ap_const_logic_1;
    } else {
        b_38_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_38_ce1 = ap_const_logic_1;
    } else {
        b_38_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_38_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_26, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_38_we0 = ap_const_logic_1;
    } else {
        b_38_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_39_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_39_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_39_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_39_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_39_address1() {
    b_39_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_39_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_39_ce0 = ap_const_logic_1;
    } else {
        b_39_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_39_ce1 = ap_const_logic_1;
    } else {
        b_39_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_39_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_27, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_39_we0 = ap_const_logic_1;
    } else {
        b_39_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_3_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_3_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_3_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_3_address1() {
    b_3_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_3_ce0 = ap_const_logic_1;
    } else {
        b_3_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_3_ce1 = ap_const_logic_1;
    } else {
        b_3_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_3, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_3_we0 = ap_const_logic_1;
    } else {
        b_3_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_40_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_40_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_40_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_40_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_40_address1() {
    b_40_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_40_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_40_ce0 = ap_const_logic_1;
    } else {
        b_40_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_40_ce1 = ap_const_logic_1;
    } else {
        b_40_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_40_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_28, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_40_we0 = ap_const_logic_1;
    } else {
        b_40_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_41_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_41_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_41_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_41_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_41_address1() {
    b_41_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_41_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_41_ce0 = ap_const_logic_1;
    } else {
        b_41_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_41_ce1 = ap_const_logic_1;
    } else {
        b_41_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_41_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_29, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_41_we0 = ap_const_logic_1;
    } else {
        b_41_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_42_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_42_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_42_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_42_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_42_address1() {
    b_42_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_42_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_42_ce0 = ap_const_logic_1;
    } else {
        b_42_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_42_ce1 = ap_const_logic_1;
    } else {
        b_42_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_42_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_2A, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_42_we0 = ap_const_logic_1;
    } else {
        b_42_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_43_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_43_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_43_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_43_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_43_address1() {
    b_43_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_43_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_43_ce0 = ap_const_logic_1;
    } else {
        b_43_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_43_ce1 = ap_const_logic_1;
    } else {
        b_43_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_43_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_2B, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_43_we0 = ap_const_logic_1;
    } else {
        b_43_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_44_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_44_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_44_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_44_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_44_address1() {
    b_44_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_44_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_44_ce0 = ap_const_logic_1;
    } else {
        b_44_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_44_ce1 = ap_const_logic_1;
    } else {
        b_44_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_44_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_2C, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_44_we0 = ap_const_logic_1;
    } else {
        b_44_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_45_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_45_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_45_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_45_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_45_address1() {
    b_45_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_45_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_45_ce0 = ap_const_logic_1;
    } else {
        b_45_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_45_ce1 = ap_const_logic_1;
    } else {
        b_45_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_45_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_2D, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_45_we0 = ap_const_logic_1;
    } else {
        b_45_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_46_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_46_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_46_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_46_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_46_address1() {
    b_46_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_46_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_46_ce0 = ap_const_logic_1;
    } else {
        b_46_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_46_ce1 = ap_const_logic_1;
    } else {
        b_46_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_46_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_2E, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_46_we0 = ap_const_logic_1;
    } else {
        b_46_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_47_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_47_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_47_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_47_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_47_address1() {
    b_47_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_47_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_47_ce0 = ap_const_logic_1;
    } else {
        b_47_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_47_ce1 = ap_const_logic_1;
    } else {
        b_47_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_47_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_2F, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_47_we0 = ap_const_logic_1;
    } else {
        b_47_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_48_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_48_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_48_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_48_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_48_address1() {
    b_48_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_48_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_48_ce0 = ap_const_logic_1;
    } else {
        b_48_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_48_ce1 = ap_const_logic_1;
    } else {
        b_48_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_48_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_30, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_48_we0 = ap_const_logic_1;
    } else {
        b_48_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_49_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_49_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_49_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_49_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_49_address1() {
    b_49_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_49_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_49_ce0 = ap_const_logic_1;
    } else {
        b_49_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_49_ce1 = ap_const_logic_1;
    } else {
        b_49_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_49_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_31, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_49_we0 = ap_const_logic_1;
    } else {
        b_49_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_4_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_4_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_4_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_4_address1() {
    b_4_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_4_ce0 = ap_const_logic_1;
    } else {
        b_4_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_4_ce1 = ap_const_logic_1;
    } else {
        b_4_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_4, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_4_we0 = ap_const_logic_1;
    } else {
        b_4_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_50_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_50_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_50_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_50_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_50_address1() {
    b_50_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_50_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_50_ce0 = ap_const_logic_1;
    } else {
        b_50_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_50_ce1 = ap_const_logic_1;
    } else {
        b_50_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_50_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_32, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_50_we0 = ap_const_logic_1;
    } else {
        b_50_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_51_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_51_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_51_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_51_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_51_address1() {
    b_51_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_51_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_51_ce0 = ap_const_logic_1;
    } else {
        b_51_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_51_ce1 = ap_const_logic_1;
    } else {
        b_51_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_51_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_33, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_51_we0 = ap_const_logic_1;
    } else {
        b_51_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_52_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_52_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_52_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_52_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_52_address1() {
    b_52_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_52_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_52_ce0 = ap_const_logic_1;
    } else {
        b_52_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_52_ce1 = ap_const_logic_1;
    } else {
        b_52_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_52_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_34, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_52_we0 = ap_const_logic_1;
    } else {
        b_52_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_53_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_53_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_53_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_53_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_53_address1() {
    b_53_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_53_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_53_ce0 = ap_const_logic_1;
    } else {
        b_53_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_53_ce1 = ap_const_logic_1;
    } else {
        b_53_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_53_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_35, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_53_we0 = ap_const_logic_1;
    } else {
        b_53_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_54_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_54_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_54_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_54_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_54_address1() {
    b_54_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_54_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_54_ce0 = ap_const_logic_1;
    } else {
        b_54_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_54_ce1 = ap_const_logic_1;
    } else {
        b_54_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_54_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_36, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_54_we0 = ap_const_logic_1;
    } else {
        b_54_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_55_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_55_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_55_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_55_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_55_address1() {
    b_55_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_55_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_55_ce0 = ap_const_logic_1;
    } else {
        b_55_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_55_ce1 = ap_const_logic_1;
    } else {
        b_55_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_55_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_37, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_55_we0 = ap_const_logic_1;
    } else {
        b_55_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_56_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_56_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_56_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_56_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_56_address1() {
    b_56_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_56_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_56_ce0 = ap_const_logic_1;
    } else {
        b_56_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_56_ce1 = ap_const_logic_1;
    } else {
        b_56_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_56_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_38, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_56_we0 = ap_const_logic_1;
    } else {
        b_56_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_57_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_57_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_57_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_57_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_57_address1() {
    b_57_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_57_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_57_ce0 = ap_const_logic_1;
    } else {
        b_57_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_57_ce1 = ap_const_logic_1;
    } else {
        b_57_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_57_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_39, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_57_we0 = ap_const_logic_1;
    } else {
        b_57_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_58_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_58_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_58_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_58_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_58_address1() {
    b_58_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_58_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_58_ce0 = ap_const_logic_1;
    } else {
        b_58_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_58_ce1 = ap_const_logic_1;
    } else {
        b_58_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_58_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_3A, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_58_we0 = ap_const_logic_1;
    } else {
        b_58_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_59_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_59_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_59_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_59_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_59_address1() {
    b_59_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_59_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_59_ce0 = ap_const_logic_1;
    } else {
        b_59_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_59_ce1 = ap_const_logic_1;
    } else {
        b_59_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_59_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_3B, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_59_we0 = ap_const_logic_1;
    } else {
        b_59_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_5_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_5_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_5_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_5_address1() {
    b_5_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_5_ce0 = ap_const_logic_1;
    } else {
        b_5_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_5_ce1 = ap_const_logic_1;
    } else {
        b_5_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_5, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_5_we0 = ap_const_logic_1;
    } else {
        b_5_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_60_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_60_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_60_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_60_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_60_address1() {
    b_60_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_60_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_60_ce0 = ap_const_logic_1;
    } else {
        b_60_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_60_ce1 = ap_const_logic_1;
    } else {
        b_60_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_60_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_3C, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_60_we0 = ap_const_logic_1;
    } else {
        b_60_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_61_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_61_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_61_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_61_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_61_address1() {
    b_61_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_61_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_61_ce0 = ap_const_logic_1;
    } else {
        b_61_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_61_ce1 = ap_const_logic_1;
    } else {
        b_61_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_61_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_3D, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_61_we0 = ap_const_logic_1;
    } else {
        b_61_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_62_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_62_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_62_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_62_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_62_address1() {
    b_62_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_62_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_62_ce0 = ap_const_logic_1;
    } else {
        b_62_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_62_ce1 = ap_const_logic_1;
    } else {
        b_62_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_62_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_3E, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_62_we0 = ap_const_logic_1;
    } else {
        b_62_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_63_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_63_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_63_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_63_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_63_address1() {
    b_63_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_63_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_63_ce0 = ap_const_logic_1;
    } else {
        b_63_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_63_ce1 = ap_const_logic_1;
    } else {
        b_63_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_63_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_3F, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_63_we0 = ap_const_logic_1;
    } else {
        b_63_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_64_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_64_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_64_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_64_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_64_address1() {
    b_64_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_64_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_64_ce0 = ap_const_logic_1;
    } else {
        b_64_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_64_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_64_ce1 = ap_const_logic_1;
    } else {
        b_64_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_64_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_40, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_64_we0 = ap_const_logic_1;
    } else {
        b_64_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_65_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_65_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_65_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_65_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_65_address1() {
    b_65_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_65_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_65_ce0 = ap_const_logic_1;
    } else {
        b_65_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_65_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_65_ce1 = ap_const_logic_1;
    } else {
        b_65_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_65_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_41, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_65_we0 = ap_const_logic_1;
    } else {
        b_65_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_66_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_66_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_66_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_66_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_66_address1() {
    b_66_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_66_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_66_ce0 = ap_const_logic_1;
    } else {
        b_66_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_66_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_66_ce1 = ap_const_logic_1;
    } else {
        b_66_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_66_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_42, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_66_we0 = ap_const_logic_1;
    } else {
        b_66_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_67_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_67_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_67_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_67_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_67_address1() {
    b_67_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_67_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_67_ce0 = ap_const_logic_1;
    } else {
        b_67_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_67_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_67_ce1 = ap_const_logic_1;
    } else {
        b_67_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_67_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_43, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_67_we0 = ap_const_logic_1;
    } else {
        b_67_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_68_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_68_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_68_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_68_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_68_address1() {
    b_68_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_68_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_68_ce0 = ap_const_logic_1;
    } else {
        b_68_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_68_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_68_ce1 = ap_const_logic_1;
    } else {
        b_68_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_68_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_44, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_68_we0 = ap_const_logic_1;
    } else {
        b_68_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_69_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_69_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_69_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_69_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_69_address1() {
    b_69_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_69_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_69_ce0 = ap_const_logic_1;
    } else {
        b_69_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_69_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_69_ce1 = ap_const_logic_1;
    } else {
        b_69_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_69_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_45, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_69_we0 = ap_const_logic_1;
    } else {
        b_69_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_6_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_6_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_6_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_6_address1() {
    b_6_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_6_ce0 = ap_const_logic_1;
    } else {
        b_6_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_6_ce1 = ap_const_logic_1;
    } else {
        b_6_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_6, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_6_we0 = ap_const_logic_1;
    } else {
        b_6_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_70_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_70_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_70_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_70_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_70_address1() {
    b_70_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_70_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_70_ce0 = ap_const_logic_1;
    } else {
        b_70_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_70_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_70_ce1 = ap_const_logic_1;
    } else {
        b_70_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_70_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_46, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_70_we0 = ap_const_logic_1;
    } else {
        b_70_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_71_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_71_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_71_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_71_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_71_address1() {
    b_71_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_71_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_71_ce0 = ap_const_logic_1;
    } else {
        b_71_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_71_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_71_ce1 = ap_const_logic_1;
    } else {
        b_71_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_71_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_47, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_71_we0 = ap_const_logic_1;
    } else {
        b_71_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_72_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_72_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_72_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_72_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_72_address1() {
    b_72_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_72_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_72_ce0 = ap_const_logic_1;
    } else {
        b_72_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_72_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_72_ce1 = ap_const_logic_1;
    } else {
        b_72_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_72_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_48, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_72_we0 = ap_const_logic_1;
    } else {
        b_72_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_73_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_73_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_73_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_73_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_73_address1() {
    b_73_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_73_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_73_ce0 = ap_const_logic_1;
    } else {
        b_73_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_73_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_73_ce1 = ap_const_logic_1;
    } else {
        b_73_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_73_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_49, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_73_we0 = ap_const_logic_1;
    } else {
        b_73_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_74_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_74_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_74_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_74_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_74_address1() {
    b_74_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_74_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_74_ce0 = ap_const_logic_1;
    } else {
        b_74_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_74_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_74_ce1 = ap_const_logic_1;
    } else {
        b_74_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_74_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_4A, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_74_we0 = ap_const_logic_1;
    } else {
        b_74_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_75_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_75_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_75_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_75_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_75_address1() {
    b_75_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_75_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_75_ce0 = ap_const_logic_1;
    } else {
        b_75_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_75_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_75_ce1 = ap_const_logic_1;
    } else {
        b_75_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_75_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_4B, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_75_we0 = ap_const_logic_1;
    } else {
        b_75_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_76_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_76_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_76_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_76_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_76_address1() {
    b_76_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_76_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_76_ce0 = ap_const_logic_1;
    } else {
        b_76_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_76_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_76_ce1 = ap_const_logic_1;
    } else {
        b_76_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_76_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_4C, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_76_we0 = ap_const_logic_1;
    } else {
        b_76_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_77_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_77_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_77_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_77_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_77_address1() {
    b_77_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_77_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_77_ce0 = ap_const_logic_1;
    } else {
        b_77_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_77_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_77_ce1 = ap_const_logic_1;
    } else {
        b_77_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_77_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_4D, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_77_we0 = ap_const_logic_1;
    } else {
        b_77_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_78_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_78_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_78_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_78_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_78_address1() {
    b_78_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_78_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_78_ce0 = ap_const_logic_1;
    } else {
        b_78_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_78_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_78_ce1 = ap_const_logic_1;
    } else {
        b_78_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_78_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_4E, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_78_we0 = ap_const_logic_1;
    } else {
        b_78_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_79_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_79_address0 =  (sc_lv<9>) (tmp_5_reg_8512.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_79_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_79_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_79_address1() {
    b_79_address1 =  (sc_lv<9>) (tmp_22_cast_reg_8567.read());
}

void HLS_accel::thread_b_79_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_79_ce0 = ap_const_logic_1;
    } else {
        b_79_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_79_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_79_ce1 = ap_const_logic_1;
    } else {
        b_79_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_79_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         !esl_seteq<1,7,7>(ap_const_lv7_0, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_1, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_2, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_3, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_4, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_5, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_6, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_7, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_8, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_9, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_A, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_B, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_C, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_D, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_E, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_F, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_10, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_11, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_12, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_13, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_14, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_15, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_16, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_17, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_18, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_19, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_1A, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_1B, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_1C, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_1D, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_1E, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_1F, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_20, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_21, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_22, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_23, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_24, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_25, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_26, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_27, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_28, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_29, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_2A, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_2B, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_2C, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_2D, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_2E, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_2F, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_30, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_31, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_32, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_33, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_34, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_35, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_36, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_37, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_38, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_39, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_3A, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_3B, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_3C, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_3D, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_3E, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_3F, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_40, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_41, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_42, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_43, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_44, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_45, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_46, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_47, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_48, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_49, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_4A, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_4B, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_4C, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_4D, arrayNo1_mid2_fu_6276_p4.read()) && 
         !esl_seteq<1,7,7>(ap_const_lv7_4E, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_79_we0 = ap_const_logic_1;
    } else {
        b_79_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_7_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_7_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_7_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_7_address1() {
    b_7_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_7_ce0 = ap_const_logic_1;
    } else {
        b_7_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_7_ce1 = ap_const_logic_1;
    } else {
        b_7_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_7, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_7_we0 = ap_const_logic_1;
    } else {
        b_7_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_8_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_8_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_8_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_8_address1() {
    b_8_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_8_ce0 = ap_const_logic_1;
    } else {
        b_8_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_8_ce1 = ap_const_logic_1;
    } else {
        b_8_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_8, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_8_we0 = ap_const_logic_1;
    } else {
        b_8_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_9_address0 =  (sc_lv<9>) (tmp_5_fu_6564_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_9_address0 =  (sc_lv<9>) (tmp_8_cast_fu_6308_p1.read());
    } else {
        b_9_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_9_address1() {
    b_9_address1 =  (sc_lv<9>) (tmp_22_cast_fu_6612_p1.read());
}

void HLS_accel::thread_b_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_9_ce0 = ap_const_logic_1;
    } else {
        b_9_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        b_9_ce1 = ap_const_logic_1;
    } else {
        b_9_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_9, arrayNo1_mid2_fu_6276_p4.read()))) {
        b_9_we0 = ap_const_logic_1;
    } else {
        b_9_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_exitcond1_i_i_fu_6438_p2() {
    exitcond1_i_i_fu_6438_p2 = (!ib_0_i_i_reg_5876.read().is_01() || !ap_const_lv8_A0.is_01())? sc_lv<1>(): sc_lv<1>(ib_0_i_i_reg_5876.read() == ap_const_lv8_A0);
}

void HLS_accel::thread_exitcond2_i_fu_6254_p2() {
    exitcond2_i_fu_6254_p2 = (!j2_0_i_reg_5843.read().is_01() || !ap_const_lv8_A0.is_01())? sc_lv<1>(): sc_lv<1>(j2_0_i_reg_5843.read() == ap_const_lv8_A0);
}

void HLS_accel::thread_exitcond4_i_fu_6102_p2() {
    exitcond4_i_fu_6102_p2 = (!j_0_i_reg_5810.read().is_01() || !ap_const_lv8_A0.is_01())? sc_lv<1>(): sc_lv<1>(j_0_i_reg_5810.read() == ap_const_lv8_A0);
}

void HLS_accel::thread_exitcond_flatten1_fu_6420_p2() {
    exitcond_flatten1_fu_6420_p2 = (!indvar_flatten1_reg_5854.read().is_01() || !ap_const_lv15_6400.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten1_reg_5854.read() == ap_const_lv15_6400);
}

void HLS_accel::thread_exitcond_flatten2_fu_7360_p2() {
    exitcond_flatten2_fu_7360_p2 = (!indvar_flatten2_reg_5887.read().is_01() || !ap_const_lv15_6400.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten2_reg_5887.read() == ap_const_lv15_6400);
}

void HLS_accel::thread_exitcond_flatten8_fu_6236_p2() {
    exitcond_flatten8_fu_6236_p2 = (!indvar_flatten6_reg_5821.read().is_01() || !ap_const_lv15_6400.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten6_reg_5821.read() == ap_const_lv15_6400);
}

void HLS_accel::thread_exitcond_flatten_fu_6084_p2() {
    exitcond_flatten_fu_6084_p2 = (!indvar_flatten_reg_5788.read().is_01() || !ap_const_lv15_6400.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_5788.read() == ap_const_lv15_6400);
}

void HLS_accel::thread_exitcond_i_fu_7378_p2() {
    exitcond_i_fu_7378_p2 = (!j5_0_i_reg_5909.read().is_01() || !ap_const_lv8_A0.is_01())? sc_lv<1>(): sc_lv<1>(j5_0_i_reg_5909.read() == ap_const_lv8_A0);
}

void HLS_accel::thread_i_1_fu_6248_p2() {
    i_1_fu_6248_p2 = (!ap_const_lv8_1.is_01() || !i1_0_i_reg_5832.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(i1_0_i_reg_5832.read()));
}

void HLS_accel::thread_i_2_fu_7372_p2() {
    i_2_fu_7372_p2 = (!ap_phi_mux_i4_0_i_phi_fu_5902_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ap_phi_mux_i4_0_i_phi_fu_5902_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_i_fu_6096_p2() {
    i_fu_6096_p2 = (!ap_const_lv8_1.is_01() || !i_0_i_reg_5799.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(i_0_i_reg_5799.read()));
}

void HLS_accel::thread_ia_fu_6432_p2() {
    ia_fu_6432_p2 = (!ap_phi_mux_ia_0_i_i_phi_fu_5869_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ap_phi_mux_ia_0_i_i_phi_fu_5869_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_ib_0_i_i_mid2_fu_6444_p3() {
    ib_0_i_i_mid2_fu_6444_p3 = (!exitcond1_i_i_fu_6438_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond1_i_i_fu_6438_p2.read()[0].to_bool())? ap_const_lv8_0: ib_0_i_i_reg_5876.read());
}

void HLS_accel::thread_ib_fu_6644_p2() {
    ib_fu_6644_p2 = (!ib_0_i_i_mid2_fu_6444_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ib_0_i_i_mid2_fu_6444_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_indvar_flatten_next1_fu_6426_p2() {
    indvar_flatten_next1_fu_6426_p2 = (!indvar_flatten1_reg_5854.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(indvar_flatten1_reg_5854.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void HLS_accel::thread_indvar_flatten_next2_fu_7366_p2() {
    indvar_flatten_next2_fu_7366_p2 = (!indvar_flatten2_reg_5887.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(indvar_flatten2_reg_5887.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void HLS_accel::thread_indvar_flatten_next7_fu_6242_p2() {
    indvar_flatten_next7_fu_6242_p2 = (!indvar_flatten6_reg_5821.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(indvar_flatten6_reg_5821.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void HLS_accel::thread_indvar_flatten_next_fu_6090_p2() {
    indvar_flatten_next_fu_6090_p2 = (!indvar_flatten_reg_5788.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_biguint<15>(indvar_flatten_reg_5788.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void HLS_accel::thread_j2_0_i_mid2_fu_6260_p3() {
    j2_0_i_mid2_fu_6260_p3 = (!exitcond2_i_fu_6254_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond2_i_fu_6254_p2.read()[0].to_bool())? ap_const_lv8_0: j2_0_i_reg_5843.read());
}

void HLS_accel::thread_j5_0_i_cast_fu_7434_p1() {
    j5_0_i_cast_fu_7434_p1 = esl_zext<13,8>(j5_0_i_mid2_reg_11437.read());
}

void HLS_accel::thread_j5_0_i_mid2_fu_7384_p3() {
    j5_0_i_mid2_fu_7384_p3 = (!exitcond_i_fu_7378_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond_i_fu_7378_p2.read()[0].to_bool())? ap_const_lv8_0: j5_0_i_reg_5909.read());
}

void HLS_accel::thread_j_0_i_mid2_fu_6108_p3() {
    j_0_i_mid2_fu_6108_p3 = (!exitcond4_i_fu_6102_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond4_i_fu_6102_p2.read()[0].to_bool())? ap_const_lv8_0: j_0_i_reg_5810.read());
}

void HLS_accel::thread_j_1_fu_6392_p2() {
    j_1_fu_6392_p2 = (!j2_0_i_mid2_fu_6260_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j2_0_i_mid2_fu_6260_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_j_2_fu_7400_p2() {
    j_2_fu_7400_p2 = (!j5_0_i_mid2_fu_7384_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j5_0_i_mid2_fu_7384_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_j_fu_6230_p2() {
    j_fu_6230_p2 = (!j_0_i_mid2_fu_6108_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_0_i_mid2_fu_6108_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_k_fu_7447_p2() {
    k_fu_7447_p2 = (!p_shl4_mid2_fu_7406_p3.read().is_01() || !tmp158_cast_fu_7443_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl4_mid2_fu_7406_p3.read()) + sc_biguint<15>(tmp158_cast_fu_7443_p1.read()));
}

void HLS_accel::thread_last_assign_fu_7467_p2() {
    last_assign_fu_7467_p2 = (!k_fu_7447_p2.read().is_01() || !ap_const_lv15_63FF.is_01())? sc_lv<1>(): sc_lv<1>(k_fu_7447_p2.read() == ap_const_lv15_63FF);
}

void HLS_accel::thread_out_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        out_address0 =  (sc_lv<15>) (tmp_161_cast_fu_7462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read()))) {
        out_address0 =  (sc_lv<15>) (tmp_23_cast_fu_7345_p1.read());
    } else {
        out_address0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void HLS_accel::thread_out_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read())))) {
        out_ce0 = ap_const_logic_1;
    } else {
        out_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_out_d0() {
    out_d0 = (!tmp_reg_11413.read().is_01() || !tmp79_fu_7350_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_reg_11413.read()) + sc_biguint<8>(tmp79_fu_7350_p2.read()));
}

void HLS_accel::thread_out_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_8075_pp2_iter4_reg.read()))) {
        out_we0 = ap_const_logic_1;
    } else {
        out_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_p_shl1_cast_fu_7326_p1() {
    p_shl1_cast_fu_7326_p1 = esl_zext<16,13>(tmp_17_fu_7319_p3.read());
}

void HLS_accel::thread_p_shl2_cast_fu_7420_p1() {
    p_shl2_cast_fu_7420_p1 = esl_zext<16,15>(p_shl4_mid2_fu_7406_p3.read());
}

void HLS_accel::thread_p_shl3_cast_fu_7424_p1() {
    p_shl3_cast_fu_7424_p1 = esl_zext<16,13>(p_shl5_mid2_fu_7413_p3.read());
}

void HLS_accel::thread_p_shl4_mid2_fu_7406_p3() {
    p_shl4_mid2_fu_7406_p3 = esl_concat<8,7>(p_shl4_mid2_v_v_reg_11443.read(), ap_const_lv7_0);
}

void HLS_accel::thread_p_shl4_mid2_v_v_fu_7392_p3() {
    p_shl4_mid2_v_v_fu_7392_p3 = (!exitcond_i_fu_7378_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond_i_fu_7378_p2.read()[0].to_bool())? i_2_fu_7372_p2.read(): ap_phi_mux_i4_0_i_phi_fu_5902_p4.read());
}

void HLS_accel::thread_p_shl5_mid2_fu_7413_p3() {
    p_shl5_mid2_fu_7413_p3 = esl_concat<8,5>(p_shl4_mid2_v_v_reg_11443.read(), ap_const_lv5_0);
}

void HLS_accel::thread_p_shl_cast_fu_7315_p1() {
    p_shl_cast_fu_7315_p1 = esl_zext<16,15>(tmp_16_fu_7308_p3.read());
}

void HLS_accel::thread_temp_100_fu_6908_p0() {
    temp_100_fu_6908_p0 = b_50_q1.read();
}

void HLS_accel::thread_temp_100_fu_6908_p1() {
    temp_100_fu_6908_p1 = a_50_q1.read();
}

void HLS_accel::thread_temp_100_fu_6908_p2() {
    temp_100_fu_6908_p2 = (!temp_100_fu_6908_p0.read().is_01() || !temp_100_fu_6908_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_100_fu_6908_p0.read()) * sc_bigint<8>(temp_100_fu_6908_p1.read());
}

void HLS_accel::thread_temp_103_fu_6914_p0() {
    temp_103_fu_6914_p0 = b_52_q0.read();
}

void HLS_accel::thread_temp_103_fu_6914_p1() {
    temp_103_fu_6914_p1 = a_52_q0.read();
}

void HLS_accel::thread_temp_103_fu_6914_p2() {
    temp_103_fu_6914_p2 = (!temp_103_fu_6914_p0.read().is_01() || !temp_103_fu_6914_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_103_fu_6914_p0.read()) * sc_bigint<8>(temp_103_fu_6914_p1.read());
}

void HLS_accel::thread_temp_105_fu_6920_p0() {
    temp_105_fu_6920_p0 = b_53_q0.read();
}

void HLS_accel::thread_temp_105_fu_6920_p1() {
    temp_105_fu_6920_p1 = a_53_q0.read();
}

void HLS_accel::thread_temp_105_fu_6920_p2() {
    temp_105_fu_6920_p2 = (!temp_105_fu_6920_p0.read().is_01() || !temp_105_fu_6920_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_105_fu_6920_p0.read()) * sc_bigint<8>(temp_105_fu_6920_p1.read());
}

void HLS_accel::thread_temp_108_fu_6926_p0() {
    temp_108_fu_6926_p0 = b_54_q1.read();
}

void HLS_accel::thread_temp_108_fu_6926_p1() {
    temp_108_fu_6926_p1 = a_54_q1.read();
}

void HLS_accel::thread_temp_108_fu_6926_p2() {
    temp_108_fu_6926_p2 = (!temp_108_fu_6926_p0.read().is_01() || !temp_108_fu_6926_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_108_fu_6926_p0.read()) * sc_bigint<8>(temp_108_fu_6926_p1.read());
}

void HLS_accel::thread_temp_10_fu_6674_p0() {
    temp_10_fu_6674_p0 = b_5_q1.read();
}

void HLS_accel::thread_temp_10_fu_6674_p1() {
    temp_10_fu_6674_p1 = a_5_q1.read();
}

void HLS_accel::thread_temp_10_fu_6674_p2() {
    temp_10_fu_6674_p2 = (!temp_10_fu_6674_p0.read().is_01() || !temp_10_fu_6674_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_10_fu_6674_p0.read()) * sc_bigint<8>(temp_10_fu_6674_p1.read());
}

void HLS_accel::thread_temp_110_fu_6932_p0() {
    temp_110_fu_6932_p0 = b_55_q1.read();
}

void HLS_accel::thread_temp_110_fu_6932_p1() {
    temp_110_fu_6932_p1 = a_55_q1.read();
}

void HLS_accel::thread_temp_110_fu_6932_p2() {
    temp_110_fu_6932_p2 = (!temp_110_fu_6932_p0.read().is_01() || !temp_110_fu_6932_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_110_fu_6932_p0.read()) * sc_bigint<8>(temp_110_fu_6932_p1.read());
}

void HLS_accel::thread_temp_113_fu_6938_p0() {
    temp_113_fu_6938_p0 = b_57_q0.read();
}

void HLS_accel::thread_temp_113_fu_6938_p1() {
    temp_113_fu_6938_p1 = a_57_q0.read();
}

void HLS_accel::thread_temp_113_fu_6938_p2() {
    temp_113_fu_6938_p2 = (!temp_113_fu_6938_p0.read().is_01() || !temp_113_fu_6938_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_113_fu_6938_p0.read()) * sc_bigint<8>(temp_113_fu_6938_p1.read());
}

void HLS_accel::thread_temp_115_fu_6944_p0() {
    temp_115_fu_6944_p0 = b_58_q0.read();
}

void HLS_accel::thread_temp_115_fu_6944_p1() {
    temp_115_fu_6944_p1 = a_58_q0.read();
}

void HLS_accel::thread_temp_115_fu_6944_p2() {
    temp_115_fu_6944_p2 = (!temp_115_fu_6944_p0.read().is_01() || !temp_115_fu_6944_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_115_fu_6944_p0.read()) * sc_bigint<8>(temp_115_fu_6944_p1.read());
}

void HLS_accel::thread_temp_118_fu_6950_p0() {
    temp_118_fu_6950_p0 = b_59_q1.read();
}

void HLS_accel::thread_temp_118_fu_6950_p1() {
    temp_118_fu_6950_p1 = a_59_q1.read();
}

void HLS_accel::thread_temp_118_fu_6950_p2() {
    temp_118_fu_6950_p2 = (!temp_118_fu_6950_p0.read().is_01() || !temp_118_fu_6950_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_118_fu_6950_p0.read()) * sc_bigint<8>(temp_118_fu_6950_p1.read());
}

void HLS_accel::thread_temp_120_fu_6788_p0() {
    temp_120_fu_6788_p0 = b_60_q1.read();
}

void HLS_accel::thread_temp_120_fu_6788_p1() {
    temp_120_fu_6788_p1 = a_60_q1.read();
}

void HLS_accel::thread_temp_120_fu_6788_p2() {
    temp_120_fu_6788_p2 = (!temp_120_fu_6788_p0.read().is_01() || !temp_120_fu_6788_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_120_fu_6788_p0.read()) * sc_bigint<8>(temp_120_fu_6788_p1.read());
}

void HLS_accel::thread_temp_123_fu_6794_p0() {
    temp_123_fu_6794_p0 = b_62_q0.read();
}

void HLS_accel::thread_temp_123_fu_6794_p1() {
    temp_123_fu_6794_p1 = a_62_q0.read();
}

void HLS_accel::thread_temp_123_fu_6794_p2() {
    temp_123_fu_6794_p2 = (!temp_123_fu_6794_p0.read().is_01() || !temp_123_fu_6794_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_123_fu_6794_p0.read()) * sc_bigint<8>(temp_123_fu_6794_p1.read());
}

void HLS_accel::thread_temp_125_fu_6956_p0() {
    temp_125_fu_6956_p0 = b_63_q0.read();
}

void HLS_accel::thread_temp_125_fu_6956_p1() {
    temp_125_fu_6956_p1 = a_63_q0.read();
}

void HLS_accel::thread_temp_125_fu_6956_p2() {
    temp_125_fu_6956_p2 = (!temp_125_fu_6956_p0.read().is_01() || !temp_125_fu_6956_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_125_fu_6956_p0.read()) * sc_bigint<8>(temp_125_fu_6956_p1.read());
}

void HLS_accel::thread_temp_128_fu_6800_p0() {
    temp_128_fu_6800_p0 = b_64_q1.read();
}

void HLS_accel::thread_temp_128_fu_6800_p1() {
    temp_128_fu_6800_p1 = a_64_q1.read();
}

void HLS_accel::thread_temp_128_fu_6800_p2() {
    temp_128_fu_6800_p2 = (!temp_128_fu_6800_p0.read().is_01() || !temp_128_fu_6800_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_128_fu_6800_p0.read()) * sc_bigint<8>(temp_128_fu_6800_p1.read());
}

void HLS_accel::thread_temp_130_fu_6962_p0() {
    temp_130_fu_6962_p0 = b_65_q1.read();
}

void HLS_accel::thread_temp_130_fu_6962_p1() {
    temp_130_fu_6962_p1 = a_65_q1.read();
}

void HLS_accel::thread_temp_130_fu_6962_p2() {
    temp_130_fu_6962_p2 = (!temp_130_fu_6962_p0.read().is_01() || !temp_130_fu_6962_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_130_fu_6962_p0.read()) * sc_bigint<8>(temp_130_fu_6962_p1.read());
}

void HLS_accel::thread_temp_133_fu_6968_p0() {
    temp_133_fu_6968_p0 = b_67_q0.read();
}

}

