#include "HLS_accel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void HLS_accel::thread_temp_133_fu_6968_p1() {
    temp_133_fu_6968_p1 = a_67_q0.read();
}

void HLS_accel::thread_temp_133_fu_6968_p2() {
    temp_133_fu_6968_p2 = (!temp_133_fu_6968_p0.read().is_01() || !temp_133_fu_6968_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_133_fu_6968_p0.read()) * sc_bigint<8>(temp_133_fu_6968_p1.read());
}

void HLS_accel::thread_temp_135_fu_6974_p0() {
    temp_135_fu_6974_p0 = b_68_q0.read();
}

void HLS_accel::thread_temp_135_fu_6974_p1() {
    temp_135_fu_6974_p1 = a_68_q0.read();
}

void HLS_accel::thread_temp_135_fu_6974_p2() {
    temp_135_fu_6974_p2 = (!temp_135_fu_6974_p0.read().is_01() || !temp_135_fu_6974_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_135_fu_6974_p0.read()) * sc_bigint<8>(temp_135_fu_6974_p1.read());
}

void HLS_accel::thread_temp_138_fu_6980_p0() {
    temp_138_fu_6980_p0 = b_69_q1.read();
}

void HLS_accel::thread_temp_138_fu_6980_p1() {
    temp_138_fu_6980_p1 = a_69_q1.read();
}

void HLS_accel::thread_temp_138_fu_6980_p2() {
    temp_138_fu_6980_p2 = (!temp_138_fu_6980_p0.read().is_01() || !temp_138_fu_6980_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_138_fu_6980_p0.read()) * sc_bigint<8>(temp_138_fu_6980_p1.read());
}

void HLS_accel::thread_temp_13_fu_6680_p0() {
    temp_13_fu_6680_p0 = b_7_q0.read();
}

void HLS_accel::thread_temp_13_fu_6680_p1() {
    temp_13_fu_6680_p1 = a_7_q0.read();
}

void HLS_accel::thread_temp_13_fu_6680_p2() {
    temp_13_fu_6680_p2 = (!temp_13_fu_6680_p0.read().is_01() || !temp_13_fu_6680_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_13_fu_6680_p0.read()) * sc_bigint<8>(temp_13_fu_6680_p1.read());
}

void HLS_accel::thread_temp_140_fu_6986_p0() {
    temp_140_fu_6986_p0 = b_70_q1.read();
}

void HLS_accel::thread_temp_140_fu_6986_p1() {
    temp_140_fu_6986_p1 = a_70_q1.read();
}

void HLS_accel::thread_temp_140_fu_6986_p2() {
    temp_140_fu_6986_p2 = (!temp_140_fu_6986_p0.read().is_01() || !temp_140_fu_6986_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_140_fu_6986_p0.read()) * sc_bigint<8>(temp_140_fu_6986_p1.read());
}

void HLS_accel::thread_temp_143_fu_6992_p0() {
    temp_143_fu_6992_p0 = b_72_q0.read();
}

void HLS_accel::thread_temp_143_fu_6992_p1() {
    temp_143_fu_6992_p1 = a_72_q0.read();
}

void HLS_accel::thread_temp_143_fu_6992_p2() {
    temp_143_fu_6992_p2 = (!temp_143_fu_6992_p0.read().is_01() || !temp_143_fu_6992_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_143_fu_6992_p0.read()) * sc_bigint<8>(temp_143_fu_6992_p1.read());
}

void HLS_accel::thread_temp_145_fu_6998_p0() {
    temp_145_fu_6998_p0 = b_73_q0.read();
}

void HLS_accel::thread_temp_145_fu_6998_p1() {
    temp_145_fu_6998_p1 = a_73_q0.read();
}

void HLS_accel::thread_temp_145_fu_6998_p2() {
    temp_145_fu_6998_p2 = (!temp_145_fu_6998_p0.read().is_01() || !temp_145_fu_6998_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_145_fu_6998_p0.read()) * sc_bigint<8>(temp_145_fu_6998_p1.read());
}

void HLS_accel::thread_temp_148_fu_7004_p0() {
    temp_148_fu_7004_p0 = b_74_q1.read();
}

void HLS_accel::thread_temp_148_fu_7004_p1() {
    temp_148_fu_7004_p1 = a_74_q1.read();
}

void HLS_accel::thread_temp_148_fu_7004_p2() {
    temp_148_fu_7004_p2 = (!temp_148_fu_7004_p0.read().is_01() || !temp_148_fu_7004_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_148_fu_7004_p0.read()) * sc_bigint<8>(temp_148_fu_7004_p1.read());
}

void HLS_accel::thread_temp_150_fu_7010_p0() {
    temp_150_fu_7010_p0 = b_75_q1.read();
}

void HLS_accel::thread_temp_150_fu_7010_p1() {
    temp_150_fu_7010_p1 = a_75_q1.read();
}

void HLS_accel::thread_temp_150_fu_7010_p2() {
    temp_150_fu_7010_p2 = (!temp_150_fu_7010_p0.read().is_01() || !temp_150_fu_7010_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_150_fu_7010_p0.read()) * sc_bigint<8>(temp_150_fu_7010_p1.read());
}

void HLS_accel::thread_temp_153_fu_7016_p0() {
    temp_153_fu_7016_p0 = b_77_q0.read();
}

void HLS_accel::thread_temp_153_fu_7016_p1() {
    temp_153_fu_7016_p1 = a_77_q0.read();
}

void HLS_accel::thread_temp_153_fu_7016_p2() {
    temp_153_fu_7016_p2 = (!temp_153_fu_7016_p0.read().is_01() || !temp_153_fu_7016_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_153_fu_7016_p0.read()) * sc_bigint<8>(temp_153_fu_7016_p1.read());
}

void HLS_accel::thread_temp_155_fu_7022_p0() {
    temp_155_fu_7022_p0 = b_78_q0.read();
}

void HLS_accel::thread_temp_155_fu_7022_p1() {
    temp_155_fu_7022_p1 = a_78_q0.read();
}

void HLS_accel::thread_temp_155_fu_7022_p2() {
    temp_155_fu_7022_p2 = (!temp_155_fu_7022_p0.read().is_01() || !temp_155_fu_7022_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_155_fu_7022_p0.read()) * sc_bigint<8>(temp_155_fu_7022_p1.read());
}

void HLS_accel::thread_temp_158_fu_7028_p0() {
    temp_158_fu_7028_p0 = b_79_q1.read();
}

void HLS_accel::thread_temp_158_fu_7028_p1() {
    temp_158_fu_7028_p1 = a_79_q1.read();
}

void HLS_accel::thread_temp_158_fu_7028_p2() {
    temp_158_fu_7028_p2 = (!temp_158_fu_7028_p0.read().is_01() || !temp_158_fu_7028_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_158_fu_7028_p0.read()) * sc_bigint<8>(temp_158_fu_7028_p1.read());
}

