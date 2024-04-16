#include "mmult_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mmult_hw::thread_b_29_address1() {
    b_29_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_29_ce0 = ap_const_logic_1;
    } else {
        b_29_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_29_ce1 = ap_const_logic_1;
    } else {
        b_29_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_2_address0() {
    b_2_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_2_address1() {
    b_2_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_2_ce0 = ap_const_logic_1;
    } else {
        b_2_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_2_ce1 = ap_const_logic_1;
    } else {
        b_2_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_30_address0() {
    b_30_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_30_address1() {
    b_30_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_30_ce0 = ap_const_logic_1;
    } else {
        b_30_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_30_ce1 = ap_const_logic_1;
    } else {
        b_30_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_31_address0() {
    b_31_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_31_address1() {
    b_31_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_31_ce0 = ap_const_logic_1;
    } else {
        b_31_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_31_ce1 = ap_const_logic_1;
    } else {
        b_31_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_32_address0() {
    b_32_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_32_address1() {
    b_32_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_32_ce0 = ap_const_logic_1;
    } else {
        b_32_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_32_ce1 = ap_const_logic_1;
    } else {
        b_32_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_33_address0() {
    b_33_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_33_address1() {
    b_33_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_33_ce0 = ap_const_logic_1;
    } else {
        b_33_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_33_ce1 = ap_const_logic_1;
    } else {
        b_33_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_34_address0() {
    b_34_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_34_address1() {
    b_34_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_34_ce0 = ap_const_logic_1;
    } else {
        b_34_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_34_ce1 = ap_const_logic_1;
    } else {
        b_34_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_35_address0() {
    b_35_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_35_address1() {
    b_35_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_35_ce0 = ap_const_logic_1;
    } else {
        b_35_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_35_ce1 = ap_const_logic_1;
    } else {
        b_35_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_36_address0() {
    b_36_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_36_address1() {
    b_36_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_36_ce0 = ap_const_logic_1;
    } else {
        b_36_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_36_ce1 = ap_const_logic_1;
    } else {
        b_36_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_37_address0() {
    b_37_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_37_address1() {
    b_37_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_37_ce0 = ap_const_logic_1;
    } else {
        b_37_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_37_ce1 = ap_const_logic_1;
    } else {
        b_37_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_38_address0() {
    b_38_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_38_address1() {
    b_38_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_38_ce0 = ap_const_logic_1;
    } else {
        b_38_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_38_ce1 = ap_const_logic_1;
    } else {
        b_38_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_39_address0() {
    b_39_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_39_address1() {
    b_39_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_39_ce0 = ap_const_logic_1;
    } else {
        b_39_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_39_ce1 = ap_const_logic_1;
    } else {
        b_39_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_3_address0() {
    b_3_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_3_address1() {
    b_3_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_3_ce0 = ap_const_logic_1;
    } else {
        b_3_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_3_ce1 = ap_const_logic_1;
    } else {
        b_3_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_40_address0() {
    b_40_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_40_address1() {
    b_40_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_40_ce0 = ap_const_logic_1;
    } else {
        b_40_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_40_ce1 = ap_const_logic_1;
    } else {
        b_40_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_41_address0() {
    b_41_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_41_address1() {
    b_41_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_41_ce0 = ap_const_logic_1;
    } else {
        b_41_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_41_ce1 = ap_const_logic_1;
    } else {
        b_41_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_42_address0() {
    b_42_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_42_address1() {
    b_42_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_42_ce0 = ap_const_logic_1;
    } else {
        b_42_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_42_ce1 = ap_const_logic_1;
    } else {
        b_42_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_43_address0() {
    b_43_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_43_address1() {
    b_43_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_43_ce0 = ap_const_logic_1;
    } else {
        b_43_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_43_ce1 = ap_const_logic_1;
    } else {
        b_43_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_44_address0() {
    b_44_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_44_address1() {
    b_44_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_44_ce0 = ap_const_logic_1;
    } else {
        b_44_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_44_ce1 = ap_const_logic_1;
    } else {
        b_44_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_45_address0() {
    b_45_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_45_address1() {
    b_45_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_45_ce0 = ap_const_logic_1;
    } else {
        b_45_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_45_ce1 = ap_const_logic_1;
    } else {
        b_45_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_46_address0() {
    b_46_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_46_address1() {
    b_46_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_46_ce0 = ap_const_logic_1;
    } else {
        b_46_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_46_ce1 = ap_const_logic_1;
    } else {
        b_46_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_47_address0() {
    b_47_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_47_address1() {
    b_47_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_47_ce0 = ap_const_logic_1;
    } else {
        b_47_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_47_ce1 = ap_const_logic_1;
    } else {
        b_47_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_48_address0() {
    b_48_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_48_address1() {
    b_48_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_48_ce0 = ap_const_logic_1;
    } else {
        b_48_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_48_ce1 = ap_const_logic_1;
    } else {
        b_48_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_49_address0() {
    b_49_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_49_address1() {
    b_49_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_49_ce0 = ap_const_logic_1;
    } else {
        b_49_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_49_ce1 = ap_const_logic_1;
    } else {
        b_49_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_4_address0() {
    b_4_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_4_address1() {
    b_4_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_4_ce0 = ap_const_logic_1;
    } else {
        b_4_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_4_ce1 = ap_const_logic_1;
    } else {
        b_4_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_50_address0() {
    b_50_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_50_address1() {
    b_50_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_50_ce0 = ap_const_logic_1;
    } else {
        b_50_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_50_ce1 = ap_const_logic_1;
    } else {
        b_50_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_51_address0() {
    b_51_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_51_address1() {
    b_51_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_51_ce0 = ap_const_logic_1;
    } else {
        b_51_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_51_ce1 = ap_const_logic_1;
    } else {
        b_51_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_52_address0() {
    b_52_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_52_address1() {
    b_52_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_52_ce0 = ap_const_logic_1;
    } else {
        b_52_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_52_ce1 = ap_const_logic_1;
    } else {
        b_52_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_53_address0() {
    b_53_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_53_address1() {
    b_53_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_53_ce0 = ap_const_logic_1;
    } else {
        b_53_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_53_ce1 = ap_const_logic_1;
    } else {
        b_53_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_54_address0() {
    b_54_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_54_address1() {
    b_54_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_54_ce0 = ap_const_logic_1;
    } else {
        b_54_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_54_ce1 = ap_const_logic_1;
    } else {
        b_54_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_55_address0() {
    b_55_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_55_address1() {
    b_55_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_55_ce0 = ap_const_logic_1;
    } else {
        b_55_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_55_ce1 = ap_const_logic_1;
    } else {
        b_55_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_56_address0() {
    b_56_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_56_address1() {
    b_56_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_56_ce0 = ap_const_logic_1;
    } else {
        b_56_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_56_ce1 = ap_const_logic_1;
    } else {
        b_56_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_57_address0() {
    b_57_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_57_address1() {
    b_57_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_57_ce0 = ap_const_logic_1;
    } else {
        b_57_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_57_ce1 = ap_const_logic_1;
    } else {
        b_57_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_58_address0() {
    b_58_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_58_address1() {
    b_58_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_58_ce0 = ap_const_logic_1;
    } else {
        b_58_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_58_ce1 = ap_const_logic_1;
    } else {
        b_58_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_59_address0() {
    b_59_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_59_address1() {
    b_59_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_59_ce0 = ap_const_logic_1;
    } else {
        b_59_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_59_ce1 = ap_const_logic_1;
    } else {
        b_59_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_5_address0() {
    b_5_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_5_address1() {
    b_5_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_5_ce0 = ap_const_logic_1;
    } else {
        b_5_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_5_ce1 = ap_const_logic_1;
    } else {
        b_5_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_60_address0() {
    b_60_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_60_address1() {
    b_60_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_60_ce0 = ap_const_logic_1;
    } else {
        b_60_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_60_ce1 = ap_const_logic_1;
    } else {
        b_60_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_61_address0() {
    b_61_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_61_address1() {
    b_61_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_61_ce0 = ap_const_logic_1;
    } else {
        b_61_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_61_ce1 = ap_const_logic_1;
    } else {
        b_61_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_62_address0() {
    b_62_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_62_address1() {
    b_62_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_62_ce0 = ap_const_logic_1;
    } else {
        b_62_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_62_ce1 = ap_const_logic_1;
    } else {
        b_62_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_63_address0() {
    b_63_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_63_address1() {
    b_63_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_63_ce0 = ap_const_logic_1;
    } else {
        b_63_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_63_ce1 = ap_const_logic_1;
    } else {
        b_63_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_64_address0() {
    b_64_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_64_address1() {
    b_64_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_64_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_64_ce0 = ap_const_logic_1;
    } else {
        b_64_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_64_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_64_ce1 = ap_const_logic_1;
    } else {
        b_64_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_65_address0() {
    b_65_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_65_address1() {
    b_65_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_65_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_65_ce0 = ap_const_logic_1;
    } else {
        b_65_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_65_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_65_ce1 = ap_const_logic_1;
    } else {
        b_65_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_66_address0() {
    b_66_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_66_address1() {
    b_66_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_66_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_66_ce0 = ap_const_logic_1;
    } else {
        b_66_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_66_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_66_ce1 = ap_const_logic_1;
    } else {
        b_66_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_67_address0() {
    b_67_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_67_address1() {
    b_67_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_67_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_67_ce0 = ap_const_logic_1;
    } else {
        b_67_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_67_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_67_ce1 = ap_const_logic_1;
    } else {
        b_67_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_68_address0() {
    b_68_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_68_address1() {
    b_68_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_68_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_68_ce0 = ap_const_logic_1;
    } else {
        b_68_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_68_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_68_ce1 = ap_const_logic_1;
    } else {
        b_68_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_69_address0() {
    b_69_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_69_address1() {
    b_69_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_69_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_69_ce0 = ap_const_logic_1;
    } else {
        b_69_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_69_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_69_ce1 = ap_const_logic_1;
    } else {
        b_69_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_6_address0() {
    b_6_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_6_address1() {
    b_6_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_6_ce0 = ap_const_logic_1;
    } else {
        b_6_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_6_ce1 = ap_const_logic_1;
    } else {
        b_6_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_70_address0() {
    b_70_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_70_address1() {
    b_70_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_70_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_70_ce0 = ap_const_logic_1;
    } else {
        b_70_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_70_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_70_ce1 = ap_const_logic_1;
    } else {
        b_70_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_71_address0() {
    b_71_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_71_address1() {
    b_71_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_71_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_71_ce0 = ap_const_logic_1;
    } else {
        b_71_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_71_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_71_ce1 = ap_const_logic_1;
    } else {
        b_71_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_72_address0() {
    b_72_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_72_address1() {
    b_72_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_72_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_72_ce0 = ap_const_logic_1;
    } else {
        b_72_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_72_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_72_ce1 = ap_const_logic_1;
    } else {
        b_72_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_73_address0() {
    b_73_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_73_address1() {
    b_73_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_73_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_73_ce0 = ap_const_logic_1;
    } else {
        b_73_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_73_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_73_ce1 = ap_const_logic_1;
    } else {
        b_73_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_74_address0() {
    b_74_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_74_address1() {
    b_74_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_74_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_74_ce0 = ap_const_logic_1;
    } else {
        b_74_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_74_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_74_ce1 = ap_const_logic_1;
    } else {
        b_74_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_75_address0() {
    b_75_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_75_address1() {
    b_75_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_75_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_75_ce0 = ap_const_logic_1;
    } else {
        b_75_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_75_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_75_ce1 = ap_const_logic_1;
    } else {
        b_75_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_76_address0() {
    b_76_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_76_address1() {
    b_76_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_76_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_76_ce0 = ap_const_logic_1;
    } else {
        b_76_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_76_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_76_ce1 = ap_const_logic_1;
    } else {
        b_76_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_77_address0() {
    b_77_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_77_address1() {
    b_77_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_77_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_77_ce0 = ap_const_logic_1;
    } else {
        b_77_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_77_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_77_ce1 = ap_const_logic_1;
    } else {
        b_77_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_78_address0() {
    b_78_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_78_address1() {
    b_78_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_78_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_78_ce0 = ap_const_logic_1;
    } else {
        b_78_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_78_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_78_ce1 = ap_const_logic_1;
    } else {
        b_78_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_79_address0() {
    b_79_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_79_address1() {
    b_79_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_79_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_79_ce0 = ap_const_logic_1;
    } else {
        b_79_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_79_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_79_ce1 = ap_const_logic_1;
    } else {
        b_79_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_7_address0() {
    b_7_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_7_address1() {
    b_7_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_7_ce0 = ap_const_logic_1;
    } else {
        b_7_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_7_ce1 = ap_const_logic_1;
    } else {
        b_7_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_80_address0() {
    b_80_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_80_address1() {
    b_80_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_80_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_80_ce0 = ap_const_logic_1;
    } else {
        b_80_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_80_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_80_ce1 = ap_const_logic_1;
    } else {
        b_80_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_81_address0() {
    b_81_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_81_address1() {
    b_81_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_81_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_81_ce0 = ap_const_logic_1;
    } else {
        b_81_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_81_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_81_ce1 = ap_const_logic_1;
    } else {
        b_81_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_82_address0() {
    b_82_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_82_address1() {
    b_82_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_82_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_82_ce0 = ap_const_logic_1;
    } else {
        b_82_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_82_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_82_ce1 = ap_const_logic_1;
    } else {
        b_82_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_83_address0() {
    b_83_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_83_address1() {
    b_83_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_83_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_83_ce0 = ap_const_logic_1;
    } else {
        b_83_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_83_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_83_ce1 = ap_const_logic_1;
    } else {
        b_83_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_84_address0() {
    b_84_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_84_address1() {
    b_84_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_84_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_84_ce0 = ap_const_logic_1;
    } else {
        b_84_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_84_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_84_ce1 = ap_const_logic_1;
    } else {
        b_84_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_85_address0() {
    b_85_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_85_address1() {
    b_85_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_85_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_85_ce0 = ap_const_logic_1;
    } else {
        b_85_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_85_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_85_ce1 = ap_const_logic_1;
    } else {
        b_85_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_86_address0() {
    b_86_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_86_address1() {
    b_86_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_86_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_86_ce0 = ap_const_logic_1;
    } else {
        b_86_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_86_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_86_ce1 = ap_const_logic_1;
    } else {
        b_86_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_87_address0() {
    b_87_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_87_address1() {
    b_87_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_87_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_87_ce0 = ap_const_logic_1;
    } else {
        b_87_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_87_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_87_ce1 = ap_const_logic_1;
    } else {
        b_87_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_88_address0() {
    b_88_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_88_address1() {
    b_88_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_88_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_88_ce0 = ap_const_logic_1;
    } else {
        b_88_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_88_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_88_ce1 = ap_const_logic_1;
    } else {
        b_88_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_89_address0() {
    b_89_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_89_address1() {
    b_89_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_89_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_89_ce0 = ap_const_logic_1;
    } else {
        b_89_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_89_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_89_ce1 = ap_const_logic_1;
    } else {
        b_89_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_8_address0() {
    b_8_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_8_address1() {
    b_8_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_8_ce0 = ap_const_logic_1;
    } else {
        b_8_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_8_ce1 = ap_const_logic_1;
    } else {
        b_8_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_90_address0() {
    b_90_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_90_address1() {
    b_90_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_90_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_90_ce0 = ap_const_logic_1;
    } else {
        b_90_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_90_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_90_ce1 = ap_const_logic_1;
    } else {
        b_90_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_91_address0() {
    b_91_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_91_address1() {
    b_91_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_91_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_91_ce0 = ap_const_logic_1;
    } else {
        b_91_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_91_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_91_ce1 = ap_const_logic_1;
    } else {
        b_91_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_92_address0() {
    b_92_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_92_address1() {
    b_92_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_92_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_92_ce0 = ap_const_logic_1;
    } else {
        b_92_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_92_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_92_ce1 = ap_const_logic_1;
    } else {
        b_92_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_93_address0() {
    b_93_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_93_address1() {
    b_93_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_93_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_93_ce0 = ap_const_logic_1;
    } else {
        b_93_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_93_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_93_ce1 = ap_const_logic_1;
    } else {
        b_93_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_94_address0() {
    b_94_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_94_address1() {
    b_94_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_94_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_94_ce0 = ap_const_logic_1;
    } else {
        b_94_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_94_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_94_ce1 = ap_const_logic_1;
    } else {
        b_94_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_95_address0() {
    b_95_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_95_address1() {
    b_95_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_95_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_95_ce0 = ap_const_logic_1;
    } else {
        b_95_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_95_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_95_ce1 = ap_const_logic_1;
    } else {
        b_95_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_96_address0() {
    b_96_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_96_address1() {
    b_96_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_96_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_96_ce0 = ap_const_logic_1;
    } else {
        b_96_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_96_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_96_ce1 = ap_const_logic_1;
    } else {
        b_96_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_97_address0() {
    b_97_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_97_address1() {
    b_97_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_97_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_97_ce0 = ap_const_logic_1;
    } else {
        b_97_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_97_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_97_ce1 = ap_const_logic_1;
    } else {
        b_97_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_98_address0() {
    b_98_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_98_address1() {
    b_98_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_98_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_98_ce0 = ap_const_logic_1;
    } else {
        b_98_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_98_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_98_ce1 = ap_const_logic_1;
    } else {
        b_98_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_99_address0() {
    b_99_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_99_address1() {
    b_99_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_99_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_99_ce0 = ap_const_logic_1;
    } else {
        b_99_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_99_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_99_ce1 = ap_const_logic_1;
    } else {
        b_99_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_9_address0() {
    b_9_address0 =  (sc_lv<10>) (tmp_2_fu_7468_p1.read());
}

void mmult_hw::thread_b_9_address1() {
    b_9_address1 =  (sc_lv<10>) (tmp_528_cast_fu_7612_p1.read());
}

void mmult_hw::thread_b_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_9_ce0 = ap_const_logic_1;
    } else {
        b_9_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_b_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_9_ce1 = ap_const_logic_1;
    } else {
        b_9_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_exitcond_flatten_fu_7142_p2() {
    exitcond_flatten_fu_7142_p2 = (!indvar_flatten_reg_7109.read().is_01() || !ap_const_lv17_10810.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_7109.read() == ap_const_lv17_10810);
}

void mmult_hw::thread_exitcond_fu_7160_p2() {
    exitcond_fu_7160_p2 = (!ib_reg_7131.read().is_01() || !ap_const_lv9_104.is_01())? sc_lv<1>(): sc_lv<1>(ib_reg_7131.read() == ap_const_lv9_104);
}

void mmult_hw::thread_ia_1_fu_7154_p2() {
    ia_1_fu_7154_p2 = (!ap_phi_mux_ia_phi_fu_7124_p4.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_ia_phi_fu_7124_p4.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void mmult_hw::thread_ib_1_fu_7746_p2() {
    ib_1_fu_7746_p2 = (!ib_mid2_fu_7166_p3.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(ib_mid2_fu_7166_p3.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void mmult_hw::thread_ib_mid2_fu_7166_p3() {
    ib_mid2_fu_7166_p3 = (!exitcond_fu_7160_p2.read()[0].is_01())? sc_lv<9>(): ((exitcond_fu_7160_p2.read()[0].to_bool())? ap_const_lv9_0: ib_reg_7131.read());
}

void mmult_hw::thread_indvar_flatten_next_fu_7148_p2() {
    indvar_flatten_next_fu_7148_p2 = (!indvar_flatten_reg_7109.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_biguint<17>(indvar_flatten_reg_7109.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void mmult_hw::thread_out_r_address0() {
    out_r_address0 =  (sc_lv<17>) (tmp_529_cast_fu_10126_p1.read());
}

void mmult_hw::thread_out_r_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter261.read()))) {
        out_r_ce0 = ap_const_logic_1;
    } else {
        out_r_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_r_d0() {
    out_r_d0 = grp_fu_10083_p2.read();
}

void mmult_hw::thread_out_r_we0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter261.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_10131_pp0_iter260_reg.read(), ap_const_lv1_0))) {
        out_r_we0 = ap_const_logic_1;
    } else {
        out_r_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_p_shl1_cast_fu_10107_p1() {
    p_shl1_cast_fu_10107_p1 = esl_zext<18,11>(tmp_526_fu_10100_p3.read());
}

void mmult_hw::thread_p_shl_cast_fu_10096_p1() {
    p_shl_cast_fu_10096_p1 = esl_zext<18,17>(tmp_525_fu_10089_p3.read());
}

void mmult_hw::thread_tmp_1_fu_7190_p1() {
    tmp_1_fu_7190_p1 = esl_zext<64,10>(tmp_fu_7182_p3.read());
}

void mmult_hw::thread_tmp_2_cast4_fu_10117_p1() {
    tmp_2_cast4_fu_10117_p1 = esl_zext<18,9>(ib_mid2_reg_10140_pp0_iter260_reg.read());
}

void mmult_hw::thread_tmp_2_cast_fu_7602_p1() {
    tmp_2_cast_fu_7602_p1 = esl_zext<10,9>(ib_mid2_fu_7166_p3.read());
}

void mmult_hw::thread_tmp_2_fu_7468_p1() {
    tmp_2_fu_7468_p1 = esl_zext<64,9>(ib_mid2_fu_7166_p3.read());
}

void mmult_hw::thread_tmp_523_fu_7324_p2() {
    tmp_523_fu_7324_p2 = (tmp_fu_7182_p3.read() | ap_const_lv10_1);
}

void mmult_hw::thread_tmp_524_fu_7330_p3() {
    tmp_524_fu_7330_p3 = esl_concat<54,10>(ap_const_lv54_0, tmp_523_fu_7324_p2.read());
}

void mmult_hw::thread_tmp_525_fu_10089_p3() {
    tmp_525_fu_10089_p3 = esl_concat<9,8>(tmp_mid2_v_reg_10145_pp0_iter260_reg.read(), ap_const_lv8_0);
}

void mmult_hw::thread_tmp_526_fu_10100_p3() {
    tmp_526_fu_10100_p3 = esl_concat<9,2>(tmp_mid2_v_reg_10145_pp0_iter260_reg.read(), ap_const_lv2_0);
}

void mmult_hw::thread_tmp_527_fu_10111_p2() {
    tmp_527_fu_10111_p2 = (!p_shl_cast_fu_10096_p1.read().is_01() || !p_shl1_cast_fu_10107_p1.read().is_01())? sc_lv<18>(): (sc_biguint<18>(p_shl_cast_fu_10096_p1.read()) + sc_biguint<18>(p_shl1_cast_fu_10107_p1.read()));
}

void mmult_hw::thread_tmp_528_cast_fu_7612_p1() {
    tmp_528_cast_fu_7612_p1 = esl_zext<64,10>(tmp_528_fu_7606_p2.read());
}

void mmult_hw::thread_tmp_528_fu_7606_p2() {
    tmp_528_fu_7606_p2 = (!tmp_2_cast_fu_7602_p1.read().is_01() || !ap_const_lv10_104.is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_2_cast_fu_7602_p1.read()) + sc_biguint<10>(ap_const_lv10_104));
}

void mmult_hw::thread_tmp_529_cast_fu_10126_p1() {
    tmp_529_cast_fu_10126_p1 = esl_zext<64,18>(tmp_529_fu_10120_p2.read());
}

void mmult_hw::thread_tmp_529_fu_10120_p2() {
    tmp_529_fu_10120_p2 = (!tmp_2_cast4_fu_10117_p1.read().is_01() || !tmp_527_fu_10111_p2.read().is_01())? sc_lv<18>(): (sc_biguint<18>(tmp_2_cast4_fu_10117_p1.read()) + sc_biguint<18>(tmp_527_fu_10111_p2.read()));
}

void mmult_hw::thread_tmp_fu_7182_p3() {
    tmp_fu_7182_p3 = esl_concat<9,1>(tmp_mid2_v_fu_7174_p3.read(), ap_const_lv1_0);
}

void mmult_hw::thread_tmp_mid2_v_fu_7174_p3() {
    tmp_mid2_v_fu_7174_p3 = (!exitcond_fu_7160_p2.read()[0].is_01())? sc_lv<9>(): ((exitcond_fu_7160_p2.read()[0].to_bool())? ia_1_fu_7154_p2.read(): ap_phi_mux_ia_phi_fu_7124_p4.read());
}

}

