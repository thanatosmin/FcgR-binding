/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_PDF_api.c
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 22-Jun-2016 09:56:36
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_PDF_api.h"
#include "_coder_PDF_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true, false, 131419U, NULL, "PDF", NULL,
  false, { 2045744189U, 2170104910U, 2743257031U, 4284093946U }, NULL };

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[7];
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *kd,
  const char_T *identifier))[24];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[24];
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *mfiAdjMean4, const char_T *identifier))[96];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[7];
static const mxArray *emlrt_marshallOut(const real_T u);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[96];
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *v, const
  char_T *identifier))[2];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2];
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *biCoefMat, const char_T *identifier))[676];
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[676];
static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *meanPerCond, const char_T *identifier))[48];
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[48];
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[7];
static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[24];
static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[96];
static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];
static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[676];
static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[48];

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[7]
 */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[7]
{
  real_T (*y)[7];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *kd
 *                const char_T *identifier
 * Return Type  : real_T (*)[24]
 */
  static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *kd,
  const char_T *identifier))[24]
{
  real_T (*y)[24];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(kd), &thisId);
  emlrtDestroyArray(&kd);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[24]
 */
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[24]
{
  real_T (*y)[24];
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *mfiAdjMean4
 *                const char_T *identifier
 * Return Type  : real_T (*)[96]
 */
  static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *mfiAdjMean4, const char_T *identifier))[96]
{
  real_T (*y)[96];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(mfiAdjMean4), &thisId);
  emlrtDestroyArray(&mfiAdjMean4);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *x
 *                const char_T *identifier
 * Return Type  : real_T (*)[7]
 */
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier))[7]
{
  real_T (*y)[7];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}
/*
 * Arguments    : const real_T u
 * Return Type  : const mxArray *
 */
  static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[96]
 */
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[96]
{
  real_T (*y)[96];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *v
 *                const char_T *identifier
 * Return Type  : real_T (*)[2]
 */
  static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *v,
  const char_T *identifier))[2]
{
  real_T (*y)[2];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(v), &thisId);
  emlrtDestroyArray(&v);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[2]
 */
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2]
{
  real_T (*y)[2];
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *biCoefMat
 *                const char_T *identifier
 * Return Type  : real_T (*)[676]
 */
  static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *biCoefMat, const char_T *identifier))[676]
{
  real_T (*y)[676];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(biCoefMat), &thisId);
  emlrtDestroyArray(&biCoefMat);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[676]
 */
static real_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[676]
{
  real_T (*y)[676];
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *meanPerCond
 *                const char_T *identifier
 * Return Type  : real_T (*)[48]
 */
  static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *meanPerCond, const char_T *identifier))[48]
{
  real_T (*y)[48];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(meanPerCond), &thisId);
  emlrtDestroyArray(&meanPerCond);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[48]
 */
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[48]
{
  real_T (*y)[48];
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[7]
 */
  static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[7]
{
  real_T (*ret)[7];
  static const int32_T dims[1] = { 7 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[7])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[24]
 */
static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[24]
{
  real_T (*ret)[24];
  static const int32_T dims[2] = { 6, 4 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[24])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[96]
 */
  static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[96]
{
  real_T (*ret)[96];
  static const int32_T dims[2] = { 24, 4 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[96])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[2]
 */
static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  real_T (*ret)[2];
  static const int32_T dims[1] = { 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[2])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[676]
 */
  static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[676]
{
  real_T (*ret)[676];
  static const int32_T dims[2] = { 26, 26 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[676])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[48]
 */
static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[48]
{
  real_T (*ret)[48];
  static const int32_T dims[2] = { 24, 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[48])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const mxArray *prhs[9]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
  void PDF_api(const mxArray *prhs[9], const mxArray *plhs[1])
{
  real_T (*x)[7];
  real_T (*kd)[24];
  real_T (*mfiAdjMean4)[96];
  real_T (*mfiAdjMean26)[96];
  real_T (*v)[2];
  real_T (*biCoefMat)[676];
  real_T (*tnpbsa)[2];
  real_T (*meanPerCond)[48];
  real_T (*stdPerCond)[48];
  real_T logprob;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);
  prhs[1] = emlrtProtectR2012b(prhs[1], 1, false, -1);
  prhs[2] = emlrtProtectR2012b(prhs[2], 2, false, -1);
  prhs[3] = emlrtProtectR2012b(prhs[3], 3, false, -1);
  prhs[4] = emlrtProtectR2012b(prhs[4], 4, false, -1);
  prhs[5] = emlrtProtectR2012b(prhs[5], 5, false, -1);
  prhs[6] = emlrtProtectR2012b(prhs[6], 6, false, -1);
  prhs[7] = emlrtProtectR2012b(prhs[7], 7, false, -1);
  prhs[8] = emlrtProtectR2012b(prhs[8], 8, false, -1);

  /* Marshall function inputs */
  x = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "x");
  kd = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "kd");
  mfiAdjMean4 = e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "mfiAdjMean4");
  mfiAdjMean26 = e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "mfiAdjMean26");
  v = g_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "v");
  biCoefMat = i_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "biCoefMat");
  tnpbsa = g_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "tnpbsa");
  meanPerCond = k_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "meanPerCond");
  stdPerCond = k_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "stdPerCond");

  /* Invoke the target function */
  logprob = PDF(*x, *kd, *mfiAdjMean4, *mfiAdjMean26, *v, *biCoefMat, *tnpbsa,
                *meanPerCond, *stdPerCond);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(logprob);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void PDF_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  PDF_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void PDF_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void PDF_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_PDF_api.c
 *
 * [EOF]
 */