void HLS_accel::thread_temp_15_fu_6686_p0() {
    temp_15_fu_6686_p0 = b_8_q0.read();
}

void HLS_accel::thread_temp_15_fu_6686_p1() {
    temp_15_fu_6686_p1 = a_8_q0.read();
}

void HLS_accel::thread_temp_15_fu_6686_p2() {
    temp_15_fu_6686_p2 = (!temp_15_fu_6686_p0.read().is_01() || !temp_15_fu_6686_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_15_fu_6686_p0.read()) * sc_bigint<8>(temp_15_fu_6686_p1.read());
}

void HLS_accel::thread_temp_18_fu_6692_p0() {
    temp_18_fu_6692_p0 = b_9_q1.read();
}

void HLS_accel::thread_temp_18_fu_6692_p1() {
    temp_18_fu_6692_p1 = a_9_q1.read();
}

void HLS_accel::thread_temp_18_fu_6692_p2() {
    temp_18_fu_6692_p2 = (!temp_18_fu_6692_p0.read().is_01() || !temp_18_fu_6692_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_18_fu_6692_p0.read()) * sc_bigint<8>(temp_18_fu_6692_p1.read());
}

void HLS_accel::thread_temp_1_fu_6650_p0() {
    temp_1_fu_6650_p0 = b_0_q1.read();
}

void HLS_accel::thread_temp_1_fu_6650_p1() {
    temp_1_fu_6650_p1 = a_0_q1.read();
}

void HLS_accel::thread_temp_1_fu_6650_p2() {
    temp_1_fu_6650_p2 = (!temp_1_fu_6650_p0.read().is_01() || !temp_1_fu_6650_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_1_fu_6650_p0.read()) * sc_bigint<8>(temp_1_fu_6650_p1.read());
}

void HLS_accel::thread_temp_20_fu_6698_p0() {
    temp_20_fu_6698_p0 = b_10_q1.read();
}

void HLS_accel::thread_temp_20_fu_6698_p1() {
    temp_20_fu_6698_p1 = a_10_q1.read();
}

void HLS_accel::thread_temp_20_fu_6698_p2() {
    temp_20_fu_6698_p2 = (!temp_20_fu_6698_p0.read().is_01() || !temp_20_fu_6698_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_20_fu_6698_p0.read()) * sc_bigint<8>(temp_20_fu_6698_p1.read());
}

void HLS_accel::thread_temp_23_fu_6704_p0() {
    temp_23_fu_6704_p0 = b_12_q0.read();
}

void HLS_accel::thread_temp_23_fu_6704_p1() {
    temp_23_fu_6704_p1 = a_12_q0.read();
}

void HLS_accel::thread_temp_23_fu_6704_p2() {
    temp_23_fu_6704_p2 = (!temp_23_fu_6704_p0.read().is_01() || !temp_23_fu_6704_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_23_fu_6704_p0.read()) * sc_bigint<8>(temp_23_fu_6704_p1.read());
}

void HLS_accel::thread_temp_25_fu_6806_p0() {
    temp_25_fu_6806_p0 = b_13_q0.read();
}

void HLS_accel::thread_temp_25_fu_6806_p1() {
    temp_25_fu_6806_p1 = a_13_q0.read();
}

void HLS_accel::thread_temp_25_fu_6806_p2() {
    temp_25_fu_6806_p2 = (!temp_25_fu_6806_p0.read().is_01() || !temp_25_fu_6806_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_25_fu_6806_p0.read()) * sc_bigint<8>(temp_25_fu_6806_p1.read());
}

void HLS_accel::thread_temp_28_fu_6710_p0() {
    temp_28_fu_6710_p0 = b_14_q1.read();
}

void HLS_accel::thread_temp_28_fu_6710_p1() {
    temp_28_fu_6710_p1 = a_14_q1.read();
}

void HLS_accel::thread_temp_28_fu_6710_p2() {
    temp_28_fu_6710_p2 = (!temp_28_fu_6710_p0.read().is_01() || !temp_28_fu_6710_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_28_fu_6710_p0.read()) * sc_bigint<8>(temp_28_fu_6710_p1.read());
}

void HLS_accel::thread_temp_30_fu_6716_p0() {
    temp_30_fu_6716_p0 = b_15_q1.read();
}

void HLS_accel::thread_temp_30_fu_6716_p1() {
    temp_30_fu_6716_p1 = a_15_q1.read();
}

void HLS_accel::thread_temp_30_fu_6716_p2() {
    temp_30_fu_6716_p2 = (!temp_30_fu_6716_p0.read().is_01() || !temp_30_fu_6716_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_30_fu_6716_p0.read()) * sc_bigint<8>(temp_30_fu_6716_p1.read());
}

void HLS_accel::thread_temp_33_fu_6722_p0() {
    temp_33_fu_6722_p0 = b_17_q0.read();
}

void HLS_accel::thread_temp_33_fu_6722_p1() {
    temp_33_fu_6722_p1 = a_17_q0.read();
}

void HLS_accel::thread_temp_33_fu_6722_p2() {
    temp_33_fu_6722_p2 = (!temp_33_fu_6722_p0.read().is_01() || !temp_33_fu_6722_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_33_fu_6722_p0.read()) * sc_bigint<8>(temp_33_fu_6722_p1.read());
}

void HLS_accel::thread_temp_35_fu_6812_p0() {
    temp_35_fu_6812_p0 = b_18_q0.read();
}

void HLS_accel::thread_temp_35_fu_6812_p1() {
    temp_35_fu_6812_p1 = a_18_q0.read();
}

void HLS_accel::thread_temp_35_fu_6812_p2() {
    temp_35_fu_6812_p2 = (!temp_35_fu_6812_p0.read().is_01() || !temp_35_fu_6812_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_35_fu_6812_p0.read()) * sc_bigint<8>(temp_35_fu_6812_p1.read());
}

void HLS_accel::thread_temp_38_fu_6728_p0() {
    temp_38_fu_6728_p0 = b_19_q1.read();
}

void HLS_accel::thread_temp_38_fu_6728_p1() {
    temp_38_fu_6728_p1 = a_19_q1.read();
}

void HLS_accel::thread_temp_38_fu_6728_p2() {
    temp_38_fu_6728_p2 = (!temp_38_fu_6728_p0.read().is_01() || !temp_38_fu_6728_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_38_fu_6728_p0.read()) * sc_bigint<8>(temp_38_fu_6728_p1.read());
}

void HLS_accel::thread_temp_40_fu_6734_p0() {
    temp_40_fu_6734_p0 = b_20_q1.read();
}

void HLS_accel::thread_temp_40_fu_6734_p1() {
    temp_40_fu_6734_p1 = a_20_q1.read();
}

void HLS_accel::thread_temp_40_fu_6734_p2() {
    temp_40_fu_6734_p2 = (!temp_40_fu_6734_p0.read().is_01() || !temp_40_fu_6734_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_40_fu_6734_p0.read()) * sc_bigint<8>(temp_40_fu_6734_p1.read());
}

