/*****************************************************/
/**  Autogenerated clustergen voice for cmu_us_slt    */
/*****************************************************/

#include "cst_string.h"
#include "cst_cg.h"
#include "cst_cart.h"

extern const cst_cart * const cmu_us_slt_f0_carts[];
extern const cst_cart cmu_us_slt_spamf0_phrase_cart;
extern const cst_cart cmu_us_slt_spamf0_accent_cart;
extern const float * const cmu_us_slt_spamf0_accent_vectors[];
#define cmu_us_slt_spamf0_accent_num_channels 8
#define cmu_us_slt_spamf0_accent_num_frames 93

extern const cst_cart * const cmu_us_slt_single_mcep_carts[];
#define cmu_us_slt_single_num_channels 114
#define cmu_us_slt_single_num_frames 8873
extern uint16_t * cmu_us_slt_single_model_vectors[];
extern const dur_stat * cmu_us_slt_dur_stats[];
extern const cst_cart cmu_us_slt_dur_cart;
extern const char * const *cmu_us_slt_phone_states[];

const char * const cmu_us_slt_types[] = {
   "zh_204",
   "zh_205",
   "zh_206",
   "oy_131",
   "oy_132",
   "oy_133",
   "ch_41",
   "ch_42",
   "ch_43",
   "aw_21",
   "aw_22",
   "aw_23",
   "ow_126",
   "ow_127",
   "ow_128",
   "b_36",
   "b_37",
   "b_38",
   "g_76",
   "g_77",
   "g_78",
   "ng_121",
   "ng_122",
   "ng_123",
   "uw_179",
   "uw_180",
   "uw_181",
   "sh_156",
   "sh_157",
   "sh_158",
   "uh_174",
   "uh_175",
   "uh_176",
   "hh_81",
   "hh_82",
   "hh_83",
   "ae_6",
   "ae_7",
   "ae_8",
   "y_194",
   "y_195",
   "y_196",
   "k_101",
   "k_102",
   "k_103",
   "aa_1",
   "aa_2",
   "aa_3",
   "ay_31",
   "ay_32",
   "ay_33",
   "w_189",
   "w_190",
   "w_191",
   "m_111",
   "m_112",
   "m_113",
   "pau_143",
   "ao_16",
   "ao_17",
   "ao_18",
   "th_169",
   "th_170",
   "th_171",
   "ah_11",
   "ah_12",
   "ah_13",
   "v_184",
   "v_185",
   "v_186",
   "dh_51",
   "dh_52",
   "dh_53",
   "d_46",
   "d_47",
   "d_48",
   "n_116",
   "n_117",
   "n_118",
   "jh_96",
   "jh_97",
   "jh_98",
   "r_146",
   "r_147",
   "r_148",
   "ey_66",
   "ey_67",
   "ey_68",
   "f_71",
   "f_72",
   "f_73",
   "ih_86",
   "ih_87",
   "ih_88",
   "p_136",
   "p_137",
   "p_138",
   "iy_91",
   "iy_92",
   "iy_93",
   "l_106",
   "l_107",
   "l_108",
   "z_199",
   "z_200",
   "z_201",
   "pau_161",
   "s_151",
   "s_152",
   "s_153",
   "eh_56",
   "eh_57",
   "eh_58",
   "t_164",
   "t_165",
   "t_166",
   "er_61",
   "er_62",
   "er_63",
   "ax_26",
   "ax_27",
   "ax_28",
   "pau_141",
   "pau_142",
   NULL};
#define cmu_us_slt_num_types  124

