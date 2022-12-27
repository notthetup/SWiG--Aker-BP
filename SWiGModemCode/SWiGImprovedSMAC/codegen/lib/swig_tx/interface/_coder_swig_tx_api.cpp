//
// _coder_swig_tx_api.cpp
//
// Code generation for function 'swig_tx'
//

// Include files
#include "_coder_swig_tx_api.h"
#include "_coder_swig_tx_mex.h"
#include "coder_array_mex.h"
#include "coder_bounded_array.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{ nullptr };

emlrtContext emlrtContextGlobal{ true, // bFirstTime
  false,                               // bInitialized
  131627U,                             // fVersionInfo
  nullptr,                             // fErrorFunction
  "swig_tx",                           // fFunctionName
  nullptr,                             // fRTCallStack
  false,                               // bDebugMode

  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },// fSigWrd
  nullptr                              // fSigMem
};

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[32]);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[3]);
static uint64_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, coder::array<char_T, 2U> &ret);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[9]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[8]);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[3]);
static uint64_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *params, const
  char_T *identifier, struct0_T *y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[8]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[32]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, coder::array<char_T, 2U> &y);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *Rate_value,
  const char_T *identifier);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const coder::array<
  creal_T, 1U> &u);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const struct1_T *u);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const struct2_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[9]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[32])
{
  static const int32_T dims[2]{ 1, 32 };

  real_T (*r)[32];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U, (
    const void *)&dims[0]);
  r = (real_T (*)[32])emlrtMxGetData(src);
  for (int32_T i{0}; i < 32; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[3])
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static uint64_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  uint64_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, coder::array<char_T, 2U> &ret)
{
  static const int32_T dims[2]{ 1, -1 };

  int32_T iv[2];
  const boolean_T bv[2]{ false, true };

  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U, (
    const void *)&dims[0], &bv[0], &iv[0]);
  ret.set_size(iv[0], iv[1]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 1, false);
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[9])
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[8])
{
  static const int32_T dims[2]{ 1, 8 };

  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U, (
    const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 8);
  emlrtDestroyArray(&src);
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{ 0 };

  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U, (
    const void *)&dims);
  ret = *static_cast<real_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[3])
{
  static const int32_T dims[2]{ 1, 3 };

  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U, (
    const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 3);
  emlrtDestroyArray(&src);
}