void HLS_accel::thread_temp_43_fu_6740_p0() {
    temp_43_fu_6740_p0 = b_22_q0.read();
}

void HLS_accel::thread_temp_43_fu_6740_p1() {
    temp_43_fu_6740_p1 = a_22_q0.read();
}

void HLS_accel::thread_temp_43_fu_6740_p2() {
    temp_43_fu_6740_p2 = (!temp_43_fu_6740_p0.read().is_01() || !temp_43_fu_6740_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_43_fu_6740_p0.read()) * sc_bigint<8>(temp_43_fu_6740_p1.read());
}

void HLS_accel::thread_temp_45_fu_6818_p0() {
    temp_45_fu_6818_p0 = b_23_q0.read();
}

void HLS_accel::thread_temp_45_fu_6818_p1() {
    temp_45_fu_6818_p1 = a_23_q0.read();
}

void HLS_accel::thread_temp_45_fu_6818_p2() {
    temp_45_fu_6818_p2 = (!temp_45_fu_6818_p0.read().is_01() || !temp_45_fu_6818_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_45_fu_6818_p0.read()) * sc_bigint<8>(temp_45_fu_6818_p1.read());
}

void HLS_accel::thread_temp_48_fu_6746_p0() {
    temp_48_fu_6746_p0 = b_24_q1.read();
}

void HLS_accel::thread_temp_48_fu_6746_p1() {
    temp_48_fu_6746_p1 = a_24_q1.read();
}

void HLS_accel::thread_temp_48_fu_6746_p2() {
    temp_48_fu_6746_p2 = (!temp_48_fu_6746_p0.read().is_01() || !temp_48_fu_6746_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_48_fu_6746_p0.read()) * sc_bigint<8>(temp_48_fu_6746_p1.read());
}

void HLS_accel::thread_temp_4_fu_6656_p0() {
    temp_4_fu_6656_p0 = b_2_q0.read();
}

void HLS_accel::thread_temp_4_fu_6656_p1() {
    temp_4_fu_6656_p1 = a_2_q0.read();
}

void HLS_accel::thread_temp_4_fu_6656_p2() {
    temp_4_fu_6656_p2 = (!temp_4_fu_6656_p0.read().is_01() || !temp_4_fu_6656_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_4_fu_6656_p0.read()) * sc_bigint<8>(temp_4_fu_6656_p1.read());
}

void HLS_accel::thread_temp_50_fu_6824_p0() {
    temp_50_fu_6824_p0 = b_25_q1.read();
}

void HLS_accel::thread_temp_50_fu_6824_p1() {
    temp_50_fu_6824_p1 = a_25_q1.read();
}

void HLS_accel::thread_temp_50_fu_6824_p2() {
    temp_50_fu_6824_p2 = (!temp_50_fu_6824_p0.read().is_01() || !temp_50_fu_6824_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_50_fu_6824_p0.read()) * sc_bigint<8>(temp_50_fu_6824_p1.read());
}

void HLS_accel::thread_temp_53_fu_6830_p0() {
    temp_53_fu_6830_p0 = b_27_q0.read();
}

void HLS_accel::thread_temp_53_fu_6830_p1() {
    temp_53_fu_6830_p1 = a_27_q0.read();
}

void HLS_accel::thread_temp_53_fu_6830_p2() {
    temp_53_fu_6830_p2 = (!temp_53_fu_6830_p0.read().is_01() || !temp_53_fu_6830_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_53_fu_6830_p0.read()) * sc_bigint<8>(temp_53_fu_6830_p1.read());
}

void HLS_accel::thread_temp_55_fu_6836_p0() {
    temp_55_fu_6836_p0 = b_28_q0.read();
}

void HLS_accel::thread_temp_55_fu_6836_p1() {
    temp_55_fu_6836_p1 = a_28_q0.read();
}

void HLS_accel::thread_temp_55_fu_6836_p2() {
    temp_55_fu_6836_p2 = (!temp_55_fu_6836_p0.read().is_01() || !temp_55_fu_6836_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_55_fu_6836_p0.read()) * sc_bigint<8>(temp_55_fu_6836_p1.read());
}

void HLS_accel::thread_temp_58_fu_6842_p0() {
    temp_58_fu_6842_p0 = b_29_q1.read();
}

void HLS_accel::thread_temp_58_fu_6842_p1() {
    temp_58_fu_6842_p1 = a_29_q1.read();
}

void HLS_accel::thread_temp_58_fu_6842_p2() {
    temp_58_fu_6842_p2 = (!temp_58_fu_6842_p0.read().is_01() || !temp_58_fu_6842_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_58_fu_6842_p0.read()) * sc_bigint<8>(temp_58_fu_6842_p1.read());
}

void HLS_accel::thread_temp_60_fu_6752_p0() {
    temp_60_fu_6752_p0 = b_30_q1.read();
}

void HLS_accel::thread_temp_60_fu_6752_p1() {
    temp_60_fu_6752_p1 = a_30_q1.read();
}

void HLS_accel::thread_temp_60_fu_6752_p2() {
    temp_60_fu_6752_p2 = (!temp_60_fu_6752_p0.read().is_01() || !temp_60_fu_6752_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_60_fu_6752_p0.read()) * sc_bigint<8>(temp_60_fu_6752_p1.read());
}

void HLS_accel::thread_temp_63_fu_6758_p0() {
    temp_63_fu_6758_p0 = b_32_q0.read();
}

void HLS_accel::thread_temp_63_fu_6758_p1() {
    temp_63_fu_6758_p1 = a_32_q0.read();
}

void HLS_accel::thread_temp_63_fu_6758_p2() {
    temp_63_fu_6758_p2 = (!temp_63_fu_6758_p0.read().is_01() || !temp_63_fu_6758_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_63_fu_6758_p0.read()) * sc_bigint<8>(temp_63_fu_6758_p1.read());
}

void HLS_accel::thread_temp_65_fu_6848_p0() {
    temp_65_fu_6848_p0 = b_33_q0.read();
}

void HLS_accel::thread_temp_65_fu_6848_p1() {
    temp_65_fu_6848_p1 = a_33_q0.read();
}

void HLS_accel::thread_temp_65_fu_6848_p2() {
    temp_65_fu_6848_p2 = (!temp_65_fu_6848_p0.read().is_01() || !temp_65_fu_6848_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_65_fu_6848_p0.read()) * sc_bigint<8>(temp_65_fu_6848_p1.read());
}

void HLS_accel::thread_temp_68_fu_6764_p0() {
    temp_68_fu_6764_p0 = b_34_q1.read();
}

void HLS_accel::thread_temp_68_fu_6764_p1() {
    temp_68_fu_6764_p1 = a_34_q1.read();
}

void HLS_accel::thread_temp_68_fu_6764_p2() {
    temp_68_fu_6764_p2 = (!temp_68_fu_6764_p0.read().is_01() || !temp_68_fu_6764_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_68_fu_6764_p0.read()) * sc_bigint<8>(temp_68_fu_6764_p1.read());
}

