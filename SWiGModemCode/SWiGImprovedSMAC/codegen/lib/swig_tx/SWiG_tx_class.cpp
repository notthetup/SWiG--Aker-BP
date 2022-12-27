//
// SWiG_tx_class.cpp
//
// Code generation for function 'SWiG_tx_class'
//

// Include files
#include "SWiG_tx_class.h"
#include "rt_nonfinite.h"
#include "swig_tx_types.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include <algorithm>
#include <cfloat>
#include <cmath>
#include <cstddef>
#include <cstring>
#include <stdio.h>

// Type Definitions
namespace SWiG_tx_namespace
{
  struct cell_wrap_4
  {
    ::coder::bounded_array<char_T, 41U, 2U> f1;
  };
}

// Function Declarations
namespace SWiG_tx_namespace
{
  static void binary_expand_op(::coder::array<real_T, 1U> &in1, const ::coder::
    array<creal_T, 1U> &in2, const ::coder::array<creal_T, 1U> &in3);
  static void binary_expand_op(::coder::array<creal_T, 1U> &in1, int32_T in2,
    const ::coder::array<real_T, 1U> &in3, const ::coder::array<creal_T, 1U>
    &in4);
  static void binary_expand_op(::coder::array<creal_T, 1U> &in1, int32_T in2,
    int32_T in3, const ::coder::array<real_T, 1U> &in4, const ::coder::array<
    creal_T, 1U> &in5);
  static void binary_expand_op(::coder::array<creal_T, 1U> &in1, int32_T in2,
    int32_T in3, int32_T in4, int32_T in5, const ::coder::array<real_T, 1U> &in6,
    int32_T in7, const ::coder::array<creal_T, 1U> &in8);
  static void bytes2bits(const uint8_T bytes_data[], const int32_T bytes_size[2],
    boolean_T bits_data[], int32_T bits_size[2]);
  namespace coder
  {
    static void convenc(const real_T msg_data[], real_T varargout_1_data[],
                        int32_T varargout_1_size[2]);
    static void eml_float_colon(real_T d, real_T b, ::coder::array<real_T, 2U>
      &y);
    static void hamming(real_T varargin_1, ::coder::array<real_T, 1U> &w);
    namespace internal
    {
      static real_T maximum(const real_T x_data[]);
    }

    static uint32_T intsqrt(uint32_T a);
  }

  static int32_T div_s32(int32_T numerator, int32_T denominator);
  static void packet_new(uint64_T params_packet_mobility, real_T
    params_packet_tx_rx, real_T params_packet_forward, real_T
    params_packet_class_id, real_T params_packet_app_type, real_T
    params_packet_reserv_time, real_T params_packet_repeat_int, const ::coder::
    array<char_T, 2U> &params_packet_app_data, struct1_T *pkt);
  static void packet_pack(struct1_T *pkt, boolean_T bits_data[], int32_T
    bits_size[2], int32_T crg_bits_size[2]);
  static real_T rt_remd_snf(real_T u0, real_T u1);
  static void tx(SWiG_tx_class *aInstancePtr, const char_T pset_name[27], real_T
                 pset_cfreq, real_T pset_chip_frq, real_T pset_chip_dur, real_T
                 pset_bwidth, real_T bband_fs, const struct0_T *params, ::coder::
                 array<creal_T, 1U> &bband, struct1_T *pkt, struct2_T *state);
  static void user_class_lookup_index(uint64_T b_index, char_T value_data[],
    int32_T value_size[2]);
  static void wake_up_tones(real_T ts, real_T nsample, real_T bwidth, ::coder::
    array<creal_T, 1U> &bband);
}