static uint64_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{ 0 };

  uint64_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "uint64", false, 0U, (
    const void *)&dims);
  ret = *static_cast<uint64_T *>(emlrtMxGetData(src));
  emlrtDestroyArray(&src);
  return ret;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *params, const
  char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(params), &thisId, y);
  emlrtDestroyArray(&params);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims{ 0 };

  static const char_T *fieldNames[28]{ "verbose", "sequence_32_chips",
    "c32_sequence", "chip_len_exp", "pset_chip_len_mul", "stream_driver",
    "stream_driver_args", "stream_fs", "stream_format", "stream_bps",
    "stream_passband", "stream_channels", "stream_channel", "stream_amp",
    "stream_mul", "pad", "wut", "packet_mobility", "packet_tx_rx",
    "packet_forward", "packet_class_id", "packet_app_type", "packet_reserv_time",
    "packet_repeat_int", "packet_app_data", "packet_app_fields",
    "doppler_correction", "doppler_max_speed" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 28, (const char_T **)
    &fieldNames[0], 0U, (const void *)&dims);
  thisId.fIdentifier = "verbose";
  y->verbose = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 0, "verbose")), &thisId);
  thisId.fIdentifier = "sequence_32_chips";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1,
    "sequence_32_chips")), &thisId, y->sequence_32_chips);
  thisId.fIdentifier = "c32_sequence";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2,
    "c32_sequence")), &thisId, y->c32_sequence);
  thisId.fIdentifier = "chip_len_exp";
  y->chip_len_exp = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 3, "chip_len_exp")), &thisId);
  thisId.fIdentifier = "pset_chip_len_mul";
  y->pset_chip_len_mul = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 4, "pset_chip_len_mul")), &thisId);
  thisId.fIdentifier = "stream_driver";
  b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
    5, "stream_driver")), &thisId, y->stream_driver);
  thisId.fIdentifier = "stream_driver_args";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
    6, "stream_driver_args")), &thisId, y->stream_driver_args);
  thisId.fIdentifier = "stream_fs";
  y->stream_fs = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 7, "stream_fs")), &thisId);
  thisId.fIdentifier = "stream_format";
  b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
    8, "stream_format")), &thisId, y->stream_format);
  thisId.fIdentifier = "stream_bps";
  y->stream_bps = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 9, "stream_bps")), &thisId);
  thisId.fIdentifier = "stream_passband";
  y->stream_passband = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 10, "stream_passband")), &thisId);
  thisId.fIdentifier = "stream_channels";
  y->stream_channels = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 11, "stream_channels")), &thisId);
  thisId.fIdentifier = "stream_channel";
  y->stream_channel = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 12, "stream_channel")), &thisId);
  thisId.fIdentifier = "stream_amp";
  y->stream_amp = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 13, "stream_amp")), &thisId);
  thisId.fIdentifier = "stream_mul";
  y->stream_mul = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 14, "stream_mul")), &thisId);
  thisId.fIdentifier = "pad";
  y->pad = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp,
    u, 0, 15, "pad")), &thisId);
  thisId.fIdentifier = "wut";
  y->wut = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp,
    u, 0, 16, "wut")), &thisId);
  thisId.fIdentifier = "packet_mobility";
  y->packet_mobility = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 17, "packet_mobility")), &thisId);
  thisId.fIdentifier = "packet_tx_rx";
  y->packet_tx_rx = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 18, "packet_tx_rx")), &thisId);
  thisId.fIdentifier = "packet_forward";
  y->packet_forward = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 19, "packet_forward")), &thisId);
  thisId.fIdentifier = "packet_class_id";
  y->packet_class_id = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 20, "packet_class_id")), &thisId);
  thisId.fIdentifier = "packet_app_type";
  y->packet_app_type = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 21, "packet_app_type")), &thisId);
  thisId.fIdentifier = "packet_reserv_time";
  y->packet_reserv_time = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 22, "packet_reserv_time")), &thisId);
  thisId.fIdentifier = "packet_repeat_int";
  y->packet_repeat_int = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 23, "packet_repeat_int")), &thisId);
  thisId.fIdentifier = "packet_app_data";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
    24, "packet_app_data")), &thisId, y->packet_app_data);
  thisId.fIdentifier = "packet_app_fields";
  c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
    25, "packet_app_fields")), &thisId);
  thisId.fIdentifier = "doppler_correction";
  y->doppler_correction = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 26, "doppler_correction")), &thisId);
  thisId.fIdentifier = "doppler_max_speed";
  y->doppler_max_speed = emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 27, "doppler_max_speed")), &thisId);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[8])
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[32])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, coder::array<char_T, 2U> &y)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *Rate_value,
  const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(Rate_value), &thisId);
  emlrtDestroyArray(&Rate_value);
  return y;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = d_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 2U> &u)
{
  static const int32_T iv[2]{ 0, 0 };

  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<real_T, 2U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<real_T, 2U> *)&u)->size(), 2);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const coder::array<
  creal_T, 1U> &u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(1, ((coder::array<creal_T, 1U> *)&u)->size(),
    mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b((emlrtConstCTX)sp, m, &(((coder::array<creal_T,
    1U> *)&u)->data())[0], 8);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const struct1_T *u)
{
  static const char_T *sv[18]{ "bytes", "version", "mobility", "schedule",
    "tx_rx", "forward", "class_id", "class_id_name", "app_type", "reserv_repeat",
    "reserv_time", "repeat_int", "cargo_size", "app_data", "packet_app_data",
    "crc", "crc_validity", "cargo" };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  const mxArray *y;
  uint64_T *b_pData;
  int32_T iv[2];
  int32_T i;
  uint8_T *pData;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 18, (const char_T **)&sv[0]));
  b_y = nullptr;
  iv[0] = 1;
  iv[1] = u->bytes.size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxUINT8_CLASS, mxREAL);
  pData = static_cast<uint8_T *>(emlrtMxGetData(m));
  i = 0;
  for (int32_T b_i{0}; b_i < u->bytes.size[1]; b_i++) {
    pData[i] = u->bytes.data[b_i];
    i++;
  }

  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "bytes", b_y, 0);
  c_y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT64_CLASS, mxREAL);
  *static_cast<uint64_T *>(emlrtMxGetData(m)) = u->version;
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "version", c_y, 1);
  d_y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT64_CLASS, mxREAL);
  *static_cast<uint64_T *>(emlrtMxGetData(m)) = u->mobility;
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "mobility", d_y, 2);
  e_y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT64_CLASS, mxREAL);
  *static_cast<uint64_T *>(emlrtMxGetData(m)) = u->schedule;
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "schedule", e_y, 3);
  f_y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT64_CLASS, mxREAL);
  *static_cast<uint64_T *>(emlrtMxGetData(m)) = u->tx_rx;
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "tx_rx", f_y, 4);
  g_y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT64_CLASS, mxREAL);
  *static_cast<uint64_T *>(emlrtMxGetData(m)) = u->forward;
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "forward", g_y, 5);
  h_y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT64_CLASS, mxREAL);
  *static_cast<uint64_T *>(emlrtMxGetData(m)) = u->class_id;
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, "class_id", h_y, 6);
  i_y = nullptr;
  iv[0] = 1;
  iv[1] = u->class_id_name.size[1];
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, u->class_id_name.size[1], m,
    &u->class_id_name.data[0]);
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, "class_id_name", i_y, 7);
  j_y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT64_CLASS, mxREAL);
  *static_cast<uint64_T *>(emlrtMxGetData(m)) = u->app_type;
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, "app_type", j_y, 8);
  k_y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT64_CLASS, mxREAL);
  *static_cast<uint64_T *>(emlrtMxGetData(m)) = u->reserv_repeat;
  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(y, 0, "reserv_repeat", k_y, 9);
  l_y = nullptr;
  m = emlrtCreateDoubleScalar(u->reserv_time);
  emlrtAssign(&l_y, m);
  emlrtSetFieldR2017b(y, 0, "reserv_time", l_y, 10);
  m_y = nullptr;
  m = emlrtCreateDoubleScalar(u->repeat_int);
  emlrtAssign(&m_y, m);
  emlrtSetFieldR2017b(y, 0, "repeat_int", m_y, 11);
  n_y = nullptr;
  m = emlrtCreateDoubleScalar(u->cargo_size);
  emlrtAssign(&n_y, m);
  emlrtSetFieldR2017b(y, 0, "cargo_size", n_y, 12);
  o_y = nullptr;
  iv[0] = 1;
  iv[1] = 1;
  m = emlrtCreateNumericArray(2, &iv[0], mxUINT64_CLASS, mxREAL);
  b_pData = static_cast<uint64_T *>(emlrtMxGetData(m));
  *b_pData = u->app_data.data[0];
  emlrtAssign(&o_y, m);
  emlrtSetFieldR2017b(y, 0, "app_data", o_y, 13);
  p_y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT64_CLASS, mxREAL);
  *static_cast<uint64_T *>(emlrtMxGetData(m)) = u->packet_app_data;
  emlrtAssign(&p_y, m);
  emlrtSetFieldR2017b(y, 0, "packet_app_data", p_y, 14);
  q_y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxUINT8_CLASS, mxREAL);
  *static_cast<uint8_T *>(emlrtMxGetData(m)) = u->crc;
  emlrtAssign(&q_y, m);
  emlrtSetFieldR2017b(y, 0, "crc", q_y, 15);
  r_y = nullptr;
  m = emlrtCreateLogicalScalar(u->crc_validity);
  emlrtAssign(&r_y, m);
  emlrtSetFieldR2017b(y, 0, "crc_validity", r_y, 16);
  iv[0] = 1;
  iv[1] = 0;
  s_y = nullptr;
  m = emlrtCreateNumericArray(2, &iv[0], mxUINT8_CLASS, mxREAL);
  emlrtMxGetData(m);
  emlrtAssign(&s_y, m);
  emlrtSetFieldR2017b(y, 0, "cargo", s_y, 17);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const struct2_T *u)
{
  static const int32_T iv[2]{ 1, 27 };

  static const char_T *sv[10]{ "pset_id", "pset_name", "cfreq", "bwidth",
    "chip_frq", "chip_dur", "prim_q", "prim_a", "nblock", "coded_symbols" };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  y = nullptr;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 10, (const char_T **)&sv[0]));
  b_y = nullptr;
  m = emlrtCreateDoubleScalar(u->pset_id);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "pset_id", b_y, 0);
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 27, m, &u->pset_name[0]);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "pset_name", c_y, 1);
  d_y = nullptr;
  m = emlrtCreateDoubleScalar(u->cfreq);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "cfreq", d_y, 2);
  e_y = nullptr;
  m = emlrtCreateDoubleScalar(u->bwidth);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "bwidth", e_y, 3);
  f_y = nullptr;
  m = emlrtCreateDoubleScalar(u->chip_frq);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "chip_frq", f_y, 4);
  g_y = nullptr;
  m = emlrtCreateDoubleScalar(u->chip_dur);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "chip_dur", g_y, 5);
  h_y = nullptr;
  m = emlrtCreateDoubleScalar(u->prim_q);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, "prim_q", h_y, 6);
  i_y = nullptr;
  m = emlrtCreateDoubleScalar(u->prim_a);
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, "prim_a", i_y, 7);
  j_y = nullptr;
  m = emlrtCreateDoubleScalar(u->nblock);
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, "nblock", j_y, 8);
  k_y = nullptr;
  m = emlrtCreateNumericArray(1, &u->coded_symbols.size[0], mxDOUBLE_CLASS,
    mxREAL);
  pData = emlrtMxGetPr(m);
  for (int32_T i{0}; i < 144; i++) {
    pData[i] = u->coded_symbols.data[i];
  }

  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(y, 0, "coded_symbols", k_y, 9);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[9])
{
  static const int32_T dims[2]{ 1, 9 };

  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U, (
    const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 9);
  emlrtDestroyArray(&src);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2]{ 0, 0 };

  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U, (
    const void *)&dims[0]);
  emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