void HLS_accel::thread_temp_6_fu_6662_p0() {
    temp_6_fu_6662_p0 = b_3_q0.read();
}

void HLS_accel::thread_temp_6_fu_6662_p1() {
    temp_6_fu_6662_p1 = a_3_q0.read();
}

void HLS_accel::thread_temp_6_fu_6662_p2() {
    temp_6_fu_6662_p2 = (!temp_6_fu_6662_p0.read().is_01() || !temp_6_fu_6662_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_6_fu_6662_p0.read()) * sc_bigint<8>(temp_6_fu_6662_p1.read());
}

void HLS_accel::thread_temp_70_fu_6854_p0() {
    temp_70_fu_6854_p0 = b_35_q1.read();
}

void HLS_accel::thread_temp_70_fu_6854_p1() {
    temp_70_fu_6854_p1 = a_35_q1.read();
}

void HLS_accel::thread_temp_70_fu_6854_p2() {
    temp_70_fu_6854_p2 = (!temp_70_fu_6854_p0.read().is_01() || !temp_70_fu_6854_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_70_fu_6854_p0.read()) * sc_bigint<8>(temp_70_fu_6854_p1.read());
}

void HLS_accel::thread_temp_73_fu_6860_p0() {
    temp_73_fu_6860_p0 = b_37_q0.read();
}

void HLS_accel::thread_temp_73_fu_6860_p1() {
    temp_73_fu_6860_p1 = a_37_q0.read();
}

void HLS_accel::thread_temp_73_fu_6860_p2() {
    temp_73_fu_6860_p2 = (!temp_73_fu_6860_p0.read().is_01() || !temp_73_fu_6860_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_73_fu_6860_p0.read()) * sc_bigint<8>(temp_73_fu_6860_p1.read());
}

void HLS_accel::thread_temp_75_fu_6866_p0() {
    temp_75_fu_6866_p0 = b_38_q0.read();
}

void HLS_accel::thread_temp_75_fu_6866_p1() {
    temp_75_fu_6866_p1 = a_38_q0.read();
}

void HLS_accel::thread_temp_75_fu_6866_p2() {
    temp_75_fu_6866_p2 = (!temp_75_fu_6866_p0.read().is_01() || !temp_75_fu_6866_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_75_fu_6866_p0.read()) * sc_bigint<8>(temp_75_fu_6866_p1.read());
}

void HLS_accel::thread_temp_78_fu_6872_p0() {
    temp_78_fu_6872_p0 = b_39_q1.read();
}

void HLS_accel::thread_temp_78_fu_6872_p1() {
    temp_78_fu_6872_p1 = a_39_q1.read();
}

void HLS_accel::thread_temp_78_fu_6872_p2() {
    temp_78_fu_6872_p2 = (!temp_78_fu_6872_p0.read().is_01() || !temp_78_fu_6872_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_78_fu_6872_p0.read()) * sc_bigint<8>(temp_78_fu_6872_p1.read());
}

void HLS_accel::thread_temp_80_fu_6770_p0() {
    temp_80_fu_6770_p0 = b_40_q1.read();
}

void HLS_accel::thread_temp_80_fu_6770_p1() {
    temp_80_fu_6770_p1 = a_40_q1.read();
}

void HLS_accel::thread_temp_80_fu_6770_p2() {
    temp_80_fu_6770_p2 = (!temp_80_fu_6770_p0.read().is_01() || !temp_80_fu_6770_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_80_fu_6770_p0.read()) * sc_bigint<8>(temp_80_fu_6770_p1.read());
}

void HLS_accel::thread_temp_83_fu_6776_p0() {
    temp_83_fu_6776_p0 = b_42_q0.read();
}

void HLS_accel::thread_temp_83_fu_6776_p1() {
    temp_83_fu_6776_p1 = a_42_q0.read();
}

void HLS_accel::thread_temp_83_fu_6776_p2() {
    temp_83_fu_6776_p2 = (!temp_83_fu_6776_p0.read().is_01() || !temp_83_fu_6776_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_83_fu_6776_p0.read()) * sc_bigint<8>(temp_83_fu_6776_p1.read());
}

void HLS_accel::thread_temp_85_fu_6878_p0() {
    temp_85_fu_6878_p0 = b_43_q0.read();
}

void HLS_accel::thread_temp_85_fu_6878_p1() {
    temp_85_fu_6878_p1 = a_43_q0.read();
}

void HLS_accel::thread_temp_85_fu_6878_p2() {
    temp_85_fu_6878_p2 = (!temp_85_fu_6878_p0.read().is_01() || !temp_85_fu_6878_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_85_fu_6878_p0.read()) * sc_bigint<8>(temp_85_fu_6878_p1.read());
}

void HLS_accel::thread_temp_88_fu_6782_p0() {
    temp_88_fu_6782_p0 = b_44_q1.read();
}

void HLS_accel::thread_temp_88_fu_6782_p1() {
    temp_88_fu_6782_p1 = a_44_q1.read();
}

void HLS_accel::thread_temp_88_fu_6782_p2() {
    temp_88_fu_6782_p2 = (!temp_88_fu_6782_p0.read().is_01() || !temp_88_fu_6782_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_88_fu_6782_p0.read()) * sc_bigint<8>(temp_88_fu_6782_p1.read());
}

void HLS_accel::thread_temp_90_fu_6884_p0() {
    temp_90_fu_6884_p0 = b_45_q1.read();
}

void HLS_accel::thread_temp_90_fu_6884_p1() {
    temp_90_fu_6884_p1 = a_45_q1.read();
}

void HLS_accel::thread_temp_90_fu_6884_p2() {
    temp_90_fu_6884_p2 = (!temp_90_fu_6884_p0.read().is_01() || !temp_90_fu_6884_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_90_fu_6884_p0.read()) * sc_bigint<8>(temp_90_fu_6884_p1.read());
}

void HLS_accel::thread_temp_93_fu_6890_p0() {
    temp_93_fu_6890_p0 = b_47_q0.read();
}

void HLS_accel::thread_temp_93_fu_6890_p1() {
    temp_93_fu_6890_p1 = a_47_q0.read();
}

void HLS_accel::thread_temp_93_fu_6890_p2() {
    temp_93_fu_6890_p2 = (!temp_93_fu_6890_p0.read().is_01() || !temp_93_fu_6890_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_93_fu_6890_p0.read()) * sc_bigint<8>(temp_93_fu_6890_p1.read());
}

void HLS_accel::thread_temp_95_fu_6896_p0() {
    temp_95_fu_6896_p0 = b_48_q0.read();
}

void HLS_accel::thread_temp_95_fu_6896_p1() {
    temp_95_fu_6896_p1 = a_48_q0.read();
}

void HLS_accel::thread_temp_95_fu_6896_p2() {
    temp_95_fu_6896_p2 = (!temp_95_fu_6896_p0.read().is_01() || !temp_95_fu_6896_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_95_fu_6896_p0.read()) * sc_bigint<8>(temp_95_fu_6896_p1.read());
}