const float cmu_us_slt_model_min[] = { 
   -0.037037,
   0.000000,
   1.020280,
   0.061370,
   -1.649820,
   0.065470,
   -1.180900,
   0.066549,
   -0.536839,
   0.059870,
   -1.633860,
   0.060759,
   -0.338413,
   0.064708,
   -1.174020,
   0.052442,
   -0.556705,
   0.046337,
   -0.886744,
   0.048091,
   -0.530488,
   0.047197,
   -0.820222,
   0.060131,
   -0.500468,
   0.052693,
   -0.646078,
   0.052642,
   -0.401984,
   0.046195,
   -0.624722,
   0.050729,
   -0.435684,
   0.048360,
   -0.547262,
   0.040524,
   -0.405866,
   0.046975,
   -0.417949,
   0.041868,
   -0.248979,
   0.039230,
   -0.431862,
   0.043537,
   -0.222744,
   0.043704,
   -0.350512,
   0.038664,
   -0.181736,
   0.033471,
   -0.377817,
   0.050875,
   -1.063370,
   0.022907,
   -0.587571,
   0.026545,
   -0.713087,
   0.029384,
   -0.302452,
   0.027856,
   -0.405558,
   0.028860,
   -0.167605,
   0.027246,
   -0.260638,
   0.029115,
   -0.152630,
   0.027202,
   -0.225639,
   0.026638,
   -0.167163,
   0.021044,
   -0.195574,
   0.026420,
   -0.152154,
   0.024953,
   -0.158776,
   0.025161,
   -0.161874,
   0.024460,
   -0.125389,
   0.025433,
   -0.124325,
   0.022131,
   -0.085163,
   0.021243,
   -0.098704,
   0.021427,
   -0.062391,
   0.020743,
   -0.081857,
   0.021790,
   -0.087536,
   0.021880,
   -0.070394,
   0.019421,
   -0.052995,
   0.020659,
   -0.057187,
   0.017595,
   -0.077374,
   0.024058,
   0.014410,
   0.000376,
   0.146234,
   0.004198,
   0.177392,
   0.029631,
   0.167053,
   0.062498,
   0.169124,
   0.016867,
   0.000000,
   0.000000,
};
const float cmu_us_slt_model_range[] = { 
   221.762039,
   45.276798,
   6.671010,
   1.779960,
   5.384220,
   1.213620,
   2.778960,
   0.575000,
   2.461189,
   0.560957,
   2.469174,
   0.473505,
   1.197771,
   0.345387,
   1.628353,
   0.414854,
   1.065196,
   0.271946,
   1.298023,
   0.293247,
   1.169076,
   0.380875,
   1.101563,
   0.287727,
   0.906911,
   0.251206,
   0.863077,
   0.287008,
   1.071492,
   0.232261,
   0.740699,
   0.192208,
   0.754968,
   0.219289,
   0.635533,
   0.194809,
   0.587306,
   0.158992,
   0.672037,
   0.191321,
   0.525243,
   0.147219,
   0.568140,
   0.174978,
   0.512379,
   0.151137,
   0.404784,
   0.157388,
   0.385242,
   0.148412,
   0.599131,
   0.196966,
   3.141530,
   0.876753,
   1.654971,
   0.401506,
   1.053265,
   0.339222,
   0.790898,
   0.218258,
   0.713905,
   0.179117,
   0.345490,
   0.142732,
   0.437298,
   0.124392,
   0.269632,
   0.102418,
   0.460489,
   0.124140,
   0.341167,
   0.105408,
   0.304984,
   0.133416,
   0.286601,
   0.086765,
   0.258747,
   0.082036,
   0.288698,
   0.089637,
   0.229658,
   0.085204,
   0.210149,
   0.075370,
   0.149094,
   0.089667,
   0.181741,
   0.078487,
   0.137299,
   0.069550,
   0.154931,
   0.074056,
   0.152401,
   0.066542,
   0.132607,
   0.070790,
   0.128560,
   0.068474,
   0.109052,
   0.066316,
   0.148960,
   0.062321,
   0.985036,
   0.416760,
   0.847603,
   0.282201,
   0.774800,
   0.260238,
   0.612253,
   0.197747,
   0.803581,
   0.265129,
   10.000000,
   5.050760,
};
float cmu_us_slt_dynwin[] = { -0.5, 0.0, 0.5 };
#define cmu_us_slt_dynwinsize 3
const double cmu_us_slt_me_filter_0[] = {
-0.000399, -0.000699, -0.001099, -0.001637, -0.002312, -0.003074, -0.003809, -0.004351, -0.004484, -0.003962, -0.002541, -0.000000, 0.003823, 0.009004, 0.015512, 0.023196, 0.031787, 0.040907, 0.050093, 0.058835, 0.066610, 0.072934, 0.077398, 0.079708, 0.079708, 0.077398, 0.072934, 0.066610, 0.058835, 0.050093, 0.040907, 0.031787, 0.023196, 0.015512, 0.009004, 0.003823, -0.000000, -0.002541, -0.003962, -0.004484, -0.004351, -0.003809, -0.003074, -0.002312, -0.001637, -0.001099, -0.000699, -0.000399
};
const double cmu_us_slt_me_filter_1[] = {
0.000496, -0.000058, -0.001005, -0.002381, -0.003945, -0.005039, -0.004653, -0.001797, 0.003915, 0.011720, 0.019506, 0.024199, 0.022732, 0.013331, -0.003381, -0.023975, -0.042828, -0.053712, -0.051874, -0.035904, -0.008641, 0.023315, 0.051428, 0.067831, 0.067831, 0.051428, 0.023315, -0.008641, -0.035904, -0.051874, -0.053712, -0.042828, -0.023975, -0.003381, 0.013331, 0.022732, 0.024199, 0.019506, 0.011720, 0.003915, -0.001797, -0.004653, -0.005039, -0.003945, -0.002381, -0.001005, -0.000058, 0.000496
};
const double cmu_us_slt_me_filter_2[] = {
0.000201, 0.001321, 0.000959, -0.002283, -0.004482, -0.001078, 0.003495, 0.001813, -0.000020, 0.008175, 0.013508, -0.004814, -0.029146, -0.020370, 0.009818, 0.010703, -0.006372, 0.025894, 0.083862, 0.038460, -0.122700, -0.193589, -0.023811, 0.210551, 0.210551, -0.023811, -0.193589, -0.122700, 0.038460, 0.083862, 0.025894, -0.006372, 0.010703, 0.009818, -0.020370, -0.029146, -0.004814, 0.013508, 0.008175, -0.000020, 0.001813, 0.003495, -0.001078, -0.004482, -0.002283, 0.000959, 0.001321, 0.000201
};
const double cmu_us_slt_me_filter_3[] = {
0.001506, -0.001866, 0.000040, 0.000245, 0.001315, 0.001553, -0.007738, 0.004472, 0.006691, -0.006614, -0.000051, -0.010459, 0.019514, 0.010167, -0.042837, 0.019609, 0.013218, 0.010271, -0.008695, -0.096298, 0.140882, 0.048727, -0.264734, 0.161309, 0.161309, -0.264734, 0.048727, 0.140882, -0.096298, -0.008695, 0.010271, 0.013218, 0.019609, -0.042837, 0.010167, 0.019514, -0.010459, -0.000051, -0.006614, 0.006691, 0.004472, -0.007738, 0.001553, 0.001315, 0.000245, 0.000040, -0.001866, 0.001506
};
const double cmu_us_slt_me_filter_4[] = {
-0.001754, 0.002357, -0.002671, 0.002435, -0.001539, 0.000393, -0.000077, 0.001963, -0.006807, 0.013808, -0.020365, 0.023037, -0.019545, 0.010865, -0.002081, 0.001031, -0.014854, 0.045806, -0.088445, 0.129996, -0.154339, 0.148291, -0.107518, 0.039308, 0.039308, -0.107518, 0.148291, -0.154339, 0.129996, -0.088445, 0.045806, -0.014854, 0.001031, -0.002081, 0.010865, -0.019545, 0.023037, -0.020365, 0.013808, -0.006807, 0.001963, -0.000077, 0.000393, -0.001539, 0.002435, -0.002671, 0.002357, -0.001754
};
const double * const cmu_us_slt_me_h[] = {
   cmu_us_slt_me_filter_0,
   cmu_us_slt_me_filter_1,
   cmu_us_slt_me_filter_2,
   cmu_us_slt_me_filter_3,
   cmu_us_slt_me_filter_4
};

