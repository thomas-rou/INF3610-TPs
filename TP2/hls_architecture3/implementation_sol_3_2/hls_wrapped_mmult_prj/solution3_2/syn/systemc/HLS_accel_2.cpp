#include "HLS_accel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void HLS_accel::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        INPUT_STREAM_data_V_0_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_vld_out.read()))) {
            INPUT_STREAM_data_V_0_sel_rd =  (sc_logic) (~INPUT_STREAM_data_V_0_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        INPUT_STREAM_data_V_0_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_ack_in.read()))) {
            INPUT_STREAM_data_V_0_sel_wr =  (sc_logic) (~INPUT_STREAM_data_V_0_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        INPUT_STREAM_data_V_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_ack_out.read()) && 
              esl_seteq<1,2,2>(INPUT_STREAM_data_V_0_state.read(), ap_const_lv2_3)) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_in.read()) && 
              esl_seteq<1,2,2>(INPUT_STREAM_data_V_0_state.read(), ap_const_lv2_2)))) {
            INPUT_STREAM_data_V_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(INPUT_STREAM_data_V_0_state.read(), ap_const_lv2_3)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(INPUT_STREAM_data_V_0_state.read(), ap_const_lv2_1)))) {
            INPUT_STREAM_data_V_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(INPUT_STREAM_data_V_0_state.read(), ap_const_lv2_2)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(INPUT_STREAM_data_V_0_state.read(), ap_const_lv2_1)) || 
                    (esl_seteq<1,2,2>(INPUT_STREAM_data_V_0_state.read(), ap_const_lv2_3) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_ack_out.read()))))) {
            INPUT_STREAM_data_V_0_state = ap_const_lv2_3;
        } else {
            INPUT_STREAM_data_V_0_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        INPUT_STREAM_dest_V_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_dest_V_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_dest_V_0_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, INPUT_STREAM_dest_V_0_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_dest_V_0_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, INPUT_STREAM_dest_V_0_state.read())))) {
            INPUT_STREAM_dest_V_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_dest_V_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_dest_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, INPUT_STREAM_dest_V_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_dest_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, INPUT_STREAM_dest_V_0_state.read())))) {
            INPUT_STREAM_dest_V_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_dest_V_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, INPUT_STREAM_dest_V_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_dest_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, INPUT_STREAM_dest_V_0_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, INPUT_STREAM_dest_V_0_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_dest_V_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_dest_V_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_dest_V_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_dest_V_0_ack_out.read()))))) {
            INPUT_STREAM_dest_V_0_state = ap_const_lv2_3;
        } else {
            INPUT_STREAM_dest_V_0_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_data_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_vld_out.read()))) {
            OUTPUT_STREAM_data_V_1_sel_rd =  (sc_logic) (~OUTPUT_STREAM_data_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_data_V_1_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_ack_in.read()))) {
            OUTPUT_STREAM_data_V_1_sel_wr =  (sc_logic) (~OUTPUT_STREAM_data_V_1_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_data_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_data_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_data_V_1_state.read())))) {
            OUTPUT_STREAM_data_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_data_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_data_V_1_state.read())))) {
            OUTPUT_STREAM_data_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_data_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_data_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_data_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_ack_out.read()))))) {
            OUTPUT_STREAM_data_V_1_state = ap_const_lv2_3;
        } else {
            OUTPUT_STREAM_data_V_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_dest_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_dest_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_dest_V_1_vld_out.read()))) {
            OUTPUT_STREAM_dest_V_1_sel_rd =  (sc_logic) (~OUTPUT_STREAM_dest_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_dest_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_dest_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_dest_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_dest_V_1_state.read())))) {
            OUTPUT_STREAM_dest_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_dest_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_dest_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_dest_V_1_state.read())))) {
            OUTPUT_STREAM_dest_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_dest_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_dest_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_dest_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_dest_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_dest_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_dest_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_dest_V_1_ack_out.read()))))) {
            OUTPUT_STREAM_dest_V_1_state = ap_const_lv2_3;
        } else {
            OUTPUT_STREAM_dest_V_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_id_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_id_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_id_V_1_vld_out.read()))) {
            OUTPUT_STREAM_id_V_1_sel_rd =  (sc_logic) (~OUTPUT_STREAM_id_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_id_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_id_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_id_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_id_V_1_state.read())))) {
            OUTPUT_STREAM_id_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_id_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_id_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_id_V_1_state.read())))) {
            OUTPUT_STREAM_id_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_id_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_id_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_id_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_id_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_id_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_id_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_id_V_1_ack_out.read()))))) {
            OUTPUT_STREAM_id_V_1_state = ap_const_lv2_3;
        } else {
            OUTPUT_STREAM_id_V_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_keep_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_keep_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_keep_V_1_vld_out.read()))) {
            OUTPUT_STREAM_keep_V_1_sel_rd =  (sc_logic) (~OUTPUT_STREAM_keep_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_keep_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_keep_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_keep_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_keep_V_1_state.read())))) {
            OUTPUT_STREAM_keep_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_keep_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_keep_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_keep_V_1_state.read())))) {
            OUTPUT_STREAM_keep_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_keep_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_keep_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_keep_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_keep_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_keep_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_keep_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_keep_V_1_ack_out.read()))))) {
            OUTPUT_STREAM_keep_V_1_state = ap_const_lv2_3;
        } else {
            OUTPUT_STREAM_keep_V_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_last_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_vld_out.read()))) {
            OUTPUT_STREAM_last_V_1_sel_rd =  (sc_logic) (~OUTPUT_STREAM_last_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_last_V_1_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_ack_in.read()))) {
            OUTPUT_STREAM_last_V_1_sel_wr =  (sc_logic) (~OUTPUT_STREAM_last_V_1_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_last_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_last_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_last_V_1_state.read())))) {
            OUTPUT_STREAM_last_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_last_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_last_V_1_state.read())))) {
            OUTPUT_STREAM_last_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_last_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_last_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_last_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_ack_out.read()))))) {
            OUTPUT_STREAM_last_V_1_state = ap_const_lv2_3;
        } else {
            OUTPUT_STREAM_last_V_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_strb_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_strb_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_strb_V_1_vld_out.read()))) {
            OUTPUT_STREAM_strb_V_1_sel_rd =  (sc_logic) (~OUTPUT_STREAM_strb_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_strb_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_strb_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_strb_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_strb_V_1_state.read())))) {
            OUTPUT_STREAM_strb_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_strb_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_strb_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_strb_V_1_state.read())))) {
            OUTPUT_STREAM_strb_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_strb_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_strb_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_strb_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_strb_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_strb_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_strb_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_strb_V_1_ack_out.read()))))) {
            OUTPUT_STREAM_strb_V_1_state = ap_const_lv2_3;
        } else {
            OUTPUT_STREAM_strb_V_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_user_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_user_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_user_V_1_vld_out.read()))) {
            OUTPUT_STREAM_user_V_1_sel_rd =  (sc_logic) (~OUTPUT_STREAM_user_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        OUTPUT_STREAM_user_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_user_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_user_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_user_V_1_state.read())))) {
            OUTPUT_STREAM_user_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_user_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_user_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_user_V_1_state.read())))) {
            OUTPUT_STREAM_user_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_user_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, OUTPUT_STREAM_user_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_user_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, OUTPUT_STREAM_user_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, OUTPUT_STREAM_user_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_user_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_user_V_1_ack_out.read()))))) {
            OUTPUT_STREAM_user_V_1_state = ap_const_lv2_3;
        } else {
            OUTPUT_STREAM_user_V_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp2_exit_iter0_state6.read()))) {
            ap_enable_reg_pp2_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_enable_reg_pp2_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp2_exit_iter0_state6.read())) {
                ap_enable_reg_pp2_iter1 = (ap_condition_pp2_exit_iter0_state6.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp2_iter1 = ap_enable_reg_pp2_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp2_iter2 = ap_enable_reg_pp2_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp2_iter3 = ap_enable_reg_pp2_iter2.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp2_iter4 = ap_enable_reg_pp2_iter3.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp2_iter5 = ap_enable_reg_pp2_iter4.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
            ap_enable_reg_pp2_iter5 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp3_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp3_exit_iter0_state13.read()))) {
            ap_enable_reg_pp3_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
            ap_enable_reg_pp3_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp3_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp3_exit_iter0_state13.read())) {
                ap_enable_reg_pp3_iter1 = (ap_condition_pp3_exit_iter0_state13.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp3_iter1 = ap_enable_reg_pp3_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp3_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp3_iter2 = ap_enable_reg_pp3_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp3_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp3_iter3 = ap_enable_reg_pp3_iter2.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
            ap_enable_reg_pp3_iter3 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        i1_0_i_reg_5832 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
                !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())))) {
        i1_0_i_reg_5832 = arrayNo1_mid2_v_fu_6268_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        i4_0_i_reg_5898 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        i4_0_i_reg_5898 = p_shl4_mid2_v_v_reg_11443.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())))) {
        i_0_i_reg_5799 = tmp_1_mid2_v_fu_6116_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_i_reg_5799 = ap_const_lv8_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ia_0_i_i_reg_5865 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_8075.read()))) {
        ia_0_i_i_reg_5865 = tmp_8_mid2_v_reg_8089.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ib_0_i_i_reg_5876 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_6420_p2.read()))) {
        ib_0_i_i_reg_5876 = ib_fu_6644_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        indvar_flatten1_reg_5854 = ap_const_lv15_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_6420_p2.read()))) {
        indvar_flatten1_reg_5854 = indvar_flatten_next1_fu_6426_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        indvar_flatten2_reg_5887 = ap_const_lv15_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_fu_7360_p2.read()))) {
        indvar_flatten2_reg_5887 = indvar_flatten_next2_fu_7366_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        indvar_flatten6_reg_5821 = ap_const_lv15_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
                !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())))) {
        indvar_flatten6_reg_5821 = indvar_flatten_next7_fu_6242_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())))) {
        indvar_flatten_reg_5788 = indvar_flatten_next_fu_6090_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_5788 = ap_const_lv15_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j2_0_i_reg_5843 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && 
                !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())))) {
        j2_0_i_reg_5843 = j_1_fu_6392_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        j5_0_i_reg_5909 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_fu_7360_p2.read()))) {
        j5_0_i_reg_5909 = j_2_fu_7400_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())))) {
        j_0_i_reg_5810 = j_fu_6230_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        j_0_i_reg_5810 = ap_const_lv8_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_load_A.read())) {
        INPUT_STREAM_data_V_0_payload_A = INPUT_STREAM_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, INPUT_STREAM_data_V_0_load_B.read())) {
        INPUT_STREAM_data_V_0_payload_B = INPUT_STREAM_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_load_A.read())) {
        OUTPUT_STREAM_data_V_1_payload_A = out_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_data_V_1_load_B.read())) {
        OUTPUT_STREAM_data_V_1_payload_B = out_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_load_A.read())) {
        OUTPUT_STREAM_last_V_1_payload_A = last_assign_reg_11460.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_STREAM_last_V_1_load_B.read())) {
        OUTPUT_STREAM_last_V_1_payload_B = last_assign_reg_11460.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_6420_p2.read()))) {
        a_0_load_1_mid2_reg_8151 = a_0_load_1_mid2_fu_6528_p3.read();
        a_0_load_mid2_reg_8096 = a_0_load_mid2_fu_6490_p1.read();
        ib_0_i_i_mid2_reg_8084 = ib_0_i_i_mid2_fu_6444_p3.read();
        tmp_22_cast_reg_8567 = tmp_22_cast_fu_6612_p1.read();
        tmp_5_reg_8512 = tmp_5_fu_6564_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_8075.read()))) {
        a_0_load_reg_8933 = a_0_q0.read();
        a_10_load_reg_8993 = a_10_q0.read();
        a_11_load_1_reg_9003 = a_11_q1.read();
        a_11_load_reg_8998 = a_11_q0.read();
        a_14_load_reg_9023 = a_14_q0.read();
        a_15_load_reg_9028 = a_15_q0.read();
        a_16_load_1_reg_9038 = a_16_q1.read();
        a_16_load_reg_9033 = a_16_q0.read();
        a_19_load_reg_9058 = a_19_q0.read();
        a_1_load_1_reg_8943 = a_1_q1.read();
        a_1_load_reg_8938 = a_1_q0.read();
        a_20_load_reg_9063 = a_20_q0.read();
        a_21_load_1_reg_9073 = a_21_q1.read();
        a_21_load_reg_9068 = a_21_q0.read();
        a_24_load_reg_9093 = a_24_q0.read();
        a_2_load_1_reg_8948 = a_2_q1.read();
        a_30_load_reg_9148 = a_30_q0.read();
        a_31_load_1_reg_9158 = a_31_q1.read();
        a_31_load_reg_9153 = a_31_q0.read();
        a_34_load_reg_9178 = a_34_q0.read();
        a_3_load_1_reg_8953 = a_3_q1.read();
        a_40_load_reg_9233 = a_40_q0.read();
        a_41_load_1_reg_9243 = a_41_q1.read();
        a_41_load_reg_9238 = a_41_q0.read();
        a_44_load_reg_9263 = a_44_q0.read();
        a_4_load_reg_8958 = a_4_q0.read();
        a_5_load_reg_8963 = a_5_q0.read();
        a_60_load_reg_9418 = a_60_q0.read();
        a_61_load_1_reg_9428 = a_61_q1.read();
        a_61_load_reg_9423 = a_61_q0.read();
        a_64_load_reg_9448 = a_64_q0.read();
        a_6_load_1_reg_8973 = a_6_q1.read();
        a_6_load_reg_8968 = a_6_q0.read();
        a_7_load_1_reg_8978 = a_7_q1.read();
        a_8_load_1_reg_8983 = a_8_q1.read();
        a_9_load_reg_8988 = a_9_q0.read();
        b_0_load_reg_10093 = b_0_q0.read();
        b_10_load_reg_10193 = b_10_q0.read();
        b_11_load_1_reg_10208 = b_11_q1.read();
        b_11_load_reg_10203 = b_11_q0.read();
        b_14_load_reg_10218 = b_14_q0.read();
        b_15_load_reg_10228 = b_15_q0.read();
        b_16_load_1_reg_10243 = b_16_q1.read();
        b_16_load_reg_10238 = b_16_q0.read();
        b_19_load_reg_10253 = b_19_q0.read();
        b_1_load_1_reg_10108 = b_1_q1.read();
        b_1_load_reg_10103 = b_1_q0.read();
        b_20_load_reg_10263 = b_20_q0.read();
        b_21_load_1_reg_10278 = b_21_q1.read();
        b_21_load_reg_10273 = b_21_q0.read();
        b_24_load_reg_10288 = b_24_q0.read();
        b_2_load_1_reg_10118 = b_2_q1.read();
        b_30_load_reg_10298 = b_30_q0.read();
        b_31_load_1_reg_10313 = b_31_q1.read();
        b_31_load_reg_10308 = b_31_q0.read();
        b_34_load_reg_10323 = b_34_q0.read();
        b_3_load_1_reg_10128 = b_3_q1.read();
        b_40_load_reg_10333 = b_40_q0.read();
        b_41_load_1_reg_10348 = b_41_q1.read();
        b_41_load_reg_10343 = b_41_q0.read();
        b_44_load_reg_10358 = b_44_q0.read();
        b_4_load_reg_10133 = b_4_q0.read();
        b_5_load_reg_10143 = b_5_q0.read();
        b_60_load_reg_10368 = b_60_q0.read();
        b_61_load_1_reg_10383 = b_61_q1.read();
        b_61_load_reg_10378 = b_61_q0.read();
        b_64_load_reg_10393 = b_64_q0.read();
        b_6_load_1_reg_10158 = b_6_q1.read();
        b_6_load_reg_10153 = b_6_q0.read();
        b_7_load_1_reg_10168 = b_7_q1.read();
        b_8_load_1_reg_10178 = b_8_q1.read();
        b_9_load_reg_10183 = b_9_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_8075_pp2_iter1_reg.read()))) {
        a_12_load_1_reg_10403 = a_12_q1.read();
        a_13_load_1_reg_10408 = a_13_q1.read();
        a_17_load_1_reg_10413 = a_17_q1.read();
        a_18_load_1_reg_10418 = a_18_q1.read();
        a_22_load_1_reg_10423 = a_22_q1.read();
        a_23_load_1_reg_10428 = a_23_q1.read();
        a_25_load_reg_10433 = a_25_q0.read();
        a_26_load_1_reg_10443 = a_26_q1.read();
        a_26_load_reg_10438 = a_26_q0.read();
        a_27_load_1_reg_10448 = a_27_q1.read();
        a_28_load_1_reg_10453 = a_28_q1.read();
        a_29_load_reg_10458 = a_29_q0.read();
        a_32_load_1_reg_10463 = a_32_q1.read();
        a_33_load_1_reg_10468 = a_33_q1.read();
        a_35_load_reg_10473 = a_35_q0.read();
        a_36_load_1_reg_10483 = a_36_q1.read();
        a_36_load_reg_10478 = a_36_q0.read();
        a_37_load_1_reg_10488 = a_37_q1.read();
        a_38_load_1_reg_10493 = a_38_q1.read();
        a_39_load_reg_10498 = a_39_q0.read();
        a_42_load_1_reg_10503 = a_42_q1.read();
        a_43_load_1_reg_10508 = a_43_q1.read();
        a_45_load_reg_10513 = a_45_q0.read();
        a_46_load_1_reg_10523 = a_46_q1.read();
        a_46_load_reg_10518 = a_46_q0.read();
        a_47_load_1_reg_10528 = a_47_q1.read();
        a_48_load_1_reg_10533 = a_48_q1.read();
        a_49_load_reg_10538 = a_49_q0.read();
        a_50_load_reg_10543 = a_50_q0.read();
        a_51_load_1_reg_10553 = a_51_q1.read();
        a_51_load_reg_10548 = a_51_q0.read();
        a_52_load_1_reg_10558 = a_52_q1.read();
        a_53_load_1_reg_10563 = a_53_q1.read();
        a_54_load_reg_10568 = a_54_q0.read();
        a_55_load_reg_10573 = a_55_q0.read();
        a_56_load_1_reg_10583 = a_56_q1.read();
        a_56_load_reg_10578 = a_56_q0.read();
        a_57_load_1_reg_10588 = a_57_q1.read();
        a_58_load_1_reg_10593 = a_58_q1.read();
        a_59_load_reg_10598 = a_59_q0.read();
        a_62_load_1_reg_10603 = a_62_q1.read();
        a_63_load_1_reg_10608 = a_63_q1.read();
        a_65_load_reg_10613 = a_65_q0.read();
        a_66_load_1_reg_10623 = a_66_q1.read();
        a_66_load_reg_10618 = a_66_q0.read();
        a_67_load_1_reg_10628 = a_67_q1.read();
        a_68_load_1_reg_10633 = a_68_q1.read();
        a_69_load_reg_10638 = a_69_q0.read();
        a_70_load_reg_10643 = a_70_q0.read();
        a_71_load_1_reg_10653 = a_71_q1.read();
        a_71_load_reg_10648 = a_71_q0.read();
        a_72_load_1_reg_10658 = a_72_q1.read();
        a_73_load_1_reg_10663 = a_73_q1.read();
        a_74_load_reg_10668 = a_74_q0.read();
        a_75_load_reg_10673 = a_75_q0.read();
        a_76_load_1_reg_10683 = a_76_q1.read();
        a_76_load_reg_10678 = a_76_q0.read();
        a_77_load_1_reg_10688 = a_77_q1.read();
        a_78_load_1_reg_10693 = a_78_q1.read();
        a_79_load_reg_10698 = a_79_q0.read();
        b_12_load_1_reg_10703 = b_12_q1.read();
        b_13_load_1_reg_10713 = b_13_q1.read();
        b_17_load_1_reg_10718 = b_17_q1.read();
        b_18_load_1_reg_10728 = b_18_q1.read();
        b_22_load_1_reg_10733 = b_22_q1.read();
        b_23_load_1_reg_10743 = b_23_q1.read();
        b_25_load_reg_10748 = b_25_q0.read();
        b_26_load_1_reg_10763 = b_26_q1.read();
        b_26_load_reg_10758 = b_26_q0.read();
        b_27_load_1_reg_10773 = b_27_q1.read();
        b_28_load_1_reg_10783 = b_28_q1.read();
        b_29_load_reg_10788 = b_29_q0.read();
        b_32_load_1_reg_10798 = b_32_q1.read();
        b_33_load_1_reg_10808 = b_33_q1.read();
        b_35_load_reg_10813 = b_35_q0.read();
        b_36_load_1_reg_10828 = b_36_q1.read();
        b_36_load_reg_10823 = b_36_q0.read();
        b_37_load_1_reg_10838 = b_37_q1.read();
        b_38_load_1_reg_10848 = b_38_q1.read();
        b_39_load_reg_10853 = b_39_q0.read();
        b_42_load_1_reg_10863 = b_42_q1.read();
        b_43_load_1_reg_10873 = b_43_q1.read();
        b_45_load_reg_10878 = b_45_q0.read();
        b_46_load_1_reg_10893 = b_46_q1.read();
        b_46_load_reg_10888 = b_46_q0.read();
        b_47_load_1_reg_10903 = b_47_q1.read();
        b_48_load_1_reg_10913 = b_48_q1.read();
        b_49_load_reg_10918 = b_49_q0.read();
        b_50_load_reg_10928 = b_50_q0.read();
        b_51_load_1_reg_10943 = b_51_q1.read();
        b_51_load_reg_10938 = b_51_q0.read();
        b_52_load_1_reg_10953 = b_52_q1.read();
        b_53_load_1_reg_10963 = b_53_q1.read();
        b_54_load_reg_10968 = b_54_q0.read();
        b_55_load_reg_10978 = b_55_q0.read();
        b_56_load_1_reg_10993 = b_56_q1.read();
        b_56_load_reg_10988 = b_56_q0.read();
        b_57_load_1_reg_11003 = b_57_q1.read();
        b_58_load_1_reg_11013 = b_58_q1.read();
        b_59_load_reg_11018 = b_59_q0.read();
        b_62_load_1_reg_11028 = b_62_q1.read();
        b_63_load_1_reg_11038 = b_63_q1.read();
        b_65_load_reg_11043 = b_65_q0.read();
        b_66_load_1_reg_11058 = b_66_q1.read();
        b_66_load_reg_11053 = b_66_q0.read();
        b_67_load_1_reg_11068 = b_67_q1.read();
        b_68_load_1_reg_11078 = b_68_q1.read();
        b_69_load_reg_11083 = b_69_q0.read();
        b_70_load_reg_11093 = b_70_q0.read();
        b_71_load_1_reg_11108 = b_71_q1.read();
        b_71_load_reg_11103 = b_71_q0.read();
        b_72_load_1_reg_11118 = b_72_q1.read();
        b_73_load_1_reg_11128 = b_73_q1.read();
        b_74_load_reg_11133 = b_74_q0.read();
        b_75_load_reg_11143 = b_75_q0.read();
        b_76_load_1_reg_11158 = b_76_q1.read();
        b_76_load_reg_11153 = b_76_q0.read();
        b_77_load_1_reg_11168 = b_77_q1.read();
        b_78_load_1_reg_11178 = b_78_q1.read();
        b_79_load_reg_11183 = b_79_q0.read();
        tmp10_reg_11203 = grp_fu_7496_p3.read();
        tmp129_reg_11273 = grp_fu_7676_p3.read();
        tmp30_reg_11223 = grp_fu_7561_p3.read();
        tmp39_reg_11233 = grp_fu_7584_p3.read();
        tmp50_reg_11243 = grp_fu_7607_p3.read();
        tmp69_reg_11253 = grp_fu_7630_p3.read();
        tmp90_reg_11263 = grp_fu_7653_p3.read();
        tmp9_reg_11198 = grp_fu_7491_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond_flatten1_reg_8075 = exitcond_flatten1_fu_6420_p2.read();
        exitcond_flatten1_reg_8075_pp2_iter1_reg = exitcond_flatten1_reg_8075.read();
        ib_0_i_i_mid2_reg_8084_pp2_iter1_reg = ib_0_i_i_mid2_reg_8084.read();
        tmp_8_mid2_v_reg_8089_pp2_iter1_reg = tmp_8_mid2_v_reg_8089.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) {
        exitcond_flatten1_reg_8075_pp2_iter2_reg = exitcond_flatten1_reg_8075_pp2_iter1_reg.read();
        exitcond_flatten1_reg_8075_pp2_iter3_reg = exitcond_flatten1_reg_8075_pp2_iter2_reg.read();
        exitcond_flatten1_reg_8075_pp2_iter4_reg = exitcond_flatten1_reg_8075_pp2_iter3_reg.read();
        ib_0_i_i_mid2_reg_8084_pp2_iter2_reg = ib_0_i_i_mid2_reg_8084_pp2_iter1_reg.read();
        ib_0_i_i_mid2_reg_8084_pp2_iter3_reg = ib_0_i_i_mid2_reg_8084_pp2_iter2_reg.read();
        ib_0_i_i_mid2_reg_8084_pp2_iter4_reg = ib_0_i_i_mid2_reg_8084_pp2_iter3_reg.read();
        tmp_8_mid2_v_reg_8089_pp2_iter2_reg = tmp_8_mid2_v_reg_8089_pp2_iter1_reg.read();
        tmp_8_mid2_v_reg_8089_pp2_iter3_reg = tmp_8_mid2_v_reg_8089_pp2_iter2_reg.read();
        tmp_8_mid2_v_reg_8089_pp2_iter4_reg = tmp_8_mid2_v_reg_8089_pp2_iter3_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond_flatten2_reg_11428 = exitcond_flatten2_fu_7360_p2.read();
        exitcond_flatten2_reg_11428_pp3_iter1_reg = exitcond_flatten2_reg_11428.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) {
        exitcond_flatten2_reg_11428_pp3_iter2_reg = exitcond_flatten2_reg_11428_pp3_iter1_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_fu_7360_p2.read()))) {
        j5_0_i_mid2_reg_11437 = j5_0_i_mid2_fu_7384_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_11428.read()))) {
        last_assign_reg_11460 = last_assign_fu_7467_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_fu_7360_p2.read()))) {
        p_shl4_mid2_v_v_reg_11443 = p_shl4_mid2_v_v_fu_7392_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_8075_pp2_iter1_reg.read()))) {
        temp_100_reg_10933 = temp_100_fu_6908_p2.read();
        temp_103_reg_10948 = temp_103_fu_6914_p2.read();
        temp_105_reg_10958 = temp_105_fu_6920_p2.read();
        temp_108_reg_10973 = temp_108_fu_6926_p2.read();
        temp_110_reg_10983 = temp_110_fu_6932_p2.read();
        temp_113_reg_10998 = temp_113_fu_6938_p2.read();
        temp_115_reg_11008 = temp_115_fu_6944_p2.read();
        temp_118_reg_11023 = temp_118_fu_6950_p2.read();
        temp_125_reg_11033 = temp_125_fu_6956_p2.read();
        temp_130_reg_11048 = temp_130_fu_6962_p2.read();
        temp_133_reg_11063 = temp_133_fu_6968_p2.read();
        temp_135_reg_11073 = temp_135_fu_6974_p2.read();
        temp_138_reg_11088 = temp_138_fu_6980_p2.read();
        temp_140_reg_11098 = temp_140_fu_6986_p2.read();
        temp_143_reg_11113 = temp_143_fu_6992_p2.read();
        temp_145_reg_11123 = temp_145_fu_6998_p2.read();
        temp_148_reg_11138 = temp_148_fu_7004_p2.read();
        temp_150_reg_11148 = temp_150_fu_7010_p2.read();
        temp_153_reg_11163 = temp_153_fu_7016_p2.read();
        temp_155_reg_11173 = temp_155_fu_7022_p2.read();
        temp_158_reg_11188 = temp_158_fu_7028_p2.read();
        temp_25_reg_10708 = temp_25_fu_6806_p2.read();
        temp_35_reg_10723 = temp_35_fu_6812_p2.read();
        temp_45_reg_10738 = temp_45_fu_6818_p2.read();
        temp_50_reg_10753 = temp_50_fu_6824_p2.read();
        temp_53_reg_10768 = temp_53_fu_6830_p2.read();
        temp_55_reg_10778 = temp_55_fu_6836_p2.read();
        temp_58_reg_10793 = temp_58_fu_6842_p2.read();
        temp_65_reg_10803 = temp_65_fu_6848_p2.read();
        temp_70_reg_10818 = temp_70_fu_6854_p2.read();
        temp_73_reg_10833 = temp_73_fu_6860_p2.read();
        temp_75_reg_10843 = temp_75_fu_6866_p2.read();
        temp_78_reg_10858 = temp_78_fu_6872_p2.read();
        temp_85_reg_10868 = temp_85_fu_6878_p2.read();
        temp_90_reg_10883 = temp_90_fu_6884_p2.read();
        temp_93_reg_10898 = temp_93_fu_6890_p2.read();
        temp_95_reg_10908 = temp_95_fu_6896_p2.read();
        temp_98_reg_10923 = temp_98_fu_6902_p2.read();
        tmp122_reg_11268 = tmp122_fu_7066_p2.read();
        tmp13_reg_11208 = tmp13_fu_7038_p2.read();
        tmp17_reg_11213 = tmp17_fu_7042_p2.read();
        tmp23_reg_11218 = tmp23_fu_7046_p2.read();
        tmp32_reg_11228 = tmp32_fu_7050_p2.read();
        tmp43_reg_11238 = tmp43_fu_7054_p2.read();
        tmp4_reg_11193 = tmp4_fu_7034_p2.read();
        tmp62_reg_11248 = tmp62_fu_7058_p2.read();
        tmp83_reg_11258 = tmp83_fu_7062_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_8075.read()))) {
        temp_10_reg_10148 = temp_10_fu_6674_p2.read();
        temp_120_reg_10373 = temp_120_fu_6788_p2.read();
        temp_123_reg_10388 = temp_123_fu_6794_p2.read();
        temp_128_reg_10398 = temp_128_fu_6800_p2.read();
        temp_13_reg_10163 = temp_13_fu_6680_p2.read();
        temp_15_reg_10173 = temp_15_fu_6686_p2.read();
        temp_18_reg_10188 = temp_18_fu_6692_p2.read();
        temp_1_reg_10098 = temp_1_fu_6650_p2.read();
        temp_20_reg_10198 = temp_20_fu_6698_p2.read();
        temp_23_reg_10213 = temp_23_fu_6704_p2.read();
        temp_28_reg_10223 = temp_28_fu_6710_p2.read();
        temp_30_reg_10233 = temp_30_fu_6716_p2.read();
        temp_33_reg_10248 = temp_33_fu_6722_p2.read();
        temp_38_reg_10258 = temp_38_fu_6728_p2.read();
        temp_40_reg_10268 = temp_40_fu_6734_p2.read();
        temp_43_reg_10283 = temp_43_fu_6740_p2.read();
        temp_48_reg_10293 = temp_48_fu_6746_p2.read();
        temp_4_reg_10113 = temp_4_fu_6656_p2.read();
        temp_60_reg_10303 = temp_60_fu_6752_p2.read();
        temp_63_reg_10318 = temp_63_fu_6758_p2.read();
        temp_68_reg_10328 = temp_68_fu_6764_p2.read();
        temp_6_reg_10123 = temp_6_fu_6662_p2.read();
        temp_80_reg_10338 = temp_80_fu_6770_p2.read();
        temp_83_reg_10353 = temp_83_fu_6776_p2.read();
        temp_88_reg_10363 = temp_88_fu_6782_p2.read();
        temp_9_reg_10138 = temp_9_fu_6668_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_8075_pp2_iter2_reg.read()))) {
        tmp102_reg_11338 = tmp102_fu_7158_p2.read();
        tmp111_reg_11353 = tmp111_fu_7162_p2.read();
        tmp121_reg_11368 = tmp121_fu_7170_p2.read();
        tmp131_reg_11373 = tmp131_fu_7175_p2.read();
        tmp135_reg_11378 = tmp135_fu_7179_p2.read();
        tmp141_reg_11383 = tmp141_fu_7183_p2.read();
        tmp150_reg_11398 = tmp150_fu_7187_p2.read();
        tmp22_reg_11283 = tmp22_fu_7093_p2.read();
        tmp2_reg_11278 = tmp2_fu_7083_p2.read();
        tmp31_reg_11288 = tmp31_fu_7102_p2.read();
        tmp42_reg_11293 = tmp42_fu_7111_p2.read();
        tmp52_reg_11298 = tmp52_fu_7116_p2.read();
        tmp56_reg_11303 = tmp56_fu_7120_p2.read();
        tmp61_reg_11308 = tmp61_fu_7128_p2.read();
        tmp71_reg_11313 = tmp71_fu_7133_p2.read();
        tmp75_reg_11318 = tmp75_fu_7137_p2.read();
        tmp82_reg_11323 = tmp82_fu_7145_p2.read();
        tmp92_reg_11328 = tmp92_fu_7150_p2.read();
        tmp96_reg_11333 = tmp96_fu_7154_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_8075_pp2_iter2_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()))) {
        tmp107_reg_11343 = grp_fu_7867_p3.read();
        tmp108_reg_11348 = grp_fu_7872_p3.read();
        tmp116_reg_11358 = grp_fu_7901_p3.read();
        tmp117_reg_11363 = grp_fu_7906_p3.read();
        tmp146_reg_11388 = grp_fu_7983_p3.read();
        tmp147_reg_11393 = grp_fu_7988_p3.read();
        tmp155_reg_11403 = grp_fu_8017_p3.read();
        tmp156_reg_11408 = grp_fu_8022_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_8075_pp2_iter3_reg.read()))) {
        tmp119_reg_11423 = tmp119_fu_7302_p2.read();
        tmp80_reg_11418 = tmp80_fu_7263_p2.read();
        tmp_reg_11413 = tmp_fu_7224_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_6420_p2.read()))) {
        tmp_8_mid2_v_reg_8089 = tmp_8_mid2_v_fu_6474_p3.read();
    }
}

void HLS_accel::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_6084_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten_fu_6084_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_6236_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten8_fu_6236_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            break;
        case 32 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter4.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten1_fu_6420_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter5.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp2_iter4.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten1_fu_6420_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state12;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_pp3_stage0;
            break;
        case 128 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp3_iter2.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten2_fu_7360_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp3_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp3_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
  esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp3_iter2.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp3_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten2_fu_7360_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp3_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state17;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp3_stage0;
            }
            break;
        case 256 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_state.read()[0]) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_state.read()[0]) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_state.read()[0]) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_state.read()[0]) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_state.read()[0]) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_state.read()[0]) && esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_state.read()[0]) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_last_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_id_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_STREAM_dest_V_1_ack_in.read())))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state17;
            }
            break;
        default : 
            ap_NS_fsm = "XXXXXXXXX";
            break;
    }
}

}