void HLS_accel::thread_temp_98_fu_6902_p0() {
    temp_98_fu_6902_p0 = b_49_q1.read();
}

void HLS_accel::thread_temp_98_fu_6902_p1() {
    temp_98_fu_6902_p1 = a_49_q1.read();
}

void HLS_accel::thread_temp_98_fu_6902_p2() {
    temp_98_fu_6902_p2 = (!temp_98_fu_6902_p0.read().is_01() || !temp_98_fu_6902_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_98_fu_6902_p0.read()) * sc_bigint<8>(temp_98_fu_6902_p1.read());
}

void HLS_accel::thread_temp_9_fu_6668_p0() {
    temp_9_fu_6668_p0 = b_4_q1.read();
}

void HLS_accel::thread_temp_9_fu_6668_p1() {
    temp_9_fu_6668_p1 = a_4_q1.read();
}

void HLS_accel::thread_temp_9_fu_6668_p2() {
    temp_9_fu_6668_p2 = (!temp_9_fu_6668_p0.read().is_01() || !temp_9_fu_6668_p1.read().is_01())? sc_lv<8>(): sc_bigint<8>(temp_9_fu_6668_p0.read()) * sc_bigint<8>(temp_9_fu_6668_p1.read());
}

void HLS_accel::thread_tmp100_fu_7257_p2() {
    tmp100_fu_7257_p2 = (!tmp101_fu_7243_p2.read().is_01() || !tmp110_fu_7252_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp101_fu_7243_p2.read()) + sc_biguint<8>(tmp110_fu_7252_p2.read()));
}

void HLS_accel::thread_tmp101_fu_7243_p2() {
    tmp101_fu_7243_p2 = (!tmp102_reg_11338.read().is_01() || !tmp106_fu_7239_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp102_reg_11338.read()) + sc_biguint<8>(tmp106_fu_7239_p2.read()));
}

void HLS_accel::thread_tmp102_fu_7158_p2() {
    tmp102_fu_7158_p2 = (!grp_fu_7849_p3.read().is_01() || !grp_fu_7855_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7849_p3.read()) + sc_bigint<8>(grp_fu_7855_p3.read()));
}

void HLS_accel::thread_tmp106_fu_7239_p2() {
    tmp106_fu_7239_p2 = (!tmp107_reg_11343.read().is_01() || !tmp108_reg_11348.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp107_reg_11343.read()) + sc_bigint<8>(tmp108_reg_11348.read()));
}

void HLS_accel::thread_tmp110_fu_7252_p2() {
    tmp110_fu_7252_p2 = (!tmp111_reg_11353.read().is_01() || !tmp115_fu_7248_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp111_reg_11353.read()) + sc_biguint<8>(tmp115_fu_7248_p2.read()));
}

void HLS_accel::thread_tmp111_fu_7162_p2() {
    tmp111_fu_7162_p2 = (!grp_fu_7883_p3.read().is_01() || !grp_fu_7889_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7883_p3.read()) + sc_bigint<8>(grp_fu_7889_p3.read()));
}

void HLS_accel::thread_tmp115_fu_7248_p2() {
    tmp115_fu_7248_p2 = (!tmp116_reg_11358.read().is_01() || !tmp117_reg_11363.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp116_reg_11358.read()) + sc_bigint<8>(tmp117_reg_11363.read()));
}

void HLS_accel::thread_tmp119_fu_7302_p2() {
    tmp119_fu_7302_p2 = (!tmp120_fu_7273_p2.read().is_01() || !tmp139_fu_7296_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp120_fu_7273_p2.read()) + sc_biguint<8>(tmp139_fu_7296_p2.read()));
}

void HLS_accel::thread_tmp120_fu_7273_p2() {
    tmp120_fu_7273_p2 = (!tmp121_reg_11368.read().is_01() || !tmp130_fu_7269_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp121_reg_11368.read()) + sc_biguint<8>(tmp130_fu_7269_p2.read()));
}

void HLS_accel::thread_tmp121_fu_7170_p2() {
    tmp121_fu_7170_p2 = (!tmp122_reg_11268.read().is_01() || !tmp126_fu_7166_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp122_reg_11268.read()) + sc_biguint<8>(tmp126_fu_7166_p2.read()));
}

void HLS_accel::thread_tmp122_fu_7066_p2() {
    tmp122_fu_7066_p2 = (!grp_fu_7658_p3.read().is_01() || !grp_fu_7664_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7658_p3.read()) + sc_bigint<8>(grp_fu_7664_p3.read()));
}

void HLS_accel::thread_tmp126_fu_7166_p2() {
    tmp126_fu_7166_p2 = (!grp_fu_7917_p3.read().is_01() || !grp_fu_7923_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7917_p3.read()) + sc_bigint<8>(grp_fu_7923_p3.read()));
}

void HLS_accel::thread_tmp12_fu_7079_p2() {
    tmp12_fu_7079_p2 = (!tmp13_reg_11208.read().is_01() || !tmp17_reg_11213.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp13_reg_11208.read()) + sc_biguint<8>(tmp17_reg_11213.read()));
}

void HLS_accel::thread_tmp130_fu_7269_p2() {
    tmp130_fu_7269_p2 = (!tmp131_reg_11373.read().is_01() || !tmp135_reg_11378.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp131_reg_11373.read()) + sc_biguint<8>(tmp135_reg_11378.read()));
}

void HLS_accel::thread_tmp131_fu_7175_p2() {
    tmp131_fu_7175_p2 = (!grp_fu_7929_p3.read().is_01() || !grp_fu_7935_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7929_p3.read()) + sc_bigint<8>(grp_fu_7935_p3.read()));
}

void HLS_accel::thread_tmp135_fu_7179_p2() {
    tmp135_fu_7179_p2 = (!grp_fu_7947_p3.read().is_01() || !grp_fu_7953_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7947_p3.read()) + sc_bigint<8>(grp_fu_7953_p3.read()));
}

void HLS_accel::thread_tmp139_fu_7296_p2() {
    tmp139_fu_7296_p2 = (!tmp140_fu_7282_p2.read().is_01() || !tmp149_fu_7291_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp140_fu_7282_p2.read()) + sc_biguint<8>(tmp149_fu_7291_p2.read()));
}

void HLS_accel::thread_tmp13_fu_7038_p2() {
    tmp13_fu_7038_p2 = (!grp_fu_7507_p3.read().is_01() || !grp_fu_7513_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7507_p3.read()) + sc_bigint<8>(grp_fu_7513_p3.read()));
}

void HLS_accel::thread_tmp140_fu_7282_p2() {
    tmp140_fu_7282_p2 = (!tmp141_reg_11383.read().is_01() || !tmp145_fu_7278_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp141_reg_11383.read()) + sc_biguint<8>(tmp145_fu_7278_p2.read()));
}