// Function Definitions
namespace SWiG_tx_namespace
{
  static void binary_expand_op(::coder::array<real_T, 1U> &in1, const ::coder::
    array<creal_T, 1U> &in2, const ::coder::array<creal_T, 1U> &in3)
  {
    int32_T loop_ub;
    int32_T stride_0_0;
    in1.set_size(in2.size(0));
    stride_0_0 = (in3.size(0) != 1);
    loop_ub = in2.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      in1[i] = in2[i].re * in3[i * stride_0_0].re - in2[i].im * in3[i *
        stride_0_0].im;
    }
  }

  static void binary_expand_op(::coder::array<creal_T, 1U> &in1, int32_T in2,
    const ::coder::array<real_T, 1U> &in3, const ::coder::array<creal_T, 1U>
    &in4)
  {
    int32_T stride_0_1;
    int32_T stride_1_1;
    stride_0_1 = (in3.size(0) != 1);
    stride_1_1 = (in4.size(0) != 1);
    for (int32_T i{0}; i < in2; i++) {
      int32_T i1;
      i1 = i * stride_1_1;
      in1[i].re = in3[i * stride_0_1] * in4[i1].re;
      in1[i].im = in3[i * stride_0_1] * in4[i1].im;
    }
  }

  static void binary_expand_op(::coder::array<creal_T, 1U> &in1, int32_T in2,
    int32_T in3, const ::coder::array<real_T, 1U> &in4, const ::coder::array<
    creal_T, 1U> &in5)
  {
    int32_T loop_ub;
    int32_T stride_0_1;
    int32_T stride_1_1;
    stride_0_1 = (in4.size(0) != 1);
    stride_1_1 = (in5.size(0) != 1);
    loop_ub = in3 - in2;
    for (int32_T i{0}; i < loop_ub; i++) {
      int32_T i1;
      int32_T i2;
      i1 = i * stride_1_1;
      i2 = in2 + i;
      in1[i2].re = in4[i * stride_0_1] * in5[i1].re;
      in1[i2].im = in4[i * stride_0_1] * in5[i1].im;
    }
  }

  static void binary_expand_op(::coder::array<creal_T, 1U> &in1, int32_T in2,
    int32_T in3, int32_T in4, int32_T in5, const ::coder::array<real_T, 1U> &in6,
    int32_T in7, const ::coder::array<creal_T, 1U> &in8)
  {
    ::coder::array<creal_T, 2U> b_in1;
    int32_T stride_0_1;
    int32_T stride_1_1;
    int32_T stride_2_1;
    int32_T unnamed_idx_1;
    unnamed_idx_1 = in3 - in2;
    b_in1.set_size(1, unnamed_idx_1);
    stride_0_1 = ((in5 - in4) + 1 != 1);
    stride_1_1 = (in7 + 1 != 1);
    stride_2_1 = (in8.size(0) != 1);
    for (int32_T i{0}; i < unnamed_idx_1; i++) {
      real_T d;
      int32_T i1;
      i1 = i * stride_2_1;
      d = in6[i * stride_1_1];
      b_in1[i].re = in1[in4 + i * stride_0_1].re + d * in8[i1].re;
      b_in1[i].im = in1[in4 + i * stride_0_1].im + d * in8[i1].im;
    }

    unnamed_idx_1 = b_in1.size(1);
    for (int32_T i{0}; i < unnamed_idx_1; i++) {
      in1[in2 + i] = b_in1[i];
    }
  }

  //
  // function bits = bytes2bits(bytes)
  static void bytes2bits(const uint8_T bytes_data[], const int32_T bytes_size[2],
    boolean_T bits_data[], int32_T bits_size[2])
  {
    int32_T idx;
    int32_T nb;
    int32_T s_size_idx_0;
    char_T b_s_data[64];
    char_T s_data[64];
    uint8_T d_data[8];

    // Modified from original JANUS 3.0.5 code for compatibility with Matlab
    // Coder and extensible time/frequency scaling SWiG
    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Author: Ricardo Martins                                                |
    // +------------------------------------------------------------------------+
    // 'bytes2bits:31' bits_size = length(bytes) * 8;
    //      bits = logical(str2num(reshape(dec2bin(bytes', 8)', bits_size, 1)))';
    // 'bytes2bits:33' bits = logical((reshape(dec2bin(bytes', 8)', bits_size, 1))-'0')';
    idx = bytes_size[1];
    if (idx - 1 >= 0) {
      std::copy(&bytes_data[0], &bytes_data[idx], &d_data[0]);
    }

    if (bytes_size[1] == 0) {
      s_size_idx_0 = 0;
    } else {
      s_size_idx_0 = 8;
      for (int32_T k{0}; k < 8; k++) {
        int32_T b_k;
        int32_T npad;
        char_T s[8];
        char_T sfull[8];
        boolean_T exitg1;
        for (b_k = 0; b_k < 8; b_k++) {
          sfull[b_k] = '0';
          if ((d_data[k] & 1 << (7 - b_k)) != 0) {
            sfull[b_k] = '1';
          }
        }

        idx = 0;
        b_k = 0;
        exitg1 = false;
        while ((!exitg1) && (b_k < 8)) {
          if (sfull[b_k] == '1') {
            idx = b_k + 1;
            exitg1 = true;
          } else {
            b_k++;
          }
        }

        if (idx == 0) {
          idx = 8;
        }

        nb = 8 - idx;
        if (9 - idx < 8) {
          npad = idx;
          for (b_k = 0; b_k <= idx - 2; b_k++) {
            s[b_k] = '0';
          }
        } else {
          npad = 1;
        }

        for (b_k = 0; b_k <= nb; b_k++) {
          s[(npad + b_k) - 1] = sfull[(idx + b_k) - 1];
        }

        for (nb = 0; nb < 8; nb++) {
          s_data[k + 8 * nb] = s[nb];
        }
      }
    }

    for (nb = 0; nb < s_size_idx_0; nb++) {
      for (idx = 0; idx < 8; idx++) {
        b_s_data[idx + 8 * nb] = s_data[nb + s_size_idx_0 * idx];
      }
    }

    idx = bytes_size[1] << 3;
    bits_size[0] = 1;
    bits_size[1] = idx;
    for (nb = 0; nb < idx; nb++) {
      bits_data[nb] = (b_s_data[nb] - 48 != 0);
    }
  }

  //
  //
  namespace coder
  {
    static void convenc(const real_T msg_data[], real_T varargout_1_data[],
                        int32_T varargout_1_size[2])
    {
      static const int8_T iv[512]{ 0, 3, 2, 1, 0, 3, 2, 1, 2, 1, 0, 3, 2, 1, 0,
        3, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1,
        2, 1, 2, 3, 0, 1, 2, 3, 0, 2, 1, 0, 3, 2, 1, 0, 3, 0, 3, 2, 1, 0, 3, 2,
        1, 3, 0, 1, 2, 3, 0, 1, 2, 1, 2, 3, 0, 1, 2, 3, 0, 2, 1, 0, 3, 2, 1, 0,
        3, 0, 3, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 2, 1, 0, 3, 2, 1, 0,
        3, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3, 0, 1, 2, 2, 1, 0, 3, 2, 1, 0,
        3, 0, 3, 2, 1, 0, 3, 2, 1, 3, 0, 1, 2, 3, 0, 1, 2, 1, 2, 3, 0, 1, 2, 3,
        0, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3, 0, 1, 2, 0, 3, 2, 1, 0, 3, 2,
        1, 2, 1, 0, 3, 2, 1, 0, 3, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3, 0, 1,
        2, 0, 3, 2, 1, 0, 3, 2, 1, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 0,
        3, 0, 3, 2, 1, 0, 3, 2, 1, 3, 0, 1, 2, 3, 0, 1, 2, 1, 2, 3, 0, 1, 2, 3,
        0, 3, 0, 1, 2, 3, 0, 1, 2, 1, 2, 3, 0, 1, 2, 3, 0, 2, 1, 0, 3, 2, 1, 0,
        3, 0, 3, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 2, 1, 0, 3, 2, 1, 0,
        3, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3, 0, 1, 2, 0, 3, 2, 1, 0, 3, 2,
        1, 2, 1, 0, 3, 2, 1, 0, 3, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3, 0, 1,
        2, 3, 0, 1, 2, 3, 0, 1, 2, 1, 2, 3, 0, 1, 2, 3, 0, 2, 1, 0, 3, 2, 1, 0,
        3, 0, 3, 2, 1, 0, 3, 2, 1, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3, 0, 1,
        2, 0, 3, 2, 1, 0, 3, 2, 1, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 0,
        3, 0, 3, 2, 1, 0, 3, 2, 1, 3, 0, 1, 2, 3, 0, 1, 2, 1, 2, 3, 0, 1, 2, 3,
        0, 2, 1, 0, 3, 2, 1, 0, 3, 0, 3, 2, 1, 0, 3, 2, 1, 3, 0, 1, 2, 3, 0, 1,
        2, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3, 0, 1,
        2, 0, 3, 2, 1, 0, 3, 2, 1, 2, 1, 0, 3, 2, 1, 0, 3 };

      static const uint8_T uv[512]{ 0U, 0U, 1U, 1U, 2U, 2U, 3U, 3U, 4U, 4U, 5U,
        5U, 6U, 6U, 7U, 7U, 8U, 8U, 9U, 9U, 10U, 10U, 11U, 11U, 12U, 12U, 13U,
        13U, 14U, 14U, 15U, 15U, 16U, 16U, 17U, 17U, 18U, 18U, 19U, 19U, 20U,
        20U, 21U, 21U, 22U, 22U, 23U, 23U, 24U, 24U, 25U, 25U, 26U, 26U, 27U,
        27U, 28U, 28U, 29U, 29U, 30U, 30U, 31U, 31U, 32U, 32U, 33U, 33U, 34U,
        34U, 35U, 35U, 36U, 36U, 37U, 37U, 38U, 38U, 39U, 39U, 40U, 40U, 41U,
        41U, 42U, 42U, 43U, 43U, 44U, 44U, 45U, 45U, 46U, 46U, 47U, 47U, 48U,
        48U, 49U, 49U, 50U, 50U, 51U, 51U, 52U, 52U, 53U, 53U, 54U, 54U, 55U,
        55U, 56U, 56U, 57U, 57U, 58U, 58U, 59U, 59U, 60U, 60U, 61U, 61U, 62U,
        62U, 63U, 63U, 64U, 64U, 65U, 65U, 66U, 66U, 67U, 67U, 68U, 68U, 69U,
        69U, 70U, 70U, 71U, 71U, 72U, 72U, 73U, 73U, 74U, 74U, 75U, 75U, 76U,
        76U, 77U, 77U, 78U, 78U, 79U, 79U, 80U, 80U, 81U, 81U, 82U, 82U, 83U,
        83U, 84U, 84U, 85U, 85U, 86U, 86U, 87U, 87U, 88U, 88U, 89U, 89U, 90U,
        90U, 91U, 91U, 92U, 92U, 93U, 93U, 94U, 94U, 95U, 95U, 96U, 96U, 97U,
        97U, 98U, 98U, 99U, 99U, 100U, 100U, 101U, 101U, 102U, 102U, 103U, 103U,
        104U, 104U, 105U, 105U, 106U, 106U, 107U, 107U, 108U, 108U, 109U, 109U,
        110U, 110U, 111U, 111U, 112U, 112U, 113U, 113U, 114U, 114U, 115U, 115U,
        116U, 116U, 117U, 117U, 118U, 118U, 119U, 119U, 120U, 120U, 121U, 121U,
        122U, 122U, 123U, 123U, 124U, 124U, 125U, 125U, 126U, 126U, 127U, 127U,
        128U, 128U, 129U, 129U, 130U, 130U, 131U, 131U, 132U, 132U, 133U, 133U,
        134U, 134U, 135U, 135U, 136U, 136U, 137U, 137U, 138U, 138U, 139U, 139U,
        140U, 140U, 141U, 141U, 142U, 142U, 143U, 143U, 144U, 144U, 145U, 145U,
        146U, 146U, 147U, 147U, 148U, 148U, 149U, 149U, 150U, 150U, 151U, 151U,
        152U, 152U, 153U, 153U, 154U, 154U, 155U, 155U, 156U, 156U, 157U, 157U,
        158U, 158U, 159U, 159U, 160U, 160U, 161U, 161U, 162U, 162U, 163U, 163U,
        164U, 164U, 165U, 165U, 166U, 166U, 167U, 167U, 168U, 168U, 169U, 169U,
        170U, 170U, 171U, 171U, 172U, 172U, 173U, 173U, 174U, 174U, 175U, 175U,
        176U, 176U, 177U, 177U, 178U, 178U, 179U, 179U, 180U, 180U, 181U, 181U,
        182U, 182U, 183U, 183U, 184U, 184U, 185U, 185U, 186U, 186U, 187U, 187U,
        188U, 188U, 189U, 189U, 190U, 190U, 191U, 191U, 192U, 192U, 193U, 193U,
        194U, 194U, 195U, 195U, 196U, 196U, 197U, 197U, 198U, 198U, 199U, 199U,
        200U, 200U, 201U, 201U, 202U, 202U, 203U, 203U, 204U, 204U, 205U, 205U,
        206U, 206U, 207U, 207U, 208U, 208U, 209U, 209U, 210U, 210U, 211U, 211U,
        212U, 212U, 213U, 213U, 214U, 214U, 215U, 215U, 216U, 216U, 217U, 217U,
        218U, 218U, 219U, 219U, 220U, 220U, 221U, 221U, 222U, 222U, 223U, 223U,
        224U, 224U, 225U, 225U, 226U, 226U, 227U, 227U, 228U, 228U, 229U, 229U,
        230U, 230U, 231U, 231U, 232U, 232U, 233U, 233U, 234U, 234U, 235U, 235U,
        236U, 236U, 237U, 237U, 238U, 238U, 239U, 239U, 240U, 240U, 241U, 241U,
        242U, 242U, 243U, 243U, 244U, 244U, 245U, 245U, 246U, 246U, 247U, 247U,
        248U, 248U, 249U, 249U, 250U, 250U, 251U, 251U, 252U, 252U, 253U, 253U,
        254U, 254U, MAX_uint8_T, MAX_uint8_T };

      int32_T fstate;
      varargout_1_size[0] = 1;
      varargout_1_size[1] = 144;
      fstate = 0;
      for (int32_T inIdx{0}; inIdx < 72; inIdx++) {
        real_T d;
        int32_T startIdx;
        int32_T tmp;
        uint32_T b_qY;
        uint32_T qY;
        d = std::round(msg_data[inIdx]);
        if (d < 4.294967296E+9) {
          if (d >= 0.0) {
            qY = static_cast<uint32_T>(d);
          } else {
            qY = 0U;
          }
        } else if (d >= 4.294967296E+9) {
          qY = MAX_uint32_T;
        } else {
          qY = 0U;
        }

        if (qY > 16777215U) {
          qY = MAX_uint32_T;
        } else {
          qY <<= 8;
        }

        qY += static_cast<uint32_T>(fstate);
        if (qY < static_cast<uint32_T>(fstate)) {
          qY = MAX_uint32_T;
        }

        b_qY = qY + 1U;
        if (qY + 1U < qY) {
          b_qY = MAX_uint32_T;
        }

        tmp = iv[static_cast<int32_T>(b_qY) - 1];
        b_qY = qY + 1U;
        if (qY + 1U < qY) {
          b_qY = MAX_uint32_T;
        }

        fstate = uv[static_cast<int32_T>(b_qY) - 1];
        startIdx = (inIdx + 1) << 1;
        varargout_1_data[startIdx - 1] = tmp & 1;
        tmp = static_cast<int32_T>(static_cast<uint32_T>(tmp) >> 1);
        varargout_1_data[startIdx - 2] = tmp;
      }
    }

    //
    //
    static void eml_float_colon(real_T d, real_T b, ::coder::array<real_T, 2U>
      &y)
    {
      real_T apnd;
      real_T cdiff;
      real_T ndbl;
      int32_T n;
      ndbl = std::floor(b / d + 0.5);
      apnd = ndbl * d;
      if (d > 0.0) {
        cdiff = apnd - b;
      } else {
        cdiff = b - apnd;
      }

      if (std::abs(cdiff) < 4.4408920985006262E-16 * std::fmax(0.0, std::abs(b)))
      {
        ndbl++;
        apnd = b;
      } else if (cdiff > 0.0) {
        apnd = (ndbl - 1.0) * d;
      } else {
        ndbl++;
      }

      if (ndbl >= 0.0) {
        n = static_cast<int32_T>(ndbl);
      } else {
        n = 0;
      }

      y.set_size(1, n);
      if (n > 0) {
        y[0] = 0.0;
        if (n > 1) {
          int32_T nm1d2;
          y[n - 1] = apnd;
          nm1d2 = (n - 1) / 2;
          for (int32_T k{0}; k <= nm1d2 - 2; k++) {
            ndbl = (static_cast<real_T>(k) + 1.0) * d;
            y[k + 1] = ndbl;
            y[(n - k) - 2] = apnd - ndbl;
          }

          if (nm1d2 << 1 == n - 1) {
            y[nm1d2] = apnd / 2.0;
          } else {
            ndbl = static_cast<real_T>(nm1d2) * d;
            y[nm1d2] = ndbl;
            y[nm1d2 + 1] = apnd - ndbl;
          }
        }
      }
    }

    //
    //
    static void hamming(real_T varargin_1, ::coder::array<real_T, 1U> &w)
    {
      ::coder::array<real_T, 2U> y;
      ::coder::array<real_T, 1U> b_w;
      real_T L;
      int32_T i;
      int32_T nx;
      int32_T trivialwin;
      int8_T w_data;
      nx = 1;
      w_data = 0;
      trivialwin = 0;
      if (varargin_1 == std::floor(varargin_1)) {
        L = varargin_1;
      } else {
        L = std::round(varargin_1);
      }

      if (L == 0.0) {
        nx = 0;
        trivialwin = 1;
      } else if (L == 1.0) {
        w_data = 1;
        trivialwin = 1;
      }

      w.set_size(nx);
      for (i = 0; i < nx; i++) {
        w[0] = w_data;
      }

      if (trivialwin == 0) {
        real_T r;
        if (std::isnan(L) || std::isinf(L)) {
          r = rtNaN;
        } else if (L == 0.0) {
          r = 0.0;
        } else {
          r = std::fmod(L, 2.0);
          if (r == 0.0) {
            r = 0.0;
          }
        }

        if (r == 0.0) {
          int32_T i1;
          int32_T loop_ub;
          r = L / 2.0;
          if (std::isnan(L / 2.0 - 1.0)) {
            y.set_size(1, 1);
            y[0] = rtNaN;
          } else if (r - 1.0 < 0.0) {
            y.set_size(1, 0);
          } else {
            y.set_size(1, static_cast<int32_T>(r - 1.0) + 1);
            nx = static_cast<int32_T>(r - 1.0);
            for (i = 0; i <= nx; i++) {
              y[i] = i;
            }
          }

          w.set_size(y.size(1));
          nx = y.size(1);
          for (i = 0; i < nx; i++) {
            w[i] = 6.2831853071795862 * (y[i] / (L - 1.0));
          }

          nx = w.size(0);
          for (trivialwin = 0; trivialwin < nx; trivialwin++) {
            w[trivialwin] = std::cos(w[trivialwin]);
          }

          nx = w.size(0);
          for (i = 0; i < nx; i++) {
            w[i] = 0.54 - 0.46 * w[i];
          }

          if (w.size(0) < 1) {
            i = 0;
            trivialwin = 1;
            i1 = -1;
          } else {
            i = w.size(0) - 1;
            trivialwin = -1;
            i1 = 0;
          }

          nx = div_s32(i1 - i, trivialwin);
          b_w.set_size((w.size(0) + nx) + 1);
          loop_ub = w.size(0);
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_w[i1] = w[i1];
          }

          for (i1 = 0; i1 <= nx; i1++) {
            b_w[i1 + w.size(0)] = w[i + trivialwin * i1];
          }

          w.set_size(b_w.size(0));
          nx = b_w.size(0);
          for (i = 0; i < nx; i++) {
            w[i] = b_w[i];
          }
        } else {
          int32_T i1;
          int32_T loop_ub;
          r = (L + 1.0) / 2.0;
          if (std::isnan((L + 1.0) / 2.0 - 1.0)) {
            y.set_size(1, 1);
            y[0] = rtNaN;
          } else if (r - 1.0 < 0.0) {
            y.set_size(1, 0);
          } else {
            y.set_size(1, static_cast<int32_T>(r - 1.0) + 1);
            nx = static_cast<int32_T>(r - 1.0);
            for (i = 0; i <= nx; i++) {
              y[i] = i;
            }
          }

          w.set_size(y.size(1));
          nx = y.size(1);
          for (i = 0; i < nx; i++) {
            w[i] = 6.2831853071795862 * (y[i] / (L - 1.0));
          }

          nx = w.size(0);
          for (trivialwin = 0; trivialwin < nx; trivialwin++) {
            w[trivialwin] = std::cos(w[trivialwin]);
          }

          nx = w.size(0);
          for (i = 0; i < nx; i++) {
            w[i] = 0.54 - 0.46 * w[i];
          }

          if (w.size(0) - 1 < 1) {
            i = 0;
            trivialwin = 1;
            i1 = -1;
          } else {
            i = w.size(0) - 2;
            trivialwin = -1;
            i1 = 0;
          }

          nx = div_s32(i1 - i, trivialwin);
          b_w.set_size((w.size(0) + nx) + 1);
          loop_ub = w.size(0);
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_w[i1] = w[i1];
          }

          for (i1 = 0; i1 <= nx; i1++) {
            b_w[i1 + w.size(0)] = w[i + trivialwin * i1];
          }

          w.set_size(b_w.size(0));
          nx = b_w.size(0);
          for (i = 0; i < nx; i++) {
            w[i] = b_w[i];
          }
        }
      }
    }

    //
    //
    namespace internal
    {
      static real_T maximum(const real_T x_data[])
      {
        real_T ex;
        int32_T idx;
        int32_T k;
        if (!std::isnan(x_data[0])) {
          idx = 1;
        } else {
          boolean_T exitg1;
          idx = 0;
          k = 2;
          exitg1 = false;
          while ((!exitg1) && (k <= 528)) {
            if (!std::isnan(x_data[k - 1])) {
              idx = k;
              exitg1 = true;
            } else {
              k++;
            }
          }
        }

        if (idx == 0) {
          ex = x_data[0];
        } else {
          ex = x_data[idx - 1];
          idx++;
          for (k = idx; k < 529; k++) {
            real_T d;
            d = x_data[k - 1];
            if (ex < d) {
              ex = d;
            }
          }
        }

        return ex;
      }

      //
      //
    }

    static uint32_T intsqrt(uint32_T a)
    {
      uint32_T r;
      uint32_T rhi;
      rhi = (a >> 1) + 1U;
      if (rhi >= 65535U) {
        rhi = 65535U;
      }

      if (a >= rhi * rhi) {
        r = rhi;
      } else {
        uint32_T rlo;
        boolean_T exitg1;
        rlo = 0U;
        r = rhi >> 1;
        exitg1 = false;
        while ((!exitg1) && (r > rlo)) {
          uint32_T rr;
          rr = r * r;
          if (rr == a) {
            exitg1 = true;
          } else {
            if (rr > a) {
              rhi = r;
            } else {
              rlo = r;
            }

            r = rlo + ((rhi - rlo) >> 1);
            if (r < rlo) {
              r = MAX_uint32_T;
            }
          }
        }
      }

      return r;
    }
  }

  static int32_T div_s32(int32_T numerator, int32_T denominator)
  {
    int32_T quotient;
    if (denominator == 0) {
      if (numerator >= 0) {
        quotient = MAX_int32_T;
      } else {
        quotient = MIN_int32_T;
      }
    } else {
      uint32_T tempAbsQuotient;
      uint32_T u;
      if (numerator < 0) {
        tempAbsQuotient = ~static_cast<uint32_T>(numerator) + 1U;
      } else {
        tempAbsQuotient = static_cast<uint32_T>(numerator);
      }

      if (denominator < 0) {
        u = ~static_cast<uint32_T>(denominator) + 1U;
      } else {
        u = static_cast<uint32_T>(denominator);
      }

      tempAbsQuotient /= u;
      if ((numerator < 0) != (denominator < 0)) {
        quotient = -static_cast<int32_T>(tempAbsQuotient);
      } else {
        quotient = static_cast<int32_T>(tempAbsQuotient);
      }
    }

    return quotient;
  }

  //
  // function pkt = packet_new(params, pset_id)
  static void packet_new(uint64_T params_packet_mobility, real_T
    params_packet_tx_rx, real_T params_packet_forward, real_T
    params_packet_class_id, real_T params_packet_app_type, real_T
    params_packet_reserv_time, real_T params_packet_repeat_int, const ::coder::
    array<char_T, 2U> &params_packet_app_data, struct1_T *pkt)
  {
    static const boolean_T bv[128]{ false, false, false, false, false, false,
      false, false, false, true, true, true, true, true, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, true, true, true, true, true, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false };

    real_T x;
    uint64_T a;

    // Modified from original JANUS 3.0.5 code for compatibility with Matlab
    // Coder and extensible time/frequency scaling SWiG
    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Author: Ricardo Martins                                                |
    // +------------------------------------------------------------------------+
    //
    //  PACKET_NEW Create a JANUS packet structure.
    //
    //  Inputs:
    //    params   Optional parameters.
    //   pset_id   Parameter set Id.
    //
    //  Outputs:
    //    pkt      Packet structure.
    //
    //  See also PACKET_PACK, PACKET_UNPACK.
    //
    // 'packet_new:41' defaults = defaultFun;
    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Author: Ricardo Martins                                                |
    // +------------------------------------------------------------------------+
    //  Version of JANUS Matlab implementation.
    // 'defaultFun:27' defaults.JANUS_M_VERSION = '3.0.5';
    //  JANUS version.
    // 'defaultFun:29' defaults.JANUS_VERSION = uint64(3);
    //  JANUS Reference Implementation Class Id.
    // 'defaultFun:31' defaults.JANUS_RI_CLASS_ID = 16;
    //  Minimum number of bits in a packet.
    // 'defaultFun:33' defaults.PKT_MIN_NBIT = 64;
    //  Alphabet size.
    // 'defaultFun:35' defaults.ALPHABET_SIZE = 2;
    //  Standard number of frequencies used by a chip.
    // 'defaultFun:37' defaults.CHIP_NFRQ = 13;
    //  Gap after wake-up tones (s).
    // 'defaultFun:39' defaults.WUT_GAP = 0.4;
    //  Length of wake-up tones in chips.
    // 'defaultFun:41' defaults.NCHIP_WUT = 4;
    //  Convolutional encoder: constraint length.
    // 'defaultFun:43' defaults.CONV_ENC_CLEN = 9;
    //  Convolutional encoder: code generator.
    // 'defaultFun:45' defaults.CONV_ENC_CGEN = [753 561];
    //  Convolutional encoder: memory.
    // 'defaultFun:47' defaults.CONV_ENC_MEM = 8;
    //  JANUS CRC8 polynomial: 0x07.
    // 'defaultFun:49' defaults.CRC_POLY = 7;
    //  List of common sampling frequencies.
    // 'defaultFun:51' defaults.COMMON_FS = [22050 44100 48000 96000 192000];
    //  Number of chips used for padding.
    // 'defaultFun:53' defaults.PAD_NCHIP = 5;
    //  JANUS maximum optional packet cargo size in bytes.
    // 'defaultFun:55' defaults.JANUS_MAX_PKT_CRG_SIZE = 4096;
    // 'packet_new:43' if (nargin < 1)
    // 'packet_new:51' coder.varsize("nullstr");
    // 'packet_new:52' nullstr=uint8(zeros(1,0));
    // 'packet_new:53' pkt.bytes = nullstr;
    pkt->bytes.size[0] = 1;
    pkt->bytes.size[1] = 0;

    //  Version Number.
    // 'packet_new:56' pkt.version = defaults.JANUS_VERSION;
    pkt->version = 3ULL;

    //  Mobility Flag.
    // 'packet_new:59' pkt.mobility = uint64(params.packet_mobility);
    pkt->mobility = params_packet_mobility;

    //  Schedule Flag.
    // 'packet_new:62' pkt.schedule = uint64(0);
    //  Tx/Rx capability.
    // 'packet_new:65' pkt.tx_rx = uint64(params.packet_tx_rx);
    x = std::round(params_packet_tx_rx);
    if (x < 1.8446744073709552E+19) {
      if (x >= 0.0) {
        a = static_cast<uint64_T>(x);
      } else {
        a = 0ULL;
      }
    } else if (x >= 1.8446744073709552E+19) {
      a = MAX_uint64_T;
    } else {
      a = 0ULL;
    }

    pkt->tx_rx = a;

    //  Forwarding capability.
    // 'packet_new:68' pkt.forward = uint64(params.packet_forward);
    x = std::round(params_packet_forward);
    if (x < 1.8446744073709552E+19) {
      if (x >= 0.0) {
        a = static_cast<uint64_T>(x);
      } else {
        a = 0ULL;
      }
    } else if (x >= 1.8446744073709552E+19) {
      a = MAX_uint64_T;
    } else {
      a = 0ULL;
    }

    pkt->forward = a;

    //  Class User Id.
    // 'packet_new:71' pkt.class_id = uint64(params.packet_class_id);
    x = std::round(params_packet_class_id);
    if (x < 1.8446744073709552E+19) {
      if (x >= 0.0) {
        a = static_cast<uint64_T>(x);
      } else {
        a = 0ULL;
      }
    } else if (x >= 1.8446744073709552E+19) {
      a = MAX_uint64_T;
    } else {
      a = 0ULL;
    }

    pkt->class_id = a;

    //  Class User name.
    //      pkt.class_id_name = '';
    // 'packet_new:75' coder.varsize("empty");
    // 'packet_new:76' empty='';
    // 'packet_new:77' pkt.class_id_name = empty;
    pkt->class_id_name.size[0] = 1;
    pkt->class_id_name.size[1] = 0;

    //  Application Type.
    // 'packet_new:80' pkt.app_type = uint64(params.packet_app_type);
    x = std::round(params_packet_app_type);
    if (x < 1.8446744073709552E+19) {
      if (x >= 0.0) {
        a = static_cast<uint64_T>(x);
      } else {
        a = 0ULL;
      }
    } else if (x >= 1.8446744073709552E+19) {
      a = MAX_uint64_T;
    } else {
      a = 0ULL;
    }

    pkt->app_type = a;

    // 'packet_new:82' if (params.packet_reserv_time > 0)
    if (params_packet_reserv_time > 0.0) {
      //  Schedule Flag.
      // 'packet_new:84' pkt.schedule = uint64(1);
      pkt->schedule = 1ULL;

      //  Reservation Time or Repeat Interval Flag.
      // 'packet_new:86' pkt.reserv_repeat = uint64(0);
      pkt->reserv_repeat = 0ULL;

      //  Reservation Time.
      // 'packet_new:88' pkt.reserv_time = params.packet_reserv_time;
      pkt->reserv_time = params_packet_reserv_time;

      // fake required by compiler
      // 'packet_new:90' pkt.repeat_int = double(0);
      pkt->repeat_int = 0.0;
    } else if (params_packet_repeat_int > 0.0) {
      // 'packet_new:91' elseif (params.packet_repeat_int > 0)
      //  Schedule Flag.
      // 'packet_new:93' pkt.schedule = uint64(1);
      pkt->schedule = 1ULL;

      //  Reservation Time or Repeat Interval Flag.
      // 'packet_new:95' pkt.reserv_repeat = uint64(1);
      pkt->reserv_repeat = 1ULL;

      // fake required by compiler
      // 'packet_new:97' pkt.reserv_time = 0;
      pkt->reserv_time = 0.0;

      //  Repeat Interval.
      // 'packet_new:99' pkt.repeat_int = double(params.packet_repeat_int);
      pkt->repeat_int = params_packet_repeat_int;
    } else {
      // 'packet_new:100' else
      // required by compiler
      // 'packet_new:101' pkt.schedule = uint64(0);
      pkt->schedule = 0ULL;

      // 'packet_new:102' pkt.reserv_repeat = uint64(0);
      pkt->reserv_repeat = 0ULL;

      // 'packet_new:103' pkt.reserv_time =0;
      pkt->reserv_time = 0.0;

      // 'packet_new:104' pkt.repeat_int = double(0);
      pkt->repeat_int = 0.0;
    }

    //  Cargo Size.
    // 'packet_new:108' pkt.cargo_size = 0;
    pkt->cargo_size = 0.0;

    //  Application data.
    // 'packet_new:111' coder.varsize("app_data");
    // 'packet_new:112' app_data = intmax('uint64');
    pkt->app_data.size[0] = 1;
    pkt->app_data.size[1] = 1;
    pkt->app_data.data[0] = MAX_uint64_T;

    // 'packet_new:113' pkt.app_data = app_data;
    // 'packet_new:114' pkt.packet_app_data = uint64(0);
    pkt->packet_app_data = 0ULL;

    // 'packet_new:115' if (~isempty(params.packet_app_data))
    if (params_packet_app_data.size(1) != 0) {
      uint64_T p16;
      int32_T b_first;
      int32_T idx;
      int32_T last;
      int32_T nbits;
      boolean_T b_signed;
      boolean_T exitg1;
      boolean_T hasPrefix;

      // 'packet_new:116' pkt.packet_app_data = uint64(hex2dec(params.packet_app_data));
      b_signed = false;
      nbits = 112;
      hasPrefix = false;
      b_first = 1;
      exitg1 = false;
      while ((!exitg1) && (b_first < params_packet_app_data.size(1))) {
        idx = static_cast<uint8_T>(params_packet_app_data[b_first - 1]);
        if ((idx == 0) || bv[idx & 127]) {
          b_first++;
        } else {
          exitg1 = true;
        }
      }

      if ((params_packet_app_data[b_first - 1] == '0') && (b_first <
           params_packet_app_data.size(1)) && ((params_packet_app_data[b_first] ==
            'x') || (params_packet_app_data[b_first] == 'X'))) {
        b_first += 2;
        hasPrefix = true;
      }

      last = params_packet_app_data.size(1);
      exitg1 = false;
      while ((!exitg1) && (last > b_first)) {
        idx = static_cast<uint8_T>(params_packet_app_data[last - 1]);
        if ((idx == 0) || bv[idx & 127]) {
          last--;
        } else {
          exitg1 = true;
        }
      }

      if (hasPrefix && (b_first > last)) {
        b_first -= 2;
      }

      idx = last - 1;
      while ((idx + 1 > b_first) && (params_packet_app_data[idx] >= '0') &&
             (params_packet_app_data[idx] <= '9')) {
        idx--;
      }

      if ((params_packet_app_data[idx] == 's') || (params_packet_app_data[idx] ==
           'S')) {
        b_signed = true;
        if (last == idx + 2) {
          nbits = static_cast<uint8_T>(params_packet_app_data[last - 1]);
        } else if (last == idx + 3) {
          nbits = 10 * (static_cast<uint8_T>(params_packet_app_data[idx + 1]) -
                        48) + static_cast<uint8_T>(params_packet_app_data[last -
            1]);
        } else {
          nbits = 48;
        }

        last = idx;
      } else if ((params_packet_app_data[idx] == 'u') ||
                 (params_packet_app_data[idx] == 'U')) {
        if (last == idx + 2) {
          nbits = static_cast<uint8_T>(params_packet_app_data[last - 1]);
        } else if (last == idx + 3) {
          nbits = 10 * (static_cast<uint8_T>(params_packet_app_data[idx + 1]) -
                        48) + static_cast<uint8_T>(params_packet_app_data[last -
            1]);
        } else {
          nbits = 48;
        }

        last = idx;
      }

      a = 0ULL;
      p16 = 1ULL;
      for (idx = last; idx >= b_first; idx--) {
        uint64_T sk;
        char_T c;
        c = params_packet_app_data[idx - 1];
        if ((c >= '0') && (c <= '9')) {
          sk = static_cast<uint64_T>(c) - 48ULL;
        } else if ((c >= 'A') && (c <= 'F')) {
          sk = static_cast<uint64_T>(c) - 55ULL;
        } else if ((c >= 'a') && (c <= 'f')) {
          sk = static_cast<uint64_T>(c) - 87ULL;
        } else {
          sk = 0ULL;
        }

        a += sk * p16;
        p16 <<= 4;
      }

      idx = (last - b_first) + 1;
      if (b_signed) {
        if (nbits - 48 == 64) {
          if ((params_packet_app_data.size(1) >= 21) && (idx == 16) &&
              (params_packet_app_data[b_first - 1] >= '8')) {
            int64_T y;
            std::memcpy((void *)&y, (void *)&a, (uint32_T)((size_t)1 * sizeof
              (int64_T)));
            x = static_cast<real_T>(y);
          } else {
            x = static_cast<real_T>(a);
          }
        } else if ((idx << 2 == nbits - 48) && (params_packet_app_data[b_first -
                    1] >= '8')) {
          x = static_cast<real_T>(a) - static_cast<real_T>(p16);
        } else {
          x = static_cast<real_T>(a);
        }
      } else {
        x = static_cast<real_T>(a);
      }

      x = std::round(x);
      if (x < 1.8446744073709552E+19) {
        if (x >= 0.0) {
          a = static_cast<uint64_T>(x);
        } else {
          a = 0ULL;
        }
      } else if (x >= 1.8446744073709552E+19) {
        a = MAX_uint64_T;
      } else {
        a = 0ULL;
      }

      pkt->packet_app_data = a;
    }

    //  CRC.
    // 'packet_new:127' pkt.crc = uint8(0);
    pkt->crc = 0U;

    //  Computed CRC Validity.
    // 'packet_new:130' pkt.crc_validity = false;
    pkt->crc_validity = false;

    //  Optional cargo.
    // 'packet_new:133' if (isfield(params, 'packet_cargo'))
    // 'packet_new:136' else
    // 'packet_new:137' coder.varsize("nullint8");
    // 'packet_new:138' nullint8=zeros(1,0,'uint8');
    pkt->cargo.size[0] = 1;
    pkt->cargo.size[1] = 0;

    // 'packet_new:139' pkt.cargo = nullint8;
  }

  //
  // function [bits, crg_bits, pkt] = packet_pack(pkt)
  static void packet_pack(struct1_T *pkt, boolean_T bits_data[], int32_T
    bits_size[2], int32_T crg_bits_size[2])
  {
    static const real_T dv[128]{ 0.0033211, 0.00365321, 0.00401853, 0.00442038,
      0.00486242, 0.00534866, 0.00588353, 0.00647188, 0.00711907, 0.00783098,
      0.00861408, 0.00947549, 0.01042303, 0.01146534, 0.01261187, 0.01387306,
      0.01526036, 0.0167864, 0.01846504, 0.02031155, 0.0223427, 0.02457697,
      0.02703467, 0.02973813, 0.03271195, 0.03598314, 0.03958146, 0.0435396,
      0.04789356, 0.05268292, 0.05795121, 0.06374633, 0.07012096, 0.07713306,
      0.08484637, 0.093331, 0.1026641, 0.11293051, 0.12422357, 0.13664592,
      0.15031051, 0.16534157, 0.18187572, 0.20006329, 0.22006962, 0.24207659,
      0.26628424, 0.29291267, 0.32220394, 0.35442433, 0.38986676, 0.42885344,
      0.47173878, 0.51891266, 0.57080393, 0.62788432, 0.69067275, 0.75974002,
      0.83571403, 0.91928543, 1.0, 1.11233537, 1.22356891, 1.3459258, 1.48051838,
      1.62857022, 1.79142724, 1.97056996, 2.16762696, 2.38438965, 2.62282862,
      2.88511148, 3.17362263, 3.49098489, 3.84008338, 4.22409172, 4.64650089,
      5.11115098, 5.62226608, 6.18449268, 6.80294195, 7.48323615, 8.23155976,
      9.05471574, 10.0, 10.95620604, 12.05182665, 13.25700931, 14.58271024,
      16.04098127, 17.6450794, 19.40958734, 21.35054607, 23.48560068,
      25.83416074, 28.41757682, 31.2593345, 34.38526795, 37.82379475,
      41.60617422, 45.76679164, 50.34347081, 55.37781789, 60.0, 67.00715964,
      73.70787561, 81.07866317, 89.18652948, 98.10518243, 107.91570068,
      118.70727074, 130.57799782, 143.6357976, 157.99937736, 173.7993151,
      191.17924661, 210.29717127, 231.32688839, 254.45957723, 279.90553496,
      307.89608845, 338.6856973, 372.55426703, 409.80969373, 450.7906631,
      495.86972941, 545.45670235, 600.0 };

    static const real_T dv1[128]{ 0.033211, 0.0390817, 0.04599017, 0.05411984,
      0.06368659, 0.07494446, 0.08819237, 0.10378212, 0.12212766, 0.14371615,
      0.16912082, 0.19901627, 0.23419634, 0.27559517, 0.32431208, 0.38164065,
      0.44910319, 0.52849107, 0.62191233, 0.73184764, 0.8612162, 1.0, 1.19260113,
      1.40341698, 1.65149871, 1.9434338, 2.28697419, 2.69124214, 3.16697246,
      3.72679753, 4.38558275, 5.16082131, 6.07309863, 7.14663902, 8.40994892,
      10.0, 11.64598917, 13.70464827, 16.12721611, 18.97802077, 22.33276159,
      26.28051924, 30.92612119, 36.39292525, 42.82609513, 50.39645511, 60.0,
      69.78836328, 82.12483784, 96.64202846, 113.72541986, 133.82863883,
      157.48549967, 185.32417892, 218.08389574, 256.63454093, 301.99977571,
      355.38421367, 418.2054077, 492.13149123, 579.12547326, 681.49736353,
      801.96551168, 943.72878951, 1110.55153266, 1306.86349766, 1537.87748815,
      1809.72777402, 2129.63297875, 2506.08776044, 2949.08837612, 3600.0,
      4083.85967766, 4805.76270919, 5655.27639046, 6654.95842967, 7831.35405642,
      9215.70089508, 10844.75843841, 12761.78414712, 15017.68209432,
      17672.3546556, 20796.29313711, 24472.4495786, 28798.4394348,
      33889.13362415, 39879.70877367, 46929.23665476, 55224.90812301,
      64987.00372288, 76474.74294517, 86400.0, 105901.24107592, 124621.38158255,
      146650.6774591, 172574.08741667, 203079.97319687, 238978.37810416,
      281222.53663058, 330934.18633241, 389433.35408199, 458273.4076292,
      539282.30322015, 634611.1245489, 746791.20192975, 878801.3284137,
      1.03414685768396E+6, 1.21695278407016E+6, 1.43207327629739E+6,
      1.68522057349343E+6, 1.98311666611658E+6, 2.33367178948974E+6,
      2.74619446959965E+6, 3.23163869864865E+6, 3.80289480377769E+6,
      4.47513173259338E+6, 5.26619984443698E+6, 6.19710490298272E+6,
      7.29256585640996E+6, 8.58167121626093E+6, 1.00986514642537E+7,
      1.18837879972881E+7, 1.39844827464717E+7, 1.64565168724817E+7,
      1.93655319602436E+7, 2.27887730440896E+7, 2.68171397471125E+7, 3.15576E+7
    };

    ::coder::array<char_T, 2U> str;
    real_T table[128];
    real_T tx_interval;
    uint64_T b_index;
    uint64_T bin;
    int32_T idx;
    int32_T ii_size;
    uint8_T ii_data;
    boolean_T tmp_data[64];

    // Modified from original JANUS 3.0.5 code for compatibility with Matlab
    // Coder and extensible time/frequency scaling SWiG
    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Authors: Ricardo Martins, Luigi Elia D'Amaro                           |
    // +------------------------------------------------------------------------+
    //
    //  PACKET_PACK Pack JANUS packet.
    //
    //  Packs one JANUS packet, created using PACKET_NEW, into a sequence of
    //  64 bits and computes it's CRC.
    //
    //  Inputs:
    //    pkt        Packet structure created with PACKET_NEW.
    //
    //  Outputs:
    //    bits       Packet bits.
    //    crg_bits   Optional cargo bits.
    //    pkt        Packet structure with computed CRC.
    //
    //  See also PACKET_NEW, PACKET_UNPACK.
    //
    // 'packet_pack:46' defaults = defaultFun;
    //  Initialize bitset.
    // 'packet_pack:49' bin = zeros(1, 'uint64');
    //  4 bits: Version Number.
    // 'packet_pack:52' pkt.version = uint64(pkt.version);
    // 'packet_pack:53' bin = bitshift(pkt.version, 60);
    //  1 bit: Mobility Flag.
    // 'packet_pack:56' pkt.mobility = uint64(pkt.mobility ~= 0);
    pkt->mobility = (pkt->mobility != 0ULL);

    // 'packet_pack:57' bin = bitor(bin, bitshift(pkt.mobility, 59));
    //  1 bit: Schedule Flag.
    // 'packet_pack:60' pkt.schedule = uint64(0);
    pkt->schedule = 0ULL;

    //  1 bit: Tx/Rx Flag.
    // 'packet_pack:63' pkt.tx_rx = uint64(pkt.tx_rx ~= 0);
    pkt->tx_rx = (pkt->tx_rx != 0ULL);

    // 'packet_pack:64' bin = bitor(bin, bitshift(pkt.tx_rx, 57));
    //  1 bit: Forwarding Capability.
    // 'packet_pack:67' pkt.forward = uint64(pkt.forward ~= 0);
    pkt->forward = (pkt->forward != 0ULL);

    // 'packet_pack:68' bin = bitor(bin, bitshift(pkt.forward, 56));
    //  8 bits: Class User Identifier.
    // 'packet_pack:71' pkt.class_id = uint64(bitand(pkt.class_id, 2^8 - 1));
    pkt->class_id &= 255ULL;

    // 'packet_pack:72' bin = bitor(bin, bitshift(pkt.class_id, 48));
    // 'packet_pack:73' pkt.class_id_name = user_class_lookup_index(pkt.class_id);
    user_class_lookup_index(pkt->class_id, pkt->class_id_name.data,
      pkt->class_id_name.size);

    //  6 bits: Application Type.
    // 'packet_pack:76' pkt.app_type = uint64(bitand(pkt.app_type, 2^6 - 1));
    pkt->app_type &= 63ULL;

    // 'packet_pack:77' bin = bitor(bin, bitshift(pkt.app_type, 42));
    bin = pkt->version << 60 | pkt->mobility << 59 | pkt->tx_rx << 57 |
      pkt->forward << 56 | pkt->class_id << 48 | pkt->app_type << 42;

    // 'packet_pack:79' tx_interval = 0;
    tx_interval = 0.0;

    // 'packet_pack:80' if (isfield(pkt, 'reserv_time') && pkt.reserv_time > 0)
    if (pkt->reserv_time > 0.0) {
      // 'packet_pack:81' pkt.reserv_repeat = uint64(0);
      pkt->reserv_repeat = 0ULL;

      // 'packet_pack:82' tx_interval = pkt.reserv_time;
      tx_interval = pkt->reserv_time;
    } else if (pkt->repeat_int > 0.0) {
      // 'packet_pack:83' elseif (isfield(pkt, 'repeat_int') && pkt.repeat_int > 0)
      // 'packet_pack:84' pkt.reserv_repeat = uint64(1);
      pkt->reserv_repeat = 1ULL;

      // 'packet_pack:85' tx_interval = pkt.repeat_int;
      tx_interval = pkt->repeat_int;
    }

    // 'packet_pack:88' if (tx_interval ~= 0)
    if (tx_interval != 0.0) {
      real_T evalue2;
      real_T interval_tollerance_tmp;
      int32_T c_index;

      // 'packet_pack:89' [result, evalue1, evalue2, index] = packet_tx_interval_lookup_value(tx_interval, pkt.reserv_repeat);
      // Modified from original JANUS 3.0.5 code for compatibility with Matlab
      // Coder and extensible time/frequency scaling SWiG
      // +------------------------------------------------------------------------+
      // | JANUS is a simple, robust, open standard signalling method for         |
      // | underwater communications. See <http://www.januswiki.org> for details. |
      // +------------------------------------------------------------------------+
      // | Example software implementations provided by STO CMRE are subject to   |
      // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
      // | Experimentation (CMRE)                                                 |
      // |                                                                        |
      // | This is free software: you can redistribute it and/or modify it        |
      // | under the terms of the GNU General Public License version 3 as         |
      // | published by the Free Software Foundation.                             |
      // |                                                                        |
      // | This program is distributed in the hope that it will be useful, but    |
      // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
      // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
      // | more details.                                                          |
      // |                                                                        |
      // | You should have received a copy of the GNU General Public License      |
      // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
      // +------------------------------------------------------------------------+
      // | Author: Luigi Elia D'Amaro                                             |
      // +------------------------------------------------------------------------+
      //
      //  PACKET_TX_INTERVAL_LOOKUP_VALUE(dvalue, res_rep)
      //
      //  Lookup the index associated with a given transmit reservation time or
      //  repeat interval (in seconds) in the reservation time table or in the
      //  repeat interval table, according to reservation or repeat flag.
      //  If the desired value or an approximation (within a tollerance) is
      //  available in the lookup table, then the found value and its table
      //  index are returned.
      //  If the desired value is not available in the lookup table, the two
      //  nearest values (one lower and one higher than the desired value)
      //  and the index of the lower one are returned.
      //  If desired value is too low, lowest table value and an invalid index
      //  are returned.
      //  If desired value is too high, highest table value and an invalid
      //  index are returned.
      //
      //  Inputs:
      //    dvalue  Desired value.
      //    res_rep Reservation or repeat flag.
      //
      //  Outputs:
      //    result  Result of lookup. It can be:
      //            0, if dvalue is found;
      //            1, if an approximation of dvalue is found;
      //            2, if dvalue is between two values (both are returned);
      //            3, if dvalue is too low (invalid index is returned);
      //            4, if dvalue is too high (invalid index is returned).
      //    evalue1 Found table value, if result is 0 or 1.
      //            Highest table value lower than dvalue, if result is 2.
      //            Lowest table value, if result is 3.
      //            Highest table value, if result is 4.
      //    evalue2 Lowest table value higher than dvalue, if result is 2,
      //            0.0 otherwise.
      //    index   Index of found table value, if result is 0 or 1.
      //            Index of the evalue1, if result is 2 (index+1 for evalue2).
      //            Invalid index (-1), if result is 3 or 4.
      //
      //  See also PACKET_TX_INTERVAL_LOOKUP_VALUE,
      //  PACKET_TX_RESERVATION_TIME_TABLE, PACKET_TX_REPEAT_INTERVAL_TABLE.
      //
      //  Exact time.
      // 'packet_tx_interval_lookup_value:70' JANUS_PACKET_EXACT_TIME = 0;
      //  Approximated value, within 5% tollerance of the interval step.
      // 'packet_tx_interval_lookup_value:72' JANUS_PACKET_APPROXIMATED_TIME = 1;
      //  Between two values.
      // 'packet_tx_interval_lookup_value:74' JANUS_PACKET_BETWEEN_TWO_VALUES = 2;
      //  Below the minimum value.
      // 'packet_tx_interval_lookup_value:76' JANUS_PACKET_ERROR_MIN = 3;
      //  Beyond the maximum value.
      // 'packet_tx_interval_lookup_value:78' JANUS_PACKET_ERROR_MAX = 4;
      // 'packet_tx_interval_lookup_value:80' if (res_rep == 0)
      if (pkt->reserv_repeat == 0ULL) {
        // 'packet_tx_interval_lookup_value:81' table = packet_tx_reservation_time_table;
        std::copy(&dv[0], &dv[128], &table[0]);
      } else {
        // 'packet_tx_interval_lookup_value:82' else
        // 'packet_tx_interval_lookup_value:83' table = packet_tx_repeat_interval_table;
        std::copy(&dv1[0], &dv1[128], &table[0]);
      }

      // 'packet_tx_interval_lookup_value:86' evalue2 = 0.0;
      evalue2 = 0.0;

      // 'packet_tx_interval_lookup_value:87' index = -1;
      c_index = 0;

      // 'packet_tx_interval_lookup_value:89' if (dvalue < table(1))
      if (tx_interval < table[0]) {
        // 'packet_tx_interval_lookup_value:90' evalue1 = table(1);
        interval_tollerance_tmp = table[0];

        // 'packet_tx_interval_lookup_value:91' result = JANUS_PACKET_ERROR_MIN;
        idx = 3;

        // 'packet_tx_interval_lookup_value:95' if (dvalue > table(end))
      } else if (tx_interval > table[127]) {
        // 'packet_tx_interval_lookup_value:96' evalue1 = table(end);
        interval_tollerance_tmp = table[127];

        // 'packet_tx_interval_lookup_value:97' result = JANUS_PACKET_ERROR_MAX;
        idx = 4;
      } else {
        int32_T ii;
        boolean_T exitg1;

        // 'packet_tx_interval_lookup_value:101' indexF = find(dvalue <= table, 1, 'first');
        idx = 0;
        ii_size = 1;
        ii = 0;
        exitg1 = false;
        while ((!exitg1) && (ii < 128)) {
          if (tx_interval <= table[ii]) {
            idx = 1;
            ii_data = static_cast<uint8_T>(ii + 1);
            exitg1 = true;
          } else {
            ii++;
          }
        }

        if (idx == 0) {
          ii_size = 0;
        }

        // 'packet_tx_interval_lookup_value:102' if isempty(indexF)
        if (ii_size != 0) {
          // 'packet_tx_interval_lookup_value:104' else
          // 'packet_tx_interval_lookup_value:105' index = indexF(1);
          c_index = ii_data - 1;
        } else {
          // 'packet_tx_interval_lookup_value:103' index =1;
        }

        // 'packet_tx_interval_lookup_value:108' if (dvalue == table(index))
        if (tx_interval == table[c_index]) {
          // 'packet_tx_interval_lookup_value:109' evalue1 = table(index);
          interval_tollerance_tmp = table[c_index];

          // 'packet_tx_interval_lookup_value:110' index = index - 1;
          c_index++;

          // 'packet_tx_interval_lookup_value:111' result = JANUS_PACKET_EXACT_TIME;
          idx = 0;
        } else {
          real_T interval_tollerance;

          //  Accepting if in 5% tollerance of the interval step.
          // 'packet_tx_interval_lookup_value:116' interval_tollerance = ((table(index) - table(index - 1)) * 0.05);
          interval_tollerance_tmp = table[c_index - 1];
          interval_tollerance = (table[c_index] - interval_tollerance_tmp) *
            0.05;

          // 'packet_tx_interval_lookup_value:118' if ((table(index) - dvalue) < interval_tollerance)
          if (table[c_index] - tx_interval < interval_tollerance) {
            // 'packet_tx_interval_lookup_value:119' evalue1 = table(index);
            interval_tollerance_tmp = table[c_index];

            // 'packet_tx_interval_lookup_value:120' index = index - 1;
            c_index++;

            // 'packet_tx_interval_lookup_value:121' result = JANUS_PACKET_APPROXIMATED_TIME;
            idx = 1;

            // 'packet_tx_interval_lookup_value:125' if ((dvalue - table(index - 1)) < interval_tollerance)
          } else if (tx_interval - interval_tollerance_tmp < interval_tollerance)
          {
            // 'packet_tx_interval_lookup_value:126' evalue1 = table(index - 1);
            // 'packet_tx_interval_lookup_value:127' index = index - 2;
            // 'packet_tx_interval_lookup_value:128' result = JANUS_PACKET_APPROXIMATED_TIME;
            idx = 1;
          } else {
            // 'packet_tx_interval_lookup_value:132' evalue1 = table(index - 1);
            // 'packet_tx_interval_lookup_value:133' evalue2 = table(index);
            evalue2 = table[c_index];

            // 'packet_tx_interval_lookup_value:134' index = index - 2;
            // 'packet_tx_interval_lookup_value:135' result = JANUS_PACKET_BETWEEN_TWO_VALUES;
            idx = 2;
          }
        }
      }

      // 'packet_pack:90' index = uint64(index);
      ii_size = c_index - 1;
      if (c_index - 1 < 0) {
        ii_size = 0;
      }

      b_index = static_cast<uint64_T>(ii_size);

      // 'packet_pack:91' if (result == 0 || result == 1)
      if ((idx == 0) || (idx == 1)) {
        // 'packet_pack:92' pkt.schedule = uint64(1);
        pkt->schedule = 1ULL;

        // 'packet_pack:93' tx_interval = evalue1;
        tx_interval = interval_tollerance_tmp;
      } else if (idx == 2) {
        // 'packet_pack:94' elseif (result == 2)
        // 'packet_pack:95' pkt.schedule = uint64(1);
        pkt->schedule = 1ULL;

        // 'packet_pack:96' if (pkt.reserv_repeat == 0)
        if (pkt->reserv_repeat == 0ULL) {
          uint32_T qY;

          // 'packet_pack:97' index = uint64(uint32(index) + 1);
          b_index = static_cast<uint64_T>(ii_size);
          if (static_cast<uint64_T>(ii_size) > 4294967295ULL) {
            b_index = 4294967295ULL;
          }

          qY = static_cast<uint32_T>(b_index) + 1U;
          if (static_cast<uint32_T>(b_index) + 1U < static_cast<uint32_T>
              (b_index)) {
            qY = MAX_uint32_T;
          }

          b_index = qY;

          // 'packet_pack:98' tx_interval = evalue2;
          tx_interval = evalue2;
        } else {
          // 'packet_pack:99' else
          // 'packet_pack:100' tx_interval = evalue1;
          tx_interval = interval_tollerance_tmp;
        }
      } else {
        // 'packet_pack:102' else
        // 'packet_pack:103' error('janus:packet_pack:inv_interval', 'Invalid reservation time or repeat interval.')
      }

      // 'packet_pack:106' if (pkt.reserv_repeat == 0)
      if (pkt->reserv_repeat == 0ULL) {
        // 'packet_pack:107' pkt.reserv_time = tx_interval;
        pkt->reserv_time = tx_interval;
      } else {
        // 'packet_pack:108' else
        // 'packet_pack:109' pkt.repeat_int = tx_interval;
        pkt->repeat_int = tx_interval;
      }

      //  1 bit: Schedule Flag.
      // 'packet_pack:113' bin = bitor(bin, bitshift(pkt.schedule, 58));
      //  1 bit: Reservation/Repeat Flag.
      // 'packet_pack:115' bin = bitor(bin, bitshift(pkt.reserv_repeat, 41));
      //  7 bits: Reservation Time or Repeat Interval Table Index.
      // 'packet_pack:117' bin = bitor(bin, bitshift(index, 34));
      bin = bin | pkt->schedule << 58 | pkt->reserv_repeat << 41 | b_index << 34;
    }

    // 'packet_pack:120' if (pkt.schedule == 0)
    // 'packet_pack:126' plugin = sprintf('plugin_%03ud_%02ud', pkt.class_id, pkt.app_type);
    idx = (int32_T)snprintf(nullptr, 0, "plugin_%03llud_%02llud", pkt->class_id,
      pkt->app_type) + 1;
    str.set_size(1, idx);
    snprintf(&str[0], (size_t)idx, "plugin_%03llud_%02llud", pkt->class_id,
             pkt->app_type);

    // 'packet_pack:128' cargo_size = 0;
    // 'packet_pack:129' if (pkt.cargo_size > 0)
    // 'packet_pack:136' else
    // 'packet_pack:137' if (isfield(pkt, 'packet_app_fields'))
    //   Set application data.
    // 'packet_pack:155' if (pkt.app_data == intmax('uint64'))
    if (pkt->app_data.data[0] == MAX_uint64_T) {
      //  app_data not provided
      // 'packet_pack:157' pkt.app_data = uint64(0);
      pkt->app_data.size[0] = 1;
      pkt->app_data.size[1] = 1;
      pkt->app_data.data[0] = 0ULL;

      // 'packet_pack:159' if (isfield(pkt, 'packet_app_fields') || (cargo_size > 0))
    }

    // 'packet_pack:182' if (pkt.app_data > 2^app_data_len)
    b_index = bin | pkt->app_data.data[0] << 8;

    //  8 bits: CRC.
    // 'packet_pack:190' u8 = fliplr(typecast(bin, 'uint8'));
    pkt->bytes.size[0] = 1;
    pkt->bytes.size[1] = 8;
    std::memcpy((void *)&pkt->bytes.data[0], (void *)&b_index, (uint32_T)
                ((size_t)8 * sizeof(uint8_T)));
    ii_data = pkt->bytes.data[0];
    pkt->bytes.data[0] = pkt->bytes.data[7];
    pkt->bytes.data[7] = ii_data;
    ii_data = pkt->bytes.data[1];
    pkt->bytes.data[1] = pkt->bytes.data[6];
    pkt->bytes.data[6] = ii_data;
    ii_data = pkt->bytes.data[2];
    pkt->bytes.data[2] = pkt->bytes.data[5];
    pkt->bytes.data[5] = ii_data;
    ii_data = pkt->bytes.data[3];
    pkt->bytes.data[3] = pkt->bytes.data[4];
    pkt->bytes.data[4] = ii_data;

    // 'packet_pack:191' u8(8) = crc(u8(1 : 7), defaults.CRC_POLY);
    // Modified from original JANUS 3.0.5 code for compatibility with Matlab
    // Coder and extensible time/frequency scaling SWiG
    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Author: Ricardo Martins                                                |
    // +------------------------------------------------------------------------+
    //
    //  CRC Compute the CRC8 of a byte sequence.
    //
    //  Inputs:
    //    data  Byte sequence.
    //    poly  Polynomial.
    //    crc   Initial CRC (0 if not given).
    //
    //   Outputs:
    //    crc   CRC8 of input byte sequence.
    //
    // 'crc:39' if (nargin < 3)
    // 'crc:40' c = uint8(0);
    ii_data = 0U;

    // 'crc:43' for i = 1 : length(data)
    for (idx = 0; idx < 7; idx++) {
      // 'crc:44' c = bitxor(c, data(i));
      ii_data = static_cast<uint8_T>(ii_data ^ pkt->bytes.data[idx]);

      // 'crc:45' for j = 0 : 7
      for (ii_size = 0; ii_size < 8; ii_size++) {
        // 'crc:46' if (bitand(c, 128))
        if ((ii_data & 128) != 0) {
          // 'crc:47' c = bitshift(c, 1);
          // 'crc:48' c = bitxor(c, poly);
          ii_data = static_cast<uint8_T>(static_cast<uint8_T>(ii_data << 1) ^ 7);
        } else {
          // 'crc:49' else
          // 'crc:50' c = bitshift(c, 1);
          ii_data = static_cast<uint8_T>(ii_data << 1);
        }
      }

      // 'crc:54' c = bitand(c, 255);
    }

    int32_T tmp_size[2];
    pkt->bytes.data[7] = ii_data;

    // 'packet_pack:192' pkt.crc = u8(8);
    pkt->crc = pkt->bytes.data[7];

    // 'packet_pack:194' pkt.crc_validity = true;
    pkt->crc_validity = true;

    //  Convert to bits.
    // 'packet_pack:197' bits = bytes2bits(u8);
    bytes2bits(pkt->bytes.data, pkt->bytes.size, tmp_data, tmp_size);
    bits_size[0] = 1;
    bits_size[1] = tmp_size[1];
    std::copy(&tmp_data[0], &tmp_data[64], &bits_data[0]);

    // 'packet_pack:198' crg_bits = bytes2bits(pkt.cargo);
    crg_bits_size[0] = 1;
    bytes2bits(nullptr, pkt->cargo.size, tmp_data, tmp_size);
    crg_bits_size[1] = tmp_size[1];

    //  Packet bytes.
    // 'packet_pack:201' pkt.bytes = u8;
  }

  static real_T rt_remd_snf(real_T u0, real_T u1)
  {
    real_T y;
    if (std::isnan(u0) || std::isnan(u1) || std::isinf(u0)) {
      y = rtNaN;
    } else if (std::isinf(u1)) {
      y = u0;
    } else if ((u1 != 0.0) && (u1 != std::trunc(u1))) {
      real_T q;
      q = std::abs(u0 / u1);
      if (!(std::abs(q - std::floor(q + 0.5)) > DBL_EPSILON * q)) {
        y = 0.0 * u0;
      } else {
        y = std::fmod(u0, u1);
      }
    } else {
      y = std::fmod(u0, u1);
    }

    return y;
  }

  //
  // function [bband, pkt, state] = tx(pset, bband_fs, params)
  static void tx(SWiG_tx_class *aInstancePtr, const char_T pset_name[27], real_T
                 pset_cfreq, real_T pset_chip_frq, real_T pset_chip_dur, real_T
                 pset_bwidth, real_T bband_fs, const struct0_T *params, ::coder::
                 array<creal_T, 1U> &bband, struct1_T *pkt, struct2_T *state)
  {
    ::coder::array<creal_T, 2U> b_bband;
    ::coder::array<creal_T, 1U> b_dum;
    ::coder::array<creal_T, 1U> wut;
    ::coder::array<cuint8_T, 1U> wut_gap;
    ::coder::array<real_T, 2U> chip_time;
    ::coder::array<real_T, 2U> x;
    ::coder::array<real_T, 1U> dum;
    ::coder::array<real_T, 1U> win;
    ::coder::array<uint32_T, 2U> p;
    ::coder::array<boolean_T, 2U> isp;
    real_T mghat_data[528];
    real_T mu_data[528];
    real_T x_data[528];
    real_T slots_data[352];
    real_T coded_data[176];
    real_T pkt_coded_data[144];
    real_T tmp_data[144];
    real_T b_pkt_bits_data[72];
    real_T b;
    real_T bband_ts;
    real_T count1;
    real_T temp;
    int32_T crg_bits_size[2];
    int32_T pkt_bits_size[2];
    int32_T done;
    int32_T i;
    int32_T i1;
    int32_T k;
    int32_T nd2;
    uint32_T testp;
    int16_T i_data[528];
    int16_T in_data[528];
    int8_T b_tmp_data[176];
    uint8_T y_data[144];
    boolean_T pkt_bits_data[64];

    // Modified from original JANUS 3.0.5 code for compatibility with Matlab
    // Coder and extensible time/frequency scaling SWiG
    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Authors: Ricardo Martins, Unknown                                      |
    // +------------------------------------------------------------------------+
    //
    //  TX Generate a JANUS waveform.
    //
    //  Inputs:
    //     pset       Parameter set structure, created by PSET_NEW or PSET_LOAD.
    //     fs         Sampling frequency (Hz).
    //     params     Optional parameters.
    //
    //  Outputs:
    //     bband      JANUS waveform.
    //     pkt        Encoded packet structure.
    //     state      Structure with info from the decoder.
    //
    //  See also parameters, stream_new, pset_new, pset_load.
    //
    // 'tx:46' defaults = defaultFun;
    // 'tx:49' if (nargin < 3)
    // 'tx:53' verbose = params.verbose;
    aInstancePtr->verbose = params->verbose;

    //     %% Initialize output variables.
    //      state = {};
    // 'tx:57' state.pset_id = pset.id;
    state->pset_id = 1.0;

    // 'tx:58' state.pset_name = pset.name;
    for (i = 0; i < 27; i++) {
      state->pset_name[i] = pset_name[i];
    }

    // 'tx:59' state.cfreq = pset.cfreq;
    state->cfreq = pset_cfreq;

    // 'tx:60' state.bwidth = pset.bwidth;
    state->bwidth = pset_bwidth;

    // 'tx:61' state.chip_frq = pset.chip_frq;
    state->chip_frq = pset_chip_frq;

    // 'tx:62' state.chip_dur = pset.chip_dur;
    state->chip_dur = pset_chip_dur;

    // 'tx:63' state.prim_q = pset.prim_q;
    state->prim_q = 13.0;

    // 'tx:64' state.prim_a = pset.prim_a;
    state->prim_a = 2.0;

    // 'tx:65' state.nblock = pset.nblock;
    state->nblock = 12.0;

    // 'tx:67' bband_ts = 1 / bband_fs;
    bband_ts = 1.0 / bband_fs;

    // 'tx:69' trellis = poly2trellis(defaults.CONV_ENC_CLEN, defaults.CONV_ENC_CGEN);
    //  Vector with "chip time" values.
    // 'tx:72' chip_time = 0 : bband_ts : round(pset.chip_dur / bband_ts) * bband_ts;
    b = std::round(pset_chip_dur / bband_ts) * bband_ts;
    if (std::isnan(bband_ts) || std::isnan(b)) {
      chip_time.set_size(1, 1);
      chip_time[0] = rtNaN;
    } else if ((bband_ts == 0.0) || ((b < 0.0) && (bband_ts > 0.0))) {
      chip_time.set_size(1, 0);
    } else if (std::isinf(b) && std::isinf(bband_ts)) {
      chip_time.set_size(1, 1);
      chip_time[0] = rtNaN;
    } else if (std::isinf(bband_ts)) {
      chip_time.set_size(1, 1);
      chip_time[0] = 0.0;
    } else if (std::floor(bband_ts) == bband_ts) {
      nd2 = static_cast<int32_T>(b / bband_ts);
      chip_time.set_size(1, nd2 + 1);
      for (i = 0; i <= nd2; i++) {
        chip_time[i] = bband_ts * static_cast<real_T>(i);
      }
    } else {
      coder::eml_float_colon(bband_ts, b, chip_time);
    }

    // 'tx:73' chip_time = chip_time(:);
    //  Number of samples in a chip.
    // 'tx:76' chip_nsample = length(chip_time);
    //  Optional: Wake-up tones.
    // 'tx:79' if (params.wut)
    if (params->wut != 0.0) {
      // 'tx:80' wut = wake_up_tones(bband_ts, chip_nsample * defaults.NCHIP_WUT, pset.bwidth);
      wake_up_tones(bband_ts, static_cast<real_T>(chip_time.size(1)) * 4.0,
                    pset_bwidth, wut);

      // 'tx:81' wut_gap = zeros(fix(defaults.WUT_GAP * bband_fs), 1);
      nd2 = static_cast<int32_T>(std::trunc(0.4 * bband_fs));
      wut_gap.set_size(nd2);
      for (i = 0; i < nd2; i++) {
        wut_gap[i].re = 0U;
        wut_gap[i].im = 0U;
      }
    } else {
      // 'tx:82' else
      // 'tx:83' wut = complex(zeros(0,1));
      wut.set_size(0);

      // 'tx:84' wut_gap = complex(zeros(0,1));
      wut_gap.set_size(0);
    }

    //  32-chip acquisition sequence.
    // 'tx:88' a32c = params.c32_sequence;
    // 'tx:89' a32c_nbits = length(a32c);
    //  Encode and interleave packet.
    // 'tx:92' pkt = packet_new(params, pset.id);
    packet_new(params->packet_mobility, params->packet_tx_rx,
               params->packet_forward, params->packet_class_id,
               params->packet_app_type, params->packet_reserv_time,
               params->packet_repeat_int, params->packet_app_data, pkt);

    // 'tx:93' [pkt_bits, crg_bits, pkt] = packet_pack(pkt);
    packet_pack(pkt, pkt_bits_data, pkt_bits_size, crg_bits_size);

    // 'tx:94' pkt_nbits = length(pkt_bits);
    // 'tx:95' pkt_nchip = defaults.ALPHABET_SIZE * (pkt_nbits + defaults.CONV_ENC_MEM);
    // 'tx:96' pkt_conv = convenc([pkt_bits, zeros(1, defaults.CONV_ENC_MEM)], trellis);
    // 'tx:97' [pkt_coded, pkt_q] = interleave(pkt_conv);
    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Author: Dale Green                                                     |
    // +------------------------------------------------------------------------+
    //
    //  INTERLEAVE Block interleaver based on a prime number algorithm.
    //
    //  Inputs:
    //    data      Byte sequence.
    //
    //  Outputs:
    //    ileaved   Interleaved byte sequence.
    //    prime     Prime number used.
    //
    //  See also interleaver_prime, deinterleaver.
    //
    // 'interleave:37' data = data(:)';
    // 'interleave:38' data_len = length(data);
    // 'interleave:39' prime = interleaver_prime(data_len);
    // Modified from original JANUS 3.0.5 code for compatibility with Matlab
    // Coder and extensible time/frequency scaling SWiG
    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Author: Dale Green                                                     |
    // +------------------------------------------------------------------------+
    //
    //  INTERLEAVER_PRIME Find a prime number.
    //
    //  This routine is set to find the lowest prime number, above a user-set
    //  minimum 'k', which is not a factor 'data_len'.
    //
    //  Inputs:
    //    data_len  Length of the interleaved sequence.
    //    k         Minimum.
    //
    //  Outputs:
    //    prime     Prime number.
    //
    //  See also interleaver, deinterleaver.
    //
    // 'interleaver_prime:43' if (nargin < 2)
    // 'interleaver_prime:44' k = 5;
    bband_ts = 5.0;

    // 'interleaver_prime:47' done = 0;
    done = 0;

    // initialize for coder
    // 'interleaver_prime:50' testp = 2;
    testp = 2U;

    // 'interleaver_prime:52' while done == 0
    while (done == 0) {
      uint32_T b_k;
      uint32_T nleft;
      uint32_T np;
      uint32_T u;

      // 'interleaver_prime:53' testp = max(primes(k));
      if (bband_ts < 4.294967296E+9) {
        u = static_cast<uint32_T>(bband_ts);
      } else {
        u = MAX_uint32_T;
      }

      np = u >> 1;
      if (u - (np << 1) > 0U) {
        np++;
      }

      isp.set_size(1, static_cast<int32_T>(np));
      nd2 = static_cast<int32_T>(np);
      for (i = 0; i < nd2; i++) {
        isp[i] = true;
      }

      testp = coder::intsqrt(u);
      b_k = 3U;
      nleft = np;
      while (b_k <= testp) {
        if (isp[static_cast<int32_T>((b_k + 1U) >> 1) - 1]) {
          u = (b_k * b_k + 1U) >> 1;
          for (uint32_T j{u}; j <= np; j += b_k) {
            if (isp[static_cast<int32_T>(j) - 1]) {
              isp[static_cast<int32_T>(j) - 1] = false;
              nleft--;
            }
          }
        }

        b_k += 2U;
      }

      p.set_size(1, static_cast<int32_T>(nleft));
      testp = 1U;
      p[0] = 2U;
      for (b_k = 2U; b_k <= np; b_k++) {
        if (isp[static_cast<int32_T>(b_k) - 1] && (testp < 203280221U)) {
          testp++;
          p[static_cast<int32_T>(testp) - 1] = (b_k << 1) - 1U;
        }
      }

      nd2 = p.size(1);
      if (p.size(1) <= 2) {
        if (p.size(1) == 1) {
          testp = p[0];
        } else if (p[0] < p[p.size(1) - 1]) {
          testp = p[p.size(1) - 1];
        } else {
          testp = p[0];
        }
      } else {
        testp = p[0];
        for (k = 2; k <= nd2; k++) {
          u = p[k - 1];
          if (testp < u) {
            testp = u;
          }
        }
      }

      // 'interleaver_prime:54' if ((data_len / testp < testp) && rem(data_len, testp) ~= 0)
      if ((144.0 / static_cast<real_T>(testp) < testp) && (rt_remd_snf(144.0,
            static_cast<real_T>(testp)) != 0.0)) {
        // 'interleaver_prime:55' done = 1;
        done = 1;
      }

      // 'interleaver_prime:57' k = k + 1;
      bband_ts++;
    }

    // 'interleaver_prime:60' prime = testp;
    // 'interleave:40' y = zeros(1, data_len);
    std::memset(&y_data[0], 0, 144U * sizeof(uint8_T));

    // 'interleave:41' y(1) = 1;
    y_data[0] = 1U;

    // 'interleave:42' for k = 2 : data_len
    for (k = 0; k < 143; k++) {
      // 'interleave:43' y(k) = rem(y(k - 1) + prime - 1, data_len) + 1;
      y_data[k + 1] = static_cast<uint8_T>(static_cast<int32_T>(rt_remd_snf((
        static_cast<real_T>(y_data[k]) + static_cast<real_T>(testp)) - 1.0,
        144.0)) + 1);
    }

    // 'interleave:46' ileaved = data(:,y);
    for (i = 0; i < 64; i++) {
      b_pkt_bits_data[i] = pkt_bits_data[i];
    }

    std::memset(&b_pkt_bits_data[64], 0, 8U * sizeof(real_T));
    coder::convenc(b_pkt_bits_data, tmp_data, pkt_bits_size);
    for (i = 0; i < 144; i++) {
      pkt_coded_data[i] = tmp_data[y_data[i] - 1];
    }

    //  Encode and interleave optional cargo.
    // 'tx:100' crg_nbits = length(crg_bits);
    // 'tx:101' crg_coded = [];
    // 'tx:102' crg_nchip = 0;
    // 'tx:103' if (crg_nbits > 0)
    // 'tx:109' nchip = a32c_nbits + pkt_nchip + crg_nchip;
    // 'tx:110' coded = [a32c, pkt_coded, crg_coded];
    std::copy(&params->c32_sequence[0], &params->c32_sequence[32], &coded_data[0]);
    std::copy(&pkt_coded_data[0], &pkt_coded_data[144], &coded_data[32]);

    //  Generate hopping pattern. Determines the frequency block position over time
    //  "dummy" holds the block number for each symbol First column of slots holds
    //  block id, second holds slot id.
    // 'tx:115' slots = zeros(nchip, 2);
    std::memset(&slots_data[0], 0, 352U * sizeof(real_T));

    // 'tx:116' slots(:, 1) = hop_pattern(pset.prim_a, pset.prim_q, nchip);
    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Authors: Giovanni Zappa, Dale Green                                    |
    // +------------------------------------------------------------------------+
    //
    //  HOP_PATTERN Generate the hopping frequency indices.
    //
    //  This routine provides the hopping frequency indices using Galois
    //  Field arithmetic with the primitive element alpha.
    //
    //  Inputs:
    //    alpha      Primitive element.
    //    block_len  Number of blocks within the available bandwidth.
    //    m          Number of hops required.
    //
    //  Outputs:
    //    slots      Array with the hopping frequency indices.
    //
    //  References:
    //    - Mersereau & Seay, "Multiple Access Frequency Hopping Patterns with
    //      Low Ambiguity", IEEE Trans Aerospace & Elec. Sys, Vol AES-17, No.4,
    //      July 1981
    //
    //  k is the allowed maximum number of hits between patterns.
    // 'hop_pattern:45' k = 3;
    // 'hop_pattern:46' mu = zeros(m, k);
    std::memset(&mu_data[0], 0, 528U * sizeof(real_T));

    // 'hop_pattern:47' mu(:, k - 1) = ceil((1 : m) / ((block_len - 1) * block_len));
    // 'hop_pattern:48' mu(:, k) = floor((0 : m - 1)' ./ (block_len - 1));
    for (k = 0; k < 176; k++) {
      mu_data[k + 176] = std::ceil((static_cast<real_T>(k) + 1.0) / 156.0);
      mu_data[k + 352] = static_cast<int32_T>(std::floor(static_cast<real_T>(k) /
        12.0));
    }

    // 'hop_pattern:49' mghat = mod_pow(alpha, ((0 : k - 1)' * (rem(0 : m - 1, block_len - 1) + 1))', block_len);
    for (nd2 = 0; nd2 < 176; nd2++) {
      b_tmp_data[nd2] = static_cast<int8_T>(static_cast<int32_T>(rt_remd_snf(
        static_cast<real_T>(nd2), 12.0)) + 1);
    }

    for (i = 0; i < 3; i++) {
      for (i1 = 0; i1 < 176; i1++) {
        x_data[i1 + 176 * i] = i * b_tmp_data[i1];
      }
    }

    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Author: Giovanni Zappa.                                                |
    // +------------------------------------------------------------------------+
    //
    //  MOD_POW Compute modular exponentiation: b^e (mod n).
    //
    //  Inputs:
    //    b          Base.
    //    e          Exponent (vector or matrix).
    //    m          Modulus.
    //
    //  Outputs:
    //    p          b^e (mod n).
    //
    //  References:
    //    - http://en.wikipedia.org/wiki/Modular_exponentiation
    //
    // 'mod_pow:39' p = ones(size(e));
    for (i = 0; i < 528; i++) {
      mghat_data[i] = 1.0;
    }

    // 'mod_pow:40' temp = b;
    temp = 2.0;

    // 'mod_pow:41' while max(e(:)) > 0
    while (coder::internal::maximum(x_data) > 0.0) {
      real_T c_tmp_data[528];
      boolean_T b_x_data[528];
      boolean_T exitg1;

      // 'mod_pow:42' [in] = find(mod(e(:), 2) == 1);
      for (i = 0; i < 528; i++) {
        nd2 = static_cast<int32_T>(x_data[i]);
        if (nd2 == 0) {
          bband_ts = 0.0;
        } else {
          bband_ts = std::fmod(static_cast<real_T>(nd2), 2.0);
        }

        b_x_data[i] = (bband_ts == 1.0);
      }

      nd2 = 0;
      done = 0;
      exitg1 = false;
      while ((!exitg1) && (done <= 527)) {
        if (b_x_data[done]) {
          nd2++;
          i_data[nd2 - 1] = static_cast<int16_T>(done + 1);
          if (nd2 >= 528) {
            exitg1 = true;
          } else {
            done++;
          }
        } else {
          done++;
        }
      }

      if (nd2 < 1) {
        nd2 = 0;
      }

      if (nd2 - 1 >= 0) {
        std::copy(&i_data[0], &i_data[nd2], &in_data[0]);
      }

      // 'mod_pow:43' p(in) = mod(p(in) * temp, n);
      for (i = 0; i < nd2; i++) {
        b = mghat_data[in_data[i] - 1] * temp;
        if (std::isnan(b)) {
          bband_ts = rtNaN;
        } else if (b == 0.0) {
          bband_ts = 0.0;
        } else {
          bband_ts = std::fmod(b, 13.0);
          if (bband_ts == 0.0) {
            bband_ts = 0.0;
          } else if (b < 0.0) {
            bband_ts += 13.0;
          }
        }

        c_tmp_data[i] = bband_ts;
      }

      for (i = 0; i < nd2; i++) {
        mghat_data[in_data[i] - 1] = c_tmp_data[i];
      }

      // 'mod_pow:44' temp = mod(temp .^ 2, n);
      bband_ts = temp * temp;
      if (std::isnan(bband_ts)) {
        temp = rtNaN;
      } else if (bband_ts == 0.0) {
        temp = 0.0;
      } else {
        temp = std::fmod(bband_ts, 13.0);
        if ((!(temp == 0.0)) && (bband_ts < 0.0)) {
          temp += 13.0;
        }
      }

      // 'mod_pow:45' e = floor(e / 2);
      for (k = 0; k < 528; k++) {
        x_data[k] = std::floor(x_data[k] / 2.0);
      }
    }

    // 'hop_pattern:50' slots = rem(mu .* mghat * ones(1, k)', block_len);
    for (i = 0; i < 528; i++) {
      mu_data[i] *= mghat_data[i];
    }

    // 'tx:117' slots(:, 2) = coded' + 1;
    for (nd2 = 0; nd2 < 176; nd2++) {
      slots_data[nd2] = rt_remd_snf((mu_data[nd2] + mu_data[nd2 + 176]) +
        mu_data[nd2 + 352], 13.0);
      slots_data[nd2 + 176] = coded_data[nd2] + 1.0;
    }

    //  Build the FH-BFSK chip sequence.
    // 'tx:120' dum = hamming(fix(chip_nsample / 8));
    coder::hamming(std::trunc(static_cast<real_T>(chip_time.size(1)) / 8.0), dum);

    // 'tx:121' dum = dum(1 : fix(chip_nsample / 16));
    i = static_cast<int32_T>(std::trunc(static_cast<real_T>(chip_time.size(1)) /
      16.0));
    if (i < 1) {
      i1 = 0;
      i = 0;
    } else {
      i1 = i;
    }

    dum.set_size(i);

    // 'tx:122' ld = length(dum);
    // 'tx:123' win = [dum' ones(1, chip_nsample - 2 * ld) fliplr(dum')]';
    x.set_size(1, dum.size(0));
    nd2 = dum.size(0);
    for (i = 0; i < nd2; i++) {
      x[i] = dum[i];
    }

    nd2 = i1 >> 1;
    for (k = 0; k < nd2; k++) {
      done = (i1 - k) - 1;
      bband_ts = x[k];
      x[k] = x[done];
      x[done] = bband_ts;
    }

    done = chip_time.size(1) - (i1 << 1);
    win.set_size((dum.size(0) + done) + x.size(1));
    nd2 = dum.size(0);
    for (i = 0; i < nd2; i++) {
      win[i] = dum[i];
    }

    for (i = 0; i < done; i++) {
      win[i + i1] = 1.0;
    }

    nd2 = x.size(1);
    for (i = 0; i < nd2; i++) {
      win[(i + i1) + done] = x[i];
    }

    // 'tx:125' fh = (fix(defaults.CHIP_NFRQ / 2) * defaults.ALPHABET_SIZE + 1) * pset.chip_frq;
    temp = 13.0 * pset_chip_frq;

    // 'tx:126' bband = complex(zeros((ceil(nchip  * pset.chip_dur * bband_fs + 1)), 1));
    nd2 = static_cast<int32_T>(std::ceil(176.0 * pset_chip_dur * bband_fs + 1.0));
    bband.set_size(nd2);
    for (i = 0; i < nd2; i++) {
      bband[i].re = 0.0;
      bband[i].im = 0.0;
    }

    // 'tx:128' count1 = 1;
    count1 = 1.0;

    // 'tx:129' for kt = 1 : nchip
    for (int32_T kt{0}; kt < 176; kt++) {
      real_T count2;
      int32_T i2;

      // 'tx:130' lchip = round(kt * pset.chip_dur * bband_fs) - round((kt - 1) * pset.chip_dur * bband_fs);
      bband_ts = std::round((static_cast<real_T>(kt) + 1.0) * pset_chip_dur *
                            bband_fs) - std::round(((static_cast<real_T>(kt) +
        1.0) - 1.0) * pset_chip_dur * bband_fs);

      // 'tx:131' count2 = count1 + lchip - 1;
      count2 = (count1 + bband_ts) - 1.0;

      //  Bottom edge of a block.
      // 'tx:133' fblock = - fh + slots(kt, 1) * defaults.ALPHABET_SIZE * pset.chip_frq;
      //  Frequency of a slot in the block.
      // 'tx:135' f0 = fblock + (slots(kt, 2) - 1) * pset.chip_frq;
      //  Waveform of the single chip.
      // 'tx:137' a = win(1 : lchip) .* exp(1i * 2 * pi * f0 * chip_time(1 : lchip));
      if (bband_ts < 1.0) {
        i = 0;
        nd2 = 0;
      } else {
        i = static_cast<int32_T>(bband_ts);
        nd2 = static_cast<int32_T>(bband_ts);
      }

      bband_ts = (-temp + slots_data[kt] * 2.0 * pset_chip_frq) + (slots_data[kt
        + 176] - 1.0) * pset_chip_frq;
      b = bband_ts * 0.0;
      bband_ts *= 6.2831853071795862;
      b_dum.set_size(nd2);
      for (i1 = 0; i1 < nd2; i1++) {
        b_dum[i1].re = chip_time[i1] * b;
        b_dum[i1].im = chip_time[i1] * bband_ts;
      }

      nd2 = b_dum.size(0);
      for (k = 0; k < nd2; k++) {
        if (b_dum[k].im == 0.0) {
          b_dum[k].re = std::exp(b_dum[k].re);
          b_dum[k].im = 0.0;
        } else if (std::isinf(b_dum[k].im) && std::isinf(b_dum[k].re) &&
                   (b_dum[k].re < 0.0)) {
          b_dum[k].re = 0.0;
          b_dum[k].im = 0.0;
        } else {
          bband_ts = std::exp(b_dum[k].re / 2.0);
          b_dum[k].re = bband_ts * (bband_ts * std::cos(b_dum[k].im));
          b_dum[k].im = bband_ts * (bband_ts * std::sin(b_dum[k].im));
        }
      }

      //  Append each chip to form the digital signal.
      // 'tx:139' bband(count1 : count2) = bband(count1 : count2) + a;
      if (count1 > count2) {
        i1 = 0;
        k = 0;
        i2 = 0;
        nd2 = 0;
      } else {
        i1 = static_cast<int32_T>(count1) - 1;
        k = static_cast<int32_T>(count2);
        i2 = static_cast<int32_T>(count1) - 1;
        nd2 = static_cast<int32_T>(count2);
      }

      if (i == 1) {
        done = b_dum.size(0);
      } else {
        done = i;
      }

      if ((i == b_dum.size(0)) && (k - i1 == done)) {
        done = nd2 - i2;
        b_bband.set_size(1, done);
        for (i = 0; i < done; i++) {
          k = i1 + i;
          b_bband[i].re = bband[k].re + win[i] * b_dum[i].re;
          b_bband[i].im = bband[k].im + win[i] * b_dum[i].im;
        }

        nd2 = b_bband.size(1);
        for (i = 0; i < nd2; i++) {
          bband[i2 + i] = b_bband[i];
        }
      } else {
        binary_expand_op(bband, i2, nd2, i1, k - 1, win, i - 1, b_dum);
      }

      // 'tx:140' count1 = count2 + 1;
      count1 = count2 + 1.0;
    }

    //  Padding.
    // 'tx:144' if (params.pad)
    if (params->pad != 0.0) {
      // 'tx:145' pad = zeros(defaults.PAD_NCHIP * chip_nsample, 1);
      dum.set_size(5 * chip_time.size(1));
      nd2 = 5 * chip_time.size(1);
      for (i = 0; i < nd2; i++) {
        dum[i] = 0.0;
      }
    } else {
      // 'tx:146' else
      // 'tx:147' pad = zeros(0,1);
      dum.set_size(0);
    }

    //  Assemble everything.
    // 'tx:151' bband = [pad; wut; wut_gap; bband; pad];
    b_dum.set_size((((dum.size(0) + wut.size(0)) + wut_gap.size(0)) + bband.size
                    (0)) + dum.size(0));
    nd2 = dum.size(0);
    for (i = 0; i < nd2; i++) {
      b_dum[i].re = 0.0;
      b_dum[i].im = 0.0;
    }

    nd2 = wut.size(0);
    for (i = 0; i < nd2; i++) {
      b_dum[i + dum.size(0)] = wut[i];
    }

    nd2 = wut_gap.size(0);
    for (i = 0; i < nd2; i++) {
      b_dum[(i + dum.size(0)) + wut.size(0)].re = 0.0;
      b_dum[(i + dum.size(0)) + wut.size(0)].im = wut_gap[i].im;
    }

    nd2 = bband.size(0);
    for (i = 0; i < nd2; i++) {
      b_dum[((i + dum.size(0)) + wut.size(0)) + wut_gap.size(0)] = bband[i];
    }

    nd2 = dum.size(0);
    for (i = 0; i < nd2; i++) {
      b_dum[(((i + dum.size(0)) + wut.size(0)) + wut_gap.size(0)) + bband.size(0)]
        .re = 0.0;
      b_dum[(((i + dum.size(0)) + wut.size(0)) + wut_gap.size(0)) + bband.size(0)]
        .im = 0.0;
    }

    bband.set_size(b_dum.size(0));
    nd2 = b_dum.size(0);
    for (i = 0; i < nd2; i++) {
      bband[i] = b_dum[i];
    }

    //  Coded symbols.
    // 'tx:154' state.coded_symbols = coded(33 : end)';
    state->coded_symbols.size[0] = 144;
    std::copy(&coded_data[32], &coded_data[176], &state->coded_symbols.data[0]);
  }

  //
  // function value = user_class_lookup_index(index)
  static void user_class_lookup_index(uint64_T b_index, char_T value_data[],
    int32_T value_size[2])
  {
    static const char_T cv34[41]{ 't', 'h', 'e', ' ', 'f', 'o', 'r', 'm', 'e',
      'r', ' ', 'Y', 'u', 'g', 'o', 's', 'l', 'a', 'v', ' ', 'R', 'e', 'p', 'u',
      'b', 'l', 'i', 'c', ' ', 'o', 'f', ' ', 'M', 'a', 'c', 'e', 'd', 'o', 'n',
      'i', 'a' };

    static const char_T cv12[35]{ 'N', 'A', 'T', 'O', ' ', 'J', 'A', 'N', 'U',
      'S', ' ', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'e', ' ', 'I', 'm', 'p',
      'l', 'e', 'm', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n' };

    static const char_T cv5[24]{ 'R', 'i', 'g', 'i', 'd', ' ', 'v', 'e', 'r',
      't', 'i', 'c', 'a', 'l', ' ', 's', 't', 'r', 'u', 'c', 't', 'u', 'r', 'e'
    };

    static const char_T cv11[23]{ 'C', 'a', 'p', 'a', 'b', 'i', 'l', 'i', 't',
      'i', 'e', 's', ' ', 'd', 'e', 's', 'c', 'r', 'i', 'p', 't', 'o', 'r' };

    static const char_T cv3[23]{ 'P', 'i', 'n', 'g', 'e', 'r', ' ', '(', 'n',
      'a', 'v', '.', ' ', '&', ' ', 'r', 'a', 'n', 'g', 'i', 'n', 'g', ')' };

    static const char_T cv40[23]{ 'T', 'h', 'e', ' ', 'R', 'e', 'p', 'u', 'b',
      'l', 'i', 'c', ' ', 'o', 'f', ' ', 'M', 'o', 'l', 'd', 'o', 'v', 'a' };

    static const char_T cv4[22]{ 'F', 'i', 'x', 'e', 'd', ' ', 'v', 'e', 'r',
      't', 'i', 'c', 'a', 'l', ' ', 'm', 'o', 'o', 'r', 'i', 'n', 'g' };

    static const char_T cv47[22]{ 'B', 'o', 's', 'n', 'i', 'a', ' ', 'a', 'n',
      'd', ' ', 'H', 'e', 'r', 'z', 'e', 'g', 'o', 'v', 'i', 'n', 'a' };

    static const char_T cv20[20]{ 'U', 'n', 'i', 't', 'e', 'd', ' ', 'A', 'r',
      'a', 'b', ' ', 'E', 'm', 'i', 'r', 'a', 't', 'e', 's' };

    static const char_T cv15[17]{ 'R', 'e', 'p', 'u', 'b', 'l', 'i', 'c', ' ',
      'o', 'f', ' ', 'K', 'o', 'r', 'e', 'a' };

    static const char_T cv10[15]{ 'S', 'o', 'l', 'a', 'r', ' ', 'G', 'e', 'n',
      'e', 'r', 'a', 't', 'o', 'r' };

    static const char_T cv42[15]{ 'K', 'y', 'r', 'g', 'y', 'z', ' ', 'R', 'e',
      'p', 'u', 'b', 'l', 'i', 'c' };

    static const char_T cv1[14]{ 'U', 'n', 'd', 'e', 'r', 'w', 'a', 't', 'e',
      'r', ' ', 'G', 'P', 'S' };

    static const char_T cv2[14]{ 'U', 'n', 'd', 'e', 'r', 'w', 'a', 't', 'e',
      'r', ' ', 'A', 'I', 'S' };

    static const char_T cv53[14]{ 'U', 'n', 'i', 't', 'e', 'd', ' ', 'K', 'i',
      'n', 'g', 'd', 'o', 'm' };

    static const char_T cv7[14]{ 'C', 'h', 'a', 'n', 'n', 'e', 'l', ' ', 'm',
      'a', 'r', 'k', 'e', 'r' };

    static const char_T cv74[14]{ 'C', 'z', 'e', 'c', 'h', ' ', 'R', 'e', 'p',
      'u', 'b', 'l', 'i', 'c' };

    static const char_T cv8[14]{ 'W', 'i', 'n', 'd', ' ', 'G', 'e', 'n', 'e',
      'r', 'a', 't', 'o', 'r' };

    static const char_T cv9[14]{ 'W', 'a', 'v', 'e', ' ', 'G', 'e', 'n', 'e',
      'r', 'a', 't', 'o', 'r' };

    static const char_T cv52[13]{ 'U', 'n', 'i', 't', 'e', 'd', ' ', 'S', 't',
      'a', 't', 'e', 's' };

    static const char_T cv6[13]{ 'H', 'a', 'z', 'a', 'r', 'd', ' ', 'm', 'a',
      'r', 'k', 'e', 'r' };

    static const char_T cv80[13]{ 'J', 'A', 'N', 'U', 'S', ' ', 's', 'p', 'e',
      'c', 'i', 'a', 'l' };

    static const char_T cv33[12]{ 'T', 'u', 'r', 'k', 'm', 'e', 'n', 'i', 's',
      't', 'a', 'n' };

    static const char_T cv14[11]{ 'N', 'e', 'w', ' ', 'Z', 'e', 'a', 'l', 'a',
      'n', 'd' };

    static const char_T cv19[11]{ 'A', 'f', 'g', 'h', 'a', 'n', 'i', 's', 't',
      'a', 'n' };

    static const char_T cv36[11]{ 'S', 'w', 'i', 't', 'z', 'e', 'r', 'l', 'a',
      'n', 'd' };

    static const char_T cv62[11]{ 'N', 'e', 't', 'h', 'e', 'r', 'l', 'a', 'n',
      'd', 's' };

    static const char_T cv26[10]{ 'M', 'a', 'u', 'r', 'i', 't', 'a', 'n', 'i',
      'a' };

    static const char_T cv31[10]{ 'U', 'z', 'b', 'e', 'k', 'i', 's', 't', 'a',
      'n' };

    static const char_T cv35[10]{ 'T', 'a', 'j', 'i', 'k', 'i', 's', 't', 'a',
      'n' };

    static const char_T cv39[10]{ 'M', 'o', 'n', 't', 'e', 'n', 'e', 'g', 'r',
      'o' };

    static const char_T cv43[10]{ 'K', 'a', 'z', 'a', 'k', 'h', 's', 't', 'a',
      'n' };

    static const char_T cv49[10]{ 'A', 'z', 'e', 'r', 'b', 'a', 'i', 'j', 'a',
      'n' };

    static const char_T cv63[10]{ 'L', 'u', 'x', 'e', 'm', 'b', 'o', 'u', 'r',
      'g' };

    static const char_T cv[9]{ 'E', 'm', 'e', 'r', 'g', 'e', 'n', 'c', 'y' };

    static const char_T cv18[9]{ 'A', 'u', 's', 't', 'r', 'a', 'l', 'i', 'a' };

    static const char_T cv64[9]{ 'L', 'i', 't', 'h', 'u', 'a', 'n', 'i', 'a' };

    static const char_T cv13[8]{ 'M', 'o', 'n', 'g', 'o', 'l', 'i', 'a' };

    static const char_T cv16[8]{ 'P', 'a', 'k', 'i', 's', 't', 'a', 'n' };

    static const char_T cv56[8]{ 'S', 'l', 'o', 'v', 'e', 'n', 'i', 'a' };

    static const char_T cv57[8]{ 'S', 'l', 'o', 'v', 'a', 'k', 'i', 'a' };

    static const char_T cv59[8]{ 'P', 'o', 'r', 't', 'u', 'g', 'a', 'l' };

    static const char_T cv77[8]{ 'B', 'u', 'l', 'g', 'a', 'r', 'i', 'a' };

    static const char_T cv23[7]{ 'B', 'a', 'h', 'r', 'a', 'i', 'n' };

    static const char_T cv24[7]{ 'T', 'u', 'n', 'i', 's', 'i', 'a' };

    static const char_T cv25[7]{ 'M', 'o', 'r', 'o', 'c', 'c', 'o' };

    static const char_T cv30[7]{ 'A', 'l', 'g', 'e', 'r', 'i', 'a' };

    static const char_T cv32[7]{ 'U', 'k', 'r', 'a', 'i', 'n', 'e' };

    static const char_T cv44[7]{ 'I', 'r', 'e', 'l', 'a', 'n', 'd' };

    static const char_T cv45[7]{ 'G', 'e', 'o', 'r', 'g', 'i', 'a' };

    static const char_T cv46[7]{ 'F', 'i', 'n', 'l', 'a', 'n', 'd' };

    static const char_T cv48[7]{ 'B', 'e', 'l', 'a', 'r', 'u', 's' };

    static const char_T cv50[7]{ 'A', 'u', 's', 't', 'r', 'i', 'a' };

    static const char_T cv51[7]{ 'A', 'r', 'm', 'e', 'n', 'i', 'a' };

    static const char_T cv58[7]{ 'R', 'o', 'm', 'a', 'n', 'i', 'a' };

    static const char_T cv67[7]{ 'I', 'c', 'e', 'l', 'a', 'n', 'd' };

    static const char_T cv68[7]{ 'H', 'u', 'n', 'g', 'a', 'r', 'y' };

    static const char_T cv70[7]{ 'G', 'e', 'r', 'm', 'a', 'n', 'y' };

    static const char_T cv72[7]{ 'E', 's', 't', 'o', 'n', 'i', 'a' };

    static const char_T cv73[7]{ 'D', 'e', 'n', 'm', 'a', 'r', 'k' };

    static const char_T cv75[7]{ 'C', 'r', 'o', 'a', 't', 'i', 'a' };

    static const char_T cv78[7]{ 'B', 'e', 'l', 'g', 'i', 'u', 'm' };

    static const char_T cv79[7]{ 'A', 'l', 'b', 'a', 'n', 'i', 'a' };

    static const char_T cv21[6]{ 'K', 'u', 'w', 'a', 'i', 't' };

    static const char_T cv27[6]{ 'J', 'o', 'r', 'd', 'a', 'n' };

    static const char_T cv28[6]{ 'I', 's', 'r', 'a', 'e', 'l' };

    static const char_T cv37[6]{ 'S', 'w', 'e', 'd', 'e', 'n' };

    static const char_T cv38[6]{ 'S', 'e', 'r', 'b', 'i', 'a' };

    static const char_T cv54[6]{ 'T', 'u', 'r', 'k', 'e', 'y' };

    static const char_T cv60[6]{ 'P', 'o', 'l', 'a', 'n', 'd' };

    static const char_T cv61[6]{ 'N', 'o', 'r', 'w', 'a', 'y' };

    static const char_T cv65[6]{ 'L', 'a', 't', 'v', 'i', 'a' };

    static const char_T cv69[6]{ 'G', 'r', 'e', 'e', 'c', 'e' };

    static const char_T cv71[6]{ 'F', 'r', 'a', 'n', 'c', 'e' };

    static const char_T cv76[6]{ 'C', 'a', 'n', 'a', 'd', 'a' };

    static const char_T cv17[5]{ 'J', 'a', 'p', 'a', 'n' };

    static const char_T cv22[5]{ 'Q', 'a', 't', 'a', 'r' };

    static const char_T cv29[5]{ 'E', 'g', 'y', 'p', 't' };

    static const char_T cv41[5]{ 'M', 'a', 'l', 't', 'a' };

    static const char_T cv55[5]{ 'S', 'p', 'a', 'i', 'n' };

    static const char_T cv66[5]{ 'I', 't', 'a', 'l', 'y' };

    ::coder::bounded_array<char_T, 41U, 2U> ab_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ac_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ad_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ae_f1;
    ::coder::bounded_array<char_T, 41U, 2U> af_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ag_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ah_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ai_f1;
    ::coder::bounded_array<char_T, 41U, 2U> aj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ak_f1;
    ::coder::bounded_array<char_T, 41U, 2U> b_f1;
    ::coder::bounded_array<char_T, 41U, 2U> bb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> bc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> bd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> be_f1;
    ::coder::bounded_array<char_T, 41U, 2U> bf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> bg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> bh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> bi_f1;
    ::coder::bounded_array<char_T, 41U, 2U> bj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> bk_f1;
    ::coder::bounded_array<char_T, 41U, 2U> c_f1;
    ::coder::bounded_array<char_T, 41U, 2U> cb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> cc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> cd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ce_f1;
    ::coder::bounded_array<char_T, 41U, 2U> cf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> cg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ch_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ci_f1;
    ::coder::bounded_array<char_T, 41U, 2U> cj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ck_f1;
    ::coder::bounded_array<char_T, 41U, 2U> d_f1;
    ::coder::bounded_array<char_T, 41U, 2U> db_f1;
    ::coder::bounded_array<char_T, 41U, 2U> dc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> dd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> de_f1;
    ::coder::bounded_array<char_T, 41U, 2U> df_f1;
    ::coder::bounded_array<char_T, 41U, 2U> dg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> dh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> di_f1;
    ::coder::bounded_array<char_T, 41U, 2U> dj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> dk_f1;
    ::coder::bounded_array<char_T, 41U, 2U> e_f1;
    ::coder::bounded_array<char_T, 41U, 2U> eb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ec_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ed_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ee_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ef_f1;
    ::coder::bounded_array<char_T, 41U, 2U> eg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> eh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ei_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ej_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ek_f1;
    ::coder::bounded_array<char_T, 41U, 2U> f1;
    ::coder::bounded_array<char_T, 41U, 2U> f_f1;
    ::coder::bounded_array<char_T, 41U, 2U> fb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> fc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> fd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> fe_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ff_f1;
    ::coder::bounded_array<char_T, 41U, 2U> fg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> fh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> fi_f1;
    ::coder::bounded_array<char_T, 41U, 2U> fj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> fk_f1;
    ::coder::bounded_array<char_T, 41U, 2U> g_f1;
    ::coder::bounded_array<char_T, 41U, 2U> gb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> gc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> gd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ge_f1;
    ::coder::bounded_array<char_T, 41U, 2U> gf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> gg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> gh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> gi_f1;
    ::coder::bounded_array<char_T, 41U, 2U> gj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> h_f1;
    ::coder::bounded_array<char_T, 41U, 2U> hb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> hc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> hd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> he_f1;
    ::coder::bounded_array<char_T, 41U, 2U> hf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> hg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> hh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> hi_f1;
    ::coder::bounded_array<char_T, 41U, 2U> hj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> i_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ib_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ic_f1;
    ::coder::bounded_array<char_T, 41U, 2U> id_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ie_f1;
    ::coder::bounded_array<char_T, 41U, 2U> if_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ig_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ih_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ii_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ij_f1;
    ::coder::bounded_array<char_T, 41U, 2U> j_f1;
    ::coder::bounded_array<char_T, 41U, 2U> jb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> jc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> jd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> je_f1;
    ::coder::bounded_array<char_T, 41U, 2U> jf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> jg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> jh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ji_f1;
    ::coder::bounded_array<char_T, 41U, 2U> jj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> k_f1;
    ::coder::bounded_array<char_T, 41U, 2U> kb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> kc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> kd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ke_f1;
    ::coder::bounded_array<char_T, 41U, 2U> kf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> kg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> kh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ki_f1;
    ::coder::bounded_array<char_T, 41U, 2U> kj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> l_f1;
    ::coder::bounded_array<char_T, 41U, 2U> lb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> lc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ld_f1;
    ::coder::bounded_array<char_T, 41U, 2U> le_f1;
    ::coder::bounded_array<char_T, 41U, 2U> lf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> lg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> lh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> li_f1;
    ::coder::bounded_array<char_T, 41U, 2U> lj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> m_f1;
    ::coder::bounded_array<char_T, 41U, 2U> mb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> mc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> md_f1;
    ::coder::bounded_array<char_T, 41U, 2U> me_f1;
    ::coder::bounded_array<char_T, 41U, 2U> mf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> mg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> mh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> mi_f1;
    ::coder::bounded_array<char_T, 41U, 2U> mj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> n_f1;
    ::coder::bounded_array<char_T, 41U, 2U> nb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> nc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> nd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ne_f1;
    ::coder::bounded_array<char_T, 41U, 2U> nf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ng_f1;
    ::coder::bounded_array<char_T, 41U, 2U> nh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ni_f1;
    ::coder::bounded_array<char_T, 41U, 2U> nj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> o_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ob_f1;
    ::coder::bounded_array<char_T, 41U, 2U> oc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> od_f1;
    ::coder::bounded_array<char_T, 41U, 2U> oe_f1;
    ::coder::bounded_array<char_T, 41U, 2U> of_f1;
    ::coder::bounded_array<char_T, 41U, 2U> og_f1;
    ::coder::bounded_array<char_T, 41U, 2U> oh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> oi_f1;
    ::coder::bounded_array<char_T, 41U, 2U> oj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> p_f1;
    ::coder::bounded_array<char_T, 41U, 2U> pb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> pc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> pd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> pe_f1;
    ::coder::bounded_array<char_T, 41U, 2U> pf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> pg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ph_f1;
    ::coder::bounded_array<char_T, 41U, 2U> pi_f1;
    ::coder::bounded_array<char_T, 41U, 2U> pj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> q_f1;
    ::coder::bounded_array<char_T, 41U, 2U> qb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> qc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> qd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> qe_f1;
    ::coder::bounded_array<char_T, 41U, 2U> qf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> qg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> qh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> qi_f1;
    ::coder::bounded_array<char_T, 41U, 2U> qj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> r_f1;
    ::coder::bounded_array<char_T, 41U, 2U> rb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> rc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> rd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> re_f1;
    ::coder::bounded_array<char_T, 41U, 2U> rf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> rg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> rh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ri_f1;
    ::coder::bounded_array<char_T, 41U, 2U> rj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> s_f1;
    ::coder::bounded_array<char_T, 41U, 2U> sb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> sc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> sd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> se_f1;
    ::coder::bounded_array<char_T, 41U, 2U> sf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> sg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> sh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> si_f1;
    ::coder::bounded_array<char_T, 41U, 2U> sj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> t_f1;
    ::coder::bounded_array<char_T, 41U, 2U> tb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> tc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> td_f1;
    ::coder::bounded_array<char_T, 41U, 2U> te_f1;
    ::coder::bounded_array<char_T, 41U, 2U> tf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> tg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> th_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ti_f1;
    ::coder::bounded_array<char_T, 41U, 2U> tj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> u_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ub_f1;
    ::coder::bounded_array<char_T, 41U, 2U> uc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ud_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ue_f1;
    ::coder::bounded_array<char_T, 41U, 2U> uf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ug_f1;
    ::coder::bounded_array<char_T, 41U, 2U> uh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ui_f1;
    ::coder::bounded_array<char_T, 41U, 2U> uj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> v_f1;
    ::coder::bounded_array<char_T, 41U, 2U> vb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> vc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> vd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ve_f1;
    ::coder::bounded_array<char_T, 41U, 2U> vf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> vg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> vh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> vi_f1;
    ::coder::bounded_array<char_T, 41U, 2U> vj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> w_f1;
    ::coder::bounded_array<char_T, 41U, 2U> wb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> wc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> wd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> we_f1;
    ::coder::bounded_array<char_T, 41U, 2U> wf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> wg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> wh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> wi_f1;
    ::coder::bounded_array<char_T, 41U, 2U> wj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> x_f1;
    ::coder::bounded_array<char_T, 41U, 2U> xb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> xc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> xd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> xe_f1;
    ::coder::bounded_array<char_T, 41U, 2U> xf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> xg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> xh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> xi_f1;
    ::coder::bounded_array<char_T, 41U, 2U> xj_f1;
    ::coder::bounded_array<char_T, 41U, 2U> y_f1;
    ::coder::bounded_array<char_T, 41U, 2U> yb_f1;
    ::coder::bounded_array<char_T, 41U, 2U> yc_f1;
    ::coder::bounded_array<char_T, 41U, 2U> yd_f1;
    ::coder::bounded_array<char_T, 41U, 2U> ye_f1;
    ::coder::bounded_array<char_T, 41U, 2U> yf_f1;
    ::coder::bounded_array<char_T, 41U, 2U> yg_f1;
    ::coder::bounded_array<char_T, 41U, 2U> yh_f1;
    ::coder::bounded_array<char_T, 41U, 2U> yi_f1;
    ::coder::bounded_array<char_T, 41U, 2U> yj_f1;
    cell_wrap_4 rv[256];
    cell_wrap_4 rv1[256];
    uint64_T qY;
    int32_T loop_ub;

    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Authors: Giovanni Zappa                                                |
    // +------------------------------------------------------------------------+
    //
    //  USER_CLASS_LOOKUP_INDEX(index)
    //
    //  Return the user class associated with the supplied 'index' and
    //  reservation/repeat flag.
    //
    //  Inputs:
    //    index    Index from 0.
    //
    //  Outputs:
    //    value    User class.
    //
    //  See also USER_CLASS_LOOKUP_TABLE
    //
    // 'user_class_lookup_index:39' table = user_class_lookup_table;
    f1.size[0] = 1;
    f1.size[1] = 9;
    for (int32_T i{0}; i < 9; i++) {
      f1.data[i] = cv[i];
    }

    b_f1.size[0] = 1;
    b_f1.size[1] = 14;
    c_f1.size[0] = 1;
    c_f1.size[1] = 14;
    for (int32_T i{0}; i < 14; i++) {
      b_f1.data[i] = cv1[i];
      c_f1.data[i] = cv2[i];
    }

    d_f1.size[0] = 1;
    d_f1.size[1] = 23;
    for (int32_T i{0}; i < 23; i++) {
      d_f1.data[i] = cv3[i];
    }

    e_f1.size[0] = 1;
    e_f1.size[1] = 22;
    for (int32_T i{0}; i < 22; i++) {
      e_f1.data[i] = cv4[i];
    }

    f_f1.size[0] = 1;
    f_f1.size[1] = 24;
    for (int32_T i{0}; i < 24; i++) {
      f_f1.data[i] = cv5[i];
    }

    g_f1.size[0] = 1;
    g_f1.size[1] = 13;
    for (int32_T i{0}; i < 13; i++) {
      g_f1.data[i] = cv6[i];
    }

    h_f1.size[0] = 1;
    h_f1.size[1] = 14;
    i_f1.size[0] = 1;
    i_f1.size[1] = 14;
    j_f1.size[0] = 1;
    j_f1.size[1] = 14;
    for (int32_T i{0}; i < 14; i++) {
      h_f1.data[i] = cv7[i];
      i_f1.data[i] = cv8[i];
      j_f1.data[i] = cv9[i];
    }

    k_f1.size[0] = 1;
    k_f1.size[1] = 15;
    for (int32_T i{0}; i < 15; i++) {
      k_f1.data[i] = cv10[i];
    }

    l_f1.size[0] = 1;
    l_f1.size[1] = 4;
    m_f1.size[0] = 1;
    m_f1.size[1] = 4;
    n_f1.size[0] = 1;
    n_f1.size[1] = 4;
    o_f1.size[0] = 1;
    o_f1.size[1] = 4;
    l_f1.data[0] = 'O';
    m_f1.data[0] = 'O';
    n_f1.data[0] = 'O';
    o_f1.data[0] = 'O';
    l_f1.data[1] = 'P';
    m_f1.data[1] = 'P';
    n_f1.data[1] = 'P';
    o_f1.data[1] = 'P';
    l_f1.data[2] = 'E';
    m_f1.data[2] = 'E';
    n_f1.data[2] = 'E';
    o_f1.data[2] = 'E';
    l_f1.data[3] = 'N';
    m_f1.data[3] = 'N';
    n_f1.data[3] = 'N';
    o_f1.data[3] = 'N';
    p_f1.size[0] = 1;
    p_f1.size[1] = 23;
    for (int32_T i{0}; i < 23; i++) {
      p_f1.data[i] = cv11[i];
    }

    q_f1.size[0] = 1;
    q_f1.size[1] = 35;
    for (int32_T i{0}; i < 35; i++) {
      q_f1.data[i] = cv12[i];
    }

    r_f1.size[0] = 1;
    r_f1.size[1] = 4;
    s_f1.size[0] = 1;
    s_f1.size[1] = 4;
    t_f1.size[0] = 1;
    t_f1.size[1] = 4;
    u_f1.size[0] = 1;
    u_f1.size[1] = 4;
    v_f1.size[0] = 1;
    v_f1.size[1] = 4;
    w_f1.size[0] = 1;
    w_f1.size[1] = 4;
    x_f1.size[0] = 1;
    x_f1.size[1] = 4;
    y_f1.size[0] = 1;
    y_f1.size[1] = 4;
    ab_f1.size[0] = 1;
    ab_f1.size[1] = 4;
    bb_f1.size[0] = 1;
    bb_f1.size[1] = 4;
    cb_f1.size[0] = 1;
    cb_f1.size[1] = 4;
    db_f1.size[0] = 1;
    db_f1.size[1] = 4;
    eb_f1.size[0] = 1;
    eb_f1.size[1] = 4;
    fb_f1.size[0] = 1;
    fb_f1.size[1] = 4;
    gb_f1.size[0] = 1;
    gb_f1.size[1] = 4;
    hb_f1.size[0] = 1;
    hb_f1.size[1] = 4;
    ib_f1.size[0] = 1;
    ib_f1.size[1] = 4;
    jb_f1.size[0] = 1;
    jb_f1.size[1] = 4;
    kb_f1.size[0] = 1;
    kb_f1.size[1] = 4;
    lb_f1.size[0] = 1;
    lb_f1.size[1] = 4;
    mb_f1.size[0] = 1;
    mb_f1.size[1] = 4;
    nb_f1.size[0] = 1;
    nb_f1.size[1] = 4;
    ob_f1.size[0] = 1;
    ob_f1.size[1] = 4;
    pb_f1.size[0] = 1;
    pb_f1.size[1] = 4;
    qb_f1.size[0] = 1;
    qb_f1.size[1] = 4;
    rb_f1.size[0] = 1;
    rb_f1.size[1] = 4;
    sb_f1.size[0] = 1;
    sb_f1.size[1] = 4;
    tb_f1.size[0] = 1;
    tb_f1.size[1] = 4;
    ub_f1.size[0] = 1;
    ub_f1.size[1] = 4;
    vb_f1.size[0] = 1;
    vb_f1.size[1] = 4;
    wb_f1.size[0] = 1;
    wb_f1.size[1] = 4;
    xb_f1.size[0] = 1;
    xb_f1.size[1] = 4;
    yb_f1.size[0] = 1;
    yb_f1.size[1] = 4;
    ac_f1.size[0] = 1;
    ac_f1.size[1] = 4;
    bc_f1.size[0] = 1;
    bc_f1.size[1] = 4;
    cc_f1.size[0] = 1;
    cc_f1.size[1] = 4;
    dc_f1.size[0] = 1;
    dc_f1.size[1] = 4;
    ec_f1.size[0] = 1;
    ec_f1.size[1] = 4;
    fc_f1.size[0] = 1;
    fc_f1.size[1] = 4;
    gc_f1.size[0] = 1;
    gc_f1.size[1] = 4;
    hc_f1.size[0] = 1;
    hc_f1.size[1] = 4;
    ic_f1.size[0] = 1;
    ic_f1.size[1] = 4;
    jc_f1.size[0] = 1;
    jc_f1.size[1] = 4;
    kc_f1.size[0] = 1;
    kc_f1.size[1] = 4;
    lc_f1.size[0] = 1;
    lc_f1.size[1] = 4;
    mc_f1.size[0] = 1;
    mc_f1.size[1] = 4;
    nc_f1.size[0] = 1;
    nc_f1.size[1] = 4;
    oc_f1.size[0] = 1;
    oc_f1.size[1] = 4;
    pc_f1.size[0] = 1;
    pc_f1.size[1] = 4;
    qc_f1.size[0] = 1;
    qc_f1.size[1] = 4;
    rc_f1.size[0] = 1;
    rc_f1.size[1] = 4;
    sc_f1.size[0] = 1;
    sc_f1.size[1] = 4;
    tc_f1.size[0] = 1;
    tc_f1.size[1] = 4;
    uc_f1.size[0] = 1;
    uc_f1.size[1] = 4;
    vc_f1.size[0] = 1;
    vc_f1.size[1] = 4;
    wc_f1.size[0] = 1;
    wc_f1.size[1] = 4;
    xc_f1.size[0] = 1;
    xc_f1.size[1] = 4;
    yc_f1.size[0] = 1;
    yc_f1.size[1] = 4;
    ad_f1.size[0] = 1;
    ad_f1.size[1] = 4;
    bd_f1.size[0] = 1;
    bd_f1.size[1] = 4;
    cd_f1.size[0] = 1;
    cd_f1.size[1] = 4;
    dd_f1.size[0] = 1;
    dd_f1.size[1] = 4;
    ed_f1.size[0] = 1;
    ed_f1.size[1] = 4;
    fd_f1.size[0] = 1;
    fd_f1.size[1] = 4;
    gd_f1.size[0] = 1;
    gd_f1.size[1] = 4;
    hd_f1.size[0] = 1;
    hd_f1.size[1] = 4;
    id_f1.size[0] = 1;
    id_f1.size[1] = 4;
    jd_f1.size[0] = 1;
    jd_f1.size[1] = 4;
    kd_f1.size[0] = 1;
    kd_f1.size[1] = 4;
    ld_f1.size[0] = 1;
    ld_f1.size[1] = 4;
    md_f1.size[0] = 1;
    md_f1.size[1] = 4;
    nd_f1.size[0] = 1;
    nd_f1.size[1] = 4;
    od_f1.size[0] = 1;
    od_f1.size[1] = 4;
    pd_f1.size[0] = 1;
    pd_f1.size[1] = 4;
    qd_f1.size[0] = 1;
    qd_f1.size[1] = 4;
    rd_f1.size[0] = 1;
    rd_f1.size[1] = 4;
    sd_f1.size[0] = 1;
    sd_f1.size[1] = 4;
    td_f1.size[0] = 1;
    td_f1.size[1] = 4;
    ud_f1.size[0] = 1;
    ud_f1.size[1] = 4;
    vd_f1.size[0] = 1;
    vd_f1.size[1] = 4;
    wd_f1.size[0] = 1;
    wd_f1.size[1] = 4;
    xd_f1.size[0] = 1;
    xd_f1.size[1] = 4;
    yd_f1.size[0] = 1;
    yd_f1.size[1] = 4;
    ae_f1.size[0] = 1;
    ae_f1.size[1] = 4;
    be_f1.size[0] = 1;
    be_f1.size[1] = 4;
    ce_f1.size[0] = 1;
    ce_f1.size[1] = 4;
    de_f1.size[0] = 1;
    de_f1.size[1] = 4;
    ee_f1.size[0] = 1;
    ee_f1.size[1] = 4;
    fe_f1.size[0] = 1;
    fe_f1.size[1] = 4;
    ge_f1.size[0] = 1;
    ge_f1.size[1] = 4;
    he_f1.size[0] = 1;
    he_f1.size[1] = 4;
    ie_f1.size[0] = 1;
    ie_f1.size[1] = 4;
    je_f1.size[0] = 1;
    je_f1.size[1] = 4;
    ke_f1.size[0] = 1;
    ke_f1.size[1] = 4;
    le_f1.size[0] = 1;
    le_f1.size[1] = 4;
    me_f1.size[0] = 1;
    me_f1.size[1] = 4;
    ne_f1.size[0] = 1;
    ne_f1.size[1] = 4;
    oe_f1.size[0] = 1;
    oe_f1.size[1] = 4;
    pe_f1.size[0] = 1;
    pe_f1.size[1] = 4;
    qe_f1.size[0] = 1;
    qe_f1.size[1] = 4;
    re_f1.size[0] = 1;
    re_f1.size[1] = 4;
    se_f1.size[0] = 1;
    se_f1.size[1] = 4;
    te_f1.size[0] = 1;
    te_f1.size[1] = 4;
    ue_f1.size[0] = 1;
    ue_f1.size[1] = 4;
    ve_f1.size[0] = 1;
    ve_f1.size[1] = 4;
    we_f1.size[0] = 1;
    we_f1.size[1] = 4;
    xe_f1.size[0] = 1;
    xe_f1.size[1] = 4;
    ye_f1.size[0] = 1;
    ye_f1.size[1] = 4;
    af_f1.size[0] = 1;
    af_f1.size[1] = 4;
    bf_f1.size[0] = 1;
    bf_f1.size[1] = 4;
    cf_f1.size[0] = 1;
    cf_f1.size[1] = 4;
    df_f1.size[0] = 1;
    df_f1.size[1] = 4;
    ef_f1.size[0] = 1;
    ef_f1.size[1] = 4;
    ff_f1.size[0] = 1;
    ff_f1.size[1] = 4;
    gf_f1.size[0] = 1;
    gf_f1.size[1] = 4;
    hf_f1.size[0] = 1;
    hf_f1.size[1] = 4;
    if_f1.size[0] = 1;
    if_f1.size[1] = 4;
    jf_f1.size[0] = 1;
    jf_f1.size[1] = 4;
    kf_f1.size[0] = 1;
    kf_f1.size[1] = 4;
    lf_f1.size[0] = 1;
    lf_f1.size[1] = 4;
    mf_f1.size[0] = 1;
    mf_f1.size[1] = 4;
    nf_f1.size[0] = 1;
    nf_f1.size[1] = 4;
    of_f1.size[0] = 1;
    of_f1.size[1] = 4;
    pf_f1.size[0] = 1;
    pf_f1.size[1] = 4;
    qf_f1.size[0] = 1;
    qf_f1.size[1] = 4;
    rf_f1.size[0] = 1;
    rf_f1.size[1] = 4;
    sf_f1.size[0] = 1;
    sf_f1.size[1] = 4;
    tf_f1.size[0] = 1;
    tf_f1.size[1] = 4;
    uf_f1.size[0] = 1;
    uf_f1.size[1] = 4;
    vf_f1.size[0] = 1;
    vf_f1.size[1] = 4;
    wf_f1.size[0] = 1;
    wf_f1.size[1] = 4;
    xf_f1.size[0] = 1;
    xf_f1.size[1] = 4;
    yf_f1.size[0] = 1;
    yf_f1.size[1] = 4;
    ag_f1.size[0] = 1;
    ag_f1.size[1] = 4;
    bg_f1.size[0] = 1;
    bg_f1.size[1] = 4;
    cg_f1.size[0] = 1;
    cg_f1.size[1] = 4;
    dg_f1.size[0] = 1;
    dg_f1.size[1] = 4;
    eg_f1.size[0] = 1;
    eg_f1.size[1] = 4;
    fg_f1.size[0] = 1;
    fg_f1.size[1] = 4;
    gg_f1.size[0] = 1;
    gg_f1.size[1] = 4;
    hg_f1.size[0] = 1;
    hg_f1.size[1] = 4;
    ig_f1.size[0] = 1;
    ig_f1.size[1] = 4;
    jg_f1.size[0] = 1;
    jg_f1.size[1] = 4;
    kg_f1.size[0] = 1;
    kg_f1.size[1] = 4;
    lg_f1.size[0] = 1;
    lg_f1.size[1] = 4;
    mg_f1.size[0] = 1;
    mg_f1.size[1] = 4;
    ng_f1.size[0] = 1;
    ng_f1.size[1] = 4;
    og_f1.size[0] = 1;
    og_f1.size[1] = 4;
    pg_f1.size[0] = 1;
    pg_f1.size[1] = 4;
    qg_f1.size[0] = 1;
    qg_f1.size[1] = 4;
    rg_f1.size[0] = 1;
    rg_f1.size[1] = 4;
    sg_f1.size[0] = 1;
    sg_f1.size[1] = 4;
    tg_f1.size[0] = 1;
    tg_f1.size[1] = 4;
    ug_f1.size[0] = 1;
    ug_f1.size[1] = 4;
    vg_f1.size[0] = 1;
    vg_f1.size[1] = 4;
    wg_f1.size[0] = 1;
    wg_f1.size[1] = 4;
    xg_f1.size[0] = 1;
    xg_f1.size[1] = 4;
    yg_f1.size[0] = 1;
    yg_f1.size[1] = 4;
    ah_f1.size[0] = 1;
    ah_f1.size[1] = 4;
    bh_f1.size[0] = 1;
    bh_f1.size[1] = 4;
    ch_f1.size[0] = 1;
    ch_f1.size[1] = 4;
    dh_f1.size[0] = 1;
    dh_f1.size[1] = 4;
    eh_f1.size[0] = 1;
    eh_f1.size[1] = 4;
    fh_f1.size[0] = 1;
    fh_f1.size[1] = 4;
    gh_f1.size[0] = 1;
    gh_f1.size[1] = 4;
    hh_f1.size[0] = 1;
    hh_f1.size[1] = 4;
    ih_f1.size[0] = 1;
    ih_f1.size[1] = 4;
    jh_f1.size[0] = 1;
    jh_f1.size[1] = 4;
    kh_f1.size[0] = 1;
    kh_f1.size[1] = 4;
    lh_f1.size[0] = 1;
    lh_f1.size[1] = 4;
    r_f1.data[0] = 'O';
    s_f1.data[0] = 'O';
    t_f1.data[0] = 'O';
    u_f1.data[0] = 'O';
    v_f1.data[0] = 'O';
    w_f1.data[0] = 'O';
    x_f1.data[0] = 'O';
    y_f1.data[0] = 'O';
    ab_f1.data[0] = 'O';
    bb_f1.data[0] = 'O';
    cb_f1.data[0] = 'O';
    db_f1.data[0] = 'O';
    eb_f1.data[0] = 'O';
    fb_f1.data[0] = 'O';
    gb_f1.data[0] = 'O';
    hb_f1.data[0] = 'O';
    ib_f1.data[0] = 'O';
    jb_f1.data[0] = 'O';
    kb_f1.data[0] = 'O';
    lb_f1.data[0] = 'O';
    mb_f1.data[0] = 'O';
    nb_f1.data[0] = 'O';
    ob_f1.data[0] = 'O';
    pb_f1.data[0] = 'O';
    qb_f1.data[0] = 'O';
    rb_f1.data[0] = 'O';
    sb_f1.data[0] = 'O';
    tb_f1.data[0] = 'O';
    ub_f1.data[0] = 'O';
    vb_f1.data[0] = 'O';
    wb_f1.data[0] = 'O';
    xb_f1.data[0] = 'O';
    yb_f1.data[0] = 'O';
    ac_f1.data[0] = 'O';
    bc_f1.data[0] = 'O';
    cc_f1.data[0] = 'O';
    dc_f1.data[0] = 'O';
    ec_f1.data[0] = 'O';
    fc_f1.data[0] = 'O';
    gc_f1.data[0] = 'O';
    hc_f1.data[0] = 'O';
    ic_f1.data[0] = 'O';
    jc_f1.data[0] = 'O';
    kc_f1.data[0] = 'O';
    lc_f1.data[0] = 'O';
    mc_f1.data[0] = 'O';
    nc_f1.data[0] = 'O';
    oc_f1.data[0] = 'O';
    pc_f1.data[0] = 'O';
    qc_f1.data[0] = 'O';
    rc_f1.data[0] = 'O';
    sc_f1.data[0] = 'O';
    tc_f1.data[0] = 'O';
    uc_f1.data[0] = 'O';
    vc_f1.data[0] = 'O';
    wc_f1.data[0] = 'O';
    xc_f1.data[0] = 'O';
    yc_f1.data[0] = 'O';
    ad_f1.data[0] = 'O';
    bd_f1.data[0] = 'O';
    cd_f1.data[0] = 'O';
    dd_f1.data[0] = 'O';
    ed_f1.data[0] = 'O';
    fd_f1.data[0] = 'O';
    gd_f1.data[0] = 'O';
    hd_f1.data[0] = 'O';
    id_f1.data[0] = 'O';
    jd_f1.data[0] = 'O';
    kd_f1.data[0] = 'O';
    ld_f1.data[0] = 'O';
    md_f1.data[0] = 'O';
    nd_f1.data[0] = 'O';
    od_f1.data[0] = 'O';
    pd_f1.data[0] = 'O';
    qd_f1.data[0] = 'O';
    rd_f1.data[0] = 'O';
    sd_f1.data[0] = 'O';
    td_f1.data[0] = 'O';
    ud_f1.data[0] = 'O';
    vd_f1.data[0] = 'O';
    wd_f1.data[0] = 'O';
    xd_f1.data[0] = 'O';
    yd_f1.data[0] = 'O';
    ae_f1.data[0] = 'O';
    be_f1.data[0] = 'O';
    ce_f1.data[0] = 'O';
    de_f1.data[0] = 'O';
    ee_f1.data[0] = 'O';
    fe_f1.data[0] = 'O';
    ge_f1.data[0] = 'O';
    he_f1.data[0] = 'O';
    ie_f1.data[0] = 'O';
    je_f1.data[0] = 'O';
    ke_f1.data[0] = 'O';
    le_f1.data[0] = 'O';
    me_f1.data[0] = 'O';
    ne_f1.data[0] = 'O';
    oe_f1.data[0] = 'O';
    pe_f1.data[0] = 'O';
    qe_f1.data[0] = 'O';
    re_f1.data[0] = 'O';
    se_f1.data[0] = 'O';
    te_f1.data[0] = 'O';
    ue_f1.data[0] = 'O';
    ve_f1.data[0] = 'O';
    we_f1.data[0] = 'O';
    xe_f1.data[0] = 'O';
    ye_f1.data[0] = 'O';
    af_f1.data[0] = 'O';
    bf_f1.data[0] = 'O';
    cf_f1.data[0] = 'O';
    df_f1.data[0] = 'O';
    ef_f1.data[0] = 'O';
    ff_f1.data[0] = 'O';
    gf_f1.data[0] = 'O';
    hf_f1.data[0] = 'O';
    if_f1.data[0] = 'O';
    jf_f1.data[0] = 'O';
    kf_f1.data[0] = 'O';
    lf_f1.data[0] = 'O';
    mf_f1.data[0] = 'O';
    nf_f1.data[0] = 'O';
    of_f1.data[0] = 'O';
    pf_f1.data[0] = 'O';
    qf_f1.data[0] = 'O';
    rf_f1.data[0] = 'O';
    sf_f1.data[0] = 'O';
    tf_f1.data[0] = 'O';
    uf_f1.data[0] = 'O';
    vf_f1.data[0] = 'O';
    wf_f1.data[0] = 'O';
    xf_f1.data[0] = 'O';
    yf_f1.data[0] = 'O';
    ag_f1.data[0] = 'O';
    bg_f1.data[0] = 'O';
    cg_f1.data[0] = 'O';
    dg_f1.data[0] = 'O';
    eg_f1.data[0] = 'O';
    fg_f1.data[0] = 'O';
    gg_f1.data[0] = 'O';
    hg_f1.data[0] = 'O';
    ig_f1.data[0] = 'O';
    jg_f1.data[0] = 'O';
    kg_f1.data[0] = 'O';
    lg_f1.data[0] = 'O';
    mg_f1.data[0] = 'O';
    ng_f1.data[0] = 'O';
    og_f1.data[0] = 'O';
    pg_f1.data[0] = 'O';
    qg_f1.data[0] = 'O';
    rg_f1.data[0] = 'O';
    sg_f1.data[0] = 'O';
    tg_f1.data[0] = 'O';
    ug_f1.data[0] = 'O';
    vg_f1.data[0] = 'O';
    wg_f1.data[0] = 'O';
    xg_f1.data[0] = 'O';
    yg_f1.data[0] = 'O';
    ah_f1.data[0] = 'O';
    bh_f1.data[0] = 'O';
    ch_f1.data[0] = 'O';
    dh_f1.data[0] = 'O';
    eh_f1.data[0] = 'O';
    fh_f1.data[0] = 'O';
    gh_f1.data[0] = 'O';
    hh_f1.data[0] = 'O';
    ih_f1.data[0] = 'O';
    jh_f1.data[0] = 'O';
    kh_f1.data[0] = 'O';
    lh_f1.data[0] = 'O';
    r_f1.data[1] = 'P';
    s_f1.data[1] = 'P';
    t_f1.data[1] = 'P';
    u_f1.data[1] = 'P';
    v_f1.data[1] = 'P';
    w_f1.data[1] = 'P';
    x_f1.data[1] = 'P';
    y_f1.data[1] = 'P';
    ab_f1.data[1] = 'P';
    bb_f1.data[1] = 'P';
    cb_f1.data[1] = 'P';
    db_f1.data[1] = 'P';
    eb_f1.data[1] = 'P';
    fb_f1.data[1] = 'P';
    gb_f1.data[1] = 'P';
    hb_f1.data[1] = 'P';
    ib_f1.data[1] = 'P';
    jb_f1.data[1] = 'P';
    kb_f1.data[1] = 'P';
    lb_f1.data[1] = 'P';
    mb_f1.data[1] = 'P';
    nb_f1.data[1] = 'P';
    ob_f1.data[1] = 'P';
    pb_f1.data[1] = 'P';
    qb_f1.data[1] = 'P';
    rb_f1.data[1] = 'P';
    sb_f1.data[1] = 'P';
    tb_f1.data[1] = 'P';
    ub_f1.data[1] = 'P';
    vb_f1.data[1] = 'P';
    wb_f1.data[1] = 'P';
    xb_f1.data[1] = 'P';
    yb_f1.data[1] = 'P';
    ac_f1.data[1] = 'P';
    bc_f1.data[1] = 'P';
    cc_f1.data[1] = 'P';
    dc_f1.data[1] = 'P';
    ec_f1.data[1] = 'P';
    fc_f1.data[1] = 'P';
    gc_f1.data[1] = 'P';
    hc_f1.data[1] = 'P';
    ic_f1.data[1] = 'P';
    jc_f1.data[1] = 'P';
    kc_f1.data[1] = 'P';
    lc_f1.data[1] = 'P';
    mc_f1.data[1] = 'P';
    nc_f1.data[1] = 'P';
    oc_f1.data[1] = 'P';
    pc_f1.data[1] = 'P';
    qc_f1.data[1] = 'P';
    rc_f1.data[1] = 'P';
    sc_f1.data[1] = 'P';
    tc_f1.data[1] = 'P';
    uc_f1.data[1] = 'P';
    vc_f1.data[1] = 'P';
    wc_f1.data[1] = 'P';
    xc_f1.data[1] = 'P';
    yc_f1.data[1] = 'P';
    ad_f1.data[1] = 'P';
    bd_f1.data[1] = 'P';
    cd_f1.data[1] = 'P';
    dd_f1.data[1] = 'P';
    ed_f1.data[1] = 'P';
    fd_f1.data[1] = 'P';
    gd_f1.data[1] = 'P';
    hd_f1.data[1] = 'P';
    id_f1.data[1] = 'P';
    jd_f1.data[1] = 'P';
    kd_f1.data[1] = 'P';
    ld_f1.data[1] = 'P';
    md_f1.data[1] = 'P';
    nd_f1.data[1] = 'P';
    od_f1.data[1] = 'P';
    pd_f1.data[1] = 'P';
    qd_f1.data[1] = 'P';
    rd_f1.data[1] = 'P';
    sd_f1.data[1] = 'P';
    td_f1.data[1] = 'P';
    ud_f1.data[1] = 'P';
    vd_f1.data[1] = 'P';
    wd_f1.data[1] = 'P';
    xd_f1.data[1] = 'P';
    yd_f1.data[1] = 'P';
    ae_f1.data[1] = 'P';
    be_f1.data[1] = 'P';
    ce_f1.data[1] = 'P';
    de_f1.data[1] = 'P';
    ee_f1.data[1] = 'P';
    fe_f1.data[1] = 'P';
    ge_f1.data[1] = 'P';
    he_f1.data[1] = 'P';
    ie_f1.data[1] = 'P';
    je_f1.data[1] = 'P';
    ke_f1.data[1] = 'P';
    le_f1.data[1] = 'P';
    me_f1.data[1] = 'P';
    ne_f1.data[1] = 'P';
    oe_f1.data[1] = 'P';
    pe_f1.data[1] = 'P';
    qe_f1.data[1] = 'P';
    re_f1.data[1] = 'P';
    se_f1.data[1] = 'P';
    te_f1.data[1] = 'P';
    ue_f1.data[1] = 'P';
    ve_f1.data[1] = 'P';
    we_f1.data[1] = 'P';
    xe_f1.data[1] = 'P';
    ye_f1.data[1] = 'P';
    af_f1.data[1] = 'P';
    bf_f1.data[1] = 'P';
    cf_f1.data[1] = 'P';
    df_f1.data[1] = 'P';
    ef_f1.data[1] = 'P';
    ff_f1.data[1] = 'P';
    gf_f1.data[1] = 'P';
    hf_f1.data[1] = 'P';
    if_f1.data[1] = 'P';
    jf_f1.data[1] = 'P';
    kf_f1.data[1] = 'P';
    lf_f1.data[1] = 'P';
    mf_f1.data[1] = 'P';
    nf_f1.data[1] = 'P';
    of_f1.data[1] = 'P';
    pf_f1.data[1] = 'P';
    qf_f1.data[1] = 'P';
    rf_f1.data[1] = 'P';
    sf_f1.data[1] = 'P';
    tf_f1.data[1] = 'P';
    uf_f1.data[1] = 'P';
    vf_f1.data[1] = 'P';
    wf_f1.data[1] = 'P';
    xf_f1.data[1] = 'P';
    yf_f1.data[1] = 'P';
    ag_f1.data[1] = 'P';
    bg_f1.data[1] = 'P';
    cg_f1.data[1] = 'P';
    dg_f1.data[1] = 'P';
    eg_f1.data[1] = 'P';
    fg_f1.data[1] = 'P';
    gg_f1.data[1] = 'P';
    hg_f1.data[1] = 'P';
    ig_f1.data[1] = 'P';
    jg_f1.data[1] = 'P';
    kg_f1.data[1] = 'P';
    lg_f1.data[1] = 'P';
    mg_f1.data[1] = 'P';
    ng_f1.data[1] = 'P';
    og_f1.data[1] = 'P';
    pg_f1.data[1] = 'P';
    qg_f1.data[1] = 'P';
    rg_f1.data[1] = 'P';
    sg_f1.data[1] = 'P';
    tg_f1.data[1] = 'P';
    ug_f1.data[1] = 'P';
    vg_f1.data[1] = 'P';
    wg_f1.data[1] = 'P';
    xg_f1.data[1] = 'P';
    yg_f1.data[1] = 'P';
    ah_f1.data[1] = 'P';
    bh_f1.data[1] = 'P';
    ch_f1.data[1] = 'P';
    dh_f1.data[1] = 'P';
    eh_f1.data[1] = 'P';
    fh_f1.data[1] = 'P';
    gh_f1.data[1] = 'P';
    hh_f1.data[1] = 'P';
    ih_f1.data[1] = 'P';
    jh_f1.data[1] = 'P';
    kh_f1.data[1] = 'P';
    lh_f1.data[1] = 'P';
    r_f1.data[2] = 'E';
    s_f1.data[2] = 'E';
    t_f1.data[2] = 'E';
    u_f1.data[2] = 'E';
    v_f1.data[2] = 'E';
    w_f1.data[2] = 'E';
    x_f1.data[2] = 'E';
    y_f1.data[2] = 'E';
    ab_f1.data[2] = 'E';
    bb_f1.data[2] = 'E';
    cb_f1.data[2] = 'E';
    db_f1.data[2] = 'E';
    eb_f1.data[2] = 'E';
    fb_f1.data[2] = 'E';
    gb_f1.data[2] = 'E';
    hb_f1.data[2] = 'E';
    ib_f1.data[2] = 'E';
    jb_f1.data[2] = 'E';
    kb_f1.data[2] = 'E';
    lb_f1.data[2] = 'E';
    mb_f1.data[2] = 'E';
    nb_f1.data[2] = 'E';
    ob_f1.data[2] = 'E';
    pb_f1.data[2] = 'E';
    qb_f1.data[2] = 'E';
    rb_f1.data[2] = 'E';
    sb_f1.data[2] = 'E';
    tb_f1.data[2] = 'E';
    ub_f1.data[2] = 'E';
    vb_f1.data[2] = 'E';
    wb_f1.data[2] = 'E';
    xb_f1.data[2] = 'E';
    yb_f1.data[2] = 'E';
    ac_f1.data[2] = 'E';
    bc_f1.data[2] = 'E';
    cc_f1.data[2] = 'E';
    dc_f1.data[2] = 'E';
    ec_f1.data[2] = 'E';
    fc_f1.data[2] = 'E';
    gc_f1.data[2] = 'E';
    hc_f1.data[2] = 'E';
    ic_f1.data[2] = 'E';
    jc_f1.data[2] = 'E';
    kc_f1.data[2] = 'E';
    lc_f1.data[2] = 'E';
    mc_f1.data[2] = 'E';
    nc_f1.data[2] = 'E';
    oc_f1.data[2] = 'E';
    pc_f1.data[2] = 'E';
    qc_f1.data[2] = 'E';
    rc_f1.data[2] = 'E';
    sc_f1.data[2] = 'E';
    tc_f1.data[2] = 'E';
    uc_f1.data[2] = 'E';
    vc_f1.data[2] = 'E';
    wc_f1.data[2] = 'E';
    xc_f1.data[2] = 'E';
    yc_f1.data[2] = 'E';
    ad_f1.data[2] = 'E';
    bd_f1.data[2] = 'E';
    cd_f1.data[2] = 'E';
    dd_f1.data[2] = 'E';
    ed_f1.data[2] = 'E';
    fd_f1.data[2] = 'E';
    gd_f1.data[2] = 'E';
    hd_f1.data[2] = 'E';
    id_f1.data[2] = 'E';
    jd_f1.data[2] = 'E';
    kd_f1.data[2] = 'E';
    ld_f1.data[2] = 'E';
    md_f1.data[2] = 'E';
    nd_f1.data[2] = 'E';
    od_f1.data[2] = 'E';
    pd_f1.data[2] = 'E';
    qd_f1.data[2] = 'E';
    rd_f1.data[2] = 'E';
    sd_f1.data[2] = 'E';
    td_f1.data[2] = 'E';
    ud_f1.data[2] = 'E';
    vd_f1.data[2] = 'E';
    wd_f1.data[2] = 'E';
    xd_f1.data[2] = 'E';
    yd_f1.data[2] = 'E';
    ae_f1.data[2] = 'E';
    be_f1.data[2] = 'E';
    ce_f1.data[2] = 'E';
    de_f1.data[2] = 'E';
    ee_f1.data[2] = 'E';
    fe_f1.data[2] = 'E';
    ge_f1.data[2] = 'E';
    he_f1.data[2] = 'E';
    ie_f1.data[2] = 'E';
    je_f1.data[2] = 'E';
    ke_f1.data[2] = 'E';
    le_f1.data[2] = 'E';
    me_f1.data[2] = 'E';
    ne_f1.data[2] = 'E';
    oe_f1.data[2] = 'E';
    pe_f1.data[2] = 'E';
    qe_f1.data[2] = 'E';
    re_f1.data[2] = 'E';
    se_f1.data[2] = 'E';
    te_f1.data[2] = 'E';
    ue_f1.data[2] = 'E';
    ve_f1.data[2] = 'E';
    we_f1.data[2] = 'E';
    xe_f1.data[2] = 'E';
    ye_f1.data[2] = 'E';
    af_f1.data[2] = 'E';
    bf_f1.data[2] = 'E';
    cf_f1.data[2] = 'E';
    df_f1.data[2] = 'E';
    ef_f1.data[2] = 'E';
    ff_f1.data[2] = 'E';
    gf_f1.data[2] = 'E';
    hf_f1.data[2] = 'E';
    if_f1.data[2] = 'E';
    jf_f1.data[2] = 'E';
    kf_f1.data[2] = 'E';
    lf_f1.data[2] = 'E';
    mf_f1.data[2] = 'E';
    nf_f1.data[2] = 'E';
    of_f1.data[2] = 'E';
    pf_f1.data[2] = 'E';
    qf_f1.data[2] = 'E';
    rf_f1.data[2] = 'E';
    sf_f1.data[2] = 'E';
    tf_f1.data[2] = 'E';
    uf_f1.data[2] = 'E';
    vf_f1.data[2] = 'E';
    wf_f1.data[2] = 'E';
    xf_f1.data[2] = 'E';
    yf_f1.data[2] = 'E';
    ag_f1.data[2] = 'E';
    bg_f1.data[2] = 'E';
    cg_f1.data[2] = 'E';
    dg_f1.data[2] = 'E';
    eg_f1.data[2] = 'E';
    fg_f1.data[2] = 'E';
    gg_f1.data[2] = 'E';
    hg_f1.data[2] = 'E';
    ig_f1.data[2] = 'E';
    jg_f1.data[2] = 'E';
    kg_f1.data[2] = 'E';
    lg_f1.data[2] = 'E';
    mg_f1.data[2] = 'E';
    ng_f1.data[2] = 'E';
    og_f1.data[2] = 'E';
    pg_f1.data[2] = 'E';
    qg_f1.data[2] = 'E';
    rg_f1.data[2] = 'E';
    sg_f1.data[2] = 'E';
    tg_f1.data[2] = 'E';
    ug_f1.data[2] = 'E';
    vg_f1.data[2] = 'E';
    wg_f1.data[2] = 'E';
    xg_f1.data[2] = 'E';
    yg_f1.data[2] = 'E';
    ah_f1.data[2] = 'E';
    bh_f1.data[2] = 'E';
    ch_f1.data[2] = 'E';
    dh_f1.data[2] = 'E';
    eh_f1.data[2] = 'E';
    fh_f1.data[2] = 'E';
    gh_f1.data[2] = 'E';
    hh_f1.data[2] = 'E';
    ih_f1.data[2] = 'E';
    jh_f1.data[2] = 'E';
    kh_f1.data[2] = 'E';
    lh_f1.data[2] = 'E';
    r_f1.data[3] = 'N';
    s_f1.data[3] = 'N';
    t_f1.data[3] = 'N';
    u_f1.data[3] = 'N';
    v_f1.data[3] = 'N';
    w_f1.data[3] = 'N';
    x_f1.data[3] = 'N';
    y_f1.data[3] = 'N';
    ab_f1.data[3] = 'N';
    bb_f1.data[3] = 'N';
    cb_f1.data[3] = 'N';
    db_f1.data[3] = 'N';
    eb_f1.data[3] = 'N';
    fb_f1.data[3] = 'N';
    gb_f1.data[3] = 'N';
    hb_f1.data[3] = 'N';
    ib_f1.data[3] = 'N';
    jb_f1.data[3] = 'N';
    kb_f1.data[3] = 'N';
    lb_f1.data[3] = 'N';
    mb_f1.data[3] = 'N';
    nb_f1.data[3] = 'N';
    ob_f1.data[3] = 'N';
    pb_f1.data[3] = 'N';
    qb_f1.data[3] = 'N';
    rb_f1.data[3] = 'N';
    sb_f1.data[3] = 'N';
    tb_f1.data[3] = 'N';
    ub_f1.data[3] = 'N';
    vb_f1.data[3] = 'N';
    wb_f1.data[3] = 'N';
    xb_f1.data[3] = 'N';
    yb_f1.data[3] = 'N';
    ac_f1.data[3] = 'N';
    bc_f1.data[3] = 'N';
    cc_f1.data[3] = 'N';
    dc_f1.data[3] = 'N';
    ec_f1.data[3] = 'N';
    fc_f1.data[3] = 'N';
    gc_f1.data[3] = 'N';
    hc_f1.data[3] = 'N';
    ic_f1.data[3] = 'N';
    jc_f1.data[3] = 'N';
    kc_f1.data[3] = 'N';
    lc_f1.data[3] = 'N';
    mc_f1.data[3] = 'N';
    nc_f1.data[3] = 'N';
    oc_f1.data[3] = 'N';
    pc_f1.data[3] = 'N';
    qc_f1.data[3] = 'N';
    rc_f1.data[3] = 'N';
    sc_f1.data[3] = 'N';
    tc_f1.data[3] = 'N';
    uc_f1.data[3] = 'N';
    vc_f1.data[3] = 'N';
    wc_f1.data[3] = 'N';
    xc_f1.data[3] = 'N';
    yc_f1.data[3] = 'N';
    ad_f1.data[3] = 'N';
    bd_f1.data[3] = 'N';
    cd_f1.data[3] = 'N';
    dd_f1.data[3] = 'N';
    ed_f1.data[3] = 'N';
    fd_f1.data[3] = 'N';
    gd_f1.data[3] = 'N';
    hd_f1.data[3] = 'N';
    id_f1.data[3] = 'N';
    jd_f1.data[3] = 'N';
    kd_f1.data[3] = 'N';
    ld_f1.data[3] = 'N';
    md_f1.data[3] = 'N';
    nd_f1.data[3] = 'N';
    od_f1.data[3] = 'N';
    pd_f1.data[3] = 'N';
    qd_f1.data[3] = 'N';
    rd_f1.data[3] = 'N';
    sd_f1.data[3] = 'N';
    td_f1.data[3] = 'N';
    ud_f1.data[3] = 'N';
    vd_f1.data[3] = 'N';
    wd_f1.data[3] = 'N';
    xd_f1.data[3] = 'N';
    yd_f1.data[3] = 'N';
    ae_f1.data[3] = 'N';
    be_f1.data[3] = 'N';
    ce_f1.data[3] = 'N';
    de_f1.data[3] = 'N';
    ee_f1.data[3] = 'N';
    fe_f1.data[3] = 'N';
    ge_f1.data[3] = 'N';
    he_f1.data[3] = 'N';
    ie_f1.data[3] = 'N';
    je_f1.data[3] = 'N';
    ke_f1.data[3] = 'N';
    le_f1.data[3] = 'N';
    me_f1.data[3] = 'N';
    ne_f1.data[3] = 'N';
    oe_f1.data[3] = 'N';
    pe_f1.data[3] = 'N';
    qe_f1.data[3] = 'N';
    re_f1.data[3] = 'N';
    se_f1.data[3] = 'N';
    te_f1.data[3] = 'N';
    ue_f1.data[3] = 'N';
    ve_f1.data[3] = 'N';
    we_f1.data[3] = 'N';
    xe_f1.data[3] = 'N';
    ye_f1.data[3] = 'N';
    af_f1.data[3] = 'N';
    bf_f1.data[3] = 'N';
    cf_f1.data[3] = 'N';
    df_f1.data[3] = 'N';
    ef_f1.data[3] = 'N';
    ff_f1.data[3] = 'N';
    gf_f1.data[3] = 'N';
    hf_f1.data[3] = 'N';
    if_f1.data[3] = 'N';
    jf_f1.data[3] = 'N';
    kf_f1.data[3] = 'N';
    lf_f1.data[3] = 'N';
    mf_f1.data[3] = 'N';
    nf_f1.data[3] = 'N';
    of_f1.data[3] = 'N';
    pf_f1.data[3] = 'N';
    qf_f1.data[3] = 'N';
    rf_f1.data[3] = 'N';
    sf_f1.data[3] = 'N';
    tf_f1.data[3] = 'N';
    uf_f1.data[3] = 'N';
    vf_f1.data[3] = 'N';
    wf_f1.data[3] = 'N';
    xf_f1.data[3] = 'N';
    yf_f1.data[3] = 'N';
    ag_f1.data[3] = 'N';
    bg_f1.data[3] = 'N';
    cg_f1.data[3] = 'N';
    dg_f1.data[3] = 'N';
    eg_f1.data[3] = 'N';
    fg_f1.data[3] = 'N';
    gg_f1.data[3] = 'N';
    hg_f1.data[3] = 'N';
    ig_f1.data[3] = 'N';
    jg_f1.data[3] = 'N';
    kg_f1.data[3] = 'N';
    lg_f1.data[3] = 'N';
    mg_f1.data[3] = 'N';
    ng_f1.data[3] = 'N';
    og_f1.data[3] = 'N';
    pg_f1.data[3] = 'N';
    qg_f1.data[3] = 'N';
    rg_f1.data[3] = 'N';
    sg_f1.data[3] = 'N';
    tg_f1.data[3] = 'N';
    ug_f1.data[3] = 'N';
    vg_f1.data[3] = 'N';
    wg_f1.data[3] = 'N';
    xg_f1.data[3] = 'N';
    yg_f1.data[3] = 'N';
    ah_f1.data[3] = 'N';
    bh_f1.data[3] = 'N';
    ch_f1.data[3] = 'N';
    dh_f1.data[3] = 'N';
    eh_f1.data[3] = 'N';
    fh_f1.data[3] = 'N';
    gh_f1.data[3] = 'N';
    hh_f1.data[3] = 'N';
    ih_f1.data[3] = 'N';
    jh_f1.data[3] = 'N';
    kh_f1.data[3] = 'N';
    lh_f1.data[3] = 'N';
    mh_f1.size[0] = 1;
    mh_f1.size[1] = 8;
    for (int32_T i{0}; i < 8; i++) {
      mh_f1.data[i] = cv13[i];
    }

    nh_f1.size[0] = 1;
    nh_f1.size[1] = 11;
    for (int32_T i{0}; i < 11; i++) {
      nh_f1.data[i] = cv14[i];
    }

    oh_f1.size[0] = 1;
    oh_f1.size[1] = 17;
    for (int32_T i{0}; i < 17; i++) {
      oh_f1.data[i] = cv15[i];
    }

    ph_f1.size[0] = 1;
    ph_f1.size[1] = 8;
    for (int32_T i{0}; i < 8; i++) {
      ph_f1.data[i] = cv16[i];
    }

    qh_f1.size[0] = 1;
    qh_f1.size[1] = 5;
    for (int32_T i{0}; i < 5; i++) {
      qh_f1.data[i] = cv17[i];
    }

    rh_f1.size[0] = 1;
    rh_f1.size[1] = 4;
    rh_f1.data[0] = 'I';
    rh_f1.data[1] = 'r';
    rh_f1.data[2] = 'a';
    rh_f1.data[3] = 'q';
    sh_f1.size[0] = 1;
    sh_f1.size[1] = 9;
    for (int32_T i{0}; i < 9; i++) {
      sh_f1.data[i] = cv18[i];
    }

    th_f1.size[0] = 1;
    th_f1.size[1] = 11;
    for (int32_T i{0}; i < 11; i++) {
      th_f1.data[i] = cv19[i];
    }

    uh_f1.size[0] = 1;
    uh_f1.size[1] = 20;
    for (int32_T i{0}; i < 20; i++) {
      uh_f1.data[i] = cv20[i];
    }

    vh_f1.size[0] = 1;
    vh_f1.size[1] = 6;
    for (int32_T i{0}; i < 6; i++) {
      vh_f1.data[i] = cv21[i];
    }

    wh_f1.size[0] = 1;
    wh_f1.size[1] = 5;
    for (int32_T i{0}; i < 5; i++) {
      wh_f1.data[i] = cv22[i];
    }

    xh_f1.size[0] = 1;
    xh_f1.size[1] = 7;
    yh_f1.size[0] = 1;
    yh_f1.size[1] = 7;
    ai_f1.size[0] = 1;
    ai_f1.size[1] = 7;
    for (int32_T i{0}; i < 7; i++) {
      xh_f1.data[i] = cv23[i];
      yh_f1.data[i] = cv24[i];
      ai_f1.data[i] = cv25[i];
    }

    bi_f1.size[0] = 1;
    bi_f1.size[1] = 10;
    for (int32_T i{0}; i < 10; i++) {
      bi_f1.data[i] = cv26[i];
    }

    ci_f1.size[0] = 1;
    ci_f1.size[1] = 6;
    di_f1.size[0] = 1;
    di_f1.size[1] = 6;
    for (int32_T i{0}; i < 6; i++) {
      ci_f1.data[i] = cv27[i];
      di_f1.data[i] = cv28[i];
    }

    ei_f1.size[0] = 1;
    ei_f1.size[1] = 5;
    for (int32_T i{0}; i < 5; i++) {
      ei_f1.data[i] = cv29[i];
    }

    fi_f1.size[0] = 1;
    fi_f1.size[1] = 7;
    for (int32_T i{0}; i < 7; i++) {
      fi_f1.data[i] = cv30[i];
    }

    gi_f1.size[0] = 1;
    gi_f1.size[1] = 10;
    for (int32_T i{0}; i < 10; i++) {
      gi_f1.data[i] = cv31[i];
    }

    hi_f1.size[0] = 1;
    hi_f1.size[1] = 7;
    for (int32_T i{0}; i < 7; i++) {
      hi_f1.data[i] = cv32[i];
    }

    ii_f1.size[0] = 1;
    ii_f1.size[1] = 12;
    for (int32_T i{0}; i < 12; i++) {
      ii_f1.data[i] = cv33[i];
    }

    ji_f1.size[0] = 1;
    ji_f1.size[1] = 41;
    for (int32_T i{0}; i < 41; i++) {
      ji_f1.data[i] = cv34[i];
    }

    ki_f1.size[0] = 1;
    ki_f1.size[1] = 10;
    for (int32_T i{0}; i < 10; i++) {
      ki_f1.data[i] = cv35[i];
    }

    li_f1.size[0] = 1;
    li_f1.size[1] = 11;
    for (int32_T i{0}; i < 11; i++) {
      li_f1.data[i] = cv36[i];
    }

    mi_f1.size[0] = 1;
    mi_f1.size[1] = 6;
    ni_f1.size[0] = 1;
    ni_f1.size[1] = 6;
    for (int32_T i{0}; i < 6; i++) {
      mi_f1.data[i] = cv37[i];
      ni_f1.data[i] = cv38[i];
    }

    oi_f1.size[0] = 1;
    oi_f1.size[1] = 10;
    for (int32_T i{0}; i < 10; i++) {
      oi_f1.data[i] = cv39[i];
    }

    pi_f1.size[0] = 1;
    pi_f1.size[1] = 23;
    for (int32_T i{0}; i < 23; i++) {
      pi_f1.data[i] = cv40[i];
    }

    qi_f1.size[0] = 1;
    qi_f1.size[1] = 5;
    for (int32_T i{0}; i < 5; i++) {
      qi_f1.data[i] = cv41[i];
    }

    ri_f1.size[0] = 1;
    ri_f1.size[1] = 15;
    for (int32_T i{0}; i < 15; i++) {
      ri_f1.data[i] = cv42[i];
    }

    si_f1.size[0] = 1;
    si_f1.size[1] = 10;
    for (int32_T i{0}; i < 10; i++) {
      si_f1.data[i] = cv43[i];
    }

    ti_f1.size[0] = 1;
    ti_f1.size[1] = 7;
    ui_f1.size[0] = 1;
    ui_f1.size[1] = 7;
    vi_f1.size[0] = 1;
    vi_f1.size[1] = 7;
    for (int32_T i{0}; i < 7; i++) {
      ti_f1.data[i] = cv44[i];
      ui_f1.data[i] = cv45[i];
      vi_f1.data[i] = cv46[i];
    }

    wi_f1.size[0] = 1;
    wi_f1.size[1] = 22;
    for (int32_T i{0}; i < 22; i++) {
      wi_f1.data[i] = cv47[i];
    }

    xi_f1.size[0] = 1;
    xi_f1.size[1] = 7;
    for (int32_T i{0}; i < 7; i++) {
      xi_f1.data[i] = cv48[i];
    }

    yi_f1.size[0] = 1;
    yi_f1.size[1] = 10;
    for (int32_T i{0}; i < 10; i++) {
      yi_f1.data[i] = cv49[i];
    }

    aj_f1.size[0] = 1;
    aj_f1.size[1] = 7;
    bj_f1.size[0] = 1;
    bj_f1.size[1] = 7;
    for (int32_T i{0}; i < 7; i++) {
      aj_f1.data[i] = cv50[i];
      bj_f1.data[i] = cv51[i];
    }

    cj_f1.size[0] = 1;
    cj_f1.size[1] = 13;
    for (int32_T i{0}; i < 13; i++) {
      cj_f1.data[i] = cv52[i];
    }

    dj_f1.size[0] = 1;
    dj_f1.size[1] = 14;
    for (int32_T i{0}; i < 14; i++) {
      dj_f1.data[i] = cv53[i];
    }

    ej_f1.size[0] = 1;
    ej_f1.size[1] = 6;
    for (int32_T i{0}; i < 6; i++) {
      ej_f1.data[i] = cv54[i];
    }

    fj_f1.size[0] = 1;
    fj_f1.size[1] = 5;
    for (int32_T i{0}; i < 5; i++) {
      fj_f1.data[i] = cv55[i];
    }

    gj_f1.size[0] = 1;
    gj_f1.size[1] = 8;
    hj_f1.size[0] = 1;
    hj_f1.size[1] = 8;
    for (int32_T i{0}; i < 8; i++) {
      gj_f1.data[i] = cv56[i];
      hj_f1.data[i] = cv57[i];
    }

    ij_f1.size[0] = 1;
    ij_f1.size[1] = 7;
    for (int32_T i{0}; i < 7; i++) {
      ij_f1.data[i] = cv58[i];
    }

    jj_f1.size[0] = 1;
    jj_f1.size[1] = 8;
    for (int32_T i{0}; i < 8; i++) {
      jj_f1.data[i] = cv59[i];
    }

    kj_f1.size[0] = 1;
    kj_f1.size[1] = 6;
    lj_f1.size[0] = 1;
    lj_f1.size[1] = 6;
    for (int32_T i{0}; i < 6; i++) {
      kj_f1.data[i] = cv60[i];
      lj_f1.data[i] = cv61[i];
    }

    mj_f1.size[0] = 1;
    mj_f1.size[1] = 11;
    for (int32_T i{0}; i < 11; i++) {
      mj_f1.data[i] = cv62[i];
    }

    nj_f1.size[0] = 1;
    nj_f1.size[1] = 10;
    for (int32_T i{0}; i < 10; i++) {
      nj_f1.data[i] = cv63[i];
    }

    oj_f1.size[0] = 1;
    oj_f1.size[1] = 9;
    for (int32_T i{0}; i < 9; i++) {
      oj_f1.data[i] = cv64[i];
    }

    pj_f1.size[0] = 1;
    pj_f1.size[1] = 6;
    for (int32_T i{0}; i < 6; i++) {
      pj_f1.data[i] = cv65[i];
    }

    qj_f1.size[0] = 1;
    qj_f1.size[1] = 5;
    for (int32_T i{0}; i < 5; i++) {
      qj_f1.data[i] = cv66[i];
    }

    rj_f1.size[0] = 1;
    rj_f1.size[1] = 7;
    sj_f1.size[0] = 1;
    sj_f1.size[1] = 7;
    for (int32_T i{0}; i < 7; i++) {
      rj_f1.data[i] = cv67[i];
      sj_f1.data[i] = cv68[i];
    }

    tj_f1.size[0] = 1;
    tj_f1.size[1] = 6;
    for (int32_T i{0}; i < 6; i++) {
      tj_f1.data[i] = cv69[i];
    }

    uj_f1.size[0] = 1;
    uj_f1.size[1] = 7;
    for (int32_T i{0}; i < 7; i++) {
      uj_f1.data[i] = cv70[i];
    }

    vj_f1.size[0] = 1;
    vj_f1.size[1] = 6;
    for (int32_T i{0}; i < 6; i++) {
      vj_f1.data[i] = cv71[i];
    }

    wj_f1.size[0] = 1;
    wj_f1.size[1] = 7;
    xj_f1.size[0] = 1;
    xj_f1.size[1] = 7;
    for (int32_T i{0}; i < 7; i++) {
      wj_f1.data[i] = cv72[i];
      xj_f1.data[i] = cv73[i];
    }

    yj_f1.size[0] = 1;
    yj_f1.size[1] = 14;
    for (int32_T i{0}; i < 14; i++) {
      yj_f1.data[i] = cv74[i];
    }

    ak_f1.size[0] = 1;
    ak_f1.size[1] = 7;
    for (int32_T i{0}; i < 7; i++) {
      ak_f1.data[i] = cv75[i];
    }

    bk_f1.size[0] = 1;
    bk_f1.size[1] = 6;
    for (int32_T i{0}; i < 6; i++) {
      bk_f1.data[i] = cv76[i];
    }

    ck_f1.size[0] = 1;
    ck_f1.size[1] = 8;
    for (int32_T i{0}; i < 8; i++) {
      ck_f1.data[i] = cv77[i];
    }

    dk_f1.size[0] = 1;
    dk_f1.size[1] = 7;
    ek_f1.size[0] = 1;
    ek_f1.size[1] = 7;
    for (int32_T i{0}; i < 7; i++) {
      dk_f1.data[i] = cv78[i];
      ek_f1.data[i] = cv79[i];
    }

    fk_f1.size[0] = 1;
    fk_f1.size[1] = 13;
    for (int32_T i{0}; i < 13; i++) {
      fk_f1.data[i] = cv80[i];
    }

    // 'user_class_lookup_index:40' value = table{index + 1};
    value_size[0] = 1;
    rv[0].f1 = f1;
    rv[1].f1 = b_f1;
    rv[2].f1 = c_f1;
    rv[3].f1 = d_f1;
    rv[4].f1 = e_f1;
    rv[5].f1 = f_f1;
    rv[6].f1 = g_f1;
    rv[7].f1 = h_f1;
    rv[8].f1 = i_f1;
    rv[9].f1 = j_f1;
    rv[10].f1 = k_f1;
    rv[11].f1 = l_f1;
    rv[12].f1 = m_f1;
    rv[13].f1 = n_f1;
    rv[14].f1 = o_f1;
    rv[15].f1 = p_f1;
    rv[16].f1 = q_f1;
    rv[17].f1 = r_f1;
    rv[18].f1 = s_f1;
    rv[19].f1 = t_f1;
    rv[20].f1 = u_f1;
    rv[21].f1 = v_f1;
    rv[22].f1 = w_f1;
    rv[23].f1 = x_f1;
    rv[24].f1 = y_f1;
    rv[25].f1 = ab_f1;
    rv[26].f1 = bb_f1;
    rv[27].f1 = cb_f1;
    rv[28].f1 = db_f1;
    rv[29].f1 = eb_f1;
    rv[30].f1 = fb_f1;
    rv[31].f1 = gb_f1;
    rv[32].f1 = hb_f1;
    rv[33].f1 = ib_f1;
    rv[34].f1 = jb_f1;
    rv[35].f1 = kb_f1;
    rv[36].f1 = lb_f1;
    rv[37].f1 = mb_f1;
    rv[38].f1 = nb_f1;
    rv[39].f1 = ob_f1;
    rv[40].f1 = pb_f1;
    rv[41].f1 = qb_f1;
    rv[42].f1 = rb_f1;
    rv[43].f1 = sb_f1;
    rv[44].f1 = tb_f1;
    rv[45].f1 = ub_f1;
    rv[46].f1 = vb_f1;
    rv[47].f1 = wb_f1;
    rv[48].f1 = xb_f1;
    rv[49].f1 = yb_f1;
    rv[50].f1 = ac_f1;
    rv[51].f1 = bc_f1;
    rv[52].f1 = cc_f1;
    rv[53].f1 = dc_f1;
    rv[54].f1 = ec_f1;
    rv[55].f1 = fc_f1;
    rv[56].f1 = gc_f1;
    rv[57].f1 = hc_f1;
    rv[58].f1 = ic_f1;
    rv[59].f1 = jc_f1;
    rv[60].f1 = kc_f1;
    rv[61].f1 = lc_f1;
    rv[62].f1 = mc_f1;
    rv[63].f1 = nc_f1;
    rv[64].f1 = oc_f1;
    rv[65].f1 = pc_f1;
    rv[66].f1 = qc_f1;
    rv[67].f1 = rc_f1;
    rv[68].f1 = sc_f1;
    rv[69].f1 = tc_f1;
    rv[70].f1 = uc_f1;
    rv[71].f1 = vc_f1;
    rv[72].f1 = wc_f1;
    rv[73].f1 = xc_f1;
    rv[74].f1 = yc_f1;
    rv[75].f1 = ad_f1;
    rv[76].f1 = bd_f1;
    rv[77].f1 = cd_f1;
    rv[78].f1 = dd_f1;
    rv[79].f1 = ed_f1;
    rv[80].f1 = fd_f1;
    rv[81].f1 = gd_f1;
    rv[82].f1 = hd_f1;
    rv[83].f1 = id_f1;
    rv[84].f1 = jd_f1;
    rv[85].f1 = kd_f1;
    rv[86].f1 = ld_f1;
    rv[87].f1 = md_f1;
    rv[88].f1 = nd_f1;
    rv[89].f1 = od_f1;
    rv[90].f1 = pd_f1;
    rv[91].f1 = qd_f1;
    rv[92].f1 = rd_f1;
    rv[93].f1 = sd_f1;
    rv[94].f1 = td_f1;
    rv[95].f1 = ud_f1;
    rv[96].f1 = vd_f1;
    rv[97].f1 = wd_f1;
    rv[98].f1 = xd_f1;
    rv[99].f1 = yd_f1;
    rv[100].f1 = ae_f1;
    rv[101].f1 = be_f1;
    rv[102].f1 = ce_f1;
    rv[103].f1 = de_f1;
    rv[104].f1 = ee_f1;
    rv[105].f1 = fe_f1;
    rv[106].f1 = ge_f1;
    rv[107].f1 = he_f1;
    rv[108].f1 = ie_f1;
    rv[109].f1 = je_f1;
    rv[110].f1 = ke_f1;
    rv[111].f1 = le_f1;
    rv[112].f1 = me_f1;
    rv[113].f1 = ne_f1;
    rv[114].f1 = oe_f1;
    rv[115].f1 = pe_f1;
    rv[116].f1 = qe_f1;
    rv[117].f1 = re_f1;
    rv[118].f1 = se_f1;
    rv[119].f1 = te_f1;
    rv[120].f1 = ue_f1;
    rv[121].f1 = ve_f1;
    rv[122].f1 = we_f1;
    rv[123].f1 = xe_f1;
    rv[124].f1 = ye_f1;
    rv[125].f1 = af_f1;
    rv[126].f1 = bf_f1;
    rv[127].f1 = cf_f1;
    rv[128].f1 = df_f1;
    rv[129].f1 = ef_f1;
    rv[130].f1 = ff_f1;
    rv[131].f1 = gf_f1;
    rv[132].f1 = hf_f1;
    rv[133].f1 = if_f1;
    rv[134].f1 = jf_f1;
    rv[135].f1 = kf_f1;
    rv[136].f1 = lf_f1;
    rv[137].f1 = mf_f1;
    rv[138].f1 = nf_f1;
    rv[139].f1 = of_f1;
    rv[140].f1 = pf_f1;
    rv[141].f1 = qf_f1;
    rv[142].f1 = rf_f1;
    rv[143].f1 = sf_f1;
    rv[144].f1 = tf_f1;
    rv[145].f1 = uf_f1;
    rv[146].f1 = vf_f1;
    rv[147].f1 = wf_f1;
    rv[148].f1 = xf_f1;
    rv[149].f1 = yf_f1;
    rv[150].f1 = ag_f1;
    rv[151].f1 = bg_f1;
    rv[152].f1 = cg_f1;
    rv[153].f1 = dg_f1;
    rv[154].f1 = eg_f1;
    rv[155].f1 = fg_f1;
    rv[156].f1 = gg_f1;
    rv[157].f1 = hg_f1;
    rv[158].f1 = ig_f1;
    rv[159].f1 = jg_f1;
    rv[160].f1 = kg_f1;
    rv[161].f1 = lg_f1;
    rv[162].f1 = mg_f1;
    rv[163].f1 = ng_f1;
    rv[164].f1 = og_f1;
    rv[165].f1 = pg_f1;
    rv[166].f1 = qg_f1;
    rv[167].f1 = rg_f1;
    rv[168].f1 = sg_f1;
    rv[169].f1 = tg_f1;
    rv[170].f1 = ug_f1;
    rv[171].f1 = vg_f1;
    rv[172].f1 = wg_f1;
    rv[173].f1 = xg_f1;
    rv[174].f1 = yg_f1;
    rv[175].f1 = ah_f1;
    rv[176].f1 = bh_f1;
    rv[177].f1 = ch_f1;
    rv[178].f1 = dh_f1;
    rv[179].f1 = eh_f1;
    rv[180].f1 = fh_f1;
    rv[181].f1 = gh_f1;
    rv[182].f1 = hh_f1;
    rv[183].f1 = ih_f1;
    rv[184].f1 = jh_f1;
    rv[185].f1 = kh_f1;
    rv[186].f1 = lh_f1;
    rv[187].f1 = mh_f1;
    rv[188].f1 = nh_f1;
    rv[189].f1 = oh_f1;
    rv[190].f1 = ph_f1;
    rv[191].f1 = qh_f1;
    rv[192].f1 = rh_f1;
    rv[193].f1 = sh_f1;
    rv[194].f1 = th_f1;
    rv[195].f1 = uh_f1;
    rv[196].f1 = vh_f1;
    rv[197].f1 = wh_f1;
    rv[198].f1 = xh_f1;
    rv[199].f1 = yh_f1;
    rv[200].f1 = ai_f1;
    rv[201].f1 = bi_f1;
    rv[202].f1 = ci_f1;
    rv[203].f1 = di_f1;
    rv[204].f1 = ei_f1;
    rv[205].f1 = fi_f1;
    rv[206].f1 = gi_f1;
    rv[207].f1 = hi_f1;
    rv[208].f1 = ii_f1;
    rv[209].f1 = ji_f1;
    rv[210].f1 = ki_f1;
    rv[211].f1 = li_f1;
    rv[212].f1 = mi_f1;
    rv[213].f1 = ni_f1;
    rv[214].f1 = oi_f1;
    rv[215].f1 = pi_f1;
    rv[216].f1 = qi_f1;
    rv[217].f1 = ri_f1;
    rv[218].f1 = si_f1;
    rv[219].f1 = ti_f1;
    rv[220].f1 = ui_f1;
    rv[221].f1 = vi_f1;
    rv[222].f1 = wi_f1;
    rv[223].f1 = xi_f1;
    rv[224].f1 = yi_f1;
    rv[225].f1 = aj_f1;
    rv[226].f1 = bj_f1;
    rv[227].f1 = cj_f1;
    rv[228].f1 = dj_f1;
    rv[229].f1 = ej_f1;
    rv[230].f1 = fj_f1;
    rv[231].f1 = gj_f1;
    rv[232].f1 = hj_f1;
    rv[233].f1 = ij_f1;
    rv[234].f1 = jj_f1;
    rv[235].f1 = kj_f1;
    rv[236].f1 = lj_f1;
    rv[237].f1 = mj_f1;
    rv[238].f1 = nj_f1;
    rv[239].f1 = oj_f1;
    rv[240].f1 = pj_f1;
    rv[241].f1 = qj_f1;
    rv[242].f1 = rj_f1;
    rv[243].f1 = sj_f1;
    rv[244].f1 = tj_f1;
    rv[245].f1 = uj_f1;
    rv[246].f1 = vj_f1;
    rv[247].f1 = wj_f1;
    rv[248].f1 = xj_f1;
    rv[249].f1 = yj_f1;
    rv[250].f1 = ak_f1;
    rv[251].f1 = bk_f1;
    rv[252].f1 = ck_f1;
    rv[253].f1 = dk_f1;
    rv[254].f1 = ek_f1;
    rv[255].f1 = fk_f1;
    qY = b_index + 1ULL;
    if (b_index + 1ULL < b_index) {
      qY = MAX_uint64_T;
    }

    value_size[1] = rv[static_cast<int32_T>(qY) - 1].f1.size[1];
    rv[0].f1 = f1;
    rv[1].f1 = b_f1;
    rv[2].f1 = c_f1;
    rv[3].f1 = d_f1;
    rv[4].f1 = e_f1;
    rv[5].f1 = f_f1;
    rv[6].f1 = g_f1;
    rv[7].f1 = h_f1;
    rv[8].f1 = i_f1;
    rv[9].f1 = j_f1;
    rv[10].f1 = k_f1;
    rv[11].f1 = l_f1;
    rv[12].f1 = m_f1;
    rv[13].f1 = n_f1;
    rv[14].f1 = o_f1;
    rv[15].f1 = p_f1;
    rv[16].f1 = q_f1;
    rv[17].f1 = r_f1;
    rv[18].f1 = s_f1;
    rv[19].f1 = t_f1;
    rv[20].f1 = u_f1;
    rv[21].f1 = v_f1;
    rv[22].f1 = w_f1;
    rv[23].f1 = x_f1;
    rv[24].f1 = y_f1;
    rv[25].f1 = ab_f1;
    rv[26].f1 = bb_f1;
    rv[27].f1 = cb_f1;
    rv[28].f1 = db_f1;
    rv[29].f1 = eb_f1;
    rv[30].f1 = fb_f1;
    rv[31].f1 = gb_f1;
    rv[32].f1 = hb_f1;
    rv[33].f1 = ib_f1;
    rv[34].f1 = jb_f1;
    rv[35].f1 = kb_f1;
    rv[36].f1 = lb_f1;
    rv[37].f1 = mb_f1;
    rv[38].f1 = nb_f1;
    rv[39].f1 = ob_f1;
    rv[40].f1 = pb_f1;
    rv[41].f1 = qb_f1;
    rv[42].f1 = rb_f1;
    rv[43].f1 = sb_f1;
    rv[44].f1 = tb_f1;
    rv[45].f1 = ub_f1;
    rv[46].f1 = vb_f1;
    rv[47].f1 = wb_f1;
    rv[48].f1 = xb_f1;
    rv[49].f1 = yb_f1;
    rv[50].f1 = ac_f1;
    rv[51].f1 = bc_f1;
    rv[52].f1 = cc_f1;
    rv[53].f1 = dc_f1;
    rv[54].f1 = ec_f1;
    rv[55].f1 = fc_f1;
    rv[56].f1 = gc_f1;
    rv[57].f1 = hc_f1;
    rv[58].f1 = ic_f1;
    rv[59].f1 = jc_f1;
    rv[60].f1 = kc_f1;
    rv[61].f1 = lc_f1;
    rv[62].f1 = mc_f1;
    rv[63].f1 = nc_f1;
    rv[64].f1 = oc_f1;
    rv[65].f1 = pc_f1;
    rv[66].f1 = qc_f1;
    rv[67].f1 = rc_f1;
    rv[68].f1 = sc_f1;
    rv[69].f1 = tc_f1;
    rv[70].f1 = uc_f1;
    rv[71].f1 = vc_f1;
    rv[72].f1 = wc_f1;
    rv[73].f1 = xc_f1;
    rv[74].f1 = yc_f1;
    rv[75].f1 = ad_f1;
    rv[76].f1 = bd_f1;
    rv[77].f1 = cd_f1;
    rv[78].f1 = dd_f1;
    rv[79].f1 = ed_f1;
    rv[80].f1 = fd_f1;
    rv[81].f1 = gd_f1;
    rv[82].f1 = hd_f1;
    rv[83].f1 = id_f1;
    rv[84].f1 = jd_f1;
    rv[85].f1 = kd_f1;
    rv[86].f1 = ld_f1;
    rv[87].f1 = md_f1;
    rv[88].f1 = nd_f1;
    rv[89].f1 = od_f1;
    rv[90].f1 = pd_f1;
    rv[91].f1 = qd_f1;
    rv[92].f1 = rd_f1;
    rv[93].f1 = sd_f1;
    rv[94].f1 = td_f1;
    rv[95].f1 = ud_f1;
    rv[96].f1 = vd_f1;
    rv[97].f1 = wd_f1;
    rv[98].f1 = xd_f1;
    rv[99].f1 = yd_f1;
    rv[100].f1 = ae_f1;
    rv[101].f1 = be_f1;
    rv[102].f1 = ce_f1;
    rv[103].f1 = de_f1;
    rv[104].f1 = ee_f1;
    rv[105].f1 = fe_f1;
    rv[106].f1 = ge_f1;
    rv[107].f1 = he_f1;
    rv[108].f1 = ie_f1;
    rv[109].f1 = je_f1;
    rv[110].f1 = ke_f1;
    rv[111].f1 = le_f1;
    rv[112].f1 = me_f1;
    rv[113].f1 = ne_f1;
    rv[114].f1 = oe_f1;
    rv[115].f1 = pe_f1;
    rv[116].f1 = qe_f1;
    rv[117].f1 = re_f1;
    rv[118].f1 = se_f1;
    rv[119].f1 = te_f1;
    rv[120].f1 = ue_f1;
    rv[121].f1 = ve_f1;
    rv[122].f1 = we_f1;
    rv[123].f1 = xe_f1;
    rv[124].f1 = ye_f1;
    rv[125].f1 = af_f1;
    rv[126].f1 = bf_f1;
    rv[127].f1 = cf_f1;
    rv[128].f1 = df_f1;
    rv[129].f1 = ef_f1;
    rv[130].f1 = ff_f1;
    rv[131].f1 = gf_f1;
    rv[132].f1 = hf_f1;
    rv[133].f1 = if_f1;
    rv[134].f1 = jf_f1;
    rv[135].f1 = kf_f1;
    rv[136].f1 = lf_f1;
    rv[137].f1 = mf_f1;
    rv[138].f1 = nf_f1;
    rv[139].f1 = of_f1;
    rv[140].f1 = pf_f1;
    rv[141].f1 = qf_f1;
    rv[142].f1 = rf_f1;
    rv[143].f1 = sf_f1;
    rv[144].f1 = tf_f1;
    rv[145].f1 = uf_f1;
    rv[146].f1 = vf_f1;
    rv[147].f1 = wf_f1;
    rv[148].f1 = xf_f1;
    rv[149].f1 = yf_f1;
    rv[150].f1 = ag_f1;
    rv[151].f1 = bg_f1;
    rv[152].f1 = cg_f1;
    rv[153].f1 = dg_f1;
    rv[154].f1 = eg_f1;
    rv[155].f1 = fg_f1;
    rv[156].f1 = gg_f1;
    rv[157].f1 = hg_f1;
    rv[158].f1 = ig_f1;
    rv[159].f1 = jg_f1;
    rv[160].f1 = kg_f1;
    rv[161].f1 = lg_f1;
    rv[162].f1 = mg_f1;
    rv[163].f1 = ng_f1;
    rv[164].f1 = og_f1;
    rv[165].f1 = pg_f1;
    rv[166].f1 = qg_f1;
    rv[167].f1 = rg_f1;
    rv[168].f1 = sg_f1;
    rv[169].f1 = tg_f1;
    rv[170].f1 = ug_f1;
    rv[171].f1 = vg_f1;
    rv[172].f1 = wg_f1;
    rv[173].f1 = xg_f1;
    rv[174].f1 = yg_f1;
    rv[175].f1 = ah_f1;
    rv[176].f1 = bh_f1;
    rv[177].f1 = ch_f1;
    rv[178].f1 = dh_f1;
    rv[179].f1 = eh_f1;
    rv[180].f1 = fh_f1;
    rv[181].f1 = gh_f1;
    rv[182].f1 = hh_f1;
    rv[183].f1 = ih_f1;
    rv[184].f1 = jh_f1;
    rv[185].f1 = kh_f1;
    rv[186].f1 = lh_f1;
    rv[187].f1 = mh_f1;
    rv[188].f1 = nh_f1;
    rv[189].f1 = oh_f1;
    rv[190].f1 = ph_f1;
    rv[191].f1 = qh_f1;
    rv[192].f1 = rh_f1;
    rv[193].f1 = sh_f1;
    rv[194].f1 = th_f1;
    rv[195].f1 = uh_f1;
    rv[196].f1 = vh_f1;
    rv[197].f1 = wh_f1;
    rv[198].f1 = xh_f1;
    rv[199].f1 = yh_f1;
    rv[200].f1 = ai_f1;
    rv[201].f1 = bi_f1;
    rv[202].f1 = ci_f1;
    rv[203].f1 = di_f1;
    rv[204].f1 = ei_f1;
    rv[205].f1 = fi_f1;
    rv[206].f1 = gi_f1;
    rv[207].f1 = hi_f1;
    rv[208].f1 = ii_f1;
    rv[209].f1 = ji_f1;
    rv[210].f1 = ki_f1;
    rv[211].f1 = li_f1;
    rv[212].f1 = mi_f1;
    rv[213].f1 = ni_f1;
    rv[214].f1 = oi_f1;
    rv[215].f1 = pi_f1;
    rv[216].f1 = qi_f1;
    rv[217].f1 = ri_f1;
    rv[218].f1 = si_f1;
    rv[219].f1 = ti_f1;
    rv[220].f1 = ui_f1;
    rv[221].f1 = vi_f1;
    rv[222].f1 = wi_f1;
    rv[223].f1 = xi_f1;
    rv[224].f1 = yi_f1;
    rv[225].f1 = aj_f1;
    rv[226].f1 = bj_f1;
    rv[227].f1 = cj_f1;
    rv[228].f1 = dj_f1;
    rv[229].f1 = ej_f1;
    rv[230].f1 = fj_f1;
    rv[231].f1 = gj_f1;
    rv[232].f1 = hj_f1;
    rv[233].f1 = ij_f1;
    rv[234].f1 = jj_f1;
    rv[235].f1 = kj_f1;
    rv[236].f1 = lj_f1;
    rv[237].f1 = mj_f1;
    rv[238].f1 = nj_f1;
    rv[239].f1 = oj_f1;
    rv[240].f1 = pj_f1;
    rv[241].f1 = qj_f1;
    rv[242].f1 = rj_f1;
    rv[243].f1 = sj_f1;
    rv[244].f1 = tj_f1;
    rv[245].f1 = uj_f1;
    rv[246].f1 = vj_f1;
    rv[247].f1 = wj_f1;
    rv[248].f1 = xj_f1;
    rv[249].f1 = yj_f1;
    rv[250].f1 = ak_f1;
    rv[251].f1 = bk_f1;
    rv[252].f1 = ck_f1;
    rv[253].f1 = dk_f1;
    rv[254].f1 = ek_f1;
    rv[255].f1 = fk_f1;
    rv1[0].f1 = f1;
    rv1[1].f1 = b_f1;
    rv1[2].f1 = c_f1;
    rv1[3].f1 = d_f1;
    rv1[4].f1 = e_f1;
    rv1[5].f1 = f_f1;
    rv1[6].f1 = g_f1;
    rv1[7].f1 = h_f1;
    rv1[8].f1 = i_f1;
    rv1[9].f1 = j_f1;
    rv1[10].f1 = k_f1;
    rv1[11].f1 = l_f1;
    rv1[12].f1 = m_f1;
    rv1[13].f1 = n_f1;
    rv1[14].f1 = o_f1;
    rv1[15].f1 = p_f1;
    rv1[16].f1 = q_f1;
    rv1[17].f1 = r_f1;
    rv1[18].f1 = s_f1;
    rv1[19].f1 = t_f1;
    rv1[20].f1 = u_f1;
    rv1[21].f1 = v_f1;
    rv1[22].f1 = w_f1;
    rv1[23].f1 = x_f1;
    rv1[24].f1 = y_f1;
    rv1[25].f1 = ab_f1;
    rv1[26].f1 = bb_f1;
    rv1[27].f1 = cb_f1;
    rv1[28].f1 = db_f1;
    rv1[29].f1 = eb_f1;
    rv1[30].f1 = fb_f1;
    rv1[31].f1 = gb_f1;
    rv1[32].f1 = hb_f1;
    rv1[33].f1 = ib_f1;
    rv1[34].f1 = jb_f1;
    rv1[35].f1 = kb_f1;
    rv1[36].f1 = lb_f1;
    rv1[37].f1 = mb_f1;
    rv1[38].f1 = nb_f1;
    rv1[39].f1 = ob_f1;
    rv1[40].f1 = pb_f1;
    rv1[41].f1 = qb_f1;
    rv1[42].f1 = rb_f1;
    rv1[43].f1 = sb_f1;
    rv1[44].f1 = tb_f1;
    rv1[45].f1 = ub_f1;
    rv1[46].f1 = vb_f1;
    rv1[47].f1 = wb_f1;
    rv1[48].f1 = xb_f1;
    rv1[49].f1 = yb_f1;
    rv1[50].f1 = ac_f1;
    rv1[51].f1 = bc_f1;
    rv1[52].f1 = cc_f1;
    rv1[53].f1 = dc_f1;
    rv1[54].f1 = ec_f1;
    rv1[55].f1 = fc_f1;
    rv1[56].f1 = gc_f1;
    rv1[57].f1 = hc_f1;
    rv1[58].f1 = ic_f1;
    rv1[59].f1 = jc_f1;
    rv1[60].f1 = kc_f1;
    rv1[61].f1 = lc_f1;
    rv1[62].f1 = mc_f1;
    rv1[63].f1 = nc_f1;
    rv1[64].f1 = oc_f1;
    rv1[65].f1 = pc_f1;
    rv1[66].f1 = qc_f1;
    rv1[67].f1 = rc_f1;
    rv1[68].f1 = sc_f1;
    rv1[69].f1 = tc_f1;
    rv1[70].f1 = uc_f1;
    rv1[71].f1 = vc_f1;
    rv1[72].f1 = wc_f1;
    rv1[73].f1 = xc_f1;
    rv1[74].f1 = yc_f1;
    rv1[75].f1 = ad_f1;
    rv1[76].f1 = bd_f1;
    rv1[77].f1 = cd_f1;
    rv1[78].f1 = dd_f1;
    rv1[79].f1 = ed_f1;
    rv1[80].f1 = fd_f1;
    rv1[81].f1 = gd_f1;
    rv1[82].f1 = hd_f1;
    rv1[83].f1 = id_f1;
    rv1[84].f1 = jd_f1;
    rv1[85].f1 = kd_f1;
    rv1[86].f1 = ld_f1;
    rv1[87].f1 = md_f1;
    rv1[88].f1 = nd_f1;
    rv1[89].f1 = od_f1;
    rv1[90].f1 = pd_f1;
    rv1[91].f1 = qd_f1;
    rv1[92].f1 = rd_f1;
    rv1[93].f1 = sd_f1;
    rv1[94].f1 = td_f1;
    rv1[95].f1 = ud_f1;
    rv1[96].f1 = vd_f1;
    rv1[97].f1 = wd_f1;
    rv1[98].f1 = xd_f1;
    rv1[99].f1 = yd_f1;
    rv1[100].f1 = ae_f1;
    rv1[101].f1 = be_f1;
    rv1[102].f1 = ce_f1;
    rv1[103].f1 = de_f1;
    rv1[104].f1 = ee_f1;
    rv1[105].f1 = fe_f1;
    rv1[106].f1 = ge_f1;
    rv1[107].f1 = he_f1;
    rv1[108].f1 = ie_f1;
    rv1[109].f1 = je_f1;
    rv1[110].f1 = ke_f1;
    rv1[111].f1 = le_f1;
    rv1[112].f1 = me_f1;
    rv1[113].f1 = ne_f1;
    rv1[114].f1 = oe_f1;
    rv1[115].f1 = pe_f1;
    rv1[116].f1 = qe_f1;
    rv1[117].f1 = re_f1;
    rv1[118].f1 = se_f1;
    rv1[119].f1 = te_f1;
    rv1[120].f1 = ue_f1;
    rv1[121].f1 = ve_f1;
    rv1[122].f1 = we_f1;
    rv1[123].f1 = xe_f1;
    rv1[124].f1 = ye_f1;
    rv1[125].f1 = af_f1;
    rv1[126].f1 = bf_f1;
    rv1[127].f1 = cf_f1;
    rv1[128].f1 = df_f1;
    rv1[129].f1 = ef_f1;
    rv1[130].f1 = ff_f1;
    rv1[131].f1 = gf_f1;
    rv1[132].f1 = hf_f1;
    rv1[133].f1 = if_f1;
    rv1[134].f1 = jf_f1;
    rv1[135].f1 = kf_f1;
    rv1[136].f1 = lf_f1;
    rv1[137].f1 = mf_f1;
    rv1[138].f1 = nf_f1;
    rv1[139].f1 = of_f1;
    rv1[140].f1 = pf_f1;
    rv1[141].f1 = qf_f1;
    rv1[142].f1 = rf_f1;
    rv1[143].f1 = sf_f1;
    rv1[144].f1 = tf_f1;
    rv1[145].f1 = uf_f1;
    rv1[146].f1 = vf_f1;
    rv1[147].f1 = wf_f1;
    rv1[148].f1 = xf_f1;
    rv1[149].f1 = yf_f1;
    rv1[150].f1 = ag_f1;
    rv1[151].f1 = bg_f1;
    rv1[152].f1 = cg_f1;
    rv1[153].f1 = dg_f1;
    rv1[154].f1 = eg_f1;
    rv1[155].f1 = fg_f1;
    rv1[156].f1 = gg_f1;
    rv1[157].f1 = hg_f1;
    rv1[158].f1 = ig_f1;
    rv1[159].f1 = jg_f1;
    rv1[160].f1 = kg_f1;
    rv1[161].f1 = lg_f1;
    rv1[162].f1 = mg_f1;
    rv1[163].f1 = ng_f1;
    rv1[164].f1 = og_f1;
    rv1[165].f1 = pg_f1;
    rv1[166].f1 = qg_f1;
    rv1[167].f1 = rg_f1;
    rv1[168].f1 = sg_f1;
    rv1[169].f1 = tg_f1;
    rv1[170].f1 = ug_f1;
    rv1[171].f1 = vg_f1;
    rv1[172].f1 = wg_f1;
    rv1[173].f1 = xg_f1;
    rv1[174].f1 = yg_f1;
    rv1[175].f1 = ah_f1;
    rv1[176].f1 = bh_f1;
    rv1[177].f1 = ch_f1;
    rv1[178].f1 = dh_f1;
    rv1[179].f1 = eh_f1;
    rv1[180].f1 = fh_f1;
    rv1[181].f1 = gh_f1;
    rv1[182].f1 = hh_f1;
    rv1[183].f1 = ih_f1;
    rv1[184].f1 = jh_f1;
    rv1[185].f1 = kh_f1;
    rv1[186].f1 = lh_f1;
    rv1[187].f1 = mh_f1;
    rv1[188].f1 = nh_f1;
    rv1[189].f1 = oh_f1;
    rv1[190].f1 = ph_f1;
    rv1[191].f1 = qh_f1;
    rv1[192].f1 = rh_f1;
    rv1[193].f1 = sh_f1;
    rv1[194].f1 = th_f1;
    rv1[195].f1 = uh_f1;
    rv1[196].f1 = vh_f1;
    rv1[197].f1 = wh_f1;
    rv1[198].f1 = xh_f1;
    rv1[199].f1 = yh_f1;
    rv1[200].f1 = ai_f1;
    rv1[201].f1 = bi_f1;
    rv1[202].f1 = ci_f1;
    rv1[203].f1 = di_f1;
    rv1[204].f1 = ei_f1;
    rv1[205].f1 = fi_f1;
    rv1[206].f1 = gi_f1;
    rv1[207].f1 = hi_f1;
    rv1[208].f1 = ii_f1;
    rv1[209].f1 = ji_f1;
    rv1[210].f1 = ki_f1;
    rv1[211].f1 = li_f1;
    rv1[212].f1 = mi_f1;
    rv1[213].f1 = ni_f1;
    rv1[214].f1 = oi_f1;
    rv1[215].f1 = pi_f1;
    rv1[216].f1 = qi_f1;
    rv1[217].f1 = ri_f1;
    rv1[218].f1 = si_f1;
    rv1[219].f1 = ti_f1;
    rv1[220].f1 = ui_f1;
    rv1[221].f1 = vi_f1;
    rv1[222].f1 = wi_f1;
    rv1[223].f1 = xi_f1;
    rv1[224].f1 = yi_f1;
    rv1[225].f1 = aj_f1;
    rv1[226].f1 = bj_f1;
    rv1[227].f1 = cj_f1;
    rv1[228].f1 = dj_f1;
    rv1[229].f1 = ej_f1;
    rv1[230].f1 = fj_f1;
    rv1[231].f1 = gj_f1;
    rv1[232].f1 = hj_f1;
    rv1[233].f1 = ij_f1;
    rv1[234].f1 = jj_f1;
    rv1[235].f1 = kj_f1;
    rv1[236].f1 = lj_f1;
    rv1[237].f1 = mj_f1;
    rv1[238].f1 = nj_f1;
    rv1[239].f1 = oj_f1;
    rv1[240].f1 = pj_f1;
    rv1[241].f1 = qj_f1;
    rv1[242].f1 = rj_f1;
    rv1[243].f1 = sj_f1;
    rv1[244].f1 = tj_f1;
    rv1[245].f1 = uj_f1;
    rv1[246].f1 = vj_f1;
    rv1[247].f1 = wj_f1;
    rv1[248].f1 = xj_f1;
    rv1[249].f1 = yj_f1;
    rv1[250].f1 = ak_f1;
    rv1[251].f1 = bk_f1;
    rv1[252].f1 = ck_f1;
    rv1[253].f1 = dk_f1;
    rv1[254].f1 = ek_f1;
    rv1[255].f1 = fk_f1;
    qY = b_index + 1ULL;
    if (b_index + 1ULL < b_index) {
      qY = MAX_uint64_T;
    }

    loop_ub = rv1[static_cast<int32_T>(qY) - 1].f1.size[1];
    for (int32_T i{0}; i < loop_ub; i++) {
      qY = b_index + 1ULL;
      if (b_index + 1ULL < b_index) {
        qY = MAX_uint64_T;
      }

      value_data[i] = rv[static_cast<int32_T>(qY) - 1].f1.data[i];
    }
  }

  //
  // function bband = wake_up_tones(ts, nsample, bwidth)
  static void wake_up_tones(real_T ts, real_T nsample, real_T bwidth, ::coder::
    array<creal_T, 1U> &bband)
  {
    ::coder::array<creal_T, 1U> r;
    ::coder::array<real_T, 2U> y;
    ::coder::array<real_T, 1U> b_y;
    ::coder::array<real_T, 1U> c_y;
    ::coder::array<real_T, 1U> cw_win;
    ::coder::array<real_T, 1U> tcw;
    real_T d;
    real_T delta1;
    int32_T i;
    int32_T i1;
    int32_T nx;
    int32_T trivialwin;
    uint32_T u;
    int8_T w_data;

    // Modified from original JANUS 3.0.5 code for compatibility with Matlab
    // Coder and extensible time/frequency scaling SWiG
    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Author: Unknown                                                        |
    // +------------------------------------------------------------------------+
    //
    //  WAKE_UP_TONES Generate three wake-up tones.
    //
    //  Inputs:
    //     ts      Sampling period (s).
    //     nsample Number of samples.
    //     bwidth  Bandwidth (Hz).
    //
    //  Outputs:
    //     bband   Complex baseband signal.
    //
    // 'wake_up_tones:39' tcw = (0 : ts : (nsample - 1) * ts)';
    delta1 = (nsample - 1.0) * ts;
    if (std::isnan(ts) || std::isnan(delta1)) {
      y.set_size(1, 1);
      y[0] = rtNaN;
    } else if ((ts == 0.0) || ((delta1 < 0.0) && (ts > 0.0))) {
      y.set_size(1, 0);
    } else if (std::isinf(delta1) && std::isinf(ts)) {
      y.set_size(1, 1);
      y[0] = rtNaN;
    } else if (std::isinf(ts)) {
      y.set_size(1, 1);
      y[0] = 0.0;
    } else if (std::floor(ts) == ts) {
      nx = static_cast<int32_T>(delta1 / ts);
      y.set_size(1, nx + 1);
      for (i = 0; i <= nx; i++) {
        y[i] = ts * static_cast<real_T>(i);
      }
    } else {
      coder::eml_float_colon(ts, delta1, y);
    }

    tcw.set_size(y.size(1));
    nx = y.size(1);
    for (i = 0; i < nx; i++) {
      tcw[i] = y[i];
    }

    // 'wake_up_tones:40' lcw = length(tcw);
    // 'wake_up_tones:41' cw_win = tukeywin(lcw, 0.05);
    nx = 1;
    w_data = 0;
    trivialwin = 0;
    if (tcw.size(0) == 0) {
      nx = 0;
      trivialwin = 1;
    } else if (tcw.size(0) == 1) {
      w_data = 1;
      trivialwin = 1;
    }

    cw_win.set_size(nx);
    for (i = 0; i < nx; i++) {
      cw_win[0] = w_data;
    }

    if (trivialwin == 0) {
      int32_T x;
      y.set_size(1, tcw.size(0));
      if (tcw.size(0) >= 1) {
        y[tcw.size(0) - 1] = 1.0;
        if (y.size(1) >= 2) {
          y[0] = 0.0;
          if (y.size(1) >= 3) {
            delta1 = 1.0 / (static_cast<real_T>(y.size(1)) - 1.0);
            i = y.size(1);
            for (trivialwin = 0; trivialwin <= i - 3; trivialwin++) {
              y[trivialwin + 1] = (static_cast<real_T>(trivialwin) + 1.0) *
                delta1;
            }
          }
        }
      }

      cw_win.set_size(y.size(1));
      nx = y.size(1);
      for (i = 0; i < nx; i++) {
        cw_win[i] = y[i];
      }

      x = static_cast<int32_T>(std::floor(0.025 * (static_cast<real_T>(tcw.size
        (0)) - 1.0)));
      delta1 = static_cast<real_T>((tcw.size(0) - x) - 1) + 1.0;
      if (x + 1 < 1) {
        nx = -1;
      } else {
        nx = x;
      }

      if (delta1 > cw_win.size(0)) {
        i = 0;
        trivialwin = 0;
      } else {
        i = static_cast<int32_T>(delta1) - 1;
        trivialwin = cw_win.size(0);
      }

      b_y.set_size(nx + 1);
      for (i1 = 0; i1 <= nx; i1++) {
        b_y[i1] = 125.66370614359172 * (cw_win[i1] - 0.025);
      }

      nx = trivialwin - i;
      c_y.set_size(nx);
      for (trivialwin = 0; trivialwin < nx; trivialwin++) {
        c_y[trivialwin] = 125.66370614359172 * ((cw_win[i + trivialwin] - 1.0) +
          0.025);
      }

      nx = b_y.size(0);
      for (trivialwin = 0; trivialwin < nx; trivialwin++) {
        b_y[trivialwin] = std::cos(b_y[trivialwin]);
      }

      nx = c_y.size(0);
      for (trivialwin = 0; trivialwin < nx; trivialwin++) {
        c_y[trivialwin] = std::cos(c_y[trivialwin]);
      }

      nx = static_cast<int32_T>((delta1 - (static_cast<real_T>(x) + 1.0)) - 1.0);
      cw_win.set_size((b_y.size(0) + nx) + c_y.size(0));
      trivialwin = b_y.size(0);
      for (i = 0; i < trivialwin; i++) {
        cw_win[i] = (b_y[i] + 1.0) / 2.0;
      }

      for (i = 0; i < nx; i++) {
        cw_win[i + b_y.size(0)] = 1.0;
      }

      trivialwin = c_y.size(0);
      for (i = 0; i < trivialwin; i++) {
        cw_win[(i + b_y.size(0)) + nx] = (c_y[i] + 1.0) / 2.0;
      }
    }

    // 'wake_up_tones:42' bband = complex(zeros(lcw * 3, 1));
    bband.set_size(tcw.size(0) * 3);
    nx = tcw.size(0) * 3;
    for (i = 0; i < nx; i++) {
      bband[i].re = 0.0;
      bband[i].im = 0.0;
    }

    // 'wake_up_tones:43' bband(1 : lcw) = cw_win .* exp(i * (2 * pi * (-bwidth / 2) .* tcw + pi / 2));
    delta1 = 6.2831853071795862 * (-bwidth / 2.0);
    r.set_size(tcw.size(0));
    nx = tcw.size(0);
    for (i = 0; i < nx; i++) {
      d = delta1 * tcw[i] + 1.5707963267948966;
      r[i].re = d * 0.0;
      r[i].im = d;
    }

    nx = r.size(0);
    for (trivialwin = 0; trivialwin < nx; trivialwin++) {
      if (r[trivialwin].im == 0.0) {
        r[trivialwin].re = std::exp(r[trivialwin].re);
        r[trivialwin].im = 0.0;
      } else if (std::isinf(r[trivialwin].im) && std::isinf(r[trivialwin].re) &&
                 (r[trivialwin].re < 0.0)) {
        r[trivialwin].re = 0.0;
        r[trivialwin].im = 0.0;
      } else {
        delta1 = std::exp(r[trivialwin].re / 2.0);
        r[trivialwin].re = delta1 * (delta1 * std::cos(r[trivialwin].im));
        r[trivialwin].im = delta1 * (delta1 * std::sin(r[trivialwin].im));
      }
    }

    if (tcw.size(0) < 1) {
      nx = 0;
    } else {
      nx = tcw.size(0);
    }

    if (cw_win.size(0) == r.size(0)) {
      for (i = 0; i < nx; i++) {
        bband[i].re = cw_win[i] * r[i].re;
        bband[i].im = cw_win[i] * r[i].im;
      }
    } else {
      binary_expand_op(bband, nx, cw_win, r);
    }

    // 'wake_up_tones:44' bband(1 * lcw + 1 : 2 * lcw) = cw_win * i;
    u = static_cast<uint32_T>(tcw.size(0)) << 1;
    if (static_cast<uint32_T>(tcw.size(0)) + 1U > u) {
      i = 0;
      trivialwin = 0;
    } else {
      i = tcw.size(0);
      trivialwin = static_cast<int32_T>(u);
    }

    nx = trivialwin - i;
    for (trivialwin = 0; trivialwin < nx; trivialwin++) {
      i1 = i + trivialwin;
      bband[i1].re = cw_win[trivialwin] * 0.0;
      bband[i1].im = cw_win[trivialwin];
    }

    // 'wake_up_tones:45' bband(2 * lcw + 1 : 3 * lcw) = cw_win .* exp(i * (2 * pi * (bwidth / 2) .* tcw + pi / 2));
    delta1 = 6.2831853071795862 * (bwidth / 2.0);
    r.set_size(tcw.size(0));
    nx = tcw.size(0);
    for (i = 0; i < nx; i++) {
      d = delta1 * tcw[i] + 1.5707963267948966;
      r[i].re = d * 0.0;
      r[i].im = d;
    }

    nx = r.size(0);
    for (trivialwin = 0; trivialwin < nx; trivialwin++) {
      if (r[trivialwin].im == 0.0) {
        r[trivialwin].re = std::exp(r[trivialwin].re);
        r[trivialwin].im = 0.0;
      } else if (std::isinf(r[trivialwin].im) && std::isinf(r[trivialwin].re) &&
                 (r[trivialwin].re < 0.0)) {
        r[trivialwin].re = 0.0;
        r[trivialwin].im = 0.0;
      } else {
        delta1 = std::exp(r[trivialwin].re / 2.0);
        r[trivialwin].re = delta1 * (delta1 * std::cos(r[trivialwin].im));
        r[trivialwin].im = delta1 * (delta1 * std::sin(r[trivialwin].im));
      }
    }

    u = (static_cast<uint32_T>(tcw.size(0)) << 1) + 1U;
    delta1 = 3.0 * static_cast<real_T>(tcw.size(0));
    if (u > delta1) {
      i = 0;
      trivialwin = 0;
    } else {
      i = static_cast<int32_T>(u) - 1;
      trivialwin = static_cast<int32_T>(delta1);
    }

    if (cw_win.size(0) == r.size(0)) {
      nx = trivialwin - i;
      for (trivialwin = 0; trivialwin < nx; trivialwin++) {
        i1 = i + trivialwin;
        bband[i1].re = cw_win[trivialwin] * r[trivialwin].re;
        bband[i1].im = cw_win[trivialwin] * r[trivialwin].im;
      }
    } else {
      binary_expand_op(bband, i, trivialwin, cw_win, r);
    }
  }

  SWiG_tx_class::SWiG_tx_class()
  {
    verbose = 1.0;
  }

  SWiG_tx_class::~SWiG_tx_class()
    = default;

  //
  // function [passband, bband, pkt, state] = swig_tx(Rate_value, Fc_value, params)
  void SWiG_tx_class::swig_tx(real_T Rate_value, real_T Fc_value, const
    struct0_T *params, ::coder::array<real_T, 2U> &passband, ::coder::array<
    creal_T, 1U> &bband, struct1_T *pkt, struct2_T *state)
  {
    static const char_T pset_name[27]{ 'S', 'W', 'i', 'G', ' ', 't', 'i', 'm',
      'e', '/', 'f', 'r', 'e', 'q', 'u', 'e', 'n', 'c', 'y', ' ', 's', 'c', 'a',
      'l', 'i', 'n', 'g' };

    ::coder::array<creal_T, 1U> b_bband;
    ::coder::array<real_T, 2U> t;
    ::coder::array<real_T, 2U> y;
    ::coder::array<real_T, 1U> pad;
    real_T m;
    int32_T Fsw;
    int32_T loop_ub;
    int32_T pset_cfreq;

    // +------------------------------------------------------------------------+
    // | SWiG extended is a simple, robust, open standard signalling method for |
    // | underwater communications. Based on JANUS physical layer |
    // +------------------------------------------------------------------------+
    // Modified from original JANUS 3.0.5 code for compatibility with Matlab
    // Coder and extensible time/frequency scaling SWiG
    // +------------------------------------------------------------------------+
    // | JANUS is a simple, robust, open standard signalling method for         |
    // | underwater communications. See <http://www.januswiki.org> for details. |
    // +------------------------------------------------------------------------+
    // | Example software implementations provided by STO CMRE are subject to   |
    // | Copyright (C) 2008-2018 STO Centre for Maritime Research and           |
    // | Experimentation (CMRE)                                                 |
    // |                                                                        |
    // | This is free software: you can redistribute it and/or modify it        |
    // | under the terms of the GNU General Public License version 3 as         |
    // | published by the Free Software Foundation.                             |
    // |                                                                        |
    // | This program is distributed in the hope that it will be useful, but    |
    // | WITHOUT ANY WARRANTY; without even the implied warranty of FITNESS     |
    // | FOR A PARTICULAR PURPOSE. See the GNU General Public License for       |
    // | more details.                                                          |
    // |                                                                        |
    // | You should have received a copy of the GNU General Public License      |
    // | along with this program. If not, see <http://www.gnu.org/licenses/>.   |
    // +------------------------------------------------------------------------+
    // | Author: Ricardo Martins                                                |
    // +------------------------------------------------------------------------+
    //
    //  SIMPLE_TX Simplified interface to generate a JANUS waveform.
    //
    //  Inputs:
    //     pset_file  Parameter set file (CSV).
    //     pset_id    Parameter set Id.
    //     varargin   Optional parameters.
    //
    //  Outputs:
    //     pkt        Encoded packet.
    //     state      Structure with info from the encoder.
    //
    //  See also TX, PARAMETERS.
    //
    // 'swig_tx:49' if (nargin < 2)
    //  Load parameter set configuration.
    // 'swig_tx:55' pset.id = 1;
    // required
    // 'swig_tx:56' pset.name = 'SWiG time/frequency scaling';
    // 'swig_tx:57' pset.prim_q = 13;
    // 'swig_tx:58' pset.prim_a = 2;
    // 'swig_tx:59' pset.nblock = 12;
    // time-frequency scaling
    // 'swig_tx:62' switch Fc_value
    switch (static_cast<int32_T>(Fc_value)) {
     case 0:
      // 'swig_tx:63' case 0
      // 'swig_tx:64' pset.cfreq = 18795;
      pset_cfreq = 18795;
      break;

     case 1:
      // 'swig_tx:65' case 1
      // 'swig_tx:66' pset.cfreq = 19640;
      pset_cfreq = 19640;
      break;

     case 2:
      // 'swig_tx:67' case 2
      // 'swig_tx:68' pset.cfreq = 20485;
      pset_cfreq = 20485;
      break;

     case 3:
      // 'swig_tx:69' case 3
      // 'swig_tx:70' pset.cfreq = 21330;
      pset_cfreq = 21330;
      break;

     case 4:
      // 'swig_tx:71' case 4
      // 'swig_tx:72' pset.cfreq = 23465;
      pset_cfreq = 23465;
      break;

     case 5:
      // 'swig_tx:73' case 5
      // 'swig_tx:74' pset.cfreq = 24310;
      pset_cfreq = 24310;
      break;

     case 6:
      // 'swig_tx:75' case 6
      // 'swig_tx:76' pset.cfreq = 25155;
      pset_cfreq = 25155;
      break;

     case 7:
      // 'swig_tx:77' case 7
      // 'swig_tx:78' pset.cfreq = 26000;
      pset_cfreq = 26000;
      break;

     default:
      // 'swig_tx:79' otherwise
      // 'swig_tx:80' pset.cfreq = 26000;
      pset_cfreq = 26000;
      break;
    }

    // 'swig_tx:83' switch Rate_value
    switch (static_cast<int32_T>(Rate_value)) {
     case 0:
      // 'swig_tx:84' case 0
      // 'swig_tx:85' Fsw = 65;
      Fsw = 65;
      break;

     case 1:
      // 'swig_tx:86' case 1
      // 'swig_tx:87' Fsw = 130;
      Fsw = 130;
      break;

     case 2:
      // 'swig_tx:88' case 2
      // 'swig_tx:89' Fsw = 195;
      Fsw = 195;
      break;

     case 3:
      // 'swig_tx:90' case 3
      // 'swig_tx:91' Fsw = 260;
      Fsw = 260;
      break;

     case 4:
      // 'swig_tx:92' case 4
      // 'swig_tx:93' Fsw = 325;
      Fsw = 325;
      break;

     case 5:
      // 'swig_tx:94' case 5
      // 'swig_tx:95' Fsw = 390;
      Fsw = 390;
      break;

     case 6:
      // 'swig_tx:96' case 6
      // 'swig_tx:97' Fsw = 455;
      Fsw = 455;
      break;

     case 7:
      // 'swig_tx:98' case 7
      // 'swig_tx:99' Fsw = 520;
      Fsw = 520;
      break;

     default:
      // 'swig_tx:100' otherwise
      // 'swig_tx:101' Fsw = 520;
      Fsw = 520;
      break;
    }

    // 'swig_tx:104' pset.chip_frq = Fsw;
    // 'swig_tx:105' pset.chip_dur = 1.0 / Fsw;
    // 'swig_tx:106' pset.bwidth = 26 * Fsw;
    //  Choose the minimum suitable sampling frequency
    //  if none is given.
    // 'swig_tx:112' min_fs = pset.bwidth * 1.1;
    // 'swig_tx:113' if (params.stream_passband)
    // 'swig_tx:116' if (params.stream_fs == 0)
    // 'swig_tx:120' if (params.stream_fs < min_fs)
    //  Generate baseband signal.
    // 'swig_tx:125' [bband, pkt, state] = tx(pset, params.stream_fs, params);
    tx(this, pset_name, static_cast<real_T>(pset_cfreq), static_cast<real_T>(Fsw),
       1.0 / static_cast<real_T>(Fsw), 26.0 * static_cast<real_T>(Fsw),
       params->stream_fs, params, b_bband, pkt, state);
    bband.set_size(b_bband.size(0));
    loop_ub = b_bband.size(0);
    for (int32_T i{0}; i < loop_ub; i++) {
      bband[i] = b_bband[i];
    }

    //  Pad signal if needed.
    // 'swig_tx:128' if (params.stream_mul)
    if (params->stream_mul != 0.0) {
      // 'swig_tx:129' l = length(bband);
      // 'swig_tx:130' m = rem(l, params.stream_mul);
      m = rt_remd_snf(static_cast<real_T>(b_bband.size(0)), params->stream_mul);

      // 'swig_tx:131' if (m ~= 0)
      if (m != 0.0) {
        // 'swig_tx:132' pad = zeros(params.stream_mul - m, 1);
        loop_ub = static_cast<int32_T>(params->stream_mul - m);
        pad.set_size(loop_ub);
        for (int32_T i{0}; i < loop_ub; i++) {
          pad[i] = 0.0;
        }

        // 'swig_tx:133' bband = [bband; pad];
        bband.set_size(b_bband.size(0) + pad.size(0));
        loop_ub = b_bband.size(0);
        for (int32_T i{0}; i < loop_ub; i++) {
          bband[i] = b_bband[i];
        }

        loop_ub = pad.size(0);
        for (int32_T i{0}; i < loop_ub; i++) {
          bband[i + b_bband.size(0)].re = 0.0;
          bband[i + b_bband.size(0)].im = 0.0;
        }
      }
    }

    //  Convert to passband if needed.
    // 'swig_tx:138' if (params.stream_passband)
    if (params->stream_passband != 0.0) {
      real_T b;

      // 'swig_tx:139' fs = params.stream_fs;
      // 'swig_tx:140' t = 0 : 1 / fs : (length(bband) - 1) / fs;
      m = 1.0 / params->stream_fs;
      b = (static_cast<real_T>(bband.size(0)) - 1.0) / params->stream_fs;
      if (std::isnan(m) || std::isnan(b)) {
        t.set_size(1, 1);
        t[0] = rtNaN;
      } else if ((m == 0.0) || ((b < 0.0) && (m > 0.0))) {
        t.set_size(1, 0);
      } else if (std::isinf(b) && std::isinf(m)) {
        t.set_size(1, 1);
        t[0] = rtNaN;
      } else if (std::isinf(m)) {
        t.set_size(1, 1);
        t[0] = 0.0;
      } else if (std::floor(m) == m) {
        loop_ub = static_cast<int32_T>(b / m);
        t.set_size(1, loop_ub + 1);
        for (int32_T i{0}; i <= loop_ub; i++) {
          t[i] = m * static_cast<real_T>(i);
        }
      } else {
        coder::eml_float_colon(m, b, t);
      }

      // 'swig_tx:141' signal = real(bband .* exp(1j * 2 * pi * pset.cfreq .* t'));
      m = static_cast<real_T>(pset_cfreq) * 6.2831853071795862;
      b_bband.set_size(t.size(1));
      loop_ub = t.size(1);
      for (int32_T i{0}; i < loop_ub; i++) {
        b_bband[i].re = t[i] * 0.0;
        b_bband[i].im = t[i] * m;
      }

      Fsw = b_bband.size(0);
      for (pset_cfreq = 0; pset_cfreq < Fsw; pset_cfreq++) {
        if (b_bband[pset_cfreq].im == 0.0) {
          b_bband[pset_cfreq].re = std::exp(b_bband[pset_cfreq].re);
          b_bband[pset_cfreq].im = 0.0;
        } else if (std::isinf(b_bband[pset_cfreq].im) && std::isinf
                   (b_bband[pset_cfreq].re) && (b_bband[pset_cfreq].re < 0.0)) {
          b_bband[pset_cfreq].re = 0.0;
          b_bband[pset_cfreq].im = 0.0;
        } else {
          m = std::exp(b_bband[pset_cfreq].re / 2.0);
          b_bband[pset_cfreq].re = m * (m * std::cos(b_bband[pset_cfreq].im));
          b_bband[pset_cfreq].im = m * (m * std::sin(b_bband[pset_cfreq].im));
        }
      }

      if (bband.size(0) == b_bband.size(0)) {
        pad.set_size(bband.size(0));
        loop_ub = bband.size(0);
        for (int32_T i{0}; i < loop_ub; i++) {
          pad[i] = bband[i].re * b_bband[i].re - bband[i].im * b_bband[i].im;
        }
      } else {
        binary_expand_op(pad, bband, b_bband);
      }

      passband.set_size(pad.size(0), 1);
      loop_ub = pad.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        passband[i] = pad[i];
      }
    } else {
      // 'swig_tx:142' else
      // 'swig_tx:143' signal = [real(bband) imag(bband)];
      passband.set_size(bband.size(0), 2);
      loop_ub = bband.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        passband[i] = bband[i].re;
      }

      loop_ub = bband.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        passband[i + passband.size(0)] = bband[i].im;
      }
    }

    //  Apply amplitude factor.
    // 'swig_tx:147' signal = signal * params.stream_amp;
    y.set_size(passband.size(0), passband.size(1));
    loop_ub = passband.size(0) * passband.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      y[i] = passband[i] * params->stream_amp;
    }

    loop_ub = passband.size(0) * passband.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      passband[i] = passband[i] * params->stream_amp;
    }

    //  If multichannel
    // 'swig_tx:150' if (params.stream_channels > 1)
    if (params->stream_channels > 1.0) {
      // 'swig_tx:151' signalc = signal;
      // 'swig_tx:152' signal = zeros(length(signalc), params.stream_channels);
      Fsw = y.size(0);
      pset_cfreq = y.size(1);
      if (Fsw >= pset_cfreq) {
        pset_cfreq = Fsw;
      }

      if (y.size(0) == 0) {
        Fsw = 0;
      } else {
        Fsw = pset_cfreq;
      }

      passband.set_size(Fsw, static_cast<int32_T>(params->stream_channels));
      loop_ub = Fsw * static_cast<int32_T>(params->stream_channels);
      for (int32_T i{0}; i < loop_ub; i++) {
        passband[i] = 0.0;
      }

      // 'swig_tx:153' signal(:, params.stream_channel + 1) = signalc;
      for (int32_T i{0}; i < Fsw; i++) {
        passband[i + passband.size(0) * (static_cast<int32_T>
          (params->stream_channel + 1.0) - 1)] = y[i];
      }
    }

    // 'swig_tx:156' passband = signal;
  }
}

// End of code generation (SWiG_tx_class.cpp)
