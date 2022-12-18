//
// _coder_swig_tx_api.h
//
// Code generation for function 'swig_tx'
//
#ifndef _CODER_SWIG_TX_API_H
#define _CODER_SWIG_TX_API_H

// Include files
#include "coder_array_mex.h"
#include "coder_bounded_array.h"
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Type Definitions
struct struct2_T
{
  real_T pset_id;
  char_T pset_name[27];
  real_T cfreq;
  real_T bwidth;
  real_T chip_frq;
  real_T chip_dur;
  real_T prim_q;
  real_T prim_a;
  real_T nblock;
  coder::bounded_array<real_T, 144U, 1U> coded_symbols;
};

struct struct0_T
{
  real_T verbose;
  char_T sequence_32_chips[8];
  real_T c32_sequence[32];
  real_T chip_len_exp;
  real_T pset_chip_len_mul;
  char_T stream_driver[3];
  char_T stream_driver_args[9];
  real_T stream_fs;
  char_T stream_format[3];
  real_T stream_bps;
  real_T stream_passband;
  real_T stream_channels;
  real_T stream_channel;
  real_T stream_amp;
  real_T stream_mul;
  real_T pad;
  real_T wut;
  uint64_T packet_mobility;
  real_T packet_tx_rx;
  real_T packet_forward;
  real_T packet_class_id;
  real_T packet_app_type;
  real_T packet_reserv_time;
  real_T packet_repeat_int;
  coder::array<char_T, 2U> packet_app_data;
  real_T doppler_correction;
  real_T doppler_max_speed;
};

struct struct1_T
{
  coder::bounded_array<uint8_T, 8U, 2U> bytes;
  uint64_T version;
  uint64_T mobility;
  uint64_T schedule;
  uint64_T tx_rx;
  uint64_T forward;
  uint64_T class_id;
  coder::bounded_array<char_T, 41U, 2U> class_id_name;
  uint64_T app_type;
  uint64_T reserv_repeat;
  real_T reserv_time;
  real_T repeat_int;
  real_T cargo_size;
  coder::bounded_array<uint64_T, 1U, 2U> app_data;
  uint64_T packet_app_data;
  uint8_T crc;
  boolean_T crc_validity;
  coder::empty_bounded_array<uint8_T, 2U> cargo;
};

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void swig_tx(real_T Rate_value, real_T Fc_value, struct0_T *params, coder::array<
             real_T, 2U> *passband, coder::array<creal_T, 1U> *bband, struct1_T *
             pkt, struct2_T *state);
void swig_tx_api(const mxArray * const prhs[3], int32_T nlhs, const mxArray
                 *plhs[4]);
void swig_tx_atexit();
void swig_tx_initialize();
void swig_tx_terminate();
void swig_tx_xil_shutdown();
void swig_tx_xil_terminate();

#endif

// End of code generation (_coder_swig_tx_api.h)