void HLS_accel::thread_tmp141_fu_7183_p2() {
    tmp141_fu_7183_p2 = (!grp_fu_7965_p3.read().is_01() || !grp_fu_7971_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7965_p3.read()) + sc_bigint<8>(grp_fu_7971_p3.read()));
}

void HLS_accel::thread_tmp145_fu_7278_p2() {
    tmp145_fu_7278_p2 = (!tmp146_reg_11388.read().is_01() || !tmp147_reg_11393.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp146_reg_11388.read()) + sc_bigint<8>(tmp147_reg_11393.read()));
}

void HLS_accel::thread_tmp149_fu_7291_p2() {
    tmp149_fu_7291_p2 = (!tmp150_reg_11398.read().is_01() || !tmp154_fu_7287_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp150_reg_11398.read()) + sc_biguint<8>(tmp154_fu_7287_p2.read()));
}

void HLS_accel::thread_tmp150_fu_7187_p2() {
    tmp150_fu_7187_p2 = (!grp_fu_7999_p3.read().is_01() || !grp_fu_8005_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7999_p3.read()) + sc_bigint<8>(grp_fu_8005_p3.read()));
}

void HLS_accel::thread_tmp154_fu_7287_p2() {
    tmp154_fu_7287_p2 = (!tmp155_reg_11403.read().is_01() || !tmp156_reg_11408.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp155_reg_11403.read()) + sc_bigint<8>(tmp156_reg_11408.read()));
}

void HLS_accel::thread_tmp158_cast_fu_7443_p1() {
    tmp158_cast_fu_7443_p1 = esl_zext<15,13>(tmp158_fu_7437_p2.read());
}

void HLS_accel::thread_tmp158_fu_7437_p2() {
    tmp158_fu_7437_p2 = (!j5_0_i_cast_fu_7434_p1.read().is_01() || !p_shl5_mid2_fu_7413_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(j5_0_i_cast_fu_7434_p1.read()) + sc_biguint<13>(p_shl5_mid2_fu_7413_p3.read()));
}

void HLS_accel::thread_tmp17_fu_7042_p2() {
    tmp17_fu_7042_p2 = (!grp_fu_7525_p3.read().is_01() || !grp_fu_7531_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7525_p3.read()) + sc_bigint<8>(grp_fu_7531_p3.read()));
}

void HLS_accel::thread_tmp1_fu_7195_p2() {
    tmp1_fu_7195_p2 = (!tmp2_reg_11278.read().is_01() || !tmp21_fu_7191_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp2_reg_11278.read()) + sc_biguint<8>(tmp21_fu_7191_p2.read()));
}

void HLS_accel::thread_tmp21_fu_7191_p2() {
    tmp21_fu_7191_p2 = (!tmp22_reg_11283.read().is_01() || !tmp31_reg_11288.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp22_reg_11283.read()) + sc_biguint<8>(tmp31_reg_11288.read()));
}

void HLS_accel::thread_tmp22_fu_7093_p2() {
    tmp22_fu_7093_p2 = (!tmp23_reg_11218.read().is_01() || !tmp27_fu_7089_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp23_reg_11218.read()) + sc_biguint<8>(tmp27_fu_7089_p2.read()));
}

void HLS_accel::thread_tmp23_fu_7046_p2() {
    tmp23_fu_7046_p2 = (!grp_fu_7543_p3.read().is_01() || !grp_fu_7549_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7543_p3.read()) + sc_bigint<8>(grp_fu_7549_p3.read()));
}

void HLS_accel::thread_tmp27_fu_7089_p2() {
    tmp27_fu_7089_p2 = (!grp_fu_7681_p3.read().is_01() || !grp_fu_7687_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7681_p3.read()) + sc_bigint<8>(grp_fu_7687_p3.read()));
}

void HLS_accel::thread_tmp2_fu_7083_p2() {
    tmp2_fu_7083_p2 = (!tmp3_fu_7074_p2.read().is_01() || !tmp12_fu_7079_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp3_fu_7074_p2.read()) + sc_biguint<8>(tmp12_fu_7079_p2.read()));
}

void HLS_accel::thread_tmp31_fu_7102_p2() {
    tmp31_fu_7102_p2 = (!tmp32_reg_11228.read().is_01() || !tmp36_fu_7098_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp32_reg_11228.read()) + sc_biguint<8>(tmp36_fu_7098_p2.read()));
}

void HLS_accel::thread_tmp32_fu_7050_p2() {
    tmp32_fu_7050_p2 = (!grp_fu_7566_p3.read().is_01() || !grp_fu_7572_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7566_p3.read()) + sc_bigint<8>(grp_fu_7572_p3.read()));
}

void HLS_accel::thread_tmp36_fu_7098_p2() {
    tmp36_fu_7098_p2 = (!grp_fu_7693_p3.read().is_01() || !grp_fu_7699_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7693_p3.read()) + sc_bigint<8>(grp_fu_7699_p3.read()));
}

void HLS_accel::thread_tmp3_fu_7074_p2() {
    tmp3_fu_7074_p2 = (!tmp4_reg_11193.read().is_01() || !tmp8_fu_7070_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp4_reg_11193.read()) + sc_biguint<8>(tmp8_fu_7070_p2.read()));
}

void HLS_accel::thread_tmp40_fu_7218_p2() {
    tmp40_fu_7218_p2 = (!tmp41_fu_7204_p2.read().is_01() || !tmp60_fu_7213_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp41_fu_7204_p2.read()) + sc_biguint<8>(tmp60_fu_7213_p2.read()));
}

void HLS_accel::thread_tmp41_fu_7204_p2() {
    tmp41_fu_7204_p2 = (!tmp42_reg_11293.read().is_01() || !tmp51_fu_7200_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp42_reg_11293.read()) + sc_biguint<8>(tmp51_fu_7200_p2.read()));
}

void HLS_accel::thread_tmp42_fu_7111_p2() {
    tmp42_fu_7111_p2 = (!tmp43_reg_11238.read().is_01() || !tmp47_fu_7107_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp43_reg_11238.read()) + sc_biguint<8>(tmp47_fu_7107_p2.read()));
}

void HLS_accel::thread_tmp43_fu_7054_p2() {
    tmp43_fu_7054_p2 = (!grp_fu_7589_p3.read().is_01() || !grp_fu_7595_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7589_p3.read()) + sc_bigint<8>(grp_fu_7595_p3.read()));
}

void HLS_accel::thread_tmp47_fu_7107_p2() {
    tmp47_fu_7107_p2 = (!grp_fu_7705_p3.read().is_01() || !grp_fu_7711_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7705_p3.read()) + sc_bigint<8>(grp_fu_7711_p3.read()));
}

void HLS_accel::thread_tmp4_fu_7034_p2() {
    tmp4_fu_7034_p2 = (!grp_fu_7473_p3.read().is_01() || !grp_fu_7479_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7473_p3.read()) + sc_bigint<8>(grp_fu_7479_p3.read()));
}