#define cmu_us_slt_num_dur_models 1
#define cmu_us_slt_num_param_models 1
int cmu_us_slt_num_channels[] = {
    cmu_us_slt_single_num_channels
};
int cmu_us_slt_num_frames[] = {
    cmu_us_slt_single_num_frames
};
uint16_t **cmu_us_slt_model_vectors[] = {
    cmu_us_slt_single_model_vectors
};
const cst_cart * const *cmu_us_slt_mcep_carts[] = {
    cmu_us_slt_single_mcep_carts
};
const dur_stat **cmu_us_slt_dur_stats_table[] = {
    cmu_us_slt_dur_stats
};
const cst_cart *cmu_us_slt_dur_cart_table[] = {
    &cmu_us_slt_dur_cart
};

const cst_cg_db cmu_us_slt_cg_db = {
  "cmu_us_slt",
  cmu_us_slt_types,
  cmu_us_slt_num_types,
  16000,
  172.000000,27.000000,
  cmu_us_slt_f0_carts,
  cmu_us_slt_num_param_models,
  cmu_us_slt_mcep_carts,
  &cmu_us_slt_spamf0_accent_cart,
  &cmu_us_slt_spamf0_phrase_cart,
  cmu_us_slt_num_channels,
  cmu_us_slt_num_frames,
  cmu_us_slt_model_vectors,
  cmu_us_slt_spamf0_accent_num_channels,
  cmu_us_slt_spamf0_accent_num_frames,
  cmu_us_slt_spamf0_accent_vectors,
  cmu_us_slt_model_min,
  cmu_us_slt_model_range,
  0.005000, /* frame_advance */
  cmu_us_slt_num_dur_models,
  cmu_us_slt_dur_stats_table,
  cmu_us_slt_dur_cart_table,
  cmu_us_slt_phone_states,
  1, /* 1 if mlpg required */
  cmu_us_slt_dynwin,
  cmu_us_slt_dynwinsize,
  0.420000, /* mlsa_alpha */
  0.400000, /* mlsa_beta */
  0, /* cg:multimodel */
  1, /* cg:mixed_excitation */
  5,48, /* filter sizes */
  cmu_us_slt_me_h,
  0, // cg:spamf0
  1.5, /* gain */
  0 /* freeable */
};
