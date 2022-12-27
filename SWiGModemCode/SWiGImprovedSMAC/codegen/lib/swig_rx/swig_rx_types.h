//
// swig_rx_types.h
//
// Code generation for function 'swig_rx'
//
#ifndef SWIG_RX_TYPES_H
#define SWIG_RX_TYPES_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#define MAX_THREADS                    omp_get_max_threads()

// Type Definitions
namespace SWiG_rx_namespace
{
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
    ::coder::bounded_array<uint64_T, 17U, 2U> app_data;
    uint64_T packet_app_data;
    uint8_T crc;
    boolean_T crc_validity;
    ::coder::empty_bounded_array<uint8_T, 2U> cargo;
  };

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
    real_T pkt_idx;
    real_T crg_idx;
    ::coder::bounded_array<real_T, 144U, 2U> pkt_raw_bits;
    ::coder::bounded_array<real_T, 64U, 2U> pkt_dec_bits;
    ::coder::empty_bounded_array<real_T, 2U> crg_raw_bits;
    ::coder::empty_bounded_array<real_T, 2U> crg_dec_bits;
    real_T gamma;
    real_T speed;
    real_T process_up_to;
    ::coder::bounded_array<real_T, 144U, 2U> bit_prob;
    real_T after;
  };
}

#endif

// End of code generation (swig_rx_types.h)