void HLS_accel::thread_tmp51_fu_7200_p2() {
    tmp51_fu_7200_p2 = (!tmp52_reg_11298.read().is_01() || !tmp56_reg_11303.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp52_reg_11298.read()) + sc_biguint<8>(tmp56_reg_11303.read()));
}

void HLS_accel::thread_tmp52_fu_7116_p2() {
    tmp52_fu_7116_p2 = (!grp_fu_7717_p3.read().is_01() || !grp_fu_7723_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7717_p3.read()) + sc_bigint<8>(grp_fu_7723_p3.read()));
}

void HLS_accel::thread_tmp56_fu_7120_p2() {
    tmp56_fu_7120_p2 = (!grp_fu_7735_p3.read().is_01() || !grp_fu_7741_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7735_p3.read()) + sc_bigint<8>(grp_fu_7741_p3.read()));
}

void HLS_accel::thread_tmp60_fu_7213_p2() {
    tmp60_fu_7213_p2 = (!tmp61_reg_11308.read().is_01() || !tmp70_fu_7209_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp61_reg_11308.read()) + sc_biguint<8>(tmp70_fu_7209_p2.read()));
}

void HLS_accel::thread_tmp61_fu_7128_p2() {
    tmp61_fu_7128_p2 = (!tmp62_reg_11248.read().is_01() || !tmp66_fu_7124_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp62_reg_11248.read()) + sc_biguint<8>(tmp66_fu_7124_p2.read()));
}

void HLS_accel::thread_tmp62_fu_7058_p2() {
    tmp62_fu_7058_p2 = (!grp_fu_7612_p3.read().is_01() || !grp_fu_7618_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7612_p3.read()) + sc_bigint<8>(grp_fu_7618_p3.read()));
}

void HLS_accel::thread_tmp66_fu_7124_p2() {
    tmp66_fu_7124_p2 = (!grp_fu_7753_p3.read().is_01() || !grp_fu_7759_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7753_p3.read()) + sc_bigint<8>(grp_fu_7759_p3.read()));
}

void HLS_accel::thread_tmp70_fu_7209_p2() {
    tmp70_fu_7209_p2 = (!tmp71_reg_11313.read().is_01() || !tmp75_reg_11318.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp71_reg_11313.read()) + sc_biguint<8>(tmp75_reg_11318.read()));
}

void HLS_accel::thread_tmp71_fu_7133_p2() {
    tmp71_fu_7133_p2 = (!grp_fu_7765_p3.read().is_01() || !grp_fu_7771_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7765_p3.read()) + sc_bigint<8>(grp_fu_7771_p3.read()));
}

void HLS_accel::thread_tmp75_fu_7137_p2() {
    tmp75_fu_7137_p2 = (!grp_fu_7783_p3.read().is_01() || !grp_fu_7789_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7783_p3.read()) + sc_bigint<8>(grp_fu_7789_p3.read()));
}

void HLS_accel::thread_tmp79_fu_7350_p2() {
    tmp79_fu_7350_p2 = (!tmp80_reg_11418.read().is_01() || !tmp119_reg_11423.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp80_reg_11418.read()) + sc_biguint<8>(tmp119_reg_11423.read()));
}

void HLS_accel::thread_tmp80_fu_7263_p2() {
    tmp80_fu_7263_p2 = (!tmp81_fu_7234_p2.read().is_01() || !tmp100_fu_7257_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp81_fu_7234_p2.read()) + sc_biguint<8>(tmp100_fu_7257_p2.read()));
}

void HLS_accel::thread_tmp81_fu_7234_p2() {
    tmp81_fu_7234_p2 = (!tmp82_reg_11323.read().is_01() || !tmp91_fu_7230_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp82_reg_11323.read()) + sc_biguint<8>(tmp91_fu_7230_p2.read()));
}

void HLS_accel::thread_tmp82_fu_7145_p2() {
    tmp82_fu_7145_p2 = (!tmp83_reg_11258.read().is_01() || !tmp87_fu_7141_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp83_reg_11258.read()) + sc_biguint<8>(tmp87_fu_7141_p2.read()));
}

void HLS_accel::thread_tmp83_fu_7062_p2() {
    tmp83_fu_7062_p2 = (!grp_fu_7635_p3.read().is_01() || !grp_fu_7641_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7635_p3.read()) + sc_bigint<8>(grp_fu_7641_p3.read()));
}

void HLS_accel::thread_tmp87_fu_7141_p2() {
    tmp87_fu_7141_p2 = (!grp_fu_7801_p3.read().is_01() || !grp_fu_7807_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7801_p3.read()) + sc_bigint<8>(grp_fu_7807_p3.read()));
}

void HLS_accel::thread_tmp8_fu_7070_p2() {
    tmp8_fu_7070_p2 = (!tmp9_reg_11198.read().is_01() || !tmp10_reg_11203.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp9_reg_11198.read()) + sc_bigint<8>(tmp10_reg_11203.read()));
}

void HLS_accel::thread_tmp91_fu_7230_p2() {
    tmp91_fu_7230_p2 = (!tmp92_reg_11328.read().is_01() || !tmp96_reg_11333.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp92_reg_11328.read()) + sc_biguint<8>(tmp96_reg_11333.read()));
}

void HLS_accel::thread_tmp92_fu_7150_p2() {
    tmp92_fu_7150_p2 = (!grp_fu_7813_p3.read().is_01() || !grp_fu_7819_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7813_p3.read()) + sc_bigint<8>(grp_fu_7819_p3.read()));
}

void HLS_accel::thread_tmp96_fu_7154_p2() {
    tmp96_fu_7154_p2 = (!grp_fu_7831_p3.read().is_01() || !grp_fu_7837_p3.read().is_01())? sc_lv<8>(): (sc_bigint<8>(grp_fu_7831_p3.read()) + sc_bigint<8>(grp_fu_7837_p3.read()));
}

void HLS_accel::thread_tmp_10_cast_fu_7453_p1() {
    tmp_10_cast_fu_7453_p1 = esl_zext<16,8>(j5_0_i_mid2_reg_11437.read());
}

void HLS_accel::thread_tmp_10_fu_6398_p3() {
    tmp_10_fu_6398_p3 = esl_concat<8,1>(ap_phi_mux_ia_0_i_i_phi_fu_5869_p4.read(), ap_const_lv1_0);
}

void HLS_accel::thread_tmp_11_fu_6406_p2() {
    tmp_11_fu_6406_p2 = (tmp_10_fu_6398_p3.read() | ap_const_lv9_1);
}

void HLS_accel::thread_tmp_12_fu_6412_p3() {
    tmp_12_fu_6412_p3 = esl_concat<55,9>(ap_const_lv55_0, tmp_11_fu_6406_p2.read());
}

void HLS_accel::thread_tmp_13_fu_6452_p3() {
    tmp_13_fu_6452_p3 = esl_concat<8,1>(ia_fu_6432_p2.read(), ap_const_lv1_0);
}

