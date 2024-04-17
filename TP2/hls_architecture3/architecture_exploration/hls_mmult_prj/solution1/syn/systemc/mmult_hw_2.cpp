#include "mmult_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mmult_hw::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter5 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_5914.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        ia_reg_4408 = tmp_mid2_v_reg_5928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        ia_reg_4408 = ap_const_lv8_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_fu_4430_p2.read(), ap_const_lv1_0))) {
        ib_reg_4419 = ib_1_fu_4638_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        ib_reg_4419 = ap_const_lv8_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_fu_4430_p2.read(), ap_const_lv1_0))) {
        indvar_flatten_reg_4397 = indvar_flatten_next_fu_4436_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_4397 = ap_const_lv15_0;
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten_reg_5914_pp0_iter1_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        a_0_load_1_reg_8247 = a_0_q1.read();
        a_10_load_1_reg_8407 = a_10_q1.read();
        a_11_load_reg_8417 = a_11_q0.read();
        a_12_load_reg_8432 = a_12_q0.read();
        a_13_load_1_reg_8457 = a_13_q1.read();
        a_13_load_reg_8447 = a_13_q0.read();
        a_14_load_1_reg_8472 = a_14_q1.read();
        a_15_load_1_reg_8487 = a_15_q1.read();
        a_16_load_reg_8497 = a_16_q1.read();
        a_1_load_reg_8257 = a_1_q0.read();
        a_20_load_1_reg_8512 = a_20_q1.read();
        a_21_load_reg_8522 = a_21_q0.read();
        a_22_load_reg_8537 = a_22_q0.read();
        a_23_load_1_reg_8562 = a_23_q1.read();
        a_23_load_reg_8552 = a_23_q0.read();
        a_24_load_1_reg_8577 = a_24_q1.read();
        a_25_load_1_reg_8592 = a_25_q1.read();
        a_26_load_reg_8602 = a_26_q0.read();
        a_27_load_reg_8617 = a_27_q0.read();
        a_28_load_1_reg_8642 = a_28_q1.read();
        a_28_load_reg_8632 = a_28_q0.read();
        a_29_load_1_reg_8657 = a_29_q1.read();
        a_2_load_reg_8272 = a_2_q0.read();
        a_30_load_1_reg_8672 = a_30_q1.read();
        a_31_load_reg_8682 = a_31_q0.read();
        a_32_load_reg_8697 = a_32_q0.read();
        a_33_load_1_reg_8722 = a_33_q1.read();
        a_33_load_reg_8712 = a_33_q0.read();
        a_34_load_1_reg_8737 = a_34_q1.read();
        a_35_load_1_reg_8752 = a_35_q1.read();
        a_36_load_reg_8762 = a_36_q1.read();
        a_3_load_1_reg_8297 = a_3_q1.read();
        a_3_load_reg_8287 = a_3_q0.read();
        a_40_load_1_reg_8777 = a_40_q1.read();
        a_41_load_reg_8787 = a_41_q0.read();
        a_42_load_reg_8802 = a_42_q0.read();
        a_43_load_1_reg_8827 = a_43_q1.read();
        a_43_load_reg_8817 = a_43_q0.read();
        a_44_load_1_reg_8842 = a_44_q1.read();
        a_45_load_1_reg_8857 = a_45_q1.read();
        a_46_load_reg_8867 = a_46_q1.read();
        a_4_load_1_reg_8312 = a_4_q1.read();
        a_50_load_1_reg_8882 = a_50_q1.read();
        a_51_load_reg_8892 = a_51_q0.read();
        a_52_load_reg_8907 = a_52_q0.read();
        a_53_load_1_reg_8932 = a_53_q1.read();
        a_53_load_reg_8922 = a_53_q0.read();
        a_54_load_1_reg_8947 = a_54_q1.read();
        a_55_load_1_reg_8962 = a_55_q1.read();
        a_56_load_reg_8972 = a_56_q1.read();
        a_5_load_1_reg_8327 = a_5_q1.read();
        a_60_load_1_reg_8987 = a_60_q1.read();
        a_61_load_reg_8997 = a_61_q1.read();
        a_65_load_1_reg_9012 = a_65_q1.read();
        a_66_load_reg_9022 = a_66_q1.read();
        a_6_load_reg_8337 = a_6_q0.read();
        a_7_load_reg_8352 = a_7_q0.read();
        a_8_load_1_reg_8377 = a_8_q1.read();
        a_8_load_reg_8367 = a_8_q0.read();
        a_9_load_1_reg_8392 = a_9_q1.read();
        b_0_load_1_reg_8252 = b_0_q1.read();
        b_10_load_1_reg_8412 = b_10_q1.read();
        b_11_load_reg_8422 = b_11_q0.read();
        b_12_load_reg_8437 = b_12_q0.read();
        b_13_load_1_reg_8462 = b_13_q1.read();
        b_13_load_reg_8452 = b_13_q0.read();
        b_14_load_1_reg_8477 = b_14_q1.read();
        b_15_load_1_reg_8492 = b_15_q1.read();
        b_16_load_reg_8502 = b_16_q1.read();
        b_1_load_reg_8262 = b_1_q0.read();
        b_20_load_1_reg_8517 = b_20_q1.read();
        b_21_load_reg_8527 = b_21_q0.read();
        b_22_load_reg_8542 = b_22_q0.read();
        b_23_load_1_reg_8567 = b_23_q1.read();
        b_23_load_reg_8557 = b_23_q0.read();
        b_24_load_1_reg_8582 = b_24_q1.read();
        b_25_load_1_reg_8597 = b_25_q1.read();
        b_26_load_reg_8607 = b_26_q0.read();
        b_27_load_reg_8622 = b_27_q0.read();
        b_28_load_1_reg_8647 = b_28_q1.read();
        b_28_load_reg_8637 = b_28_q0.read();
        b_29_load_1_reg_8662 = b_29_q1.read();
        b_2_load_reg_8277 = b_2_q0.read();
        b_30_load_1_reg_8677 = b_30_q1.read();
        b_31_load_reg_8687 = b_31_q0.read();
        b_32_load_reg_8702 = b_32_q0.read();
        b_33_load_1_reg_8727 = b_33_q1.read();
        b_33_load_reg_8717 = b_33_q0.read();
        b_34_load_1_reg_8742 = b_34_q1.read();
        b_35_load_1_reg_8757 = b_35_q1.read();
        b_36_load_reg_8767 = b_36_q1.read();
        b_3_load_1_reg_8302 = b_3_q1.read();
        b_3_load_reg_8292 = b_3_q0.read();
        b_40_load_1_reg_8782 = b_40_q1.read();
        b_41_load_reg_8792 = b_41_q0.read();
        b_42_load_reg_8807 = b_42_q0.read();
        b_43_load_1_reg_8832 = b_43_q1.read();
        b_43_load_reg_8822 = b_43_q0.read();
        b_44_load_1_reg_8847 = b_44_q1.read();
        b_45_load_1_reg_8862 = b_45_q1.read();
        b_46_load_reg_8872 = b_46_q1.read();
        b_4_load_1_reg_8317 = b_4_q1.read();
        b_50_load_1_reg_8887 = b_50_q1.read();
        b_51_load_reg_8897 = b_51_q0.read();
        b_52_load_reg_8912 = b_52_q0.read();
        b_53_load_1_reg_8937 = b_53_q1.read();
        b_53_load_reg_8927 = b_53_q0.read();
        b_54_load_1_reg_8952 = b_54_q1.read();
        b_55_load_1_reg_8967 = b_55_q1.read();
        b_56_load_reg_8977 = b_56_q1.read();
        b_5_load_1_reg_8332 = b_5_q1.read();
        b_60_load_1_reg_8992 = b_60_q1.read();
        b_61_load_reg_9002 = b_61_q1.read();
        b_65_load_1_reg_9017 = b_65_q1.read();
        b_66_load_reg_9027 = b_66_q1.read();
        b_6_load_reg_8342 = b_6_q0.read();
        b_7_load_reg_8357 = b_7_q0.read();
        b_8_load_1_reg_8382 = b_8_q1.read();
        b_8_load_reg_8372 = b_8_q0.read();
        b_9_load_1_reg_8397 = b_9_q1.read();
        tmp115_reg_9062 = grp_fu_5423_p3.read();
        tmp126_reg_9072 = grp_fu_5446_p3.read();
        tmp135_reg_9082 = grp_fu_5469_p3.read();
        tmp152_reg_9102 = grp_fu_5528_p3.read();
        tmp153_reg_9107 = grp_fu_5533_p3.read();
        tmp36_reg_9032 = grp_fu_5354_p3.read();
        tmp75_reg_9042 = grp_fu_5377_p3.read();
        tmp96_reg_9052 = grp_fu_5400_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten_reg_5914.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        a_17_load_reg_7757 = a_17_q0.read();
        a_18_load_1_reg_7782 = a_18_q1.read();
        a_18_load_reg_7772 = a_18_q0.read();
        a_19_load_1_reg_7797 = a_19_q1.read();
        a_37_load_reg_7812 = a_37_q0.read();
        a_38_load_1_reg_7837 = a_38_q1.read();
        a_38_load_reg_7827 = a_38_q0.read();
        a_39_load_1_reg_7852 = a_39_q1.read();
        a_47_load_reg_7867 = a_47_q0.read();
        a_48_load_1_reg_7892 = a_48_q1.read();
        a_48_load_reg_7882 = a_48_q0.read();
        a_49_load_1_reg_7907 = a_49_q1.read();
        a_57_load_reg_7922 = a_57_q0.read();
        a_58_load_1_reg_7947 = a_58_q1.read();
        a_58_load_reg_7937 = a_58_q0.read();
        a_59_load_1_reg_7962 = a_59_q1.read();
        a_62_load_reg_7977 = a_62_q0.read();
        a_63_load_1_reg_8002 = a_63_q1.read();
        a_63_load_reg_7992 = a_63_q0.read();
        a_64_load_1_reg_8017 = a_64_q1.read();
        a_67_load_reg_8032 = a_67_q0.read();
        a_68_load_1_reg_8057 = a_68_q1.read();
        a_68_load_reg_8047 = a_68_q0.read();
        a_69_load_1_reg_8072 = a_69_q1.read();
        a_70_load_1_reg_8087 = a_70_q1.read();
        a_71_load_reg_8097 = a_71_q0.read();
        a_72_load_reg_8112 = a_72_q0.read();
        a_73_load_1_reg_8137 = a_73_q1.read();
        a_73_load_reg_8127 = a_73_q0.read();
        a_74_load_1_reg_8152 = a_74_q1.read();
        a_75_load_1_reg_8167 = a_75_q1.read();
        a_76_load_reg_8177 = a_76_q0.read();
        a_77_load_reg_8192 = a_77_q0.read();
        a_78_load_1_reg_8217 = a_78_q1.read();
        a_78_load_reg_8207 = a_78_q0.read();
        a_79_load_1_reg_8232 = a_79_q1.read();
        b_17_load_reg_7762 = b_17_q0.read();
        b_18_load_1_reg_7787 = b_18_q1.read();
        b_18_load_reg_7777 = b_18_q0.read();
        b_19_load_1_reg_7802 = b_19_q1.read();
        b_37_load_reg_7817 = b_37_q0.read();
        b_38_load_1_reg_7842 = b_38_q1.read();
        b_38_load_reg_7832 = b_38_q0.read();
        b_39_load_1_reg_7857 = b_39_q1.read();
        b_47_load_reg_7872 = b_47_q0.read();
        b_48_load_1_reg_7897 = b_48_q1.read();
        b_48_load_reg_7887 = b_48_q0.read();
        b_49_load_1_reg_7912 = b_49_q1.read();
        b_57_load_reg_7927 = b_57_q0.read();
        b_58_load_1_reg_7952 = b_58_q1.read();
        b_58_load_reg_7942 = b_58_q0.read();
        b_59_load_1_reg_7967 = b_59_q1.read();
        b_62_load_reg_7982 = b_62_q0.read();
        b_63_load_1_reg_8007 = b_63_q1.read();
        b_63_load_reg_7997 = b_63_q0.read();
        b_64_load_1_reg_8022 = b_64_q1.read();
        b_67_load_reg_8037 = b_67_q0.read();
        b_68_load_1_reg_8062 = b_68_q1.read();
        b_68_load_reg_8052 = b_68_q0.read();
        b_69_load_1_reg_8077 = b_69_q1.read();
        b_70_load_1_reg_8092 = b_70_q1.read();
        b_71_load_reg_8102 = b_71_q0.read();
        b_72_load_reg_8117 = b_72_q0.read();
        b_73_load_1_reg_8142 = b_73_q1.read();
        b_73_load_reg_8132 = b_73_q0.read();
        b_74_load_1_reg_8157 = b_74_q1.read();
        b_75_load_1_reg_8172 = b_75_q1.read();
        b_76_load_reg_8182 = b_76_q0.read();
        b_77_load_reg_8197 = b_77_q0.read();
        b_78_load_1_reg_8222 = b_78_q1.read();
        b_78_load_reg_8212 = b_78_q0.read();
        b_79_load_1_reg_8237 = b_79_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond_flatten_reg_5914 = exitcond_flatten_fu_4430_p2.read();
        exitcond_flatten_reg_5914_pp0_iter1_reg = exitcond_flatten_reg_5914.read();
        ib_mid2_reg_5923_pp0_iter1_reg = ib_mid2_reg_5923.read();
        tmp_mid2_v_reg_5928_pp0_iter1_reg = tmp_mid2_v_reg_5928.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        exitcond_flatten_reg_5914_pp0_iter2_reg = exitcond_flatten_reg_5914_pp0_iter1_reg.read();
        exitcond_flatten_reg_5914_pp0_iter3_reg = exitcond_flatten_reg_5914_pp0_iter2_reg.read();
        exitcond_flatten_reg_5914_pp0_iter4_reg = exitcond_flatten_reg_5914_pp0_iter3_reg.read();
        ib_mid2_reg_5923_pp0_iter2_reg = ib_mid2_reg_5923_pp0_iter1_reg.read();
        ib_mid2_reg_5923_pp0_iter3_reg = ib_mid2_reg_5923_pp0_iter2_reg.read();
        ib_mid2_reg_5923_pp0_iter4_reg = ib_mid2_reg_5923_pp0_iter3_reg.read();
        tmp_mid2_v_reg_5928_pp0_iter2_reg = tmp_mid2_v_reg_5928_pp0_iter1_reg.read();
        tmp_mid2_v_reg_5928_pp0_iter3_reg = tmp_mid2_v_reg_5928_pp0_iter2_reg.read();
        tmp_mid2_v_reg_5928_pp0_iter4_reg = tmp_mid2_v_reg_5928_pp0_iter3_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten_fu_4430_p2.read(), ap_const_lv1_0))) {
        ib_mid2_reg_5923 = ib_mid2_fu_4454_p3.read();
        tmp_1_reg_5935 = tmp_1_fu_4478_p1.read();
        tmp_2_reg_6351 = tmp_2_fu_4558_p1.read();
        tmp_5_reg_5991 = tmp_5_fu_4516_p3.read();
        tmp_9_cast_reg_6407 = tmp_9_cast_fu_4600_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten_reg_5914_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        temp_102_reg_8902 = temp_102_fu_4992_p2.read();
        temp_104_reg_8917 = temp_104_fu_4998_p2.read();
        temp_107_reg_8942 = temp_107_fu_5004_p2.read();
        temp_109_reg_8957 = temp_109_fu_5010_p2.read();
        temp_119_reg_8982 = temp_119_fu_5016_p2.read();
        temp_129_reg_9007 = temp_129_fu_5022_p2.read();
        temp_12_reg_8347 = temp_12_fu_4830_p2.read();
        temp_14_reg_8362 = temp_14_fu_4836_p2.read();
        temp_17_reg_8387 = temp_17_fu_4842_p2.read();
        temp_19_reg_8402 = temp_19_fu_4848_p2.read();
        temp_22_reg_8427 = temp_22_fu_4854_p2.read();
        temp_24_reg_8442 = temp_24_fu_4860_p2.read();
        temp_27_reg_8467 = temp_27_fu_4866_p2.read();
        temp_29_reg_8482 = temp_29_fu_4872_p2.read();
        temp_39_reg_8507 = temp_39_fu_4878_p2.read();
        temp_3_reg_8267 = temp_3_fu_4806_p2.read();
        temp_42_reg_8532 = temp_42_fu_4884_p2.read();
        temp_44_reg_8547 = temp_44_fu_4890_p2.read();
        temp_47_reg_8572 = temp_47_fu_4896_p2.read();
        temp_49_reg_8587 = temp_49_fu_4902_p2.read();
        temp_52_reg_8612 = temp_52_fu_4908_p2.read();
        temp_54_reg_8627 = temp_54_fu_4914_p2.read();
        temp_57_reg_8652 = temp_57_fu_4920_p2.read();
        temp_59_reg_8667 = temp_59_fu_4926_p2.read();
        temp_5_reg_8282 = temp_5_fu_4812_p2.read();
        temp_62_reg_8692 = temp_62_fu_4932_p2.read();
        temp_64_reg_8707 = temp_64_fu_4938_p2.read();
        temp_67_reg_8732 = temp_67_fu_4944_p2.read();
        temp_69_reg_8747 = temp_69_fu_4950_p2.read();
        temp_79_reg_8772 = temp_79_fu_4956_p2.read();
        temp_82_reg_8797 = temp_82_fu_4962_p2.read();
        temp_84_reg_8812 = temp_84_fu_4968_p2.read();
        temp_87_reg_8837 = temp_87_fu_4974_p2.read();
        temp_89_reg_8852 = temp_89_fu_4980_p2.read();
        temp_8_reg_8307 = temp_8_fu_4818_p2.read();
        temp_99_reg_8877 = temp_99_fu_4986_p2.read();
        temp_reg_8242 = temp_fu_4800_p2.read();
        temp_s_reg_8322 = temp_s_fu_4824_p2.read();
        tmp116_reg_9067 = tmp116_fu_5040_p2.read();
        tmp127_reg_9077 = tmp127_fu_5044_p2.read();
        tmp136_reg_9087 = tmp136_fu_5048_p2.read();
        tmp142_reg_9092 = tmp142_fu_5052_p2.read();
        tmp146_reg_9097 = tmp146_fu_5056_p2.read();
        tmp155_reg_9112 = tmp155_fu_5060_p2.read();
        tmp37_reg_9037 = tmp37_fu_5028_p2.read();
        tmp76_reg_9047 = tmp76_fu_5032_p2.read();
        tmp97_reg_9057 = tmp97_fu_5036_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten_reg_5914.read(), ap_const_lv1_0))) {
        temp_112_reg_7917 = temp_112_fu_4698_p2.read();
        temp_114_reg_7932 = temp_114_fu_4704_p2.read();
        temp_117_reg_7957 = temp_117_fu_4710_p2.read();
        temp_122_reg_7972 = temp_122_fu_4716_p2.read();
        temp_124_reg_7987 = temp_124_fu_4722_p2.read();
        temp_127_reg_8012 = temp_127_fu_4728_p2.read();
        temp_132_reg_8027 = temp_132_fu_4734_p2.read();
        temp_134_reg_8042 = temp_134_fu_4740_p2.read();
        temp_137_reg_8067 = temp_137_fu_4746_p2.read();
        temp_139_reg_8082 = temp_139_fu_4752_p2.read();
        temp_142_reg_8107 = temp_142_fu_4758_p2.read();
        temp_144_reg_8122 = temp_144_fu_4764_p2.read();
        temp_147_reg_8147 = temp_147_fu_4770_p2.read();
        temp_149_reg_8162 = temp_149_fu_4776_p2.read();
        temp_152_reg_8187 = temp_152_fu_4782_p2.read();
        temp_154_reg_8202 = temp_154_fu_4788_p2.read();
        temp_157_reg_8227 = temp_157_fu_4794_p2.read();
        temp_32_reg_7752 = temp_32_fu_4644_p2.read();
        temp_34_reg_7767 = temp_34_fu_4650_p2.read();
        temp_37_reg_7792 = temp_37_fu_4656_p2.read();
        temp_72_reg_7807 = temp_72_fu_4662_p2.read();
        temp_74_reg_7822 = temp_74_fu_4668_p2.read();
        temp_77_reg_7847 = temp_77_fu_4674_p2.read();
        temp_92_reg_7862 = temp_92_fu_4680_p2.read();
        temp_94_reg_7877 = temp_94_fu_4686_p2.read();
        temp_97_reg_7902 = temp_97_fu_4692_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten_reg_5914_pp0_iter2_reg.read(), ap_const_lv1_0))) {
        tmp103_reg_9222 = tmp103_fu_5131_p2.read();
        tmp107_reg_9227 = tmp107_fu_5135_p2.read();
        tmp111_reg_9232 = tmp111_fu_5143_p2.read();
        tmp122_reg_9237 = tmp122_fu_5152_p2.read();
        tmp131_reg_9242 = tmp131_fu_5161_p2.read();
        tmp140_reg_9247 = tmp140_fu_5179_p2.read();
        tmp18_reg_9142 = tmp18_fu_5068_p2.read();
        tmp24_reg_9147 = tmp24_fu_5072_p2.read();
        tmp28_reg_9152 = tmp28_fu_5076_p2.read();
        tmp32_reg_9157 = tmp32_fu_5084_p2.read();
        tmp48_reg_9172 = tmp48_fu_5089_p2.read();
        tmp57_reg_9187 = tmp57_fu_5093_p2.read();
        tmp63_reg_9192 = tmp63_fu_5097_p2.read();
        tmp67_reg_9197 = tmp67_fu_5101_p2.read();
        tmp71_reg_9202 = tmp71_fu_5109_p2.read();
        tmp84_reg_9207 = tmp84_fu_5114_p2.read();
        tmp88_reg_9212 = tmp88_fu_5118_p2.read();
        tmp92_reg_9217 = tmp92_fu_5126_p2.read();
        tmp9_reg_9127 = tmp9_fu_5064_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_5914_pp0_iter2_reg.read(), ap_const_lv1_0))) {
        tmp15_reg_9132 = grp_fu_5596_p3.read();
        tmp16_reg_9137 = grp_fu_5601_p3.read();
        tmp45_reg_9162 = grp_fu_5678_p3.read();
        tmp46_reg_9167 = grp_fu_5683_p3.read();
        tmp54_reg_9177 = grp_fu_5712_p3.read();
        tmp55_reg_9182 = grp_fu_5717_p3.read();
        tmp6_reg_9117 = grp_fu_5562_p3.read();
        tmp7_reg_9122 = grp_fu_5567_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten_reg_5914_pp0_iter3_reg.read(), ap_const_lv1_0))) {
        tmp2_reg_9252 = tmp2_fu_5218_p2.read();
        tmp41_reg_9257 = tmp41_fu_5257_p2.read();
        tmp80_reg_9262 = tmp80_fu_5296_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(exitcond_flatten_fu_4430_p2.read(), ap_const_lv1_0))) {
        tmp_mid2_v_reg_5928 = tmp_mid2_v_fu_4462_p3.read();
    }
}

void mmult_hw::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten_fu_4430_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(exitcond_flatten_fu_4430_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

