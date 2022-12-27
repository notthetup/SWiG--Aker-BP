//
// swig_tx_types.h
//
// Code generation for function 'swig_tx'
//
#ifndef SWIG_TX_TYPES_H
#define SWIG_TX_TYPES_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "coder_bounded_array.h"

// Type Definitions
namespace SWiG_tx_namespace
{
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
    ::coder::bounded_array<real_T, 144U, 1U> coded_symbols;
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
    ::coder::array<char_T, 2U> packet_app_data;
    real_T doppler_correction;
    real_T doppler_max_speed;
  };

  struct struct1_T
  {
    ::coder::bounded_array<uint8_T, 8U, 2U> bytes;
    uint64_T version;
    uint64_T mobility;
    uint64_T schedule;
    uint64_T tx_rx;
    uint64_T forward;
    uint64_T class_id;
    ::coder::bounded_array<char_T, 41U, 2U> class_id_name;
    uint64_T app_type;
    uint64_T reserv_repeat;
    real_T reserv_time;
    real_T repeat_int;
    real_T cargo_size;
    ::coder::bounded_array<uint64_T, 1U, 2U> app_data;
    uint64_T packet_app_data;
    uint8_T crc;
    boolean_T crc_validity;
    ::coder::empty_bounded_array<uint8_T, 2U> cargo;
  };
}

#endif

// End of code generation (swig_tx_types.h)