void HLS_accel::thread_tmp_14_fu_6460_p2() {
    tmp_14_fu_6460_p2 = (tmp_13_fu_6452_p3.read() | ap_const_lv9_1);
}

void HLS_accel::thread_tmp_15_fu_6466_p3() {
    tmp_15_fu_6466_p3 = esl_concat<55,9>(ap_const_lv55_0, tmp_14_fu_6460_p2.read());
}

void HLS_accel::thread_tmp_161_cast_fu_7462_p1() {
    tmp_161_cast_fu_7462_p1 = esl_zext<64,16>(tmp_22_fu_7456_p2.read());
}

void HLS_accel::thread_tmp_16_fu_7308_p3() {
    tmp_16_fu_7308_p3 = esl_concat<8,7>(tmp_8_mid2_v_reg_8089_pp2_iter4_reg.read(), ap_const_lv7_0);
}

void HLS_accel::thread_tmp_17_fu_7319_p3() {
    tmp_17_fu_7319_p3 = esl_concat<8,5>(tmp_8_mid2_v_reg_8089_pp2_iter4_reg.read(), ap_const_lv5_0);
}

void HLS_accel::thread_tmp_18_fu_7330_p2() {
    tmp_18_fu_7330_p2 = (!p_shl1_cast_fu_7326_p1.read().is_01() || !p_shl_cast_fu_7315_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl1_cast_fu_7326_p1.read()) + sc_biguint<16>(p_shl_cast_fu_7315_p1.read()));
}

void HLS_accel::thread_tmp_19_fu_6606_p2() {
    tmp_19_fu_6606_p2 = (!tmp_5_cast_fu_6602_p1.read().is_01() || !ap_const_lv9_A0.is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_5_cast_fu_6602_p1.read()) + sc_biguint<9>(ap_const_lv9_A0));
}

void HLS_accel::thread_tmp_1_fu_6138_p3() {
    tmp_1_fu_6138_p3 = esl_concat<8,1>(tmp_1_mid2_v_fu_6116_p3.read(), tmp_3_fu_6134_p1.read());
}

void HLS_accel::thread_tmp_1_mid2_v_fu_6116_p3() {
    tmp_1_mid2_v_fu_6116_p3 = (!exitcond4_i_fu_6102_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond4_i_fu_6102_p2.read()[0].to_bool())? i_fu_6096_p2.read(): i_0_i_reg_5799.read());
}

void HLS_accel::thread_tmp_20_fu_7339_p2() {
    tmp_20_fu_7339_p2 = (!tmp_18_fu_7330_p2.read().is_01() || !tmp_5_cast1_fu_7336_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_18_fu_7330_p2.read()) + sc_biguint<16>(tmp_5_cast1_fu_7336_p1.read()));
}

void HLS_accel::thread_tmp_21_fu_7428_p2() {
    tmp_21_fu_7428_p2 = (!p_shl3_cast_fu_7424_p1.read().is_01() || !p_shl2_cast_fu_7420_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(p_shl3_cast_fu_7424_p1.read()) + sc_biguint<16>(p_shl2_cast_fu_7420_p1.read()));
}

void HLS_accel::thread_tmp_22_cast_fu_6612_p1() {
    tmp_22_cast_fu_6612_p1 = esl_zext<64,9>(tmp_19_fu_6606_p2.read());
}

void HLS_accel::thread_tmp_22_fu_7456_p2() {
    tmp_22_fu_7456_p2 = (!tmp_21_fu_7428_p2.read().is_01() || !tmp_10_cast_fu_7453_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp_21_fu_7428_p2.read()) + sc_biguint<16>(tmp_10_cast_fu_7453_p1.read()));
}

void HLS_accel::thread_tmp_23_cast_fu_7345_p1() {
    tmp_23_cast_fu_7345_p1 = esl_zext<64,16>(tmp_20_fu_7339_p2.read());
}

void HLS_accel::thread_tmp_2_fu_6146_p1() {
    tmp_2_fu_6146_p1 = esl_zext<64,9>(tmp_1_fu_6138_p3.read());
}

void HLS_accel::thread_tmp_3_cast_fu_6290_p3() {
    tmp_3_cast_fu_6290_p3 = (!tmp_7_fu_6286_p1.read()[0].is_01())? sc_lv<9>(): ((tmp_7_fu_6286_p1.read()[0].to_bool())? ap_const_lv9_A0: ap_const_lv9_0);
}

void HLS_accel::thread_tmp_3_fu_6134_p1() {
    tmp_3_fu_6134_p1 = j_0_i_mid2_fu_6108_p3.read().range(1-1, 0);
}

void HLS_accel::thread_tmp_5_cast1_fu_7336_p1() {
    tmp_5_cast1_fu_7336_p1 = esl_zext<16,8>(ib_0_i_i_mid2_reg_8084_pp2_iter4_reg.read());
}

void HLS_accel::thread_tmp_5_cast_fu_6602_p1() {
    tmp_5_cast_fu_6602_p1 = esl_zext<9,8>(ib_0_i_i_mid2_fu_6444_p3.read());
}

void HLS_accel::thread_tmp_5_fu_6564_p1() {
    tmp_5_fu_6564_p1 = esl_zext<64,8>(ib_0_i_i_mid2_fu_6444_p3.read());
}

void HLS_accel::thread_tmp_7_cast_fu_6298_p1() {
    tmp_7_cast_fu_6298_p1 = esl_zext<9,8>(j2_0_i_mid2_fu_6260_p3.read());
}

void HLS_accel::thread_tmp_7_fu_6286_p1() {
    tmp_7_fu_6286_p1 = arrayNo1_mid2_v_fu_6268_p3.read().range(1-1, 0);
}

void HLS_accel::thread_tmp_8_cast_fu_6308_p1() {
    tmp_8_cast_fu_6308_p1 = esl_zext<64,9>(tmp_8_fu_6302_p2.read());
}

void HLS_accel::thread_tmp_8_fu_6302_p2() {
    tmp_8_fu_6302_p2 = (!tmp_3_cast_fu_6290_p3.read().is_01() || !tmp_7_cast_fu_6298_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_3_cast_fu_6290_p3.read()) + sc_biguint<9>(tmp_7_cast_fu_6298_p1.read()));
}

void HLS_accel::thread_tmp_8_mid2_v_fu_6474_p3() {
    tmp_8_mid2_v_fu_6474_p3 = (!exitcond1_i_i_fu_6438_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond1_i_i_fu_6438_p2.read()[0].to_bool())? ia_fu_6432_p2.read(): ap_phi_mux_ia_0_i_i_phi_fu_5869_p4.read());
}

void HLS_accel::thread_tmp_fu_7224_p2() {
    tmp_fu_7224_p2 = (!tmp1_fu_7195_p2.read().is_01() || !tmp40_fu_7218_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp1_fu_7195_p2.read()) + sc_biguint<8>(tmp40_fu_7218_p2.read()));
}

}