void swig_tx_api(const mxArray * const prhs[3], int32_T nlhs, const mxArray
                 *plhs[4])
{
  coder::array<creal_T, 1U> bband;
  coder::array<real_T, 2U> passband;
  emlrtStack st{ nullptr,              // site
    nullptr,                           // tls
    nullptr                            // prev
  };

  struct0_T params;
  struct1_T pkt;
  struct2_T state;
  real_T Fc_value;
  real_T Rate_value;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);

  // Marshall function inputs
  Rate_value = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "Rate_value");
  Fc_value = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "Fc_value");
  emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "params", &params);

  // Invoke the target function
  swig_tx(Rate_value, Fc_value, &params, passband, bband, &pkt, &state);

  // Marshall function outputs
  passband.no_free();
  plhs[0] = emlrt_marshallOut(passband);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(&st, bband);
  }

  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(&st, &pkt);
  }

  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(&st, &state);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void swig_tx_atexit()
{
  emlrtStack st{ nullptr,              // site
    nullptr,                           // tls
    nullptr                            // prev
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  swig_tx_xil_terminate();
  swig_tx_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void swig_tx_initialize()
{
  emlrtStack st{ nullptr,              // site
    nullptr,                           // tls
    nullptr                            // prev
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

void swig_tx_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (_coder_swig_tx_api.cpp)
