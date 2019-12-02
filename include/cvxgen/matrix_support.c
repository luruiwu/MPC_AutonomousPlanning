/* Produced by CVXGEN, 2019-12-01 02:43:26 -0500.  */
/* CVXGEN is Copyright (C) 2006-2017 Jacob Mattingley, jem@cvxgen.com. */
/* The code in this file is Copyright (C) 2006-2017 Jacob Mattingley. */
/* CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial */
/* applications without prior written permission from Jacob Mattingley. */

/* Filename: matrix_support.c. */
/* Description: Support functions for matrix multiplication and vector filling. */
#include "solver.h"
void multbymA(double *lhs, double *rhs) {
  lhs[0] = -rhs[32]*(-params.B[0])-rhs[54]*(1);
  lhs[1] = -rhs[33]*(-params.B[0])-rhs[55]*(1);
  lhs[2] = -rhs[34]*(-params.B[0])-rhs[54]*(-params.A[0])-rhs[55]*(-params.A[2])-rhs[56]*(1);
  lhs[3] = -rhs[35]*(-params.B[0])-rhs[54]*(-params.A[1])-rhs[55]*(-params.A[3])-rhs[57]*(1);
  lhs[4] = -rhs[36]*(-params.B[0])-rhs[56]*(-params.A[0])-rhs[57]*(-params.A[2])-rhs[58]*(1);
  lhs[5] = -rhs[37]*(-params.B[0])-rhs[56]*(-params.A[1])-rhs[57]*(-params.A[3])-rhs[59]*(1);
  lhs[6] = -rhs[38]*(-params.B[0])-rhs[58]*(-params.A[0])-rhs[59]*(-params.A[2])-rhs[60]*(1);
  lhs[7] = -rhs[39]*(-params.B[0])-rhs[58]*(-params.A[1])-rhs[59]*(-params.A[3])-rhs[61]*(1);
  lhs[8] = -rhs[40]*(-params.B[0])-rhs[60]*(-params.A[0])-rhs[61]*(-params.A[2])-rhs[62]*(1);
  lhs[9] = -rhs[41]*(-params.B[0])-rhs[60]*(-params.A[1])-rhs[61]*(-params.A[3])-rhs[63]*(1);
  lhs[10] = -rhs[42]*(-params.B[0])-rhs[62]*(-params.A[0])-rhs[63]*(-params.A[2])-rhs[64]*(1);
  lhs[11] = -rhs[43]*(-params.B[0])-rhs[62]*(-params.A[1])-rhs[63]*(-params.A[3])-rhs[65]*(1);
  lhs[12] = -rhs[44]*(-params.B[0])-rhs[64]*(-params.A[0])-rhs[65]*(-params.A[2])-rhs[66]*(1);
  lhs[13] = -rhs[45]*(-params.B[0])-rhs[64]*(-params.A[1])-rhs[65]*(-params.A[3])-rhs[67]*(1);
  lhs[14] = -rhs[46]*(-params.B[0])-rhs[66]*(-params.A[0])-rhs[67]*(-params.A[2])-rhs[68]*(1);
  lhs[15] = -rhs[47]*(-params.B[0])-rhs[66]*(-params.A[1])-rhs[67]*(-params.A[3])-rhs[69]*(1);
  lhs[16] = -rhs[48]*(-params.B[0])-rhs[68]*(-params.A[0])-rhs[69]*(-params.A[2])-rhs[70]*(1);
  lhs[17] = -rhs[49]*(-params.B[0])-rhs[68]*(-params.A[1])-rhs[69]*(-params.A[3])-rhs[71]*(1);
  lhs[18] = -rhs[50]*(-params.B[0])-rhs[70]*(-params.A[0])-rhs[71]*(-params.A[2])-rhs[72]*(1);
  lhs[19] = -rhs[51]*(-params.B[0])-rhs[70]*(-params.A[1])-rhs[71]*(-params.A[3])-rhs[73]*(1);
  lhs[20] = -rhs[52]*(-params.B[0])-rhs[72]*(-params.A[0])-rhs[73]*(-params.A[2])-rhs[74]*(1);
  lhs[21] = -rhs[53]*(-params.B[0])-rhs[72]*(-params.A[1])-rhs[73]*(-params.A[3])-rhs[75]*(1);
}
void multbymAT(double *lhs, double *rhs) {
  lhs[0] = 0;
  lhs[1] = 0;
  lhs[2] = 0;
  lhs[3] = 0;
  lhs[4] = 0;
  lhs[5] = 0;
  lhs[6] = 0;
  lhs[7] = 0;
  lhs[8] = 0;
  lhs[9] = 0;
  lhs[10] = 0;
  lhs[11] = 0;
  lhs[12] = 0;
  lhs[13] = 0;
  lhs[14] = 0;
  lhs[15] = 0;
  lhs[16] = 0;
  lhs[17] = 0;
  lhs[18] = 0;
  lhs[19] = 0;
  lhs[20] = 0;
  lhs[21] = 0;
  lhs[22] = 0;
  lhs[23] = 0;
  lhs[24] = 0;
  lhs[25] = 0;
  lhs[26] = 0;
  lhs[27] = 0;
  lhs[28] = 0;
  lhs[29] = 0;
  lhs[30] = 0;
  lhs[31] = 0;
  lhs[32] = -rhs[0]*(-params.B[0]);
  lhs[33] = -rhs[1]*(-params.B[0]);
  lhs[34] = -rhs[2]*(-params.B[0]);
  lhs[35] = -rhs[3]*(-params.B[0]);
  lhs[36] = -rhs[4]*(-params.B[0]);
  lhs[37] = -rhs[5]*(-params.B[0]);
  lhs[38] = -rhs[6]*(-params.B[0]);
  lhs[39] = -rhs[7]*(-params.B[0]);
  lhs[40] = -rhs[8]*(-params.B[0]);
  lhs[41] = -rhs[9]*(-params.B[0]);
  lhs[42] = -rhs[10]*(-params.B[0]);
  lhs[43] = -rhs[11]*(-params.B[0]);
  lhs[44] = -rhs[12]*(-params.B[0]);
  lhs[45] = -rhs[13]*(-params.B[0]);
  lhs[46] = -rhs[14]*(-params.B[0]);
  lhs[47] = -rhs[15]*(-params.B[0]);
  lhs[48] = -rhs[16]*(-params.B[0]);
  lhs[49] = -rhs[17]*(-params.B[0]);
  lhs[50] = -rhs[18]*(-params.B[0]);
  lhs[51] = -rhs[19]*(-params.B[0]);
  lhs[52] = -rhs[20]*(-params.B[0]);
  lhs[53] = -rhs[21]*(-params.B[0]);
  lhs[54] = -rhs[0]*(1)-rhs[2]*(-params.A[0])-rhs[3]*(-params.A[1]);
  lhs[55] = -rhs[1]*(1)-rhs[2]*(-params.A[2])-rhs[3]*(-params.A[3]);
  lhs[56] = -rhs[2]*(1)-rhs[4]*(-params.A[0])-rhs[5]*(-params.A[1]);
  lhs[57] = -rhs[3]*(1)-rhs[4]*(-params.A[2])-rhs[5]*(-params.A[3]);
  lhs[58] = -rhs[4]*(1)-rhs[6]*(-params.A[0])-rhs[7]*(-params.A[1]);
  lhs[59] = -rhs[5]*(1)-rhs[6]*(-params.A[2])-rhs[7]*(-params.A[3]);
  lhs[60] = -rhs[6]*(1)-rhs[8]*(-params.A[0])-rhs[9]*(-params.A[1]);
  lhs[61] = -rhs[7]*(1)-rhs[8]*(-params.A[2])-rhs[9]*(-params.A[3]);
  lhs[62] = -rhs[8]*(1)-rhs[10]*(-params.A[0])-rhs[11]*(-params.A[1]);
  lhs[63] = -rhs[9]*(1)-rhs[10]*(-params.A[2])-rhs[11]*(-params.A[3]);
  lhs[64] = -rhs[10]*(1)-rhs[12]*(-params.A[0])-rhs[13]*(-params.A[1]);
  lhs[65] = -rhs[11]*(1)-rhs[12]*(-params.A[2])-rhs[13]*(-params.A[3]);
  lhs[66] = -rhs[12]*(1)-rhs[14]*(-params.A[0])-rhs[15]*(-params.A[1]);
  lhs[67] = -rhs[13]*(1)-rhs[14]*(-params.A[2])-rhs[15]*(-params.A[3]);
  lhs[68] = -rhs[14]*(1)-rhs[16]*(-params.A[0])-rhs[17]*(-params.A[1]);
  lhs[69] = -rhs[15]*(1)-rhs[16]*(-params.A[2])-rhs[17]*(-params.A[3]);
  lhs[70] = -rhs[16]*(1)-rhs[18]*(-params.A[0])-rhs[19]*(-params.A[1]);
  lhs[71] = -rhs[17]*(1)-rhs[18]*(-params.A[2])-rhs[19]*(-params.A[3]);
  lhs[72] = -rhs[18]*(1)-rhs[20]*(-params.A[0])-rhs[21]*(-params.A[1]);
  lhs[73] = -rhs[19]*(1)-rhs[20]*(-params.A[2])-rhs[21]*(-params.A[3]);
  lhs[74] = -rhs[20]*(1);
  lhs[75] = -rhs[21]*(1);
}
void multbymG(double *lhs, double *rhs) {
  lhs[0] = -rhs[0]*(1);
  lhs[1] = -rhs[1]*(1);
  lhs[2] = -rhs[0]*(-1)-rhs[32]*(1);
  lhs[3] = -rhs[1]*(-1)-rhs[33]*(1);
  lhs[4] = -rhs[0]*(-1)-rhs[32]*(-1);
  lhs[5] = -rhs[1]*(-1)-rhs[33]*(-1);
  lhs[6] = -rhs[2]*(1);
  lhs[7] = -rhs[3]*(1);
  lhs[8] = -rhs[2]*(-1)-rhs[34]*(1);
  lhs[9] = -rhs[3]*(-1)-rhs[35]*(1);
  lhs[10] = -rhs[2]*(-1)-rhs[34]*(-1);
  lhs[11] = -rhs[3]*(-1)-rhs[35]*(-1);
  lhs[12] = -rhs[4]*(1);
  lhs[13] = -rhs[5]*(1);
  lhs[14] = -rhs[4]*(-1)-rhs[36]*(1);
  lhs[15] = -rhs[5]*(-1)-rhs[37]*(1);
  lhs[16] = -rhs[4]*(-1)-rhs[36]*(-1);
  lhs[17] = -rhs[5]*(-1)-rhs[37]*(-1);
  lhs[18] = -rhs[6]*(1);
  lhs[19] = -rhs[7]*(1);
  lhs[20] = -rhs[6]*(-1)-rhs[38]*(1);
  lhs[21] = -rhs[7]*(-1)-rhs[39]*(1);
  lhs[22] = -rhs[6]*(-1)-rhs[38]*(-1);
  lhs[23] = -rhs[7]*(-1)-rhs[39]*(-1);
  lhs[24] = -rhs[8]*(1);
  lhs[25] = -rhs[9]*(1);
  lhs[26] = -rhs[8]*(-1)-rhs[40]*(1);
  lhs[27] = -rhs[9]*(-1)-rhs[41]*(1);
  lhs[28] = -rhs[8]*(-1)-rhs[40]*(-1);
  lhs[29] = -rhs[9]*(-1)-rhs[41]*(-1);
  lhs[30] = -rhs[10]*(1);
  lhs[31] = -rhs[11]*(1);
  lhs[32] = -rhs[10]*(-1)-rhs[42]*(1);
  lhs[33] = -rhs[11]*(-1)-rhs[43]*(1);
  lhs[34] = -rhs[10]*(-1)-rhs[42]*(-1);
  lhs[35] = -rhs[11]*(-1)-rhs[43]*(-1);
  lhs[36] = -rhs[12]*(1);
  lhs[37] = -rhs[13]*(1);
  lhs[38] = -rhs[12]*(-1)-rhs[44]*(1);
  lhs[39] = -rhs[13]*(-1)-rhs[45]*(1);
  lhs[40] = -rhs[12]*(-1)-rhs[44]*(-1);
  lhs[41] = -rhs[13]*(-1)-rhs[45]*(-1);
  lhs[42] = -rhs[14]*(1);
  lhs[43] = -rhs[15]*(1);
  lhs[44] = -rhs[14]*(-1)-rhs[46]*(1);
  lhs[45] = -rhs[15]*(-1)-rhs[47]*(1);
  lhs[46] = -rhs[14]*(-1)-rhs[46]*(-1);
  lhs[47] = -rhs[15]*(-1)-rhs[47]*(-1);
  lhs[48] = -rhs[16]*(1);
  lhs[49] = -rhs[17]*(1);
  lhs[50] = -rhs[16]*(-1)-rhs[48]*(1);
  lhs[51] = -rhs[17]*(-1)-rhs[49]*(1);
  lhs[52] = -rhs[16]*(-1)-rhs[48]*(-1);
  lhs[53] = -rhs[17]*(-1)-rhs[49]*(-1);
  lhs[54] = -rhs[18]*(1);
  lhs[55] = -rhs[19]*(1);
  lhs[56] = -rhs[18]*(-1)-rhs[50]*(1);
  lhs[57] = -rhs[19]*(-1)-rhs[51]*(1);
  lhs[58] = -rhs[18]*(-1)-rhs[50]*(-1);
  lhs[59] = -rhs[19]*(-1)-rhs[51]*(-1);
  lhs[60] = -rhs[20]*(1);
  lhs[61] = -rhs[21]*(1);
  lhs[62] = -rhs[20]*(-1)-rhs[52]*(1);
  lhs[63] = -rhs[21]*(-1)-rhs[53]*(1);
  lhs[64] = -rhs[20]*(-1)-rhs[52]*(-1);
  lhs[65] = -rhs[21]*(-1)-rhs[53]*(-1);
  lhs[66] = -rhs[22]*(1);
  lhs[67] = -rhs[22]*(-1)-rhs[32]*(-1)-rhs[34]*(1);
  lhs[68] = -rhs[22]*(-1)-rhs[32]*(1)-rhs[34]*(-1);
  lhs[69] = -rhs[23]*(1);
  lhs[70] = -rhs[23]*(-1)-rhs[34]*(-1)-rhs[36]*(1);
  lhs[71] = -rhs[23]*(-1)-rhs[34]*(1)-rhs[36]*(-1);
  lhs[72] = -rhs[24]*(1);
  lhs[73] = -rhs[24]*(-1)-rhs[36]*(-1)-rhs[38]*(1);
  lhs[74] = -rhs[24]*(-1)-rhs[36]*(1)-rhs[38]*(-1);
  lhs[75] = -rhs[25]*(1);
  lhs[76] = -rhs[25]*(-1)-rhs[38]*(-1)-rhs[40]*(1);
  lhs[77] = -rhs[25]*(-1)-rhs[38]*(1)-rhs[40]*(-1);
  lhs[78] = -rhs[26]*(1);
  lhs[79] = -rhs[26]*(-1)-rhs[40]*(-1)-rhs[42]*(1);
  lhs[80] = -rhs[26]*(-1)-rhs[40]*(1)-rhs[42]*(-1);
  lhs[81] = -rhs[27]*(1);
  lhs[82] = -rhs[27]*(-1)-rhs[42]*(-1)-rhs[44]*(1);
  lhs[83] = -rhs[27]*(-1)-rhs[42]*(1)-rhs[44]*(-1);
  lhs[84] = -rhs[28]*(1);
  lhs[85] = -rhs[28]*(-1)-rhs[44]*(-1)-rhs[46]*(1);
  lhs[86] = -rhs[28]*(-1)-rhs[44]*(1)-rhs[46]*(-1);
  lhs[87] = -rhs[29]*(1);
  lhs[88] = -rhs[29]*(-1)-rhs[46]*(-1)-rhs[48]*(1);
  lhs[89] = -rhs[29]*(-1)-rhs[46]*(1)-rhs[48]*(-1);
  lhs[90] = -rhs[30]*(1);
  lhs[91] = -rhs[30]*(-1)-rhs[48]*(-1)-rhs[50]*(1);
  lhs[92] = -rhs[30]*(-1)-rhs[48]*(1)-rhs[50]*(-1);
  lhs[93] = -rhs[31]*(1);
  lhs[94] = -rhs[31]*(-1)-rhs[50]*(-1)-rhs[52]*(1);
  lhs[95] = -rhs[31]*(-1)-rhs[50]*(1)-rhs[52]*(-1);
}
void multbymGT(double *lhs, double *rhs) {
  lhs[0] = -rhs[0]*(1)-rhs[2]*(-1)-rhs[4]*(-1);
  lhs[1] = -rhs[1]*(1)-rhs[3]*(-1)-rhs[5]*(-1);
  lhs[2] = -rhs[6]*(1)-rhs[8]*(-1)-rhs[10]*(-1);
  lhs[3] = -rhs[7]*(1)-rhs[9]*(-1)-rhs[11]*(-1);
  lhs[4] = -rhs[12]*(1)-rhs[14]*(-1)-rhs[16]*(-1);
  lhs[5] = -rhs[13]*(1)-rhs[15]*(-1)-rhs[17]*(-1);
  lhs[6] = -rhs[18]*(1)-rhs[20]*(-1)-rhs[22]*(-1);
  lhs[7] = -rhs[19]*(1)-rhs[21]*(-1)-rhs[23]*(-1);
  lhs[8] = -rhs[24]*(1)-rhs[26]*(-1)-rhs[28]*(-1);
  lhs[9] = -rhs[25]*(1)-rhs[27]*(-1)-rhs[29]*(-1);
  lhs[10] = -rhs[30]*(1)-rhs[32]*(-1)-rhs[34]*(-1);
  lhs[11] = -rhs[31]*(1)-rhs[33]*(-1)-rhs[35]*(-1);
  lhs[12] = -rhs[36]*(1)-rhs[38]*(-1)-rhs[40]*(-1);
  lhs[13] = -rhs[37]*(1)-rhs[39]*(-1)-rhs[41]*(-1);
  lhs[14] = -rhs[42]*(1)-rhs[44]*(-1)-rhs[46]*(-1);
  lhs[15] = -rhs[43]*(1)-rhs[45]*(-1)-rhs[47]*(-1);
  lhs[16] = -rhs[48]*(1)-rhs[50]*(-1)-rhs[52]*(-1);
  lhs[17] = -rhs[49]*(1)-rhs[51]*(-1)-rhs[53]*(-1);
  lhs[18] = -rhs[54]*(1)-rhs[56]*(-1)-rhs[58]*(-1);
  lhs[19] = -rhs[55]*(1)-rhs[57]*(-1)-rhs[59]*(-1);
  lhs[20] = -rhs[60]*(1)-rhs[62]*(-1)-rhs[64]*(-1);
  lhs[21] = -rhs[61]*(1)-rhs[63]*(-1)-rhs[65]*(-1);
  lhs[22] = -rhs[66]*(1)-rhs[67]*(-1)-rhs[68]*(-1);
  lhs[23] = -rhs[69]*(1)-rhs[70]*(-1)-rhs[71]*(-1);
  lhs[24] = -rhs[72]*(1)-rhs[73]*(-1)-rhs[74]*(-1);
  lhs[25] = -rhs[75]*(1)-rhs[76]*(-1)-rhs[77]*(-1);
  lhs[26] = -rhs[78]*(1)-rhs[79]*(-1)-rhs[80]*(-1);
  lhs[27] = -rhs[81]*(1)-rhs[82]*(-1)-rhs[83]*(-1);
  lhs[28] = -rhs[84]*(1)-rhs[85]*(-1)-rhs[86]*(-1);
  lhs[29] = -rhs[87]*(1)-rhs[88]*(-1)-rhs[89]*(-1);
  lhs[30] = -rhs[90]*(1)-rhs[91]*(-1)-rhs[92]*(-1);
  lhs[31] = -rhs[93]*(1)-rhs[94]*(-1)-rhs[95]*(-1);
  lhs[32] = -rhs[2]*(1)-rhs[4]*(-1)-rhs[67]*(-1)-rhs[68]*(1);
  lhs[33] = -rhs[3]*(1)-rhs[5]*(-1);
  lhs[34] = -rhs[8]*(1)-rhs[10]*(-1)-rhs[67]*(1)-rhs[68]*(-1)-rhs[70]*(-1)-rhs[71]*(1);
  lhs[35] = -rhs[9]*(1)-rhs[11]*(-1);
  lhs[36] = -rhs[14]*(1)-rhs[16]*(-1)-rhs[70]*(1)-rhs[71]*(-1)-rhs[73]*(-1)-rhs[74]*(1);
  lhs[37] = -rhs[15]*(1)-rhs[17]*(-1);
  lhs[38] = -rhs[20]*(1)-rhs[22]*(-1)-rhs[73]*(1)-rhs[74]*(-1)-rhs[76]*(-1)-rhs[77]*(1);
  lhs[39] = -rhs[21]*(1)-rhs[23]*(-1);
  lhs[40] = -rhs[26]*(1)-rhs[28]*(-1)-rhs[76]*(1)-rhs[77]*(-1)-rhs[79]*(-1)-rhs[80]*(1);
  lhs[41] = -rhs[27]*(1)-rhs[29]*(-1);
  lhs[42] = -rhs[32]*(1)-rhs[34]*(-1)-rhs[79]*(1)-rhs[80]*(-1)-rhs[82]*(-1)-rhs[83]*(1);
  lhs[43] = -rhs[33]*(1)-rhs[35]*(-1);
  lhs[44] = -rhs[38]*(1)-rhs[40]*(-1)-rhs[82]*(1)-rhs[83]*(-1)-rhs[85]*(-1)-rhs[86]*(1);
  lhs[45] = -rhs[39]*(1)-rhs[41]*(-1);
  lhs[46] = -rhs[44]*(1)-rhs[46]*(-1)-rhs[85]*(1)-rhs[86]*(-1)-rhs[88]*(-1)-rhs[89]*(1);
  lhs[47] = -rhs[45]*(1)-rhs[47]*(-1);
  lhs[48] = -rhs[50]*(1)-rhs[52]*(-1)-rhs[88]*(1)-rhs[89]*(-1)-rhs[91]*(-1)-rhs[92]*(1);
  lhs[49] = -rhs[51]*(1)-rhs[53]*(-1);
  lhs[50] = -rhs[56]*(1)-rhs[58]*(-1)-rhs[91]*(1)-rhs[92]*(-1)-rhs[94]*(-1)-rhs[95]*(1);
  lhs[51] = -rhs[57]*(1)-rhs[59]*(-1);
  lhs[52] = -rhs[62]*(1)-rhs[64]*(-1)-rhs[94]*(1)-rhs[95]*(-1);
  lhs[53] = -rhs[63]*(1)-rhs[65]*(-1);
  lhs[54] = 0;
  lhs[55] = 0;
  lhs[56] = 0;
  lhs[57] = 0;
  lhs[58] = 0;
  lhs[59] = 0;
  lhs[60] = 0;
  lhs[61] = 0;
  lhs[62] = 0;
  lhs[63] = 0;
  lhs[64] = 0;
  lhs[65] = 0;
  lhs[66] = 0;
  lhs[67] = 0;
  lhs[68] = 0;
  lhs[69] = 0;
  lhs[70] = 0;
  lhs[71] = 0;
  lhs[72] = 0;
  lhs[73] = 0;
  lhs[74] = 0;
  lhs[75] = 0;
}
void multbyP(double *lhs, double *rhs) {
  /* TODO use the fact that P is symmetric? */
  /* TODO check doubling / half factor etc. */
  lhs[0] = 0;
  lhs[1] = 0;
  lhs[2] = 0;
  lhs[3] = 0;
  lhs[4] = 0;
  lhs[5] = 0;
  lhs[6] = 0;
  lhs[7] = 0;
  lhs[8] = 0;
  lhs[9] = 0;
  lhs[10] = 0;
  lhs[11] = 0;
  lhs[12] = 0;
  lhs[13] = 0;
  lhs[14] = 0;
  lhs[15] = 0;
  lhs[16] = 0;
  lhs[17] = 0;
  lhs[18] = 0;
  lhs[19] = 0;
  lhs[20] = 0;
  lhs[21] = 0;
  lhs[22] = 0;
  lhs[23] = 0;
  lhs[24] = 0;
  lhs[25] = 0;
  lhs[26] = 0;
  lhs[27] = 0;
  lhs[28] = 0;
  lhs[29] = 0;
  lhs[30] = 0;
  lhs[31] = 0;
  lhs[32] = rhs[32]*(2*params.R[0])+rhs[33]*(2*params.R[2]);
  lhs[33] = rhs[32]*(2*params.R[1])+rhs[33]*(2*params.R[3]);
  lhs[34] = rhs[34]*(2*params.R[0])+rhs[35]*(2*params.R[2]);
  lhs[35] = rhs[34]*(2*params.R[1])+rhs[35]*(2*params.R[3]);
  lhs[36] = rhs[36]*(2*params.R[0])+rhs[37]*(2*params.R[2]);
  lhs[37] = rhs[36]*(2*params.R[1])+rhs[37]*(2*params.R[3]);
  lhs[38] = rhs[38]*(2*params.R[0])+rhs[39]*(2*params.R[2]);
  lhs[39] = rhs[38]*(2*params.R[1])+rhs[39]*(2*params.R[3]);
  lhs[40] = rhs[40]*(2*params.R[0])+rhs[41]*(2*params.R[2]);
  lhs[41] = rhs[40]*(2*params.R[1])+rhs[41]*(2*params.R[3]);
  lhs[42] = rhs[42]*(2*params.R[0])+rhs[43]*(2*params.R[2]);
  lhs[43] = rhs[42]*(2*params.R[1])+rhs[43]*(2*params.R[3]);
  lhs[44] = rhs[44]*(2*params.R[0])+rhs[45]*(2*params.R[2]);
  lhs[45] = rhs[44]*(2*params.R[1])+rhs[45]*(2*params.R[3]);
  lhs[46] = rhs[46]*(2*params.R[0])+rhs[47]*(2*params.R[2]);
  lhs[47] = rhs[46]*(2*params.R[1])+rhs[47]*(2*params.R[3]);
  lhs[48] = rhs[48]*(2*params.R[0])+rhs[49]*(2*params.R[2]);
  lhs[49] = rhs[48]*(2*params.R[1])+rhs[49]*(2*params.R[3]);
  lhs[50] = rhs[50]*(2*params.R[0])+rhs[51]*(2*params.R[2]);
  lhs[51] = rhs[50]*(2*params.R[1])+rhs[51]*(2*params.R[3]);
  lhs[52] = rhs[52]*(2*params.R[0])+rhs[53]*(2*params.R[2]);
  lhs[53] = rhs[52]*(2*params.R[1])+rhs[53]*(2*params.R[3]);
  lhs[54] = rhs[54]*(2*params.Q[0])+rhs[55]*(2*params.Q[2]);
  lhs[55] = rhs[54]*(2*params.Q[1])+rhs[55]*(2*params.Q[3]);
  lhs[56] = rhs[56]*(2*params.Q[0])+rhs[57]*(2*params.Q[2]);
  lhs[57] = rhs[56]*(2*params.Q[1])+rhs[57]*(2*params.Q[3]);
  lhs[58] = rhs[58]*(2*params.Q[0])+rhs[59]*(2*params.Q[2]);
  lhs[59] = rhs[58]*(2*params.Q[1])+rhs[59]*(2*params.Q[3]);
  lhs[60] = rhs[60]*(2*params.Q[0])+rhs[61]*(2*params.Q[2]);
  lhs[61] = rhs[60]*(2*params.Q[1])+rhs[61]*(2*params.Q[3]);
  lhs[62] = rhs[62]*(2*params.Q[0])+rhs[63]*(2*params.Q[2]);
  lhs[63] = rhs[62]*(2*params.Q[1])+rhs[63]*(2*params.Q[3]);
  lhs[64] = rhs[64]*(2*params.Q[0])+rhs[65]*(2*params.Q[2]);
  lhs[65] = rhs[64]*(2*params.Q[1])+rhs[65]*(2*params.Q[3]);
  lhs[66] = rhs[66]*(2*params.Q[0])+rhs[67]*(2*params.Q[2]);
  lhs[67] = rhs[66]*(2*params.Q[1])+rhs[67]*(2*params.Q[3]);
  lhs[68] = rhs[68]*(2*params.Q[0])+rhs[69]*(2*params.Q[2]);
  lhs[69] = rhs[68]*(2*params.Q[1])+rhs[69]*(2*params.Q[3]);
  lhs[70] = rhs[70]*(2*params.Q[0])+rhs[71]*(2*params.Q[2]);
  lhs[71] = rhs[70]*(2*params.Q[1])+rhs[71]*(2*params.Q[3]);
  lhs[72] = rhs[72]*(2*params.Q[0])+rhs[73]*(2*params.Q[2]);
  lhs[73] = rhs[72]*(2*params.Q[1])+rhs[73]*(2*params.Q[3]);
  lhs[74] = rhs[74]*(2*params.Q_final[0])+rhs[75]*(2*params.Q_final[2]);
  lhs[75] = rhs[74]*(2*params.Q_final[1])+rhs[75]*(2*params.Q_final[3]);
}
void fillq(void) {
  work.q[0] = 0;
  work.q[1] = 0;
  work.q[2] = 0;
  work.q[3] = 0;
  work.q[4] = 0;
  work.q[5] = 0;
  work.q[6] = 0;
  work.q[7] = 0;
  work.q[8] = 0;
  work.q[9] = 0;
  work.q[10] = 0;
  work.q[11] = 0;
  work.q[12] = 0;
  work.q[13] = 0;
  work.q[14] = 0;
  work.q[15] = 0;
  work.q[16] = 0;
  work.q[17] = 0;
  work.q[18] = 0;
  work.q[19] = 0;
  work.q[20] = 0;
  work.q[21] = 0;
  work.q[22] = 0;
  work.q[23] = 0;
  work.q[24] = 0;
  work.q[25] = 0;
  work.q[26] = 0;
  work.q[27] = 0;
  work.q[28] = 0;
  work.q[29] = 0;
  work.q[30] = 0;
  work.q[31] = 0;
  work.q[32] = 0;
  work.q[33] = 0;
  work.q[34] = 0;
  work.q[35] = 0;
  work.q[36] = 0;
  work.q[37] = 0;
  work.q[38] = 0;
  work.q[39] = 0;
  work.q[40] = 0;
  work.q[41] = 0;
  work.q[42] = 0;
  work.q[43] = 0;
  work.q[44] = 0;
  work.q[45] = 0;
  work.q[46] = 0;
  work.q[47] = 0;
  work.q[48] = 0;
  work.q[49] = 0;
  work.q[50] = 0;
  work.q[51] = 0;
  work.q[52] = 0;
  work.q[53] = 0;
  work.q[54] = -2*(params.Q[0]*params.w[0]+params.Q[2]*params.w[1]);
  work.q[55] = -2*(params.Q[1]*params.w[0]+params.Q[3]*params.w[1]);
  work.q[56] = -2*(params.Q[0]*params.w[0]+params.Q[2]*params.w[1]);
  work.q[57] = -2*(params.Q[1]*params.w[0]+params.Q[3]*params.w[1]);
  work.q[58] = -2*(params.Q[0]*params.w[0]+params.Q[2]*params.w[1]);
  work.q[59] = -2*(params.Q[1]*params.w[0]+params.Q[3]*params.w[1]);
  work.q[60] = -2*(params.Q[0]*params.w[0]+params.Q[2]*params.w[1]);
  work.q[61] = -2*(params.Q[1]*params.w[0]+params.Q[3]*params.w[1]);
  work.q[62] = -2*(params.Q[0]*params.w[0]+params.Q[2]*params.w[1]);
  work.q[63] = -2*(params.Q[1]*params.w[0]+params.Q[3]*params.w[1]);
  work.q[64] = -2*(params.Q[0]*params.w[0]+params.Q[2]*params.w[1]);
  work.q[65] = -2*(params.Q[1]*params.w[0]+params.Q[3]*params.w[1]);
  work.q[66] = -2*(params.Q[0]*params.w[0]+params.Q[2]*params.w[1]);
  work.q[67] = -2*(params.Q[1]*params.w[0]+params.Q[3]*params.w[1]);
  work.q[68] = -2*(params.Q[0]*params.w[0]+params.Q[2]*params.w[1]);
  work.q[69] = -2*(params.Q[1]*params.w[0]+params.Q[3]*params.w[1]);
  work.q[70] = -2*(params.Q[0]*params.w[0]+params.Q[2]*params.w[1]);
  work.q[71] = -2*(params.Q[1]*params.w[0]+params.Q[3]*params.w[1]);
  work.q[72] = -2*(params.Q[0]*params.w[0]+params.Q[2]*params.w[1]);
  work.q[73] = -2*(params.Q[1]*params.w[0]+params.Q[3]*params.w[1]);
  work.q[74] = -2*(params.Q_final[0]*params.w[0]+params.Q_final[2]*params.w[1]);
  work.q[75] = -2*(params.Q_final[1]*params.w[0]+params.Q_final[3]*params.w[1]);
}
void fillh(void) {
  work.h[0] = params.u_max[0];
  work.h[1] = params.u_max[1];
  work.h[2] = 0;
  work.h[3] = 0;
  work.h[4] = 0;
  work.h[5] = 0;
  work.h[6] = params.u_max[0];
  work.h[7] = params.u_max[1];
  work.h[8] = 0;
  work.h[9] = 0;
  work.h[10] = 0;
  work.h[11] = 0;
  work.h[12] = params.u_max[0];
  work.h[13] = params.u_max[1];
  work.h[14] = 0;
  work.h[15] = 0;
  work.h[16] = 0;
  work.h[17] = 0;
  work.h[18] = params.u_max[0];
  work.h[19] = params.u_max[1];
  work.h[20] = 0;
  work.h[21] = 0;
  work.h[22] = 0;
  work.h[23] = 0;
  work.h[24] = params.u_max[0];
  work.h[25] = params.u_max[1];
  work.h[26] = 0;
  work.h[27] = 0;
  work.h[28] = 0;
  work.h[29] = 0;
  work.h[30] = params.u_max[0];
  work.h[31] = params.u_max[1];
  work.h[32] = 0;
  work.h[33] = 0;
  work.h[34] = 0;
  work.h[35] = 0;
  work.h[36] = params.u_max[0];
  work.h[37] = params.u_max[1];
  work.h[38] = 0;
  work.h[39] = 0;
  work.h[40] = 0;
  work.h[41] = 0;
  work.h[42] = params.u_max[0];
  work.h[43] = params.u_max[1];
  work.h[44] = 0;
  work.h[45] = 0;
  work.h[46] = 0;
  work.h[47] = 0;
  work.h[48] = params.u_max[0];
  work.h[49] = params.u_max[1];
  work.h[50] = 0;
  work.h[51] = 0;
  work.h[52] = 0;
  work.h[53] = 0;
  work.h[54] = params.u_max[0];
  work.h[55] = params.u_max[1];
  work.h[56] = 0;
  work.h[57] = 0;
  work.h[58] = 0;
  work.h[59] = 0;
  work.h[60] = params.u_max[0];
  work.h[61] = params.u_max[1];
  work.h[62] = 0;
  work.h[63] = 0;
  work.h[64] = 0;
  work.h[65] = 0;
  work.h[66] = params.S[0];
  work.h[67] = 0;
  work.h[68] = 0;
  work.h[69] = params.S[0];
  work.h[70] = 0;
  work.h[71] = 0;
  work.h[72] = params.S[0];
  work.h[73] = 0;
  work.h[74] = 0;
  work.h[75] = params.S[0];
  work.h[76] = 0;
  work.h[77] = 0;
  work.h[78] = params.S[0];
  work.h[79] = 0;
  work.h[80] = 0;
  work.h[81] = params.S[0];
  work.h[82] = 0;
  work.h[83] = 0;
  work.h[84] = params.S[0];
  work.h[85] = 0;
  work.h[86] = 0;
  work.h[87] = params.S[0];
  work.h[88] = 0;
  work.h[89] = 0;
  work.h[90] = params.S[0];
  work.h[91] = 0;
  work.h[92] = 0;
  work.h[93] = params.S[0];
  work.h[94] = 0;
  work.h[95] = 0;
}
void fillb(void) {
  work.b[0] = params.A[0]*params.x_0[0]+params.A[2]*params.x_0[1];
  work.b[1] = params.A[1]*params.x_0[0]+params.A[3]*params.x_0[1];
  work.b[2] = 0;
  work.b[3] = 0;
  work.b[4] = 0;
  work.b[5] = 0;
  work.b[6] = 0;
  work.b[7] = 0;
  work.b[8] = 0;
  work.b[9] = 0;
  work.b[10] = 0;
  work.b[11] = 0;
  work.b[12] = 0;
  work.b[13] = 0;
  work.b[14] = 0;
  work.b[15] = 0;
  work.b[16] = 0;
  work.b[17] = 0;
  work.b[18] = 0;
  work.b[19] = 0;
  work.b[20] = 0;
  work.b[21] = 0;
}
void pre_ops(void) {
  work.quad_902543003648[0] = ((params.x_0[0]-params.w[0])*(params.Q[0]*(params.x_0[0]-params.w[0])+params.Q[2]*(params.x_0[1]-params.w[1]))+(params.x_0[1]-params.w[1])*(params.Q[1]*(params.x_0[0]-params.w[0])+params.Q[3]*(params.x_0[1]-params.w[1])));
  work.quad_622431752192[0] = (params.w[0]*(params.Q[0]*params.w[0]+params.Q[2]*params.w[1])+params.w[1]*(params.Q[1]*params.w[0]+params.Q[3]*params.w[1]));
  work.quad_781620764672[0] = (params.w[0]*(params.Q_final[0]*params.w[0]+params.Q_final[2]*params.w[1])+params.w[1]*(params.Q_final[1]*params.w[0]+params.Q_final[3]*params.w[1]));
}
