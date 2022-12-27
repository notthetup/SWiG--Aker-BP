//
// SWiG_rx_class.cpp
//
// Code generation for function 'SWiG_rx_class'
//

// Include files
#include "SWiG_rx_class.h"
#include "rt_nonfinite.h"
#include "swig_rx_types.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "omp.h"
#include <algorithm>
#include <cfloat>
#include <cmath>
#include <cstddef>
#include <cstring>

// Type Definitions
namespace SWiG_rx_namespace
{
  struct cell_wrap_19
  {
    ::coder::bounded_array<char_T, 41U, 2U> f1;
  };

  namespace coder
  {
    namespace internal
    {
      class FFTImplementationCallback
      {
       public:
        static void get_algo_sizes(int32_T nfft, boolean_T useRadix2, int32_T
          *n2blue, int32_T *nRows);
        static void r2br_r2dit_trig_impl(const ::coder::array<creal_T, 1U> &x,
          int32_T unsigned_nRows, const ::coder::array<real_T, 2U> &costab,
          const ::coder::array<real_T, 2U> &sintab, ::coder::array<creal_T, 1U>
          &y);
        static void generate_twiddle_tables(int32_T nRows, boolean_T useRadix2, ::
          coder::array<real_T, 2U> &costab, ::coder::array<real_T, 2U> &sintab, ::
          coder::array<real_T, 2U> &sintabinv);
        static void dobluesteinfft(const ::coder::array<creal_T, 1U> &x, int32_T
          n2blue, int32_T nfft, const ::coder::array<real_T, 2U> &costab, const ::
          coder::array<real_T, 2U> &sintab, const ::coder::array<real_T, 2U>
          &sintabinv, ::coder::array<creal_T, 1U> &y);
        static void b_generate_twiddle_tables(int32_T nRows, boolean_T useRadix2,
          ::coder::array<real_T, 2U> &costab, ::coder::array<real_T, 2U> &sintab,
          ::coder::array<real_T, 2U> &sintabinv);
        static void b_dobluesteinfft(const ::coder::array<creal_T, 1U> &x,
          int32_T n2blue, int32_T nfft, const ::coder::array<real_T, 2U> &costab,
          const ::coder::array<real_T, 2U> &sintab, const ::coder::array<real_T,
          2U> &sintabinv, ::coder::array<creal_T, 1U> &y);
        static void doHalfLengthRadix2(const ::coder::array<real_T, 1U> &x, ::
          coder::array<creal_T, 1U> &y, int32_T unsigned_nRows, const ::coder::
          array<real_T, 2U> &costab, const ::coder::array<real_T, 2U> &sintab);
        static void doHalfLengthBluestein(const ::coder::array<real_T, 1U> &x, ::
          coder::array<creal_T, 1U> &y, int32_T nrowsx, int32_T nRows, int32_T
          nfft, const ::coder::array<creal_T, 1U> &wwc, const ::coder::array<
          real_T, 2U> &costab, const ::coder::array<real_T, 2U> &sintab, const ::
          coder::array<real_T, 2U> &costabinv, const ::coder::array<real_T, 2U>
          &sintabinv);
      };
    }
  }
}

// Variable Definitions
namespace SWiG_rx_namespace
{
  omp_nest_lock_t swig_rx_nestLockGlobal;
}

// Function Declarations
namespace SWiG_rx_namespace
{
  static void binary_expand_op(creal_T in1_data[], int32_T *in1_size, const
    creal_T in2_data[], const int32_T *in2_size);
  static void binary_expand_op(::coder::array<real_T, 2U> &in1, real_T in2,
    const ::coder::array<real_T, 2U> &in3, const ::coder::array<real_T, 2U> &in4,
    real_T in5, const ::coder::array<real_T, 2U> &in6, const ::coder::array<
    real_T, 2U> &in7);
  static void binary_expand_op(::coder::array<real_T, 2U> &in1, real_T in2,
    const ::coder::array<real_T, 2U> &in3, int32_T in4, int32_T in5, const ::
    coder::array<real_T, 2U> &in6);
  static void binary_expand_op(::coder::array<creal_T, 2U> &in1, const ::coder::
    array<real_T, 1U> &in2, const ::coder::array<creal_T, 2U> &in3);
  static void binary_expand_op(::coder::array<creal_T, 1U> &in1, const ::coder::
    array<real_T, 1U> &in2, const ::coder::array<creal_T, 2U> &in3, const
    creal_T in4, int32_T in5);
  static void binary_expand_op(::coder::array<creal_T, 1U> &in1, const ::coder::
    array<creal_T, 2U> &in2);
  static void binary_expand_op(::coder::array<creal_T, 2U> &in1, const ::coder::
    array<creal_T, 2U> &in2, int32_T in3, int32_T in4, const ::coder::array<
    real_T, 1U> &in5);
  static void binary_expand_op(::coder::array<real_T, 2U> &in1, int32_T in2,
    int32_T in3);
  static void binary_expand_op(::coder::array<real_T, 2U> &in1, const ::coder::
    array<real_T, 2U> &in2, const ::coder::array<real_T, 2U> &in3, int32_T in4,
    int32_T in5, real_T in6);
  static void binary_expand_op(::coder::array<creal_T, 2U> &in1, const ::coder::
    array<creal_T, 1U> &in2, const ::coder::array<real_T, 1U> &in3, real_T in4,
    const ::coder::array<real_T, 2U> &in5);
  static void binary_expand_op(::coder::array<creal_T, 2U> &in1, const ::coder::
    array<real_T, 1U> &in2, real_T in3, const ::coder::array<creal_T, 2U> &in4);
  static void binary_expand_op(::coder::array<creal_T, 2U> &in1, int32_T in2,
    const ::coder::array<creal_T, 2U> &in3, const ::coder::array<creal_T, 2U>
    &in4, const real_T in5_data[]);
  namespace coder
  {
    static void b_dec2hex(const uint64_T d_data[], char_T s_data[], int32_T
                          s_size[2]);
    static void b_eml_find(const boolean_T x_data[], const int32_T x_size[2],
      int32_T i_data[], int32_T i_size[2]);
    static real_T b_mod(real_T x);
    static void binToHex(const char_T b_data[], const int32_T b_size[2], char_T
                         s_data[], int32_T s_size[2]);
    static void dec2hex(const uint64_T d_data[], char_T s_data[], int32_T
                        s_size[2]);
    static void eml_find(const boolean_T x[528], int32_T i_data[], int32_T
                         *i_size);
    static void eml_float_colon(real_T a, real_T d, real_T b, ::coder::array<
      real_T, 2U> &y);
    static void eml_float_colon(real_T d, real_T b, ::coder::array<real_T, 2U>
      &y);
    static void fft(const ::coder::array<real_T, 2U> &x, real_T varargin_1, ::
                    coder::array<creal_T, 2U> &y);
    static void fft(const ::coder::array<creal_T, 1U> &x, real_T varargin_1, ::
                    coder::array<creal_T, 1U> &y);
    static void fft(const creal_T x[256], real_T varargin_1, creal_T y_data[],
                    int32_T *y_size);
    static void fftshift(::coder::array<creal_T, 2U> &x);
    static void fir1(real_T varargin_2, real_T b[256]);
    static void firls(const real_T varargin_2[4], real_T h_data[], int32_T
                      h_size[2]);
    static void goertzel(const ::coder::array<creal_T, 2U> &X, real_T INDVEC, ::
                         coder::array<creal_T, 2U> &Y);
    static void hamming(real_T varargin_1, ::coder::array<real_T, 1U> &w);
    static void ifft(const creal_T x_data[], int32_T x_size, creal_T y_data[],
                     int32_T *y_size);
    static void initMatrices(const real_T m_data[], ::coder::array<real_T, 2U>
      &I1, ::coder::array<real_T, 2U> &I2, ::coder::array<real_T, 2U> &G);
    namespace internal
    {
      namespace blas
      {
        static real_T xnrm2(int32_T n, const ::coder::array<real_T, 2U> &x,
                            int32_T ix0);
      }

      static void expand_max(const ::coder::array<real_T, 2U> &a, const ::coder::
        array<real_T, 2U> &b, ::coder::array<real_T, 2U> &c);
      namespace lapack
      {
        static void xgeqp3(::coder::array<real_T, 2U> &A, real_T tau_data[],
                           int32_T *tau_size, int32_T jpvt_data[], int32_T
                           jpvt_size[2]);
      }

      static void maximum(const ::coder::array<real_T, 3U> &x, ::coder::array<
                          real_T, 2U> &ex);
      static real_T maximum(const real_T x[528]);
      static real_T maximum(const ::coder::array<real_T, 2U> &x);
      static void merge(int32_T idx[32], real_T x[32], int32_T offset, int32_T
                        np, int32_T nq, int32_T iwork[32], real_T xwork[32]);
      static void quickselect(real_T v_data[], int32_T n, int32_T vlen, real_T
        *vn, int32_T *nfirst, int32_T *nlast);
      namespace scalar
      {
        static real_T c_mod(real_T x);
      }

      static void sort(real_T x[32]);
      static int32_T thirdOfFive(const real_T v_data[], int32_T ia, int32_T ib);
    }

    static uint32_T intsqrt(uint32_T a);
    static real_T median(const real_T x_data[], const int32_T x_size[2]);
    static void mldivide(const ::coder::array<real_T, 2U> &A, const real_T
                         B_data[], real_T Y_data[], int32_T *Y_size);
    static real_T sum(const ::coder::array<real_T, 2U> &x);
    static void tukeywin(real_T N, ::coder::array<real_T, 1U> &w);
    static void unique_vector(const real_T a[32], real_T b_data[], int32_T
      b_size[2]);
    static void vitdec(const real_T code[144], real_T varargout_1[72]);
  }

  static void compute_doppler(const ::coder::array<creal_T, 2U> &preamble,
    real_T chip_dur, const real_T freq_list[32], real_T bband_fs, real_T cfreq,
    real_T max_speed, real_T *b_gamma, real_T *speed);
  static void ddc(const ::coder::array<real_T, 2U> &pband, real_T pband_fs,
                  real_T cfreq, real_T bwidth, ::coder::array<creal_T, 1U>
                  &bband, real_T *bband_fs);
  static void demod(real_T pset_cfreq, real_T pset_chip_frq, real_T
                    pset_chip_dur, const ::coder::array<creal_T, 1U> &bband,
                    real_T bband_fs, const real_T slots[144], real_T cfactor,
                    uint8_T data[8], real_T dec_bits[64], real_T dlv_seq[144],
                    real_T bit_prob[144]);
  static real_T detect_first(const ::coder::array<real_T, 2U> &chip_corr, real_T
    step_l, real_T guard_time);
  static int32_T div_nde_s32_floor(int32_T numerator);
  static int32_T div_s32(int32_T numerator, int32_T denominator);
  static real_T rt_hypotd_snf(real_T u0, real_T u1);
  static real_T rt_powd_snf(real_T u0, real_T u1);
  static real_T rt_remd_snf(real_T u0, real_T u1);
  static void rx(SWiG_rx_class *aInstancePtr, const char_T pset_name[27], real_T
                 pset_cfreq, real_T pset_chip_frq, real_T pset_chip_dur, real_T
                 pset_bwidth, const ::coder::array<creal_T, 1U> &bband, real_T
                 bband_fs, real_T params_verbose, const real_T
                 params_c32_sequence[32], real_T params_pset_chip_len_mul,
                 real_T params_doppler_correction, real_T
                 params_doppler_max_speed, struct1_T *pkt, uint8_T pkt_bytes[8],
                 struct2_T *state);
  static void times(real_T in1[256], const real_T in2_data[], const int32_T
                    in2_size[2], const real_T in3[256]);
  static void user_class_lookup_index(uint64_T b_index, char_T value_data[],
    int32_T value_size[2]);
}

// Function Definitions
//
//
namespace SWiG_rx_namespace
{
  namespace coder
  {
    namespace internal
    {
      void FFTImplementationCallback::b_dobluesteinfft(const ::coder::array<
        creal_T, 1U> &x, int32_T n2blue, int32_T nfft, const ::coder::array<
        real_T, 2U> &costab, const ::coder::array<real_T, 2U> &sintab, const ::
        coder::array<real_T, 2U> &sintabinv, ::coder::array<creal_T, 1U> &y)
      {
        ::coder::array<creal_T, 1U> fv;
        ::coder::array<creal_T, 1U> fy;
        ::coder::array<creal_T, 1U> wwc;
        real_T b_re_tmp;
        real_T nt_im;
        real_T nt_re;
        real_T re_tmp;
        int32_T i;
        int32_T minNrowsNx;
        int32_T nInt2;
        int32_T nInt2m1;
        int32_T rt;
        nInt2m1 = (nfft + nfft) - 1;
        wwc.set_size(nInt2m1);
        rt = 0;
        wwc[nfft - 1].re = 1.0;
        wwc[nfft - 1].im = 0.0;
        nInt2 = nfft << 1;
        for (int32_T k{0}; k <= nfft - 2; k++) {
          minNrowsNx = ((k + 1) << 1) - 1;
          if (nInt2 - rt <= minNrowsNx) {
            rt += minNrowsNx - nInt2;
          } else {
            rt += minNrowsNx;
          }

          nt_im = 3.1415926535897931 * static_cast<real_T>(rt) / static_cast<
            real_T>(nfft);
          if (nt_im == 0.0) {
            nt_re = 1.0;
            nt_im = 0.0;
          } else {
            nt_re = std::cos(nt_im);
            nt_im = std::sin(nt_im);
          }

          i = (nfft - k) - 2;
          wwc[i].re = nt_re;
          wwc[i].im = -nt_im;
        }

        i = nInt2m1 - 1;
        for (int32_T k{i}; k >= nfft; k--) {
          wwc[k] = wwc[(nInt2m1 - k) - 1];
        }

        y.set_size(nfft);
        if (nfft > x.size(0)) {
          y.set_size(nfft);
          for (i = 0; i < nfft; i++) {
            y[i].re = 0.0;
            y[i].im = 0.0;
          }
        }

        minNrowsNx = x.size(0);
        if (nfft <= minNrowsNx) {
          minNrowsNx = nfft;
        }

        for (int32_T k{0}; k < minNrowsNx; k++) {
          nInt2m1 = (nfft + k) - 1;
          nt_re = wwc[nInt2m1].re;
          nt_im = wwc[nInt2m1].im;
          re_tmp = x[k].im;
          b_re_tmp = x[k].re;
          y[k].re = nt_re * b_re_tmp + nt_im * re_tmp;
          y[k].im = nt_re * re_tmp - nt_im * b_re_tmp;
        }

        i = minNrowsNx + 1;
        for (int32_T k{i}; k <= nfft; k++) {
          y[k - 1].re = 0.0;
          y[k - 1].im = 0.0;
        }

        FFTImplementationCallback::r2br_r2dit_trig_impl(y, n2blue, costab,
          sintab, fy);
        FFTImplementationCallback::r2br_r2dit_trig_impl(wwc, n2blue, costab,
          sintab, fv);
        minNrowsNx = fy.size(0);
        for (i = 0; i < minNrowsNx; i++) {
          nt_re = fy[i].re;
          nt_im = fv[i].im;
          re_tmp = fy[i].im;
          b_re_tmp = fv[i].re;
          fy[i].re = nt_re * b_re_tmp - re_tmp * nt_im;
          fy[i].im = nt_re * nt_im + re_tmp * b_re_tmp;
        }

        FFTImplementationCallback::r2br_r2dit_trig_impl(fy, n2blue, costab,
          sintabinv, fv);
        if (fv.size(0) > 1) {
          nt_re = 1.0 / static_cast<real_T>(fv.size(0));
          minNrowsNx = fv.size(0);
          for (i = 0; i < minNrowsNx; i++) {
            fv[i].re = nt_re * fv[i].re;
            fv[i].im = nt_re * fv[i].im;
          }
        }

        i = wwc.size(0);
        for (int32_T k{nfft}; k <= i; k++) {
          real_T ar;
          nt_re = wwc[k - 1].re;
          nt_im = fv[k - 1].im;
          re_tmp = wwc[k - 1].im;
          b_re_tmp = fv[k - 1].re;
          ar = nt_re * b_re_tmp + re_tmp * nt_im;
          nt_re = nt_re * nt_im - re_tmp * b_re_tmp;
          if (nt_re == 0.0) {
            minNrowsNx = k - nfft;
            y[minNrowsNx].re = ar / static_cast<real_T>(nfft);
            y[minNrowsNx].im = 0.0;
          } else if (ar == 0.0) {
            minNrowsNx = k - nfft;
            y[minNrowsNx].re = 0.0;
            y[minNrowsNx].im = nt_re / static_cast<real_T>(nfft);
          } else {
            minNrowsNx = k - nfft;
            y[minNrowsNx].re = ar / static_cast<real_T>(nfft);
            y[minNrowsNx].im = nt_re / static_cast<real_T>(nfft);
          }
        }
      }

      //
      //
      void FFTImplementationCallback::b_generate_twiddle_tables(int32_T nRows,
        boolean_T useRadix2, ::coder::array<real_T, 2U> &costab, ::coder::array<
        real_T, 2U> &sintab, ::coder::array<real_T, 2U> &sintabinv)
      {
        ::coder::array<real_T, 2U> costab1q;
        real_T e;
        int32_T i;
        int32_T n;
        int32_T nd2;
        e = 6.2831853071795862 / static_cast<real_T>(nRows);
        n = nRows / 2 / 2;
        costab1q.set_size(1, n + 1);
        costab1q[0] = 1.0;
        nd2 = n / 2 - 1;
        for (int32_T k{0}; k <= nd2; k++) {
          costab1q[k + 1] = std::cos(e * (static_cast<real_T>(k) + 1.0));
        }

        i = nd2 + 2;
        nd2 = n - 1;
        for (int32_T k{i}; k <= nd2; k++) {
          costab1q[k] = std::sin(e * static_cast<real_T>(n - k));
        }

        costab1q[n] = 0.0;
        if (!useRadix2) {
          n = costab1q.size(1) - 1;
          nd2 = (costab1q.size(1) - 1) << 1;
          costab.set_size(1, nd2 + 1);
          sintab.set_size(1, nd2 + 1);
          costab[0] = 1.0;
          sintab[0] = 0.0;
          sintabinv.set_size(1, nd2 + 1);
          for (int32_T k{0}; k < n; k++) {
            sintabinv[k + 1] = costab1q[(n - k) - 1];
          }

          i = costab1q.size(1);
          for (int32_T k{i}; k <= nd2; k++) {
            sintabinv[k] = costab1q[k - n];
          }

          for (int32_T k{0}; k < n; k++) {
            costab[k + 1] = costab1q[k + 1];
            sintab[k + 1] = -costab1q[(n - k) - 1];
          }

          i = costab1q.size(1);
          for (int32_T k{i}; k <= nd2; k++) {
            costab[k] = -costab1q[nd2 - k];
            sintab[k] = -costab1q[k - n];
          }
        } else {
          n = costab1q.size(1) - 1;
          nd2 = (costab1q.size(1) - 1) << 1;
          costab.set_size(1, nd2 + 1);
          sintab.set_size(1, nd2 + 1);
          costab[0] = 1.0;
          sintab[0] = 0.0;
          for (int32_T k{0}; k < n; k++) {
            costab[k + 1] = costab1q[k + 1];
            sintab[k + 1] = costab1q[(n - k) - 1];
          }

          i = costab1q.size(1);
          for (int32_T k{i}; k <= nd2; k++) {
            costab[k] = -costab1q[nd2 - k];
            sintab[k] = costab1q[k - n];
          }

          sintabinv.set_size(1, 0);
        }
      }

      //
      //
      void FFTImplementationCallback::doHalfLengthBluestein(const ::coder::array<
        real_T, 1U> &x, ::coder::array<creal_T, 1U> &y, int32_T nrowsx, int32_T
        nRows, int32_T nfft, const ::coder::array<creal_T, 1U> &wwc, const ::
        coder::array<real_T, 2U> &costab, const ::coder::array<real_T, 2U>
        &sintab, const ::coder::array<real_T, 2U> &costabinv, const ::coder::
        array<real_T, 2U> &sintabinv)
      {
        ::coder::array<creal_T, 1U> fv;
        ::coder::array<creal_T, 1U> fy;
        ::coder::array<creal_T, 1U> reconVar1;
        ::coder::array<creal_T, 1U> reconVar2;
        ::coder::array<creal_T, 1U> ytmp;
        ::coder::array<real_T, 2U> b_costab;
        ::coder::array<real_T, 2U> b_sintab;
        ::coder::array<real_T, 2U> costab1q;
        ::coder::array<real_T, 2U> hcostabinv;
        ::coder::array<real_T, 2U> hsintab;
        ::coder::array<real_T, 2U> hsintabinv;
        ::coder::array<int32_T, 2U> wrapIndex;
        real_T b_temp_re_tmp;
        real_T re_tmp;
        real_T temp_im;
        real_T temp_re;
        real_T twid_im;
        real_T twid_re;
        real_T z_tmp;
        int32_T hnRows;
        int32_T i;
        int32_T iDelta2;
        int32_T ihi;
        int32_T istart;
        int32_T j;
        int32_T ju;
        int32_T k;
        int32_T nRowsD2;
        int32_T nd2;
        int32_T temp_re_tmp;
        boolean_T tst;
        hnRows = nRows / 2;
        ytmp.set_size(hnRows);
        if (hnRows > nrowsx) {
          ytmp.set_size(hnRows);
          for (iDelta2 = 0; iDelta2 < hnRows; iDelta2++) {
            ytmp[iDelta2].re = 0.0;
            ytmp[iDelta2].im = 0.0;
          }
        }

        if ((x.size(0) & 1) == 0) {
          tst = true;
          ihi = x.size(0);
        } else if (x.size(0) >= nRows) {
          tst = true;
          ihi = nRows;
        } else {
          tst = false;
          ihi = x.size(0) - 1;
        }

        if (ihi > nRows) {
          ihi = nRows;
        }

        nd2 = nRows << 1;
        temp_im = 6.2831853071795862 / static_cast<real_T>(nd2);
        j = nd2 / 2 / 2;
        costab1q.set_size(1, j + 1);
        costab1q[0] = 1.0;
        nd2 = j / 2 - 1;
        for (k = 0; k <= nd2; k++) {
          costab1q[k + 1] = std::cos(temp_im * (static_cast<real_T>(k) + 1.0));
        }

        iDelta2 = nd2 + 2;
        nd2 = j - 1;
        for (k = iDelta2; k <= nd2; k++) {
          costab1q[k] = std::sin(temp_im * static_cast<real_T>(j - k));
        }

        costab1q[j] = 0.0;
        j = costab1q.size(1) - 1;
        nd2 = (costab1q.size(1) - 1) << 1;
        b_costab.set_size(1, nd2 + 1);
        b_sintab.set_size(1, nd2 + 1);
        b_costab[0] = 1.0;
        b_sintab[0] = 0.0;
        for (k = 0; k < j; k++) {
          b_costab[k + 1] = costab1q[k + 1];
          b_sintab[k + 1] = -costab1q[(j - k) - 1];
        }

        iDelta2 = costab1q.size(1);
        for (k = iDelta2; k <= nd2; k++) {
          b_costab[k] = -costab1q[nd2 - k];
          b_sintab[k] = -costab1q[k - j];
        }

        nd2 = static_cast<int32_T>(static_cast<uint32_T>(costab.size(1)) >> 1);
        costab1q.set_size(1, nd2);
        hsintab.set_size(1, nd2);
        hcostabinv.set_size(1, nd2);
        hsintabinv.set_size(1, nd2);
        for (i = 0; i < nd2; i++) {
          iDelta2 = ((i + 1) << 1) - 2;
          costab1q[i] = costab[iDelta2];
          hsintab[i] = sintab[iDelta2];
          hcostabinv[i] = costabinv[iDelta2];
          hsintabinv[i] = sintabinv[iDelta2];
        }

        reconVar1.set_size(hnRows);
        reconVar2.set_size(hnRows);
        wrapIndex.set_size(1, hnRows);
        for (i = 0; i < hnRows; i++) {
          iDelta2 = i << 1;
          temp_im = b_sintab[iDelta2];
          temp_re = b_costab[iDelta2];
          reconVar1[i].re = temp_im + 1.0;
          reconVar1[i].im = -temp_re;
          reconVar2[i].re = 1.0 - temp_im;
          reconVar2[i].im = temp_re;
          if (i + 1 != 1) {
            wrapIndex[i] = (hnRows - i) + 1;
          } else {
            wrapIndex[0] = 1;
          }
        }

        z_tmp = static_cast<real_T>(ihi) / 2.0;
        iDelta2 = static_cast<int32_T>(z_tmp);
        for (ju = 0; ju < iDelta2; ju++) {
          temp_re_tmp = (hnRows + ju) - 1;
          temp_re = wwc[temp_re_tmp].re;
          temp_im = wwc[temp_re_tmp].im;
          nd2 = ju << 1;
          twid_re = x[nd2];
          twid_im = x[nd2 + 1];
          ytmp[ju].re = temp_re * twid_re + temp_im * twid_im;
          ytmp[ju].im = temp_re * twid_im - temp_im * twid_re;
        }

        if (!tst) {
          temp_re_tmp = (hnRows + static_cast<int32_T>(z_tmp)) - 1;
          temp_re = wwc[temp_re_tmp].re;
          temp_im = wwc[temp_re_tmp].im;
          twid_re = x[static_cast<int32_T>(z_tmp) << 1];
          ytmp[static_cast<int32_T>(z_tmp)].re = temp_re * twid_re + temp_im *
            0.0;
          ytmp[static_cast<int32_T>(z_tmp)].im = temp_re * 0.0 - temp_im *
            twid_re;
          if (static_cast<int32_T>(z_tmp) + 2 <= hnRows) {
            iDelta2 = static_cast<int32_T>(static_cast<real_T>(ihi) / 2.0) + 2;
            for (i = iDelta2; i <= hnRows; i++) {
              ytmp[i - 1].re = 0.0;
              ytmp[i - 1].im = 0.0;
            }
          }
        } else if (static_cast<int32_T>(z_tmp) + 1 <= hnRows) {
          iDelta2 = static_cast<int32_T>(static_cast<real_T>(ihi) / 2.0) + 1;
          for (i = iDelta2; i <= hnRows; i++) {
            ytmp[i - 1].re = 0.0;
            ytmp[i - 1].im = 0.0;
          }
        }

        z_tmp = static_cast<real_T>(nfft) / 2.0;
        nd2 = static_cast<int32_T>(z_tmp);
        fy.set_size(nd2);
        if (static_cast<int32_T>(z_tmp) > ytmp.size(0)) {
          fy.set_size(nd2);
          for (iDelta2 = 0; iDelta2 < nd2; iDelta2++) {
            fy[iDelta2].re = 0.0;
            fy[iDelta2].im = 0.0;
          }
        }

        ihi = ytmp.size(0);
        istart = static_cast<int32_T>(z_tmp);
        if (ihi <= istart) {
          istart = ihi;
        }

        iDelta2 = static_cast<int32_T>(z_tmp) - 2;
        nRowsD2 = static_cast<int32_T>(z_tmp) / 2;
        k = nRowsD2 / 2;
        nd2 = 0;
        ju = 0;
        for (i = 0; i <= istart - 2; i++) {
          fy[nd2] = ytmp[i];
          j = static_cast<int32_T>(z_tmp);
          tst = true;
          while (tst) {
            j >>= 1;
            ju ^= j;
            tst = ((ju & j) == 0);
          }

          nd2 = ju;
        }

        fy[nd2] = ytmp[istart - 1];
        if (static_cast<int32_T>(z_tmp) > 1) {
          for (i = 0; i <= iDelta2; i += 2) {
            b_temp_re_tmp = fy[i + 1].re;
            temp_re = fy[i + 1].im;
            re_tmp = fy[i].re;
            twid_re = fy[i].im;
            fy[i + 1].re = re_tmp - b_temp_re_tmp;
            fy[i + 1].im = twid_re - temp_re;
            fy[i].re = re_tmp + b_temp_re_tmp;
            fy[i].im = twid_re + temp_re;
          }
        }

        nd2 = 2;
        iDelta2 = 4;
        ju = ((k - 1) << 2) + 1;
        while (k > 0) {
          for (i = 0; i < ju; i += iDelta2) {
            temp_re_tmp = i + nd2;
            temp_re = fy[temp_re_tmp].re;
            temp_im = fy[temp_re_tmp].im;
            fy[temp_re_tmp].re = fy[i].re - temp_re;
            fy[temp_re_tmp].im = fy[i].im - temp_im;
            fy[i].re = fy[i].re + temp_re;
            fy[i].im = fy[i].im + temp_im;
          }

          istart = 1;
          for (j = k; j < nRowsD2; j += k) {
            twid_re = costab1q[j];
            twid_im = hsintab[j];
            i = istart;
            ihi = istart + ju;
            while (i < ihi) {
              temp_re_tmp = i + nd2;
              b_temp_re_tmp = fy[temp_re_tmp].im;
              temp_im = fy[temp_re_tmp].re;
              temp_re = twid_re * temp_im - twid_im * b_temp_re_tmp;
              temp_im = twid_re * b_temp_re_tmp + twid_im * temp_im;
              fy[temp_re_tmp].re = fy[i].re - temp_re;
              fy[temp_re_tmp].im = fy[i].im - temp_im;
              fy[i].re = fy[i].re + temp_re;
              fy[i].im = fy[i].im + temp_im;
              i += iDelta2;
            }

            istart++;
          }

          k /= 2;
          nd2 = iDelta2;
          iDelta2 += iDelta2;
          ju -= nd2;
        }

        FFTImplementationCallback::r2br_r2dit_trig_impl(wwc, static_cast<int32_T>
          (z_tmp), costab1q, hsintab, fv);
        nd2 = fy.size(0);
        for (iDelta2 = 0; iDelta2 < nd2; iDelta2++) {
          re_tmp = fy[iDelta2].re;
          twid_im = fv[iDelta2].im;
          temp_im = fy[iDelta2].im;
          temp_re = fv[iDelta2].re;
          fy[iDelta2].re = re_tmp * temp_re - temp_im * twid_im;
          fy[iDelta2].im = re_tmp * twid_im + temp_im * temp_re;
        }

        FFTImplementationCallback::r2br_r2dit_trig_impl(fy, static_cast<int32_T>
          (z_tmp), hcostabinv, hsintabinv, fv);
        if (fv.size(0) > 1) {
          temp_im = 1.0 / static_cast<real_T>(fv.size(0));
          nd2 = fv.size(0);
          for (iDelta2 = 0; iDelta2 < nd2; iDelta2++) {
            fv[iDelta2].re = temp_im * fv[iDelta2].re;
            fv[iDelta2].im = temp_im * fv[iDelta2].im;
          }
        }

        iDelta2 = wwc.size(0);
        for (k = hnRows; k <= iDelta2; k++) {
          temp_im = wwc[k - 1].re;
          temp_re = fv[k - 1].im;
          twid_re = wwc[k - 1].im;
          twid_im = fv[k - 1].re;
          nd2 = k - hnRows;
          ytmp[nd2].re = temp_im * twid_im + twid_re * temp_re;
          ytmp[nd2].im = temp_im * temp_re - twid_re * twid_im;
        }

        for (i = 0; i < hnRows; i++) {
          real_T ytmp_re_tmp;
          iDelta2 = wrapIndex[i];
          temp_im = ytmp[i].re;
          temp_re = reconVar1[i].im;
          twid_re = ytmp[i].im;
          twid_im = reconVar1[i].re;
          re_tmp = ytmp[iDelta2 - 1].re;
          b_temp_re_tmp = -ytmp[iDelta2 - 1].im;
          z_tmp = reconVar2[i].im;
          ytmp_re_tmp = reconVar2[i].re;
          y[i].re = 0.5 * ((temp_im * twid_im - twid_re * temp_re) + (re_tmp *
            ytmp_re_tmp - b_temp_re_tmp * z_tmp));
          y[i].im = 0.5 * ((temp_im * temp_re + twid_re * twid_im) + (re_tmp *
            z_tmp + b_temp_re_tmp * ytmp_re_tmp));
          iDelta2 = hnRows + i;
          y[iDelta2].re = 0.5 * ((temp_im * ytmp_re_tmp - twid_re * z_tmp) +
            (re_tmp * twid_im - b_temp_re_tmp * temp_re));
          y[iDelta2].im = 0.5 * ((temp_im * z_tmp + twid_re * ytmp_re_tmp) +
            (re_tmp * temp_re + b_temp_re_tmp * twid_im));
        }
      }

      //
      //
      void FFTImplementationCallback::doHalfLengthRadix2(const ::coder::array<
        real_T, 1U> &x, ::coder::array<creal_T, 1U> &y, int32_T unsigned_nRows,
        const ::coder::array<real_T, 2U> &costab, const ::coder::array<real_T,
        2U> &sintab)
      {
        ::coder::array<creal_T, 1U> reconVar1;
        ::coder::array<creal_T, 1U> reconVar2;
        ::coder::array<real_T, 2U> hcostab;
        ::coder::array<real_T, 2U> hsintab;
        ::coder::array<int32_T, 2U> wrapIndex;
        ::coder::array<int32_T, 1U> bitrevIndex;
        real_T b_y_re_tmp;
        real_T c_y_re_tmp;
        real_T im;
        real_T re;
        real_T temp2_im;
        real_T temp2_re;
        real_T temp_im;
        real_T temp_im_tmp;
        real_T temp_re;
        real_T temp_re_tmp;
        real_T y_re_tmp;
        real_T z_tmp;
        int32_T hszCostab;
        int32_T i;
        int32_T istart;
        int32_T iy;
        int32_T j;
        int32_T ju;
        int32_T k;
        int32_T nRows;
        int32_T nRowsD2;
        int32_T nRowsM2;
        boolean_T tst;
        nRows = unsigned_nRows / 2;
        j = y.size(0);
        if (j > nRows) {
          j = nRows;
        }

        nRowsM2 = nRows - 2;
        nRowsD2 = nRows / 2;
        k = nRowsD2 / 2;
        hszCostab = static_cast<int32_T>(static_cast<uint32_T>(costab.size(1)) >>
          1);
        hcostab.set_size(1, hszCostab);
        hsintab.set_size(1, hszCostab);
        for (i = 0; i < hszCostab; i++) {
          iy = ((i + 1) << 1) - 2;
          hcostab[i] = costab[iy];
          hsintab[i] = sintab[iy];
        }

        reconVar1.set_size(nRows);
        reconVar2.set_size(nRows);
        wrapIndex.set_size(1, nRows);
        for (i = 0; i < nRows; i++) {
          im = sintab[i];
          temp2_re = costab[i];
          reconVar1[i].re = im + 1.0;
          reconVar1[i].im = -temp2_re;
          reconVar2[i].re = 1.0 - im;
          reconVar2[i].im = temp2_re;
          if (i + 1 != 1) {
            wrapIndex[i] = (nRows - i) + 1;
          } else {
            wrapIndex[0] = 1;
          }
        }

        z_tmp = static_cast<real_T>(unsigned_nRows) / 2.0;
        ju = 0;
        iy = 1;
        hszCostab = static_cast<int32_T>(z_tmp);
        bitrevIndex.set_size(hszCostab);
        for (istart = 0; istart < hszCostab; istart++) {
          bitrevIndex[istart] = 0;
        }

        for (istart = 0; istart <= j - 2; istart++) {
          bitrevIndex[istart] = iy;
          hszCostab = static_cast<int32_T>(z_tmp);
          tst = true;
          while (tst) {
            hszCostab >>= 1;
            ju ^= hszCostab;
            tst = ((ju & hszCostab) == 0);
          }

          iy = ju + 1;
        }

        bitrevIndex[j - 1] = iy;
        if ((x.size(0) & 1) == 0) {
          tst = true;
          j = x.size(0);
        } else if (x.size(0) >= unsigned_nRows) {
          tst = true;
          j = unsigned_nRows;
        } else {
          tst = false;
          j = x.size(0) - 1;
        }

        if (j > unsigned_nRows) {
          j = unsigned_nRows;
        }

        im = static_cast<real_T>(j) / 2.0;
        istart = static_cast<int32_T>(im);
        for (i = 0; i < istart; i++) {
          iy = i << 1;
          y[bitrevIndex[i] - 1].re = x[iy];
          y[bitrevIndex[i] - 1].im = x[iy + 1];
        }

        if (!tst) {
          istart = bitrevIndex[static_cast<int32_T>(im)] - 1;
          y[istart].re = x[static_cast<int32_T>(im) << 1];
          y[istart].im = 0.0;
        }

        if (nRows > 1) {
          for (i = 0; i <= nRowsM2; i += 2) {
            temp2_re = y[i + 1].re;
            temp2_im = y[i + 1].im;
            temp_re = temp2_re;
            temp_im = temp2_im;
            re = y[i].re;
            im = y[i].im;
            temp2_re = re - temp2_re;
            temp2_im = im - temp2_im;
            y[i + 1].re = temp2_re;
            y[i + 1].im = temp2_im;
            re += temp_re;
            im += temp_im;
            y[i].re = re;
            y[i].im = im;
          }
        }

        hszCostab = 2;
        iy = 4;
        ju = ((k - 1) << 2) + 1;
        while (k > 0) {
          for (i = 0; i < ju; i += iy) {
            nRowsM2 = i + hszCostab;
            temp_re = y[nRowsM2].re;
            temp_im = y[nRowsM2].im;
            y[nRowsM2].re = y[i].re - temp_re;
            y[nRowsM2].im = y[i].im - temp_im;
            y[i].re = y[i].re + temp_re;
            y[i].im = y[i].im + temp_im;
          }

          istart = 1;
          for (j = k; j < nRowsD2; j += k) {
            temp2_re = hcostab[j];
            temp2_im = hsintab[j];
            i = istart;
            nRows = istart + ju;
            while (i < nRows) {
              nRowsM2 = i + hszCostab;
              temp_re_tmp = y[nRowsM2].im;
              temp_im = y[nRowsM2].re;
              temp_re = temp2_re * temp_im - temp2_im * temp_re_tmp;
              temp_im = temp2_re * temp_re_tmp + temp2_im * temp_im;
              y[nRowsM2].re = y[i].re - temp_re;
              y[nRowsM2].im = y[i].im - temp_im;
              y[i].re = y[i].re + temp_re;
              y[i].im = y[i].im + temp_im;
              i += iy;
            }

            istart++;
          }

          k /= 2;
          hszCostab = iy;
          iy += iy;
          ju -= hszCostab;
        }

        hszCostab = static_cast<int32_T>(z_tmp) / 2;
        temp_re_tmp = y[0].re;
        temp_im_tmp = y[0].im;
        y[0].re = 0.5 * ((temp_re_tmp * reconVar1[0].re - temp_im_tmp *
                          reconVar1[0].im) + (temp_re_tmp * reconVar2[0].re -
          -temp_im_tmp * reconVar2[0].im));
        y[0].im = 0.5 * ((temp_re_tmp * reconVar1[0].im + temp_im_tmp *
                          reconVar1[0].re) + (temp_re_tmp * reconVar2[0].im +
          -temp_im_tmp * reconVar2[0].re));
        y[static_cast<int32_T>(z_tmp)].re = 0.5 * ((temp_re_tmp * reconVar2[0].
          re - temp_im_tmp * reconVar2[0].im) + (temp_re_tmp * reconVar1[0].re -
          -temp_im_tmp * reconVar1[0].im));
        y[static_cast<int32_T>(z_tmp)].im = 0.5 * ((temp_re_tmp * reconVar2[0].
          im + temp_im_tmp * reconVar2[0].re) + (temp_re_tmp * reconVar1[0].im +
          -temp_im_tmp * reconVar1[0].re));
        for (i = 2; i <= hszCostab; i++) {
          temp_re_tmp = y[i - 1].re;
          temp_im_tmp = y[i - 1].im;
          istart = wrapIndex[i - 1];
          temp2_im = y[istart - 1].re;
          temp_re = y[istart - 1].im;
          temp_im = reconVar1[i - 1].im;
          y_re_tmp = reconVar1[i - 1].re;
          b_y_re_tmp = reconVar2[i - 1].im;
          c_y_re_tmp = reconVar2[i - 1].re;
          y[i - 1].re = 0.5 * ((temp_re_tmp * y_re_tmp - temp_im_tmp * temp_im)
                               + (temp2_im * c_y_re_tmp - -temp_re * b_y_re_tmp));
          y[i - 1].im = 0.5 * ((temp_re_tmp * temp_im + temp_im_tmp * y_re_tmp)
                               + (temp2_im * b_y_re_tmp + -temp_re * c_y_re_tmp));
          iy = (static_cast<int32_T>(z_tmp) + i) - 1;
          y[iy].re = 0.5 * ((temp_re_tmp * c_y_re_tmp - temp_im_tmp * b_y_re_tmp)
                            + (temp2_im * y_re_tmp - -temp_re * temp_im));
          y[iy].im = 0.5 * ((temp_re_tmp * b_y_re_tmp + temp_im_tmp * c_y_re_tmp)
                            + (temp2_im * temp_im + -temp_re * y_re_tmp));
          re = reconVar1[istart - 1].im;
          im = reconVar1[istart - 1].re;
          temp_im = reconVar2[istart - 1].im;
          temp2_re = reconVar2[istart - 1].re;
          y[istart - 1].re = 0.5 * ((temp2_im * im - temp_re * re) +
            (temp_re_tmp * temp2_re - -temp_im_tmp * temp_im));
          y[istart - 1].im = 0.5 * ((temp2_im * re + temp_re * im) +
            (temp_re_tmp * temp_im + -temp_im_tmp * temp2_re));
          istart = (istart + static_cast<int32_T>(z_tmp)) - 1;
          y[istart].re = 0.5 * ((temp2_im * temp2_re - temp_re * temp_im) +
                                (temp_re_tmp * im - -temp_im_tmp * re));
          y[istart].im = 0.5 * ((temp2_im * temp_im + temp_re * temp2_re) +
                                (temp_re_tmp * re + -temp_im_tmp * im));
        }

        temp_re_tmp = y[hszCostab].re;
        temp_im_tmp = y[hszCostab].im;
        temp_im = reconVar1[hszCostab].im;
        y_re_tmp = reconVar1[hszCostab].re;
        b_y_re_tmp = reconVar2[hszCostab].im;
        c_y_re_tmp = reconVar2[hszCostab].re;
        im = temp_re_tmp * c_y_re_tmp;
        temp2_re = temp_re_tmp * y_re_tmp;
        y[hszCostab].re = 0.5 * ((temp2_re - temp_im_tmp * temp_im) + (im -
          -temp_im_tmp * b_y_re_tmp));
        temp2_im = temp_re_tmp * b_y_re_tmp;
        re = temp_re_tmp * temp_im;
        y[hszCostab].im = 0.5 * ((re + temp_im_tmp * y_re_tmp) + (temp2_im +
          -temp_im_tmp * c_y_re_tmp));
        istart = static_cast<int32_T>(z_tmp) + hszCostab;
        y[istart].re = 0.5 * ((im - temp_im_tmp * b_y_re_tmp) + (temp2_re -
          -temp_im_tmp * temp_im));
        y[istart].im = 0.5 * ((temp2_im + temp_im_tmp * c_y_re_tmp) + (re +
          -temp_im_tmp * y_re_tmp));
      }

      //
      //
      void FFTImplementationCallback::dobluesteinfft(const ::coder::array<
        creal_T, 1U> &x, int32_T n2blue, int32_T nfft, const ::coder::array<
        real_T, 2U> &costab, const ::coder::array<real_T, 2U> &sintab, const ::
        coder::array<real_T, 2U> &sintabinv, ::coder::array<creal_T, 1U> &y)
      {
        ::coder::array<creal_T, 1U> fv;
        ::coder::array<creal_T, 1U> fy;
        ::coder::array<creal_T, 1U> wwc;
        real_T b_re_tmp;
        real_T nt_im;
        real_T nt_re;
        real_T re_tmp;
        int32_T i;
        int32_T minNrowsNx;
        int32_T nInt2;
        int32_T nInt2m1;
        int32_T rt;
        nInt2m1 = (nfft + nfft) - 1;
        wwc.set_size(nInt2m1);
        rt = 0;
        wwc[nfft - 1].re = 1.0;
        wwc[nfft - 1].im = 0.0;
        nInt2 = nfft << 1;
        for (int32_T k{0}; k <= nfft - 2; k++) {
          minNrowsNx = ((k + 1) << 1) - 1;
          if (nInt2 - rt <= minNrowsNx) {
            rt += minNrowsNx - nInt2;
          } else {
            rt += minNrowsNx;
          }

          nt_im = -3.1415926535897931 * static_cast<real_T>(rt) /
            static_cast<real_T>(nfft);
          if (nt_im == 0.0) {
            nt_re = 1.0;
            nt_im = 0.0;
          } else {
            nt_re = std::cos(nt_im);
            nt_im = std::sin(nt_im);
          }

          i = (nfft - k) - 2;
          wwc[i].re = nt_re;
          wwc[i].im = -nt_im;
        }

        i = nInt2m1 - 1;
        for (int32_T k{i}; k >= nfft; k--) {
          wwc[k] = wwc[(nInt2m1 - k) - 1];
        }

        y.set_size(nfft);
        if (nfft > x.size(0)) {
          y.set_size(nfft);
          for (i = 0; i < nfft; i++) {
            y[i].re = 0.0;
            y[i].im = 0.0;
          }
        }

        minNrowsNx = x.size(0);
        if (nfft <= minNrowsNx) {
          minNrowsNx = nfft;
        }

        for (int32_T k{0}; k < minNrowsNx; k++) {
          nInt2m1 = (nfft + k) - 1;
          nt_re = wwc[nInt2m1].re;
          nt_im = wwc[nInt2m1].im;
          re_tmp = x[k].im;
          b_re_tmp = x[k].re;
          y[k].re = nt_re * b_re_tmp + nt_im * re_tmp;
          y[k].im = nt_re * re_tmp - nt_im * b_re_tmp;
        }

        i = minNrowsNx + 1;
        for (int32_T k{i}; k <= nfft; k++) {
          y[k - 1].re = 0.0;
          y[k - 1].im = 0.0;
        }

        FFTImplementationCallback::r2br_r2dit_trig_impl(y, n2blue, costab,
          sintab, fy);
        FFTImplementationCallback::r2br_r2dit_trig_impl(wwc, n2blue, costab,
          sintab, fv);
        minNrowsNx = fy.size(0);
        for (i = 0; i < minNrowsNx; i++) {
          nt_re = fy[i].re;
          nt_im = fv[i].im;
          re_tmp = fy[i].im;
          b_re_tmp = fv[i].re;
          fy[i].re = nt_re * b_re_tmp - re_tmp * nt_im;
          fy[i].im = nt_re * nt_im + re_tmp * b_re_tmp;
        }

        FFTImplementationCallback::r2br_r2dit_trig_impl(fy, n2blue, costab,
          sintabinv, fv);
        if (fv.size(0) > 1) {
          nt_re = 1.0 / static_cast<real_T>(fv.size(0));
          minNrowsNx = fv.size(0);
          for (i = 0; i < minNrowsNx; i++) {
            fv[i].re = nt_re * fv[i].re;
            fv[i].im = nt_re * fv[i].im;
          }
        }

        i = wwc.size(0);
        for (int32_T k{nfft}; k <= i; k++) {
          re_tmp = wwc[k - 1].re;
          b_re_tmp = fv[k - 1].im;
          nt_re = wwc[k - 1].im;
          nt_im = fv[k - 1].re;
          minNrowsNx = k - nfft;
          y[minNrowsNx].re = re_tmp * nt_im + nt_re * b_re_tmp;
          y[minNrowsNx].im = re_tmp * b_re_tmp - nt_re * nt_im;
        }
      }

      //
      //
      void FFTImplementationCallback::generate_twiddle_tables(int32_T nRows,
        boolean_T useRadix2, ::coder::array<real_T, 2U> &costab, ::coder::array<
        real_T, 2U> &sintab, ::coder::array<real_T, 2U> &sintabinv)
      {
        ::coder::array<real_T, 2U> costab1q;
        real_T e;
        int32_T i;
        int32_T n;
        int32_T nd2;
        e = 6.2831853071795862 / static_cast<real_T>(nRows);
        n = nRows / 2 / 2;
        costab1q.set_size(1, n + 1);
        costab1q[0] = 1.0;
        nd2 = n / 2 - 1;
        for (int32_T k{0}; k <= nd2; k++) {
          costab1q[k + 1] = std::cos(e * (static_cast<real_T>(k) + 1.0));
        }

        i = nd2 + 2;
        nd2 = n - 1;
        for (int32_T k{i}; k <= nd2; k++) {
          costab1q[k] = std::sin(e * static_cast<real_T>(n - k));
        }

        costab1q[n] = 0.0;
        if (!useRadix2) {
          n = costab1q.size(1) - 1;
          nd2 = (costab1q.size(1) - 1) << 1;
          costab.set_size(1, nd2 + 1);
          sintab.set_size(1, nd2 + 1);
          costab[0] = 1.0;
          sintab[0] = 0.0;
          sintabinv.set_size(1, nd2 + 1);
          for (int32_T k{0}; k < n; k++) {
            sintabinv[k + 1] = costab1q[(n - k) - 1];
          }

          i = costab1q.size(1);
          for (int32_T k{i}; k <= nd2; k++) {
            sintabinv[k] = costab1q[k - n];
          }

          for (int32_T k{0}; k < n; k++) {
            costab[k + 1] = costab1q[k + 1];
            sintab[k + 1] = -costab1q[(n - k) - 1];
          }

          i = costab1q.size(1);
          for (int32_T k{i}; k <= nd2; k++) {
            costab[k] = -costab1q[nd2 - k];
            sintab[k] = -costab1q[k - n];
          }
        } else {
          n = costab1q.size(1) - 1;
          nd2 = (costab1q.size(1) - 1) << 1;
          costab.set_size(1, nd2 + 1);
          sintab.set_size(1, nd2 + 1);
          costab[0] = 1.0;
          sintab[0] = 0.0;
          for (int32_T k{0}; k < n; k++) {
            costab[k + 1] = costab1q[k + 1];
            sintab[k + 1] = -costab1q[(n - k) - 1];
          }

          i = costab1q.size(1);
          for (int32_T k{i}; k <= nd2; k++) {
            costab[k] = -costab1q[nd2 - k];
            sintab[k] = -costab1q[k - n];
          }

          sintabinv.set_size(1, 0);
        }
      }

      //
      //
      void FFTImplementationCallback::get_algo_sizes(int32_T nfft, boolean_T
        useRadix2, int32_T *n2blue, int32_T *nRows)
      {
        *n2blue = 1;
        if (useRadix2) {
          *nRows = nfft;
        } else {
          if (nfft > 0) {
            int32_T n;
            int32_T pmax;
            n = (nfft + nfft) - 1;
            pmax = 31;
            if (n <= 1) {
              pmax = 0;
            } else {
              int32_T pmin;
              boolean_T exitg1;
              pmin = 0;
              exitg1 = false;
              while ((!exitg1) && (pmax - pmin > 1)) {
                int32_T k;
                int32_T pow2p;
                k = (pmin + pmax) >> 1;
                pow2p = 1 << k;
                if (pow2p == n) {
                  pmax = k;
                  exitg1 = true;
                } else if (pow2p > n) {
                  pmax = k;
                } else {
                  pmin = k;
                }
              }
            }

            *n2blue = 1 << pmax;
          }

          *nRows = *n2blue;
        }
      }

      //
      //
      void FFTImplementationCallback::r2br_r2dit_trig_impl(const ::coder::array<
        creal_T, 1U> &x, int32_T unsigned_nRows, const ::coder::array<real_T, 2U>
        &costab, const ::coder::array<real_T, 2U> &sintab, ::coder::array<
        creal_T, 1U> &y)
      {
        real_T temp_im;
        real_T temp_re;
        real_T temp_re_tmp;
        real_T twid_re;
        int32_T i;
        int32_T iDelta2;
        int32_T iheight;
        int32_T iy;
        int32_T ju;
        int32_T k;
        int32_T nRowsD2;
        y.set_size(unsigned_nRows);
        if (unsigned_nRows > x.size(0)) {
          y.set_size(unsigned_nRows);
          for (iy = 0; iy < unsigned_nRows; iy++) {
            y[iy].re = 0.0;
            y[iy].im = 0.0;
          }
        }

        iDelta2 = x.size(0);
        if (iDelta2 > unsigned_nRows) {
          iDelta2 = unsigned_nRows;
        }

        iheight = unsigned_nRows - 2;
        nRowsD2 = unsigned_nRows / 2;
        k = nRowsD2 / 2;
        iy = 0;
        ju = 0;
        for (i = 0; i <= iDelta2 - 2; i++) {
          boolean_T tst;
          y[iy] = x[i];
          iy = unsigned_nRows;
          tst = true;
          while (tst) {
            iy >>= 1;
            ju ^= iy;
            tst = ((ju & iy) == 0);
          }

          iy = ju;
        }

        y[iy] = x[iDelta2 - 1];
        if (unsigned_nRows > 1) {
          for (i = 0; i <= iheight; i += 2) {
            temp_re_tmp = y[i + 1].re;
            temp_im = y[i + 1].im;
            temp_re = y[i].re;
            twid_re = y[i].im;
            y[i + 1].re = temp_re - temp_re_tmp;
            y[i + 1].im = twid_re - temp_im;
            y[i].re = temp_re + temp_re_tmp;
            y[i].im = twid_re + temp_im;
          }
        }

        iy = 2;
        iDelta2 = 4;
        iheight = ((k - 1) << 2) + 1;
        while (k > 0) {
          int32_T b_temp_re_tmp;
          for (i = 0; i < iheight; i += iDelta2) {
            b_temp_re_tmp = i + iy;
            temp_re = y[b_temp_re_tmp].re;
            temp_im = y[b_temp_re_tmp].im;
            y[b_temp_re_tmp].re = y[i].re - temp_re;
            y[b_temp_re_tmp].im = y[i].im - temp_im;
            y[i].re = y[i].re + temp_re;
            y[i].im = y[i].im + temp_im;
          }

          ju = 1;
          for (int32_T j{k}; j < nRowsD2; j += k) {
            real_T twid_im;
            int32_T ihi;
            twid_re = costab[j];
            twid_im = sintab[j];
            i = ju;
            ihi = ju + iheight;
            while (i < ihi) {
              b_temp_re_tmp = i + iy;
              temp_re_tmp = y[b_temp_re_tmp].im;
              temp_im = y[b_temp_re_tmp].re;
              temp_re = twid_re * temp_im - twid_im * temp_re_tmp;
              temp_im = twid_re * temp_re_tmp + twid_im * temp_im;
              y[b_temp_re_tmp].re = y[i].re - temp_re;
              y[b_temp_re_tmp].im = y[i].im - temp_im;
              y[i].re = y[i].re + temp_re;
              y[i].im = y[i].im + temp_im;
              i += iDelta2;
            }

            ju++;
          }

          k /= 2;
          iy = iDelta2;
          iDelta2 += iDelta2;
          iheight -= iy;
        }
      }
    }
  }

  static void binary_expand_op(::coder::array<real_T, 2U> &in1, real_T in2,
    const ::coder::array<real_T, 2U> &in3, int32_T in4, int32_T in5, const ::
    coder::array<real_T, 2U> &in6)
  {
    ::coder::array<real_T, 2U> b_in3;
    int32_T i;
    int32_T loop_ub;
    int32_T stride_0_1;
    int32_T stride_1_1;
    if (in6.size(1) == 1) {
      i = (in5 - in4) + 1;
    } else {
      i = in6.size(1);
    }

    b_in3.set_size(1, i);
    stride_0_1 = ((in5 - in4) + 1 != 1);
    stride_1_1 = (in6.size(1) != 1);
    if (in6.size(1) == 1) {
      loop_ub = (in5 - in4) + 1;
    } else {
      loop_ub = in6.size(1);
    }

    for (i = 0; i < loop_ub; i++) {
      b_in3[i] = (in3[in4 + i * stride_0_1] > 2.5 * in6[i * stride_1_1]);
    }

    in1.set_size(1, static_cast<int32_T>((in2 + 1.0) - 1.0) + b_in3.size(1));
    loop_ub = static_cast<int32_T>((in2 + 1.0) - 1.0);
    for (i = 0; i < loop_ub; i++) {
      in1[i] = 0.0;
    }

    loop_ub = b_in3.size(1);
    for (i = 0; i < loop_ub; i++) {
      in1[i + static_cast<int32_T>((in2 + 1.0) - 1.0)] = b_in3[i];
    }
  }

  static void binary_expand_op(::coder::array<creal_T, 2U> &in1, int32_T in2,
    const ::coder::array<creal_T, 2U> &in3, const ::coder::array<creal_T, 2U>
    &in4, const real_T in5_data[])
  {
    ::coder::array<creal_T, 2U> b_in3;
    ::coder::array<creal_T, 2U> r;
    int32_T aux_0_1;
    int32_T aux_1_1;
    int32_T i;
    int32_T i1;
    int32_T loop_ub;
    int32_T stride_0_0;
    int32_T stride_0_1;
    int32_T stride_1_0;
    int32_T stride_1_1;
    if (in4.size(0) == 1) {
      i = in3.size(0);
    } else {
      i = in4.size(0);
    }

    if (in4.size(1) == 1) {
      i1 = in3.size(1);
    } else {
      i1 = in4.size(1);
    }

    b_in3.set_size(i, i1);
    stride_0_0 = (in3.size(0) != 1);
    stride_0_1 = (in3.size(1) != 1);
    stride_1_0 = (in4.size(0) != 1);
    stride_1_1 = (in4.size(1) != 1);
    aux_0_1 = 0;
    aux_1_1 = 0;
    if (in4.size(1) == 1) {
      loop_ub = in3.size(1);
    } else {
      loop_ub = in4.size(1);
    }

    for (i = 0; i < loop_ub; i++) {
      int32_T b_loop_ub;
      i1 = in4.size(0);
      if (i1 == 1) {
        b_loop_ub = in3.size(0);
      } else {
        b_loop_ub = i1;
      }

      for (i1 = 0; i1 < b_loop_ub; i1++) {
        real_T d;
        real_T d1;
        int32_T i2;
        i2 = i1 * stride_1_0;
        d = in4[i2 + in4.size(0) * aux_1_1].im;
        d1 = in4[i2 + in4.size(0) * aux_1_1].re;
        b_in3[i1 + b_in3.size(0) * i].re = in3[i1 * stride_0_0 + in3.size(0) *
          aux_0_1].re * d1 - in3[i1 * stride_0_0 + in3.size(0) * aux_0_1].im * d;
        b_in3[i1 + b_in3.size(0) * i].im = in3[i1 * stride_0_0 + in3.size(0) *
          aux_0_1].re * d + in3[i1 * stride_0_0 + in3.size(0) * aux_0_1].im * d1;
      }

      aux_1_1 += stride_1_1;
      aux_0_1 += stride_0_1;
    }

    coder::goertzel(b_in3, in5_data[in2], r);
    loop_ub = r.size(1);
    for (i = 0; i < loop_ub; i++) {
      in1[in2 + in1.size(0) * i] = r[i];
    }
  }

  static void binary_expand_op(::coder::array<real_T, 2U> &in1, real_T in2,
    const ::coder::array<real_T, 2U> &in3, const ::coder::array<real_T, 2U> &in4,
    real_T in5, const ::coder::array<real_T, 2U> &in6, const ::coder::array<
    real_T, 2U> &in7)
  {
    ::coder::array<real_T, 2U> b_in1;
    int32_T aux_0_1;
    int32_T aux_1_1;
    int32_T aux_2_1;
    int32_T aux_3_1;
    int32_T aux_4_1;
    int32_T b_loop_ub;
    int32_T i;
    int32_T i1;
    int32_T i2;
    int32_T loop_ub;
    int32_T stride_0_0;
    int32_T stride_0_1;
    int32_T stride_1_0;
    int32_T stride_1_1;
    int32_T stride_2_0;
    int32_T stride_2_1;
    int32_T stride_3_0;
    int32_T stride_3_1;
    int32_T stride_4_0;
    int32_T stride_4_1;
    if (in7.size(0) == 1) {
      i = in6.size(0);
    } else {
      i = in7.size(0);
    }

    if (i == 1) {
      if (in4.size(0) == 1) {
        i = in3.size(0);
      } else {
        i = in4.size(0);
      }
    } else if (in7.size(0) == 1) {
      i = in6.size(0);
    } else {
      i = in7.size(0);
    }

    if (in7.size(0) == 1) {
      i1 = in6.size(0);
    } else {
      i1 = in7.size(0);
    }

    if (i == 1) {
      i = in1.size(0);
    } else if (i1 == 1) {
      if (in4.size(0) == 1) {
        i = in3.size(0);
      } else {
        i = in4.size(0);
      }
    } else if (in7.size(0) == 1) {
      i = in6.size(0);
    } else {
      i = in7.size(0);
    }

    if (in7.size(1) == 1) {
      i1 = in6.size(1);
    } else {
      i1 = in7.size(1);
    }

    if (i1 == 1) {
      if (in4.size(1) == 1) {
        i1 = in3.size(1);
      } else {
        i1 = in4.size(1);
      }
    } else if (in7.size(1) == 1) {
      i1 = in6.size(1);
    } else {
      i1 = in7.size(1);
    }

    if (in7.size(1) == 1) {
      i2 = in6.size(1);
    } else {
      i2 = in7.size(1);
    }

    if (i1 == 1) {
      i1 = in1.size(1);
    } else if (i2 == 1) {
      if (in4.size(1) == 1) {
        i1 = in3.size(1);
      } else {
        i1 = in4.size(1);
      }
    } else if (in7.size(1) == 1) {
      i1 = in6.size(1);
    } else {
      i1 = in7.size(1);
    }

    b_in1.set_size(i, i1);
    stride_0_0 = (in1.size(0) != 1);
    stride_0_1 = (in1.size(1) != 1);
    stride_1_0 = (in3.size(0) != 1);
    stride_1_1 = (in3.size(1) != 1);
    stride_2_0 = (in4.size(0) != 1);
    stride_2_1 = (in4.size(1) != 1);
    stride_3_0 = (in6.size(0) != 1);
    stride_3_1 = (in6.size(1) != 1);
    stride_4_0 = (in7.size(0) != 1);
    stride_4_1 = (in7.size(1) != 1);
    aux_0_1 = 0;
    aux_1_1 = 0;
    aux_2_1 = 0;
    aux_3_1 = 0;
    aux_4_1 = 0;
    if (in7.size(1) == 1) {
      i = in6.size(1);
    } else {
      i = in7.size(1);
    }

    if (i == 1) {
      if (in4.size(1) == 1) {
        i = in3.size(1);
      } else {
        i = in4.size(1);
      }
    } else if (in7.size(1) == 1) {
      i = in6.size(1);
    } else {
      i = in7.size(1);
    }

    if (i == 1) {
      loop_ub = in1.size(1);
    } else {
      if (in7.size(1) == 1) {
        i = in6.size(1);
      } else {
        i = in7.size(1);
      }

      if (i == 1) {
        if (in4.size(1) == 1) {
          loop_ub = in3.size(1);
        } else {
          loop_ub = in4.size(1);
        }
      } else if (in7.size(1) == 1) {
        loop_ub = in6.size(1);
      } else {
        loop_ub = in7.size(1);
      }
    }

    for (i = 0; i < loop_ub; i++) {
      int32_T i3;
      int32_T i4;
      i1 = in7.size(0);
      b_loop_ub = in6.size(0);
      i2 = in4.size(0);
      i3 = in3.size(0);
      if (i1 == 1) {
        i4 = b_loop_ub;
      } else {
        i4 = i1;
      }

      if (i4 == 1) {
        if (i2 == 1) {
          i4 = i3;
        } else {
          i4 = i2;
        }
      } else if (i1 == 1) {
        i4 = b_loop_ub;
      } else {
        i4 = i1;
      }

      if (i4 == 1) {
        b_loop_ub = in1.size(0);
      } else {
        if (i1 == 1) {
          i4 = b_loop_ub;
        } else {
          i4 = i1;
        }

        if (i4 == 1) {
          if (i2 == 1) {
            b_loop_ub = i3;
          } else {
            b_loop_ub = i2;
          }
        } else if (i1 != 1) {
          b_loop_ub = i1;
        }
      }

      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b_in1[i1 + b_in1.size(0) * i] = in1[i1 * stride_0_0 + in1.size(0) *
          aux_0_1] + (in2 * (in3[i1 * stride_1_0 + in3.size(0) * aux_1_1] +
                             in4[i1 * stride_2_0 + in4.size(0) * aux_2_1]) - in5
                      * (in6[i1 * stride_3_0 + in6.size(0) * aux_3_1] + in7[i1 *
                         stride_4_0 + in7.size(0) * aux_4_1]));
      }

      aux_4_1 += stride_4_1;
      aux_3_1 += stride_3_1;
      aux_2_1 += stride_2_1;
      aux_1_1 += stride_1_1;
      aux_0_1 += stride_0_1;
    }

    in1.set_size(b_in1.size(0), b_in1.size(1));
    loop_ub = b_in1.size(1);
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = b_in1.size(0);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        in1[i1 + in1.size(0) * i] = b_in1[i1 + b_in1.size(0) * i];
      }
    }
  }

  static void binary_expand_op(::coder::array<real_T, 2U> &in1, const ::coder::
    array<real_T, 2U> &in2, const ::coder::array<real_T, 2U> &in3, int32_T in4,
    int32_T in5, real_T in6)
  {
    int32_T i;
    int32_T loop_ub;
    int32_T stride_0_1;
    int32_T stride_1_1;
    if ((in5 - in4) + 1 == 1) {
      i = in2.size(1);
    } else {
      i = (in5 - in4) + 1;
    }

    in1.set_size(1, i);
    stride_0_1 = (in2.size(1) != 1);
    stride_1_1 = ((in5 - in4) + 1 != 1);
    if ((in5 - in4) + 1 == 1) {
      loop_ub = in2.size(1);
    } else {
      loop_ub = (in5 - in4) + 1;
    }

    for (i = 0; i < loop_ub; i++) {
      in1[i] = in2[i * stride_0_1] - in3[in4 + i * stride_1_1] * in6;
    }
  }

  static void binary_expand_op(::coder::array<creal_T, 2U> &in1, const ::coder::
    array<real_T, 1U> &in2, real_T in3, const ::coder::array<creal_T, 2U> &in4)
  {
    int32_T aux_1_1;
    int32_T i;
    int32_T i1;
    int32_T loop_ub;
    int32_T stride_0_0;
    int32_T stride_1_0;
    int32_T stride_1_1;
    if (in4.size(0) == 1) {
      i = in2.size(0);
    } else {
      i = in4.size(0);
    }

    if (in4.size(1) == 1) {
      i1 = static_cast<int32_T>(in3);
    } else {
      i1 = in4.size(1);
    }

    in1.set_size(i, i1);
    stride_0_0 = (in2.size(0) != 1);
    stride_1_0 = (in4.size(0) != 1);
    stride_1_1 = (in4.size(1) != 1);
    aux_1_1 = 0;
    if (in4.size(1) == 1) {
      loop_ub = static_cast<int32_T>(in3);
    } else {
      loop_ub = in4.size(1);
    }

    for (i = 0; i < loop_ub; i++) {
      int32_T b_loop_ub;
      i1 = in4.size(0);
      if (i1 == 1) {
        b_loop_ub = in2.size(0);
      } else {
        b_loop_ub = i1;
      }

      for (i1 = 0; i1 < b_loop_ub; i1++) {
        int32_T i2;
        i2 = i1 * stride_1_0;
        in1[i1 + in1.size(0) * i].re = in2[i1 * stride_0_0] * in4[i2 + in4.size
          (0) * aux_1_1].re;
        in1[i1 + in1.size(0) * i].im = in2[i1 * stride_0_0] * in4[i2 + in4.size
          (0) * aux_1_1].im;
      }

      aux_1_1 += stride_1_1;
    }
  }

  static void binary_expand_op(::coder::array<creal_T, 1U> &in1, const ::coder::
    array<real_T, 1U> &in2, const ::coder::array<creal_T, 2U> &in3, const
    creal_T in4, int32_T in5)
  {
    ::coder::array<creal_T, 1U> b_in2;
    int32_T i;
    int32_T in3_idx_0;
    int32_T stride_0_0;
    int32_T stride_1_0;
    in3_idx_0 = in3.size(1);
    if (in3_idx_0 == 1) {
      i = in2.size(0);
    } else {
      i = in3_idx_0;
    }

    b_in2.set_size(i);
    stride_0_0 = (in2.size(0) != 1);
    stride_1_0 = (in3_idx_0 != 1);
    if (in3_idx_0 == 1) {
      in3_idx_0 = in2.size(0);
    }

    for (i = 0; i < in3_idx_0; i++) {
      real_T in2_im;
      real_T in2_re;
      int32_T in2_re_tmp;
      in2_re_tmp = i * stride_1_0;
      in2_im = in2[i * stride_0_0];
      in2_re = in2_im * in3[in2_re_tmp].re;
      in2_im *= in3[in2_re_tmp].im;
      b_in2[i].re = in2_re * in4.re - in2_im * in4.im;
      b_in2[i].im = in2_re * in4.im + in2_im * in4.re;
    }

    coder::fft(b_in2, static_cast<real_T>(in5), in1);
  }

  static void binary_expand_op(::coder::array<creal_T, 2U> &in1, const ::coder::
    array<creal_T, 1U> &in2, const ::coder::array<real_T, 1U> &in3, real_T in4,
    const ::coder::array<real_T, 2U> &in5)
  {
    ::coder::array<int32_T, 2U> b_in3;
    int32_T aux_1_1;
    int32_T b_loop_ub;
    int32_T i;
    int32_T i1;
    int32_T loop_ub;
    int32_T stride_0_0;
    int32_T stride_1_0;
    int32_T stride_1_1;
    if (in5.size(0) == 1) {
      i = in3.size(0);
    } else {
      i = in5.size(0);
    }

    if (in5.size(1) == 1) {
      i1 = static_cast<int32_T>(in4);
    } else {
      i1 = in5.size(1);
    }

    b_in3.set_size(i, i1);
    stride_0_0 = (in3.size(0) != 1);
    stride_1_0 = (in5.size(0) != 1);
    stride_1_1 = (in5.size(1) != 1);
    aux_1_1 = 0;
    if (in5.size(1) == 1) {
      loop_ub = static_cast<int32_T>(in4);
    } else {
      loop_ub = in5.size(1);
    }

    for (i = 0; i < loop_ub; i++) {
      i1 = in5.size(0);
      if (i1 == 1) {
        b_loop_ub = in3.size(0);
      } else {
        b_loop_ub = i1;
      }

      for (i1 = 0; i1 < b_loop_ub; i1++) {
        b_in3[i1 + b_in3.size(0) * i] = static_cast<int32_T>((in3[i1 *
          stride_0_0] + in5[i1 * stride_1_0 + in5.size(0) * aux_1_1]) - 1.0) - 1;
      }

      aux_1_1 += stride_1_1;
    }

    in1.set_size(b_in3.size(0), b_in3.size(1));
    loop_ub = b_in3.size(1);
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = b_in3.size(0);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        in1[i1 + in1.size(0) * i] = in2[b_in3[i1 + b_in3.size(0) * i]];
      }
    }
  }

  static void binary_expand_op(creal_T in1_data[], int32_T *in1_size, const
    creal_T in2_data[], const int32_T *in2_size)
  {
    creal_T b_in1_data[2048];
    int32_T i;
    int32_T loop_ub;
    int32_T stride_0_0;
    int32_T stride_1_0;
    stride_0_0 = (*in1_size != 1);
    stride_1_0 = (*in2_size != 1);
    if (*in2_size == 1) {
      loop_ub = *in1_size;
    } else {
      loop_ub = *in2_size;
    }

    for (i = 0; i < loop_ub; i++) {
      real_T d;
      real_T d1;
      real_T d2;
      real_T d3;
      int32_T i1;
      i1 = i * stride_1_0;
      d = in2_data[i1].im;
      d1 = in2_data[i1].re;
      i1 = i * stride_0_0;
      d2 = in1_data[i1].re;
      d3 = in1_data[i1].im;
      b_in1_data[i].re = d2 * d1 - d3 * d;
      b_in1_data[i].im = d2 * d + d3 * d1;
    }

    if (*in2_size == 1) {
      i = *in1_size;
    } else {
      i = *in2_size;
    }

    coder::ifft(b_in1_data, i, in1_data, in1_size);
  }

  static void binary_expand_op(::coder::array<creal_T, 1U> &in1, const ::coder::
    array<creal_T, 2U> &in2)
  {
    ::coder::array<creal_T, 1U> b_in1;
    int32_T i;
    int32_T in2_idx_0;
    int32_T loop_ub;
    int32_T stride_0_0;
    int32_T stride_1_0;
    in2_idx_0 = in2.size(1);
    if (in2_idx_0 == 1) {
      i = in1.size(0);
    } else {
      i = in2_idx_0;
    }

    b_in1.set_size(i);
    stride_0_0 = (in1.size(0) != 1);
    stride_1_0 = (in2_idx_0 != 1);
    if (in2_idx_0 == 1) {
      loop_ub = in1.size(0);
    } else {
      loop_ub = in2_idx_0;
    }

    for (i = 0; i < loop_ub; i++) {
      real_T d;
      real_T d1;
      real_T in1_im;
      real_T in1_re;
      in2_idx_0 = i * stride_0_0;
      in1_re = -in1[in2_idx_0].re;
      in1_im = -in1[in2_idx_0].im;
      in2_idx_0 = i * stride_1_0;
      d = in2[in2_idx_0].im;
      d1 = in2[in2_idx_0].re;
      b_in1[i].re = in1_re * d1 - in1_im * d;
      b_in1[i].im = in1_re * d + in1_im * d1;
    }

    in1.set_size(b_in1.size(0));
    loop_ub = b_in1.size(0);
    for (i = 0; i < loop_ub; i++) {
      in1[i] = b_in1[i];
    }
  }

  static void binary_expand_op(::coder::array<creal_T, 2U> &in1, const ::coder::
    array<creal_T, 2U> &in2, int32_T in3, int32_T in4, const ::coder::array<
    real_T, 1U> &in5)
  {
    int32_T i;
    int32_T loop_ub;
    int32_T stride_0_1;
    int32_T stride_1_1;
    if (in5.size(0) == 1) {
      i = (in4 - in3) + 1;
    } else {
      i = in5.size(0);
    }

    in1.set_size(1, i);
    stride_0_1 = ((in4 - in3) + 1 != 1);
    stride_1_1 = (in5.size(0) != 1);
    if (in5.size(0) == 1) {
      loop_ub = (in4 - in3) + 1;
    } else {
      loop_ub = in5.size(0);
    }

    for (i = 0; i < loop_ub; i++) {
      real_T d;
      d = in5[i * stride_1_1];
      in1[i].re = d * in2[in3 + i * stride_0_1].re;
      in1[i].im = d * in2[in3 + i * stride_0_1].im;
    }
  }

  static void binary_expand_op(::coder::array<real_T, 2U> &in1, int32_T in2,
    int32_T in3)
  {
    ::coder::array<int8_T, 2U> b_in1;
    ::coder::array<int8_T, 2U> r;
    int32_T i;
    int32_T loop_ub;
    int32_T stride_0_1;
    int32_T stride_1_1;
    b_in1.set_size(1, in2 + 2);
    for (i = 0; i <= in2; i++) {
      b_in1[i] = static_cast<int8_T>(in1[i]);
    }

    b_in1[in2 + 1] = 0;
    r.set_size(1, in3 + 2);
    r[0] = 0;
    for (i = 0; i <= in3; i++) {
      r[i + 1] = static_cast<int8_T>(in1[i]);
    }

    if (r.size(1) == 1) {
      i = b_in1.size(1);
    } else {
      i = r.size(1);
    }

    in1.set_size(1, i);
    stride_0_1 = (b_in1.size(1) != 1);
    stride_1_1 = (r.size(1) != 1);
    if (r.size(1) == 1) {
      loop_ub = b_in1.size(1);
    } else {
      loop_ub = r.size(1);
    }

    for (i = 0; i < loop_ub; i++) {
      in1[i] = static_cast<int8_T>(b_in1[i * stride_0_1] - r[i * stride_1_1]);
    }
  }

  static void binary_expand_op(::coder::array<creal_T, 2U> &in1, const ::coder::
    array<real_T, 1U> &in2, const ::coder::array<creal_T, 2U> &in3)
  {
    ::coder::array<real_T, 2U> b_in2;
    int32_T aux_0_1;
    int32_T aux_1_1;
    int32_T i;
    int32_T i1;
    int32_T loop_ub;
    int32_T stride_0_0;
    int32_T stride_1_0;
    int32_T stride_1_1;
    b_in2.set_size(in2.size(0), 26);
    loop_ub = in2.size(0);
    for (i = 0; i < 26; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_in2[i1 + b_in2.size(0) * i] = in2[i1];
      }
    }

    if (in3.size(1) == 1) {
      i = b_in2.size(0);
    } else {
      i = in3.size(1);
    }

    if (in3.size(0) == 1) {
      i1 = 26;
    } else {
      i1 = in3.size(0);
    }

    in1.set_size(i, i1);
    stride_0_0 = (b_in2.size(0) != 1);
    stride_1_0 = (in3.size(1) != 1);
    stride_1_1 = (in3.size(0) != 1);
    aux_0_1 = 0;
    aux_1_1 = 0;
    if (in3.size(0) == 1) {
      loop_ub = 26;
    } else {
      loop_ub = in3.size(0);
    }

    for (i = 0; i < loop_ub; i++) {
      int32_T b_loop_ub;
      i1 = in3.size(1);
      if (i1 == 1) {
        b_loop_ub = b_in2.size(0);
      } else {
        b_loop_ub = i1;
      }

      for (i1 = 0; i1 < b_loop_ub; i1++) {
        real_T d;
        int32_T i2;
        i2 = i1 * stride_1_0;
        d = b_in2[i1 * stride_0_0 + b_in2.size(0) * aux_0_1];
        in1[i1 + in1.size(0) * i].re = d * in3[aux_1_1 + in3.size(0) * i2].re;
        in1[i1 + in1.size(0) * i].im = d * in3[aux_1_1 + in3.size(0) * i2].im;
      }

      aux_1_1 += stride_1_1;
      aux_0_1++;
    }
  }

  //
  //
  namespace coder
  {
    static void b_dec2hex(const uint64_T d_data[], char_T s_data[], int32_T
                          s_size[2])
    {
      int32_T b_size[2];
      int32_T idx;
      int32_T k;
      int32_T nb;
      int32_T npad;
      char_T b_data[64];
      char_T sfull[64];
      boolean_T exitg1;
      for (k = 0; k < 64; k++) {
        sfull[k] = '0';
        if ((d_data[0] & 1ULL << (63 - k)) != 0ULL) {
          sfull[k] = '1';
        }
      }

      idx = 0;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k < 64)) {
        if (sfull[k] == '1') {
          idx = k + 1;
          exitg1 = true;
        } else {
          k++;
        }
      }

      if (idx == 0) {
        idx = 64;
      }

      nb = 64 - idx;
      if (65 - idx <= 36) {
        b_size[0] = 1;
        b_size[1] = 36;
      } else {
        b_size[0] = 1;
        b_size[1] = 65 - idx;
      }

      if (65 - idx < 36) {
        npad = idx - 28;
        for (k = 0; k <= npad - 2; k++) {
          b_data[k] = '0';
        }
      } else {
        npad = 1;
      }

      for (k = 0; k <= nb; k++) {
        b_data[(npad + k) - 1] = sfull[(idx + k) - 1];
      }

      binToHex(b_data, b_size, s_data, s_size);
    }

    //
    //
    static void b_eml_find(const boolean_T x_data[], const int32_T x_size[2],
      int32_T i_data[], int32_T i_size[2])
    {
      int32_T idx;
      int32_T ii;
      int32_T nx;
      boolean_T exitg1;
      nx = x_size[1];
      idx = 0;
      i_size[0] = 1;
      i_size[1] = x_size[1];
      ii = 0;
      exitg1 = false;
      while ((!exitg1) && (ii <= nx - 1)) {
        if (x_data[ii]) {
          idx++;
          i_data[idx - 1] = ii + 1;
          if (idx >= nx) {
            exitg1 = true;
          } else {
            ii++;
          }
        } else {
          ii++;
        }
      }

      if (x_size[1] == 1) {
        if (idx == 0) {
          i_size[0] = 1;
          i_size[1] = 0;
        }
      } else if (idx < 1) {
        i_size[1] = 0;
      } else {
        i_size[1] = idx;
      }
    }

    //
    //
    static real_T b_mod(real_T x)
    {
      real_T r;
      if (std::isnan(x) || std::isinf(x)) {
        r = rtNaN;
      } else if (x == 0.0) {
        r = 0.0;
      } else {
        r = std::fmod(x, 13.0);
        if (r == 0.0) {
          r = 0.0;
        } else if (x < 0.0) {
          r += 13.0;
        }
      }

      return r;
    }

    //
    //
    static void binToHex(const char_T b_data[], const int32_T b_size[2], char_T
                         s_data[], int32_T s_size[2])
    {
      int32_T nCompleteNibbles;
      int32_T srem;
      nCompleteNibbles = b_size[1] >> 2;
      srem = b_size[1] - (nCompleteNibbles << 2);
      if (srem == 0) {
        s_size[0] = 1;
        s_size[1] = nCompleteNibbles;
        nCompleteNibbles--;
        for (int32_T j{0}; j <= nCompleteNibbles; j++) {
          int32_T k;
          uint8_T v;
          k = j << 2;
          v = (b_data[k + 3] == '1');
          if (b_data[k + 2] == '1') {
            v = static_cast<uint8_T>(v + 2);
          }

          if (b_data[k + 1] == '1') {
            v = static_cast<uint8_T>(v + 4);
          }

          if (b_data[k] == '1') {
            v = static_cast<uint8_T>(v + 8);
          }

          if (v > 9) {
            s_data[j] = static_cast<char_T>(v + 55);
          } else {
            s_data[j] = static_cast<char_T>(v + 48);
          }
        }
      } else {
        uint8_T v;
        s_size[0] = 1;
        s_size[1] = nCompleteNibbles + 1;
        nCompleteNibbles--;
        if (srem == 1) {
          s_data[0] = static_cast<char_T>((b_data[0] == '1') + 48);
        } else if (srem == 2) {
          v = (b_data[1] == '1');
          if (b_data[0] == '1') {
            v = static_cast<uint8_T>(v + 2);
          }

          s_data[0] = static_cast<char_T>(v + 48);
        } else {
          v = (b_data[2] == '1');
          if (b_data[1] == '1') {
            v = static_cast<uint8_T>(v + 2);
          }

          if (b_data[0] == '1') {
            v = static_cast<uint8_T>(v + 4);
          }

          s_data[0] = static_cast<char_T>(v + 48);
        }

        for (int32_T j{0}; j <= nCompleteNibbles; j++) {
          int32_T k;
          k = srem + (j << 2);
          v = (b_data[k + 3] == '1');
          if (b_data[k + 2] == '1') {
            v = static_cast<uint8_T>(v + 2);
          }

          if (b_data[k + 1] == '1') {
            v = static_cast<uint8_T>(v + 4);
          }

          if (b_data[k] == '1') {
            v = static_cast<uint8_T>(v + 8);
          }

          if (v > 9) {
            s_data[j + 1] = static_cast<char_T>(v + 55);
          } else {
            s_data[j + 1] = static_cast<char_T>(v + 48);
          }
        }
      }
    }

    //
    //
    static void dec2hex(const uint64_T d_data[], char_T s_data[], int32_T
                        s_size[2])
    {
      int32_T b_size[2];
      int32_T idx;
      int32_T k;
      int32_T nb;
      int32_T npad;
      char_T b_data[64];
      char_T sfull[64];
      boolean_T exitg1;
      for (k = 0; k < 64; k++) {
        sfull[k] = '0';
        if ((d_data[0] & 1ULL << (63 - k)) != 0ULL) {
          sfull[k] = '1';
        }
      }

      idx = 0;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k < 64)) {
        if (sfull[k] == '1') {
          idx = k + 1;
          exitg1 = true;
        } else {
          k++;
        }
      }

      if (idx == 0) {
        idx = 64;
      }

      nb = 64 - idx;
      if (65 - idx <= 28) {
        b_size[0] = 1;
        b_size[1] = 28;
      } else {
        b_size[0] = 1;
        b_size[1] = 65 - idx;
      }

      if (65 - idx < 28) {
        npad = idx - 36;
        for (k = 0; k <= npad - 2; k++) {
          b_data[k] = '0';
        }
      } else {
        npad = 1;
      }

      for (k = 0; k <= nb; k++) {
        b_data[(npad + k) - 1] = sfull[(idx + k) - 1];
      }

      binToHex(b_data, b_size, s_data, s_size);
    }

    //
    //
    static void eml_find(const boolean_T x[528], int32_T i_data[], int32_T
                         *i_size)
    {
      int32_T idx;
      int32_T ii;
      boolean_T exitg1;
      idx = 0;
      ii = 0;
      exitg1 = false;
      while ((!exitg1) && (ii < 528)) {
        if (x[ii]) {
          idx++;
          i_data[idx - 1] = ii + 1;
          if (idx >= 528) {
            exitg1 = true;
          } else {
            ii++;
          }
        } else {
          ii++;
        }
      }

      if (idx < 1) {
        *i_size = 0;
      } else {
        *i_size = idx;
      }
    }

    //
    //
    static void eml_float_colon(real_T a, real_T d, real_T b, ::coder::array<
      real_T, 2U> &y)
    {
      real_T apnd;
      real_T cdiff;
      real_T ndbl;
      int32_T n;
      ndbl = std::floor((b - a) / d + 0.5);
      apnd = a + ndbl * d;
      if (d > 0.0) {
        cdiff = apnd - b;
      } else {
        cdiff = b - apnd;
      }

      if (std::abs(cdiff) < 4.4408920985006262E-16 * std::fmax(std::abs(a), std::
           abs(b))) {
        ndbl++;
        apnd = b;
      } else if (cdiff > 0.0) {
        apnd = a + (ndbl - 1.0) * d;
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
        y[0] = a;
        if (n > 1) {
          int32_T nm1d2;
          y[n - 1] = apnd;
          nm1d2 = (n - 1) / 2;
          for (int32_T k{0}; k <= nm1d2 - 2; k++) {
            ndbl = (static_cast<real_T>(k) + 1.0) * d;
            y[k + 1] = a + ndbl;
            y[(n - k) - 2] = apnd - ndbl;
          }

          if (nm1d2 << 1 == n - 1) {
            y[nm1d2] = (a + apnd) / 2.0;
          } else {
            ndbl = static_cast<real_T>(nm1d2) * d;
            y[nm1d2] = a + ndbl;
            y[nm1d2 + 1] = apnd - ndbl;
          }
        }
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
    static void fft(const ::coder::array<real_T, 2U> &x, real_T varargin_1, ::
                    coder::array<creal_T, 2U> &y)
    {
      ::coder::array<creal_T, 1U> fv;
      ::coder::array<creal_T, 1U> fy;
      ::coder::array<creal_T, 1U> wwc;
      ::coder::array<creal_T, 1U> yCol;
      ::coder::array<real_T, 2U> costab;
      ::coder::array<real_T, 2U> sintab;
      ::coder::array<real_T, 2U> sintabinv;
      int32_T N2blue;
      int32_T minNrowsNx;
      int32_T nfft_tmp_tmp;
      nfft_tmp_tmp = static_cast<int32_T>(varargin_1);
      if ((x.size(1) == 0) || (static_cast<int32_T>(varargin_1) == 0)) {
        y.set_size(1, nfft_tmp_tmp);
        for (int32_T i{0}; i < nfft_tmp_tmp; i++) {
          y[i].re = 0.0;
          y[i].im = 0.0;
        }
      } else {
        int32_T i;
        boolean_T useRadix2;
        useRadix2 = ((static_cast<int32_T>(varargin_1) > 0) &&
                     ((static_cast<int32_T>(varargin_1) & (static_cast<int32_T>
          (varargin_1) - 1)) == 0));
        internal::FFTImplementationCallback::get_algo_sizes(static_cast<int32_T>
          (varargin_1), useRadix2, &N2blue, &minNrowsNx);
        internal::FFTImplementationCallback::generate_twiddle_tables(minNrowsNx,
          useRadix2, costab, sintab, sintabinv);
        if (useRadix2) {
          ::coder::array<real_T, 1U> b_x;
          int32_T b_y;
          yCol.set_size(nfft_tmp_tmp);
          if (static_cast<int32_T>(varargin_1) > x.size(1)) {
            yCol.set_size(nfft_tmp_tmp);
            for (i = 0; i < nfft_tmp_tmp; i++) {
              yCol[i].re = 0.0;
              yCol[i].im = 0.0;
            }
          }

          b_y = x.size(1);
          b_x = x.reshape(b_y);
          internal::FFTImplementationCallback::doHalfLengthRadix2(b_x, yCol,
            static_cast<int32_T>(varargin_1), costab, sintab);
        } else {
          real_T nt_im;
          real_T nt_re;
          int32_T b_y;
          i = static_cast<int32_T>(varargin_1) & 1;
          if (i == 0) {
            int32_T nInt2;
            int32_T nInt2m1;
            int32_T rt;
            minNrowsNx = static_cast<int32_T>(varargin_1) / 2;
            nInt2m1 = (minNrowsNx + minNrowsNx) - 1;
            wwc.set_size(nInt2m1);
            rt = 0;
            wwc[minNrowsNx - 1].re = 1.0;
            wwc[minNrowsNx - 1].im = 0.0;
            nInt2 = minNrowsNx << 1;
            for (int32_T k{0}; k <= minNrowsNx - 2; k++) {
              b_y = ((k + 1) << 1) - 1;
              if (nInt2 - rt <= b_y) {
                rt += b_y - nInt2;
              } else {
                rt += b_y;
              }

              nt_im = -3.1415926535897931 * static_cast<real_T>(rt) /
                static_cast<real_T>(minNrowsNx);
              if (nt_im == 0.0) {
                nt_re = 1.0;
                nt_im = 0.0;
              } else {
                nt_re = std::cos(nt_im);
                nt_im = std::sin(nt_im);
              }

              b_y = (minNrowsNx - k) - 2;
              wwc[b_y].re = nt_re;
              wwc[b_y].im = -nt_im;
            }

            b_y = nInt2m1 - 1;
            for (int32_T k{b_y}; k >= minNrowsNx; k--) {
              wwc[k] = wwc[(nInt2m1 - k) - 1];
            }
          } else {
            int32_T nInt2;
            int32_T nInt2m1;
            int32_T rt;
            nInt2m1 = (static_cast<int32_T>(varargin_1) + static_cast<int32_T>
                       (varargin_1)) - 1;
            wwc.set_size(nInt2m1);
            rt = 0;
            wwc[static_cast<int32_T>(varargin_1) - 1].re = 1.0;
            wwc[static_cast<int32_T>(varargin_1) - 1].im = 0.0;
            nInt2 = static_cast<int32_T>(varargin_1) << 1;
            for (int32_T k{0}; k <= nfft_tmp_tmp - 2; k++) {
              b_y = ((k + 1) << 1) - 1;
              if (nInt2 - rt <= b_y) {
                rt += b_y - nInt2;
              } else {
                rt += b_y;
              }

              nt_im = -3.1415926535897931 * static_cast<real_T>(rt) /
                static_cast<real_T>(static_cast<int32_T>(varargin_1));
              if (nt_im == 0.0) {
                nt_re = 1.0;
                nt_im = 0.0;
              } else {
                nt_re = std::cos(nt_im);
                nt_im = std::sin(nt_im);
              }

              b_y = (static_cast<int32_T>(varargin_1) - k) - 2;
              wwc[b_y].re = nt_re;
              wwc[b_y].im = -nt_im;
            }

            b_y = nInt2m1 - 1;
            for (int32_T k{b_y}; k >= nfft_tmp_tmp; k--) {
              wwc[k] = wwc[(nInt2m1 - k) - 1];
            }
          }

          yCol.set_size(nfft_tmp_tmp);
          if (static_cast<int32_T>(varargin_1) > x.size(1)) {
            yCol.set_size(nfft_tmp_tmp);
            for (b_y = 0; b_y < nfft_tmp_tmp; b_y++) {
              yCol[b_y].re = 0.0;
              yCol[b_y].im = 0.0;
            }
          }

          if ((N2blue != 1) && (i == 0)) {
            ::coder::array<real_T, 1U> b_x;
            b_y = x.size(1);
            b_x = x.reshape(b_y);
            internal::FFTImplementationCallback::doHalfLengthBluestein(b_x, yCol,
              x.size(1), static_cast<int32_T>(varargin_1), N2blue, wwc, costab,
              sintab, costab, sintabinv);
          } else {
            real_T b_re_tmp;
            real_T re_tmp;
            b_y = static_cast<int32_T>(varargin_1);
            minNrowsNx = x.size(1);
            if (b_y <= minNrowsNx) {
              minNrowsNx = b_y;
            }

            for (int32_T k{0}; k < minNrowsNx; k++) {
              b_y = (static_cast<int32_T>(varargin_1) + k) - 1;
              nt_re = x[k];
              yCol[k].re = wwc[b_y].re * nt_re;
              yCol[k].im = wwc[b_y].im * -nt_re;
            }

            i = minNrowsNx + 1;
            for (int32_T k{i}; k <= nfft_tmp_tmp; k++) {
              yCol[k - 1].re = 0.0;
              yCol[k - 1].im = 0.0;
            }

            internal::FFTImplementationCallback::r2br_r2dit_trig_impl(yCol,
              N2blue, costab, sintab, fy);
            internal::FFTImplementationCallback::r2br_r2dit_trig_impl(wwc,
              N2blue, costab, sintab, fv);
            b_y = fy.size(0);
            for (i = 0; i < b_y; i++) {
              nt_re = fy[i].re;
              nt_im = fv[i].im;
              re_tmp = fy[i].im;
              b_re_tmp = fv[i].re;
              fy[i].re = nt_re * b_re_tmp - re_tmp * nt_im;
              fy[i].im = nt_re * nt_im + re_tmp * b_re_tmp;
            }

            internal::FFTImplementationCallback::r2br_r2dit_trig_impl(fy, N2blue,
              costab, sintabinv, fv);
            if (fv.size(0) > 1) {
              nt_re = 1.0 / static_cast<real_T>(fv.size(0));
              b_y = fv.size(0);
              for (i = 0; i < b_y; i++) {
                fv[i].re = nt_re * fv[i].re;
                fv[i].im = nt_re * fv[i].im;
              }
            }

            i = wwc.size(0);
            for (int32_T k{nfft_tmp_tmp}; k <= i; k++) {
              nt_re = wwc[k - 1].re;
              nt_im = fv[k - 1].im;
              re_tmp = wwc[k - 1].im;
              b_re_tmp = fv[k - 1].re;
              b_y = k - static_cast<int32_T>(varargin_1);
              yCol[b_y].re = nt_re * b_re_tmp + re_tmp * nt_im;
              yCol[b_y].im = nt_re * nt_im - re_tmp * b_re_tmp;
            }
          }
        }

        y.set_size(1, nfft_tmp_tmp);
        for (i = 0; i < nfft_tmp_tmp; i++) {
          y[i] = yCol[i];
        }
      }
    }

    //
    //
    static void fft(const ::coder::array<creal_T, 1U> &x, real_T varargin_1, ::
                    coder::array<creal_T, 1U> &y)
    {
      ::coder::array<real_T, 2U> costab;
      ::coder::array<real_T, 2U> sintab;
      ::coder::array<real_T, 2U> sintabinv;
      int32_T N2blue;
      int32_T nRows;
      if ((x.size(0) == 0) || (static_cast<int32_T>(varargin_1) == 0)) {
        y.set_size(static_cast<int32_T>(varargin_1));
        N2blue = static_cast<int32_T>(varargin_1);
        for (nRows = 0; nRows < N2blue; nRows++) {
          y[nRows].re = 0.0;
          y[nRows].im = 0.0;
        }
      } else {
        boolean_T useRadix2;
        useRadix2 = ((static_cast<int32_T>(varargin_1) > 0) &&
                     ((static_cast<int32_T>(varargin_1) & (static_cast<int32_T>
          (varargin_1) - 1)) == 0));
        internal::FFTImplementationCallback::get_algo_sizes(static_cast<int32_T>
          (varargin_1), useRadix2, &N2blue, &nRows);
        internal::FFTImplementationCallback::generate_twiddle_tables(nRows,
          useRadix2, costab, sintab, sintabinv);
        if (useRadix2) {
          internal::FFTImplementationCallback::r2br_r2dit_trig_impl(x,
            static_cast<int32_T>(varargin_1), costab, sintab, y);
        } else {
          internal::FFTImplementationCallback::dobluesteinfft(x, N2blue,
            static_cast<int32_T>(varargin_1), costab, sintab, sintabinv, y);
        }
      }
    }

    //
    //
    static void fft(const creal_T x[256], real_T varargin_1, creal_T y_data[],
                    int32_T *y_size)
    {
      ::coder::array<creal_T, 1U> b_y_data;
      ::coder::array<creal_T, 1U> fy;
      ::coder::array<creal_T, 1U> wwc;
      ::coder::array<creal_T, 1U> y;
      ::coder::array<real_T, 2U> costab;
      ::coder::array<real_T, 2U> costab1q;
      ::coder::array<real_T, 2U> sintab;
      ::coder::array<real_T, 2U> sintabinv;
      int32_T N2blue;
      int32_T ihi;
      int32_T nd2;
      ihi = static_cast<int32_T>(varargin_1);
      if (static_cast<int32_T>(varargin_1) == 0) {
        *y_size = static_cast<int32_T>(varargin_1);
        if (ihi - 1 >= 0) {
          std::memset(&y_data[0], 0, static_cast<uint32_T>(ihi) * sizeof(creal_T));
        }
      } else {
        real_T nt_im;
        int32_T istart;
        int32_T j;
        int32_T k;
        boolean_T useRadix2;
        useRadix2 = ((static_cast<int32_T>(varargin_1) > 0) &&
                     ((static_cast<int32_T>(varargin_1) & (static_cast<int32_T>
          (varargin_1) - 1)) == 0));
        internal::FFTImplementationCallback::get_algo_sizes(static_cast<int32_T>
          (varargin_1), useRadix2, &N2blue, &nd2);
        nt_im = 6.2831853071795862 / static_cast<real_T>(nd2);
        istart = nd2 / 2 / 2;
        costab1q.set_size(1, istart + 1);
        costab1q[0] = 1.0;
        nd2 = istart / 2 - 1;
        for (k = 0; k <= nd2; k++) {
          costab1q[k + 1] = std::cos(nt_im * (static_cast<real_T>(k) + 1.0));
        }

        j = nd2 + 2;
        nd2 = istart - 1;
        for (k = j; k <= nd2; k++) {
          costab1q[k] = std::sin(nt_im * static_cast<real_T>(istart - k));
        }

        costab1q[istart] = 0.0;
        if (!useRadix2) {
          istart = costab1q.size(1) - 1;
          nd2 = (costab1q.size(1) - 1) << 1;
          costab.set_size(1, nd2 + 1);
          sintab.set_size(1, nd2 + 1);
          costab[0] = 1.0;
          sintab[0] = 0.0;
          sintabinv.set_size(1, nd2 + 1);
          for (k = 0; k < istart; k++) {
            sintabinv[k + 1] = costab1q[(istart - k) - 1];
          }

          j = costab1q.size(1);
          for (k = j; k <= nd2; k++) {
            sintabinv[k] = costab1q[k - istart];
          }

          for (k = 0; k < istart; k++) {
            costab[k + 1] = costab1q[k + 1];
            sintab[k + 1] = -costab1q[(istart - k) - 1];
          }

          j = costab1q.size(1);
          for (k = j; k <= nd2; k++) {
            costab[k] = -costab1q[nd2 - k];
            sintab[k] = -costab1q[k - istart];
          }
        } else {
          istart = costab1q.size(1) - 1;
          nd2 = (costab1q.size(1) - 1) << 1;
          costab.set_size(1, nd2 + 1);
          sintab.set_size(1, nd2 + 1);
          costab[0] = 1.0;
          sintab[0] = 0.0;
          for (k = 0; k < istart; k++) {
            costab[k + 1] = costab1q[k + 1];
            sintab[k + 1] = -costab1q[(istart - k) - 1];
          }

          j = costab1q.size(1);
          for (k = j; k <= nd2; k++) {
            costab[k] = -costab1q[nd2 - k];
            sintab[k] = -costab1q[k - istart];
          }

          sintabinv.set_size(1, 0);
        }

        if (useRadix2) {
          real_T b_nt_re_tmp;
          real_T twid_re;
          int32_T nInt2;
          int32_T nRowsD2;
          int32_T rt;
          *y_size = static_cast<int32_T>(varargin_1);
          if (static_cast<int32_T>(varargin_1) > 256) {
            *y_size = static_cast<int32_T>(varargin_1);
            if (ihi - 1 >= 0) {
              std::memset(&y_data[0], 0, static_cast<uint32_T>(ihi) * sizeof
                          (creal_T));
            }
          }

          if (static_cast<int32_T>(varargin_1) >= 256) {
            j = 254;
          } else {
            j = static_cast<int32_T>(varargin_1) - 2;
          }

          nInt2 = static_cast<int32_T>(varargin_1) - 2;
          nRowsD2 = static_cast<int32_T>(varargin_1) / 2;
          k = nRowsD2 / 2;
          nd2 = 0;
          rt = 0;
          for (N2blue = 0; N2blue <= j; N2blue++) {
            y_data[nd2] = x[N2blue];
            istart = static_cast<int32_T>(varargin_1);
            useRadix2 = true;
            while (useRadix2) {
              istart >>= 1;
              rt ^= istart;
              useRadix2 = ((rt & istart) == 0);
            }

            nd2 = rt;
          }

          y_data[nd2] = x[j + 1];
          y.set_size(*y_size);
          for (j = 0; j < *y_size; j++) {
            y[j] = y_data[j];
          }

          if (static_cast<int32_T>(varargin_1) > 1) {
            for (N2blue = 0; N2blue <= nInt2; N2blue += 2) {
              real_T re_tmp;
              b_nt_re_tmp = y[N2blue + 1].re;
              nt_im = y[N2blue + 1].im;
              re_tmp = y[N2blue].re;
              twid_re = y[N2blue].im;
              y[N2blue + 1].re = re_tmp - b_nt_re_tmp;
              y[N2blue + 1].im = twid_re - nt_im;
              y[N2blue].re = re_tmp + b_nt_re_tmp;
              y[N2blue].im = twid_re + nt_im;
            }
          }

          nd2 = 2;
          rt = 4;
          nInt2 = ((k - 1) << 2) + 1;
          while (k > 0) {
            real_T nt_re;
            int32_T nt_re_tmp;
            for (N2blue = 0; N2blue < nInt2; N2blue += rt) {
              nt_re_tmp = N2blue + nd2;
              nt_re = y[nt_re_tmp].re;
              nt_im = y[nt_re_tmp].im;
              y[nt_re_tmp].re = y[N2blue].re - nt_re;
              y[nt_re_tmp].im = y[N2blue].im - nt_im;
              y[N2blue].re = y[N2blue].re + nt_re;
              y[N2blue].im = y[N2blue].im + nt_im;
            }

            istart = 1;
            for (j = k; j < nRowsD2; j += k) {
              real_T twid_im;
              twid_re = costab[j];
              twid_im = sintab[j];
              N2blue = istart;
              ihi = istart + nInt2;
              while (N2blue < ihi) {
                nt_re_tmp = N2blue + nd2;
                b_nt_re_tmp = y[nt_re_tmp].im;
                nt_im = y[nt_re_tmp].re;
                nt_re = twid_re * nt_im - twid_im * b_nt_re_tmp;
                nt_im = twid_re * b_nt_re_tmp + twid_im * nt_im;
                y[nt_re_tmp].re = y[N2blue].re - nt_re;
                y[nt_re_tmp].im = y[N2blue].im - nt_im;
                y[N2blue].re = y[N2blue].re + nt_re;
                y[N2blue].im = y[N2blue].im + nt_im;
                N2blue += rt;
              }

              istart++;
            }

            k /= 2;
            nd2 = rt;
            rt += rt;
            nInt2 -= nd2;
          }

          *y_size = y.size(0);
          nd2 = y.size(0);
          for (j = 0; j < nd2; j++) {
            y_data[j] = y[j];
          }
        } else {
          real_T nt_re;
          real_T re_tmp;
          real_T twid_im;
          real_T twid_re;
          int32_T nInt2;
          int32_T rt;
          nd2 = (static_cast<int32_T>(varargin_1) + static_cast<int32_T>
                 (varargin_1)) - 1;
          wwc.set_size(nd2);
          rt = 0;
          wwc[static_cast<int32_T>(varargin_1) - 1].re = 1.0;
          wwc[static_cast<int32_T>(varargin_1) - 1].im = 0.0;
          nInt2 = static_cast<int32_T>(varargin_1) << 1;
          for (k = 0; k <= ihi - 2; k++) {
            j = ((k + 1) << 1) - 1;
            if (nInt2 - rt <= j) {
              rt += j - nInt2;
            } else {
              rt += j;
            }

            nt_im = -3.1415926535897931 * static_cast<real_T>(rt) /
              static_cast<real_T>(static_cast<int32_T>(varargin_1));
            if (nt_im == 0.0) {
              nt_re = 1.0;
              nt_im = 0.0;
            } else {
              nt_re = std::cos(nt_im);
              nt_im = std::sin(nt_im);
            }

            j = (static_cast<int32_T>(varargin_1) - k) - 2;
            wwc[j].re = nt_re;
            wwc[j].im = -nt_im;
          }

          j = nd2 - 1;
          for (k = j; k >= ihi; k--) {
            wwc[k] = wwc[(nd2 - k) - 1];
          }

          *y_size = static_cast<int32_T>(varargin_1);
          if (static_cast<int32_T>(varargin_1) > 256) {
            *y_size = static_cast<int32_T>(varargin_1);
            if (ihi - 1 >= 0) {
              std::memset(&y_data[0], 0, static_cast<uint32_T>(ihi) * sizeof
                          (creal_T));
            }
          }

          nd2 = static_cast<int32_T>(varargin_1);
          if (nd2 > 256) {
            nd2 = 256;
          }

          j = static_cast<uint16_T>(nd2);
          for (k = 0; k < j; k++) {
            int32_T nt_re_tmp;
            nt_re_tmp = (static_cast<int32_T>(varargin_1) + k) - 1;
            nt_re = wwc[nt_re_tmp].re;
            nt_im = wwc[nt_re_tmp].im;
            twid_im = x[k].im;
            re_tmp = x[k].re;
            y_data[k].re = nt_re * re_tmp + nt_im * twid_im;
            y_data[k].im = nt_re * twid_im - nt_im * re_tmp;
          }

          j = nd2 + 1;
          if (j <= ihi) {
            std::memset(&y_data[j + -1], 0, static_cast<uint32_T>((ihi - j) + 1)
                        * sizeof(creal_T));
          }

          b_y_data.set(&y_data[0], *y_size);
          internal::FFTImplementationCallback::r2br_r2dit_trig_impl(b_y_data,
            N2blue, costab, sintab, y);
          fy.set_size(y.size(0));
          nd2 = y.size(0);
          for (j = 0; j < nd2; j++) {
            fy[j] = y[j];
          }

          internal::FFTImplementationCallback::r2br_r2dit_trig_impl(wwc, N2blue,
            costab, sintab, y);
          nd2 = fy.size(0);
          for (j = 0; j < nd2; j++) {
            re_tmp = fy[j].re;
            nt_im = y[j].im;
            twid_re = fy[j].im;
            twid_im = y[j].re;
            fy[j].re = re_tmp * twid_im - twid_re * nt_im;
            fy[j].im = re_tmp * nt_im + twid_re * twid_im;
          }

          internal::FFTImplementationCallback::r2br_r2dit_trig_impl(fy, N2blue,
            costab, sintabinv, y);
          if (y.size(0) > 1) {
            nt_im = 1.0 / static_cast<real_T>(y.size(0));
            nd2 = y.size(0);
            for (j = 0; j < nd2; j++) {
              y[j].re = nt_im * y[j].re;
              y[j].im = nt_im * y[j].im;
            }
          }

          j = wwc.size(0);
          for (k = ihi; k <= j; k++) {
            twid_im = wwc[k - 1].re;
            re_tmp = y[k - 1].im;
            nt_im = wwc[k - 1].im;
            twid_re = y[k - 1].re;
            nd2 = k - static_cast<int32_T>(varargin_1);
            y_data[nd2].re = twid_im * twid_re + nt_im * re_tmp;
            y_data[nd2].im = twid_im * re_tmp - nt_im * twid_re;
          }
        }
      }
    }

    //
    //
    static void fftshift(::coder::array<creal_T, 2U> &x)
    {
      for (int32_T dim{0}; dim < 2; dim++) {
        int32_T i;
        i = x.size(dim);
        if (i > 1) {
          int32_T lowerDim;
          int32_T npages;
          int32_T vlend2;
          vlend2 = static_cast<int32_T>(static_cast<uint32_T>(i) >> 1) - 1;
          npages = 1;
          lowerDim = dim + 2;
          for (int32_T k{lowerDim}; k < 3; k++) {
            npages *= x.size(1);
          }

          if ((vlend2 + 1) << 1 == x.size(dim)) {
            int32_T i2;
            i2 = 0;
            for (int32_T b_i{0}; b_i < npages; b_i++) {
              int32_T i1;
              int32_T ib;
              i1 = i2;
              i2 = (i2 + i) - 1;
              i1++;
              i2++;
              ib = i1 + vlend2;
              for (int32_T k{0}; k <= vlend2; k++) {
                real_T xtmp_im;
                real_T xtmp_re;
                int32_T b_i1;
                lowerDim = (i1 + k) - 1;
                xtmp_re = x[lowerDim].re;
                xtmp_im = x[lowerDim].im;
                b_i1 = ib + k;
                x[lowerDim] = x[b_i1];
                x[b_i1].re = xtmp_re;
                x[b_i1].im = xtmp_im;
              }
            }
          } else {
            int32_T i2;
            i2 = 0;
            for (int32_T b_i{0}; b_i < npages; b_i++) {
              real_T xtmp_im;
              real_T xtmp_re;
              int32_T i1;
              int32_T ib;
              i1 = i2;
              i2 = (i2 + i) - 1;
              i1++;
              i2++;
              ib = i1 + vlend2;
              xtmp_re = x[ib].re;
              xtmp_im = x[ib].im;
              for (int32_T k{0}; k <= vlend2; k++) {
                int32_T b_i1;
                b_i1 = ib + k;
                lowerDim = (i1 + k) - 1;
                x[b_i1] = x[lowerDim];
                x[lowerDim] = x[b_i1 + 1];
              }

              ib = (ib + vlend2) + 1;
              x[ib].re = xtmp_re;
              x[ib].im = xtmp_im;
            }
          }
        }
      }
    }

    //
    //
    static void fir1(real_T varargin_2, real_T b[256])
    {
      static const real_T wind[256]{ 0.080000000000000016, 0.0801396320901791,
        0.080558443590626638, 0.0812561802425375, 0.082232418452750367,
        0.083486565550909553, 0.085017860149272872, 0.086825372604947,
        0.088908005584270255, 0.091264494728999168, 0.093893409423895624,
        0.096793153665247822, 0.0999619670297972, 0.10339792574348544,
        0.10709894384936913, 0.11106277447399632, 0.11528701119147489,
        0.11976908948440362, 0.12450628830078075, 0.12949573170594403,
        0.13473439062853915, 0.140219084699457, 0.14594648418262318,
        0.15191311199646745, 0.15811534582484671, 0.164549420316138,
        0.17121142936916933, 0.17809732850459775, 0.18520293732029686,
        0.19252394202926287, 0.20005589807849683, 0.20779423284727572,
        0.21573424842317235, 0.2238711244541392, 0.23219992107492521,
        0.24071558190604869, 0.24941293712350454, 0.25828670659734504,
        0.26733150309722475, 0.27654183556296763, 0.28591211243816733,
        0.29543664506479939, 0.30510965113678279, 0.31492525821039519,
        0.32487750726941012, 0.33496035634279242, 0.34516768417275479,
        0.35549329393094942, 0.36593091698053726, 0.37647421668185377,
        0.38711679223935658, 0.39785218258752419, 0.40867387031334262,
        0.4195752856130015, 0.43054981028039535, 0.44159078172501126,
        0.45269149701676009, 0.46384521695530023, 0.47504517016137793,
        0.48628455718770613, 0.49755655464688109, 0.50885431935383452,
        0.520170992480304, 0.53149970371880029, 0.54283357545354383,
        0.55416572693583832, 0.56548927846134622, 0.57679735554672917,
        0.58808309310312057, 0.59933963960389347, 0.61056016124419532,
        0.6217378460897236, 0.63286590821222466, 0.64393759180920385,
        0.65494617530534627, 0.66588497543315817, 0.67674735129035324,
        0.6875267083715173, 0.698216502571607, 0.70881024415884919,
        0.71930150171463247, 0.7296839060379956, 0.7399511540123439,
        0.75009701243204674, 0.7601153217865918, 0.76999999999999991,
        0.77974504612322926, 0.78934454397732678, 0.79879266574511876,
        0.808083675509254, 0.817211932734458, 0.826171895691878,
        0.834958124823446, 0.84356528604421233, 0.85198815398064776,
        0.86022161514294626, 0.86826067102940607, 0.87610044116099883,
        0.88373616604429, 0.89116321006090748, 0.89837706428180852,
        0.90537334920463164, 0.91214781741247575, 0.91869635615249012,
        0.9250149898327098, 0.93109988243562247, 0.93694733984699929,
        0.94255381209857669, 0.94791589552322852, 0.95303033482131871,
        0.957894025036981, 0.96250401344312464, 0.96685750133402437,
        0.97095184572440285, 0.974784560953977, 0.978353320196492,
        0.981655956872329, 0.98469046596382626, 0.98745500523251828,
        0.98994789633755065, 0.99216762585459484, 0.9941128461946418,
        0.99578237642211787, 0.99717520297182594, 0.99829048026427758,
        0.99912753121904041, 0.99968584766579061, 0.99996509065282213,
        0.99996509065282213, 0.99968584766579061, 0.99912753121904041,
        0.99829048026427758, 0.99717520297182594, 0.99578237642211787,
        0.9941128461946418, 0.99216762585459484, 0.98994789633755065,
        0.98745500523251828, 0.98469046596382626, 0.981655956872329,
        0.978353320196492, 0.974784560953977, 0.97095184572440285,
        0.96685750133402437, 0.96250401344312464, 0.957894025036981,
        0.95303033482131871, 0.94791589552322852, 0.94255381209857669,
        0.93694733984699929, 0.93109988243562247, 0.9250149898327098,
        0.91869635615249012, 0.91214781741247575, 0.90537334920463164,
        0.89837706428180852, 0.89116321006090748, 0.88373616604429,
        0.87610044116099883, 0.86826067102940607, 0.86022161514294626,
        0.85198815398064776, 0.84356528604421233, 0.834958124823446,
        0.826171895691878, 0.817211932734458, 0.808083675509254,
        0.79879266574511876, 0.78934454397732678, 0.77974504612322926,
        0.76999999999999991, 0.7601153217865918, 0.75009701243204674,
        0.7399511540123439, 0.7296839060379956, 0.71930150171463247,
        0.70881024415884919, 0.698216502571607, 0.6875267083715173,
        0.67674735129035324, 0.66588497543315817, 0.65494617530534627,
        0.64393759180920385, 0.63286590821222466, 0.6217378460897236,
        0.61056016124419532, 0.59933963960389347, 0.58808309310312057,
        0.57679735554672917, 0.56548927846134622, 0.55416572693583832,
        0.54283357545354383, 0.53149970371880029, 0.520170992480304,
        0.50885431935383452, 0.49755655464688109, 0.48628455718770613,
        0.47504517016137793, 0.46384521695530023, 0.45269149701676009,
        0.44159078172501126, 0.43054981028039535, 0.4195752856130015,
        0.40867387031334262, 0.39785218258752419, 0.38711679223935658,
        0.37647421668185377, 0.36593091698053726, 0.35549329393094942,
        0.34516768417275479, 0.33496035634279242, 0.32487750726941012,
        0.31492525821039519, 0.30510965113678279, 0.29543664506479939,
        0.28591211243816733, 0.27654183556296763, 0.26733150309722475,
        0.25828670659734504, 0.24941293712350454, 0.24071558190604869,
        0.23219992107492521, 0.2238711244541392, 0.21573424842317235,
        0.20779423284727572, 0.20005589807849683, 0.19252394202926287,
        0.18520293732029686, 0.17809732850459775, 0.17121142936916933,
        0.164549420316138, 0.15811534582484671, 0.15191311199646745,
        0.14594648418262318, 0.140219084699457, 0.13473439062853915,
        0.12949573170594403, 0.12450628830078075, 0.11976908948440362,
        0.11528701119147489, 0.11106277447399632, 0.10709894384936913,
        0.10339792574348544, 0.0999619670297972, 0.096793153665247822,
        0.093893409423895624, 0.091264494728999168, 0.088908005584270255,
        0.086825372604947, 0.085017860149272872, 0.083486565550909553,
        0.082232418452750367, 0.0812561802425375, 0.080558443590626638,
        0.0801396320901791, 0.080000000000000016 };

      real_T hh_data[256];
      real_T dv[4];
      real_T y;
      int32_T hh_size[2];
      dv[0] = 0.0;
      dv[1] = varargin_2;
      dv[2] = varargin_2;
      dv[3] = 1.0;
      firls(dv, hh_data, hh_size);
      if (hh_size[1] == 256) {
        for (int32_T k{0}; k < 256; k++) {
          b[k] = hh_data[k] * wind[k];
        }
      } else {
        times(b, hh_data, hh_size, wind);
      }

      y = b[0];
      for (int32_T k{0}; k < 255; k++) {
        y += b[k + 1];
      }

      for (int32_T k{0}; k < 256; k++) {
        b[k] /= y;
      }
    }

    //
    //
    static void firls(const real_T varargin_2[4], real_T h_data[], int32_T
                      h_size[2])
    {
      static const int8_T A[4]{ 1, 1, 0, 0 };

      ::coder::array<real_T, 2U> G;
      ::coder::array<real_T, 2U> I1;
      ::coder::array<real_T, 2U> I2;
      ::coder::array<real_T, 2U> b_y_tmp;
      ::coder::array<real_T, 2U> r;
      ::coder::array<real_T, 2U> r1;
      ::coder::array<real_T, 2U> y_tmp;
      ::coder::array<real_T, 1U> b_x;
      ::coder::array<real_T, 1U> x;
      real_T b_data[128];
      real_T k_data[128];
      int32_T k;
      if ((!(varargin_2[0] > 1.0)) && (!(varargin_2[0] < 0.0))) {
        real_T tmp_data[528];
        real_T max_freq[4];
        real_T m_s;
        int32_T b_s;
        int32_T i;
        boolean_T need_matrix;
        max_freq[0] = varargin_2[0] / 2.0;
        max_freq[1] = varargin_2[1] / 2.0;
        max_freq[2] = varargin_2[2] / 2.0;
        max_freq[3] = varargin_2[3] / 2.0;
        for (i = 0; i < 128; i++) {
          k_data[i] = static_cast<real_T>(i) + 0.5;
        }

        need_matrix = (max_freq[2] - max_freq[1] != 0.0);
        if (need_matrix) {
          for (i = 0; i < 128; i++) {
            b_data[i] = static_cast<real_T>(i) + 0.5;
          }

          initMatrices(b_data, I1, I2, G);
        } else {
          I1.set_size(0, 0);
          I2.set_size(0, 0);
          G.set_size(0, 0);
        }

        std::memset(&b_data[0], 0, 128U * sizeof(real_T));
        for (int32_T s{0}; s < 2; s++) {
          real_T a;
          real_T b1;
          real_T b1_tmp;
          real_T b_a;
          real_T d;
          real_T m_s_tmp;
          int8_T i1;
          b_s = s << 1;
          m_s_tmp = max_freq[b_s + 1];
          d = max_freq[b_s];
          i1 = A[b_s];
          m_s = static_cast<real_T>(A[b_s + 1] - i1) / (m_s_tmp - d);
          b1_tmp = m_s * d;
          b1 = static_cast<real_T>(i1) - b1_tmp;
          x.set_size(128);
          for (i = 0; i < 128; i++) {
            d = 6.2831853071795862 * k_data[i];
            tmp_data[i] = d;
            x[i] = d * m_s_tmp;
          }

          b_x.set_size(128);
          for (k = 0; k < 128; k++) {
            x[k] = std::cos(x[k]);
            b_x[k] = tmp_data[k] * max_freq[b_s];
          }

          a = m_s / 39.478417604357432;
          b_a = m_s_tmp * (m_s * m_s_tmp + b1);
          m_s = max_freq[b_s] * (b1_tmp + b1);
          for (k = 0; k < 128; k++) {
            d = std::cos(b_x[k]);
            b_x[k] = d;
            b1_tmp = k_data[k];
            d = b_data[k] + a * (x[k] - d) / (b1_tmp * b1_tmp);
            b1_tmp *= 2.0;
            b1 = b1_tmp * m_s_tmp;
            if (std::abs(b1) < 1.0020841800044864E-292) {
              b1 = 1.0;
            } else {
              b1 *= 3.1415926535897931;
              b1 = std::sin(b1) / b1;
            }

            b1_tmp *= max_freq[b_s];
            if (std::abs(b1_tmp) < 1.0020841800044864E-292) {
              b1_tmp = 1.0;
            } else {
              b1_tmp *= 3.1415926535897931;
              b1_tmp = std::sin(b1_tmp) / b1_tmp;
            }

            d += b_a * b1 - m_s * b1_tmp;
            b_data[k] = d;
          }

          if (need_matrix) {
            int32_T i2;
            int32_T i3;
            int32_T i4;
            y_tmp.set_size(I1.size(0), I1.size(1));
            k = I1.size(0) * I1.size(1);
            for (i = 0; i < k; i++) {
              y_tmp[i] = 2.0 * I1[i];
            }

            r.set_size(y_tmp.size(0), y_tmp.size(1));
            k = y_tmp.size(0) * y_tmp.size(1);
            for (i = 0; i < k; i++) {
              r[i] = y_tmp[i] * m_s_tmp;
            }

            i = r.size(0) * r.size(1);
            for (k = 0; k < i; k++) {
              if (std::abs(r[k]) < 1.0020841800044864E-292) {
                r[k] = 1.0;
              } else {
                r[k] = 3.1415926535897931 * r[k];
                r[k] = std::sin(r[k]) / r[k];
              }
            }

            b_y_tmp.set_size(I2.size(0), I2.size(1));
            k = I2.size(0) * I2.size(1);
            for (i = 0; i < k; i++) {
              b_y_tmp[i] = 2.0 * I2[i];
            }

            r1.set_size(b_y_tmp.size(0), b_y_tmp.size(1));
            k = b_y_tmp.size(0) * b_y_tmp.size(1);
            for (i = 0; i < k; i++) {
              r1[i] = b_y_tmp[i] * m_s_tmp;
            }

            i = r1.size(0) * r1.size(1);
            for (k = 0; k < i; k++) {
              if (std::abs(r1[k]) < 1.0020841800044864E-292) {
                r1[k] = 1.0;
              } else {
                r1[k] = 3.1415926535897931 * r1[k];
                r1[k] = std::sin(r1[k]) / r1[k];
              }
            }

            k = y_tmp.size(0) * y_tmp.size(1);
            for (i = 0; i < k; i++) {
              y_tmp[i] = y_tmp[i] * max_freq[b_s];
            }

            i = y_tmp.size(0) * y_tmp.size(1);
            for (k = 0; k < i; k++) {
              if (std::abs(y_tmp[k]) < 1.0020841800044864E-292) {
                y_tmp[k] = 1.0;
              } else {
                y_tmp[k] = 3.1415926535897931 * y_tmp[k];
                y_tmp[k] = std::sin(y_tmp[k]) / y_tmp[k];
              }
            }

            k = b_y_tmp.size(0) * b_y_tmp.size(1);
            for (i = 0; i < k; i++) {
              b_y_tmp[i] = b_y_tmp[i] * max_freq[b_s];
            }

            i = b_y_tmp.size(0) * b_y_tmp.size(1);
            for (k = 0; k < i; k++) {
              if (std::abs(b_y_tmp[k]) < 1.0020841800044864E-292) {
                b_y_tmp[k] = 1.0;
              } else {
                b_y_tmp[k] = 3.1415926535897931 * b_y_tmp[k];
                b_y_tmp[k] = std::sin(b_y_tmp[k]) / b_y_tmp[k];
              }
            }

            a = 0.5 * m_s_tmp;
            b_a = 0.5 * max_freq[b_s];
            if (r.size(0) == 1) {
              i = r1.size(0);
            } else {
              i = r.size(0);
            }

            if (y_tmp.size(0) == 1) {
              b_s = b_y_tmp.size(0);
            } else {
              b_s = y_tmp.size(0);
            }

            if (r.size(1) == 1) {
              k = r1.size(1);
            } else {
              k = r.size(1);
            }

            if (y_tmp.size(1) == 1) {
              i2 = b_y_tmp.size(1);
            } else {
              i2 = y_tmp.size(1);
            }

            if (r.size(0) == 1) {
              i3 = r1.size(0);
            } else {
              i3 = r.size(0);
            }

            if (i3 == 1) {
              if (y_tmp.size(0) == 1) {
                i3 = b_y_tmp.size(0);
              } else {
                i3 = y_tmp.size(0);
              }
            } else if (r.size(0) == 1) {
              i3 = r1.size(0);
            } else {
              i3 = r.size(0);
            }

            if (r.size(1) == 1) {
              i4 = r1.size(1);
            } else {
              i4 = r.size(1);
            }

            if (i4 == 1) {
              if (y_tmp.size(1) == 1) {
                i4 = b_y_tmp.size(1);
              } else {
                i4 = y_tmp.size(1);
              }
            } else if (r.size(1) == 1) {
              i4 = r1.size(1);
            } else {
              i4 = r.size(1);
            }

            if ((r.size(0) == r1.size(0)) && (r.size(1) == r1.size(1)) &&
                (y_tmp.size(0) == b_y_tmp.size(0)) && (y_tmp.size(1) ==
                 b_y_tmp.size(1)) && (i == b_s) && (k == i2) && (G.size(0) == i3)
                && (G.size(1) == i4)) {
              k = G.size(0) * G.size(1);
              for (i = 0; i < k; i++) {
                G[i] = G[i] + (a * (r[i] + r1[i]) - b_a * (y_tmp[i] + b_y_tmp[i]));
              }
            } else {
              binary_expand_op(G, a, r, r1, b_a, y_tmp, b_y_tmp);
            }
          }
        }

        if (need_matrix) {
          mldivide(G, b_data, k_data, &k);
        } else {
          k = 128;
          for (i = 0; i < 128; i++) {
            k_data[i] = 4.0 * b_data[i];
          }
        }

        if (k - 1 >= 0) {
          std::copy(&k_data[0], &k_data[k], &b_data[0]);
        }

        i = k >> 1;
        for (int32_T s{0}; s < i; s++) {
          m_s = b_data[s];
          b_s = (k - s) - 1;
          b_data[s] = b_data[b_s];
          b_data[b_s] = m_s;
        }

        h_size[0] = 1;
        h_size[1] = k + k;
        for (i = 0; i < k; i++) {
          h_data[i] = 0.5 * b_data[i];
        }

        for (i = 0; i < k; i++) {
          h_data[i + k] = 0.5 * k_data[i];
        }
      }
    }

    //
    //
    static void goertzel(const ::coder::array<creal_T, 2U> &X, real_T INDVEC, ::
                         coder::array<creal_T, 2U> &Y)
    {
      int32_T i;
      uint32_T sz_idx_0;
      sz_idx_0 = static_cast<uint32_T>(X.size(0));
      Y.set_size(1, X.size(1));
      i = X.size(1);
      for (int32_T b_i{0}; b_i < i; b_i++) {
        real_T complexConstant_im;
        real_T complexConstant_re;
        real_T cos2TwidFactor;
        real_T phaseCorrection_im;
        real_T phaseCorrection_re;
        real_T r;
        real_T s1_im;
        real_T s1_re;
        real_T s2_im;
        real_T twiddleFactor;
        int32_T i1;
        twiddleFactor = 6.2831853071795862 * (INDVEC - 1.0) / static_cast<real_T>
          (sz_idx_0);
        cos2TwidFactor = 2.0 * std::cos(twiddleFactor);
        phaseCorrection_re = twiddleFactor * 0.0;
        if (-twiddleFactor == 0.0) {
          complexConstant_re = std::exp(phaseCorrection_re);
          complexConstant_im = 0.0;
        } else {
          r = std::exp(phaseCorrection_re / 2.0);
          complexConstant_re = r * (r * std::cos(-twiddleFactor));
          complexConstant_im = r * (r * std::sin(-twiddleFactor));
        }

        phaseCorrection_re *= static_cast<real_T>(sz_idx_0) - 1.0;
        phaseCorrection_im = (static_cast<real_T>(sz_idx_0) - 1.0) *
          -twiddleFactor;
        if (phaseCorrection_im == 0.0) {
          phaseCorrection_re = std::exp(phaseCorrection_re);
          phaseCorrection_im = 0.0;
        } else {
          r = std::exp(phaseCorrection_re / 2.0);
          phaseCorrection_re = r * (r * std::cos(phaseCorrection_im));
          phaseCorrection_im = r * (r * std::sin(phaseCorrection_im));
        }

        s1_re = 0.0;
        s1_im = 0.0;
        twiddleFactor = 0.0;
        s2_im = 0.0;
        i1 = static_cast<int32_T>(sz_idx_0);
        for (int32_T ind{0}; ind <= i1 - 2; ind++) {
          real_T s0_im;
          r = (X[ind + X.size(0) * b_i].re + cos2TwidFactor * s1_re) -
            twiddleFactor;
          s0_im = (X[ind + X.size(0) * b_i].im + cos2TwidFactor * s1_im) - s2_im;
          twiddleFactor = s1_re;
          s2_im = s1_im;
          s1_re = r;
          s1_im = s0_im;
        }

        r = ((X[(static_cast<int32_T>(sz_idx_0) + X.size(0) * b_i) - 1].re +
              cos2TwidFactor * s1_re) - twiddleFactor) - (s1_re *
          complexConstant_re - s1_im * complexConstant_im);
        twiddleFactor = ((X[(static_cast<int32_T>(sz_idx_0) + X.size(0) * b_i) -
                          1].im + cos2TwidFactor * s1_im) - s2_im) - (s1_re *
          complexConstant_im + s1_im * complexConstant_re);
        Y[b_i].re = r * phaseCorrection_re - twiddleFactor * phaseCorrection_im;
        Y[b_i].im = r * phaseCorrection_im + twiddleFactor * phaseCorrection_re;
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
          } else if (L < 0.0) {
            r += 2.0;
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
    static void ifft(const creal_T x_data[], int32_T x_size, creal_T y_data[],
                     int32_T *y_size)
    {
      ::coder::array<creal_T, 1U> b_x_data;
      ::coder::array<creal_T, 1U> c_x_data;
      ::coder::array<creal_T, 1U> y;
      ::coder::array<real_T, 2U> costab;
      ::coder::array<real_T, 2U> sintab;
      ::coder::array<real_T, 2U> sintabinv;
      int32_T N2blue;
      int32_T nRows;
      if (x_size == 0) {
        *y_size = 0;
      } else {
        boolean_T useRadix2;
        useRadix2 = ((x_size & (x_size - 1)) == 0);
        internal::FFTImplementationCallback::get_algo_sizes(x_size, useRadix2,
          &N2blue, &nRows);
        internal::FFTImplementationCallback::b_generate_twiddle_tables(nRows,
          useRadix2, costab, sintab, sintabinv);
        if (useRadix2) {
          c_x_data.set((creal_T *)&x_data[0], x_size);
          internal::FFTImplementationCallback::r2br_r2dit_trig_impl(c_x_data,
            x_size, costab, sintab, y);
          if (y.size(0) > 1) {
            real_T b;
            b = 1.0 / static_cast<real_T>(y.size(0));
            N2blue = y.size(0);
            for (nRows = 0; nRows < N2blue; nRows++) {
              y[nRows].re = b * y[nRows].re;
              y[nRows].im = b * y[nRows].im;
            }
          }
        } else {
          b_x_data.set((creal_T *)&x_data[0], x_size);
          internal::FFTImplementationCallback::b_dobluesteinfft(b_x_data, N2blue,
            x_size, costab, sintab, sintabinv, y);
        }

        *y_size = y.size(0);
        N2blue = y.size(0);
        for (nRows = 0; nRows < N2blue; nRows++) {
          y_data[nRows] = y[nRows];
        }
      }
    }

    //
    //
    static void initMatrices(const real_T m_data[], ::coder::array<real_T, 2U>
      &I1, ::coder::array<real_T, 2U> &I2, ::coder::array<real_T, 2U> &G)
    {
      I1.set_size(128, 128);
      I2.set_size(128, 128);
      for (int32_T i{0}; i < 128; i++) {
        for (int32_T i1{0}; i1 < 128; i1++) {
          I1[i1 + 128 * i] = m_data[i1] + m_data[i];
          I2[i1 + 128 * i] = m_data[i1] - m_data[i];
        }
      }

      G.set_size(128, 128);
      for (int32_T i{0}; i < 16384; i++) {
        G[i] = 0.0;
      }
    }

    //
    //
    namespace internal
    {
      namespace blas
      {
        static real_T xnrm2(int32_T n, const ::coder::array<real_T, 2U> &x,
                            int32_T ix0)
        {
          real_T y;
          y = 0.0;
          if (n == 1) {
            y = std::abs(x[ix0 - 1]);
          } else {
            real_T scale;
            int32_T kend;
            scale = 3.3121686421112381E-170;
            kend = (ix0 + n) - 1;
            for (int32_T k{ix0}; k <= kend; k++) {
              real_T absxk;
              absxk = std::abs(x[k - 1]);
              if (absxk > scale) {
                real_T t;
                t = scale / absxk;
                y = y * t * t + 1.0;
                scale = absxk;
              } else {
                real_T t;
                t = absxk / scale;
                y += t * t;
              }
            }

            y = scale * std::sqrt(y);
          }

          return y;
        }

        //
        //
      }

      static void expand_max(const ::coder::array<real_T, 2U> &a, const ::coder::
        array<real_T, 2U> &b, ::coder::array<real_T, 2U> &c)
      {
        int32_T csz_idx_1;
        int32_T u0;
        int32_T u1;
        u0 = a.size(1);
        u1 = b.size(1);
        if (u0 <= u1) {
          u1 = u0;
        }

        if (b.size(1) == 1) {
          csz_idx_1 = a.size(1);
        } else if (a.size(1) == 1) {
          csz_idx_1 = b.size(1);
        } else {
          csz_idx_1 = u1;
        }

        u0 = a.size(1);
        u1 = b.size(1);
        if (u0 <= u1) {
          u1 = u0;
        }

        if (b.size(1) == 1) {
          u1 = a.size(1);
        } else if (a.size(1) == 1) {
          u1 = b.size(1);
        }

        c.set_size(1, u1);
        if (csz_idx_1 != 0) {
          boolean_T b1;
          boolean_T b_b;
          b_b = (a.size(1) != 1);
          b1 = (b.size(1) != 1);
          u0 = csz_idx_1 - 1;
          for (u1 = 0; u1 <= u0; u1++) {
            c[u1] = std::fmax(a[b_b * u1], b[b1 * u1]);
          }
        }
      }

      //
      //
      namespace lapack
      {
        static void xgeqp3(::coder::array<real_T, 2U> &A, real_T tau_data[],
                           int32_T *tau_size, int32_T jpvt_data[], int32_T
                           jpvt_size[2])
        {
          real_T vn1_data[127];
          real_T vn2_data[127];
          real_T work_data[127];
          int32_T kend;
          int32_T n;
          n = A.size(1);
          *tau_size = A.size(1);
          kend = A.size(1);
          if (kend - 1 >= 0) {
            std::memset(&tau_data[0], 0, static_cast<uint32_T>(kend) * sizeof
                        (real_T));
          }

          if (A.size(1) < 1) {
            jpvt_size[0] = 1;
            jpvt_size[1] = A.size(1);
            kend = A.size(1);
            if (kend - 1 >= 0) {
              std::memset(&jpvt_data[0], 0, static_cast<uint32_T>(kend) * sizeof
                          (int32_T));
            }

            for (int32_T j{0}; j < n; j++) {
              jpvt_data[j] = j + 1;
            }
          } else {
            real_T absxk;
            real_T scale;
            real_T smax;
            real_T t;
            int32_T ix0;
            int32_T j;
            int32_T k;
            jpvt_size[0] = 1;
            jpvt_size[1] = A.size(1);
            kend = A.size(1);
            if (kend - 1 >= 0) {
              std::memset(&jpvt_data[0], 0, static_cast<uint32_T>(kend) * sizeof
                          (int32_T));
            }

            for (k = 0; k < n; k++) {
              jpvt_data[k] = k + 1;
            }

            kend = A.size(1);
            if (kend - 1 >= 0) {
              std::memset(&work_data[0], 0, static_cast<uint32_T>(kend) * sizeof
                          (real_T));
            }

            kend = A.size(1);
            if (kend - 1 >= 0) {
              std::memset(&vn1_data[0], 0, static_cast<uint32_T>(kend) * sizeof
                          (real_T));
            }

            kend = A.size(1);
            if (kend - 1 >= 0) {
              std::memset(&vn2_data[0], 0, static_cast<uint32_T>(kend) * sizeof
                          (real_T));
            }

            for (j = 0; j < n; j++) {
              ix0 = j << 7;
              smax = 0.0;
              scale = 3.3121686421112381E-170;
              kend = ix0 + 128;
              for (k = ix0 + 1; k <= kend; k++) {
                absxk = std::abs(A[k - 1]);
                if (absxk > scale) {
                  t = scale / absxk;
                  smax = smax * t * t + 1.0;
                  scale = absxk;
                } else {
                  t = absxk / scale;
                  smax += t * t;
                }
              }

              absxk = scale * std::sqrt(smax);
              vn1_data[j] = absxk;
              vn2_data[j] = absxk;
            }

            for (int32_T i{0}; i < n; i++) {
              int32_T b_i;
              int32_T ii;
              int32_T ip1;
              int32_T nmi;
              int32_T pvt;
              ip1 = i + 2;
              j = i << 7;
              ii = j + i;
              nmi = n - i;
              if (nmi < 1) {
                kend = -1;
              } else {
                kend = 0;
                if (nmi > 1) {
                  smax = std::abs(vn1_data[i]);
                  for (k = 2; k <= nmi; k++) {
                    scale = std::abs(vn1_data[(i + k) - 1]);
                    if (scale > smax) {
                      kend = k - 1;
                      smax = scale;
                    }
                  }
                }
              }

              pvt = i + kend;
              if (pvt != i) {
                kend = pvt << 7;
                for (k = 0; k < 128; k++) {
                  ix0 = kend + k;
                  smax = A[ix0];
                  b_i = j + k;
                  A[ix0] = A[b_i];
                  A[b_i] = smax;
                }

                kend = jpvt_data[pvt];
                jpvt_data[pvt] = jpvt_data[i];
                jpvt_data[i] = kend;
                vn1_data[pvt] = vn1_data[i];
                vn2_data[pvt] = vn2_data[i];
              }

              t = A[ii];
              ix0 = ii + 2;
              tau_data[i] = 0.0;
              smax = blas::xnrm2(127 - i, A, ii + 2);
              if (smax != 0.0) {
                scale = rt_hypotd_snf(A[ii], smax);
                if (A[ii] >= 0.0) {
                  scale = -scale;
                }

                if (std::abs(scale) < 1.0020841800044864E-292) {
                  kend = 0;
                  b_i = (ii - i) + 128;
                  do {
                    kend++;
                    for (k = ix0; k <= b_i; k++) {
                      A[k - 1] = 9.9792015476736E+291 * A[k - 1];
                    }

                    scale *= 9.9792015476736E+291;
                    t *= 9.9792015476736E+291;
                  } while ((std::abs(scale) < 1.0020841800044864E-292) && (kend <
                            20));

                  scale = rt_hypotd_snf(t, blas::xnrm2(127 - i, A, ii + 2));
                  if (t >= 0.0) {
                    scale = -scale;
                  }

                  tau_data[i] = (scale - t) / scale;
                  smax = 1.0 / (t - scale);
                  for (k = ix0; k <= b_i; k++) {
                    A[k - 1] = smax * A[k - 1];
                  }

                  for (k = 0; k < kend; k++) {
                    scale *= 1.0020841800044864E-292;
                  }

                  t = scale;
                } else {
                  tau_data[i] = (scale - A[ii]) / scale;
                  smax = 1.0 / (A[ii] - scale);
                  b_i = (ii - i) + 128;
                  for (k = ix0; k <= b_i; k++) {
                    A[k - 1] = smax * A[k - 1];
                  }

                  t = scale;
                }
              }

              A[ii] = t;
              if (i + 1 < n) {
                int32_T lastv;
                t = A[ii];
                A[ii] = 1.0;
                k = ii + 129;
                if (tau_data[i] != 0.0) {
                  boolean_T exitg2;
                  lastv = 128 - i;
                  kend = (ii - i) + 127;
                  while ((lastv > 0) && (A[kend] == 0.0)) {
                    lastv--;
                    kend--;
                  }

                  nmi -= 2;
                  exitg2 = false;
                  while ((!exitg2) && (nmi + 1 > 0)) {
                    int32_T exitg1;
                    kend = (ii + (nmi << 7)) + 128;
                    ix0 = kend;
                    do {
                      exitg1 = 0;
                      if (ix0 + 1 <= kend + lastv) {
                        if (A[ix0] != 0.0) {
                          exitg1 = 1;
                        } else {
                          ix0++;
                        }
                      } else {
                        nmi--;
                        exitg1 = 2;
                      }
                    } while (exitg1 == 0);

                    if (exitg1 == 1) {
                      exitg2 = true;
                    }
                  }
                } else {
                  lastv = 0;
                  nmi = -1;
                }

                if (lastv > 0) {
                  if (nmi + 1 != 0) {
                    if (nmi >= 0) {
                      std::memset(&work_data[0], 0, static_cast<uint32_T>(nmi +
                        1) * sizeof(real_T));
                    }

                    b_i = (ii + (nmi << 7)) + 129;
                    for (j = k; j <= b_i; j += 128) {
                      smax = 0.0;
                      pvt = (j + lastv) - 1;
                      for (ix0 = j; ix0 <= pvt; ix0++) {
                        smax += A[ix0 - 1] * A[(ii + ix0) - j];
                      }

                      kend = ((j - ii) - 129) >> 7;
                      work_data[kend] += smax;
                    }
                  }

                  if (!(-tau_data[i] == 0.0)) {
                    kend = ii;
                    for (j = 0; j <= nmi; j++) {
                      absxk = work_data[j];
                      if (absxk != 0.0) {
                        smax = absxk * -tau_data[i];
                        b_i = kend + 129;
                        pvt = lastv + kend;
                        for (ix0 = b_i; ix0 <= pvt + 128; ix0++) {
                          A[ix0 - 1] = A[ix0 - 1] + A[((ii + ix0) - kend) - 129]
                            * smax;
                        }
                      }

                      kend += 128;
                    }
                  }
                }

                A[ii] = t;
              }

              for (j = ip1; j <= n; j++) {
                kend = i + ((j - 1) << 7);
                absxk = vn1_data[j - 1];
                if (absxk != 0.0) {
                  smax = std::abs(A[kend]) / absxk;
                  smax = 1.0 - smax * smax;
                  if (smax < 0.0) {
                    smax = 0.0;
                  }

                  scale = absxk / vn2_data[j - 1];
                  scale = smax * (scale * scale);
                  if (scale <= 1.4901161193847656E-8) {
                    absxk = blas::xnrm2(127 - i, A, kend + 2);
                    vn1_data[j - 1] = absxk;
                    vn2_data[j - 1] = absxk;
                  } else {
                    vn1_data[j - 1] = absxk * std::sqrt(smax);
                  }
                }
              }
            }
          }
        }

        //
        //
      }

      static void maximum(const ::coder::array<real_T, 3U> &x, ::coder::array<
                          real_T, 2U> &ex)
      {
        ex.set_size(x.size(0), x.size(1));
        if ((x.size(0) == 0) || (x.size(1) == 0)) {
          int32_T exPageSize;
          ex.set_size(x.size(0), x.size(1));
          exPageSize = x.size(0) * x.size(1);
          for (int32_T b_tmp{0}; b_tmp < exPageSize; b_tmp++) {
            ex[b_tmp] = rtNaN;
          }
        } else {
          int32_T exPageSize;
          exPageSize = x.size(0) * x.size(1);
          for (int32_T j{0}; j < exPageSize; j++) {
            ex[j] = x[j];
          }

          for (int32_T j{0}; j < exPageSize; j++) {
            real_T b;
            int32_T b_tmp;
            boolean_T p;
            b_tmp = exPageSize + j;
            b = x[b_tmp];
            if (std::isnan(b)) {
              p = false;
            } else if (std::isnan(ex[j])) {
              p = true;
            } else {
              p = (ex[j] < b);
            }

            if (p) {
              ex[j] = x[b_tmp];
            }
          }
        }
      }

      //
      //
      static real_T maximum(const ::coder::array<real_T, 2U> &x)
      {
        real_T ex;
        int32_T last;
        last = x.size(1);
        if (x.size(1) <= 2) {
          if (x.size(1) == 1) {
            ex = x[0];
          } else if ((x[0] < x[x.size(1) - 1]) || (std::isnan(x[0]) && (!std::
                       isnan(x[x.size(1) - 1])))) {
            ex = x[x.size(1) - 1];
          } else {
            ex = x[0];
          }
        } else {
          int32_T idx;
          int32_T k;
          if (!std::isnan(x[0])) {
            idx = 1;
          } else {
            boolean_T exitg1;
            idx = 0;
            k = 2;
            exitg1 = false;
            while ((!exitg1) && (k <= last)) {
              if (!std::isnan(x[k - 1])) {
                idx = k;
                exitg1 = true;
              } else {
                k++;
              }
            }
          }

          if (idx == 0) {
            ex = x[0];
          } else {
            ex = x[idx - 1];
            idx++;
            for (k = idx; k <= last; k++) {
              real_T d;
              d = x[k - 1];
              if (ex < d) {
                ex = d;
              }
            }
          }
        }

        return ex;
      }

      //
      //
      static real_T maximum(const real_T x[528])
      {
        real_T ex;
        int32_T idx;
        int32_T k;
        if (!std::isnan(x[0])) {
          idx = 1;
        } else {
          boolean_T exitg1;
          idx = 0;
          k = 2;
          exitg1 = false;
          while ((!exitg1) && (k <= 528)) {
            if (!std::isnan(x[k - 1])) {
              idx = k;
              exitg1 = true;
            } else {
              k++;
            }
          }
        }

        if (idx == 0) {
          ex = x[0];
        } else {
          ex = x[idx - 1];
          idx++;
          for (k = idx; k < 529; k++) {
            real_T d;
            d = x[k - 1];
            if (ex < d) {
              ex = d;
            }
          }
        }

        return ex;
      }

      //
      //
      static void merge(int32_T idx[32], real_T x[32], int32_T offset, int32_T
                        np, int32_T nq, int32_T iwork[32], real_T xwork[32])
      {
        if (nq != 0) {
          int32_T iout;
          int32_T n_tmp;
          int32_T p;
          int32_T q;
          n_tmp = np + nq;
          for (int32_T j{0}; j < n_tmp; j++) {
            iout = offset + j;
            iwork[j] = idx[iout];
            xwork[j] = x[iout];
          }

          p = 0;
          q = np;
          iout = offset - 1;
          int32_T exitg1;
          do {
            exitg1 = 0;
            iout++;
            if (xwork[p] <= xwork[q]) {
              idx[iout] = iwork[p];
              x[iout] = xwork[p];
              if (p + 1 < np) {
                p++;
              } else {
                exitg1 = 1;
              }
            } else {
              idx[iout] = iwork[q];
              x[iout] = xwork[q];
              if (q + 1 < n_tmp) {
                q++;
              } else {
                q = iout - p;
                for (int32_T j{p + 1}; j <= np; j++) {
                  iout = q + j;
                  idx[iout] = iwork[j - 1];
                  x[iout] = xwork[j - 1];
                }

                exitg1 = 1;
              }
            }
          } while (exitg1 == 0);
        }
      }

      //
      //
      static void quickselect(real_T v_data[], int32_T n, int32_T vlen, real_T
        *vn, int32_T *nfirst, int32_T *nlast)
      {
        if (n > vlen) {
          *vn = rtNaN;
          *nfirst = 0;
          *nlast = 0;
        } else {
          int32_T ia;
          int32_T ib;
          int32_T ilast;
          int32_T ipiv;
          int32_T oldnv;
          boolean_T checkspeed;
          boolean_T exitg1;
          boolean_T isslow;
          ipiv = n;
          ia = 0;
          ib = vlen - 1;
          *nfirst = 1;
          ilast = vlen - 1;
          oldnv = vlen;
          checkspeed = false;
          isslow = false;
          exitg1 = false;
          while ((!exitg1) && (ia + 1 < ib + 1)) {
            real_T vref;
            boolean_T guard1{ false };

            vref = v_data[ipiv - 1];
            v_data[ipiv - 1] = v_data[ib];
            v_data[ib] = vref;
            ilast = ia;
            ipiv = -1;
            for (int32_T k{ia + 1}; k <= ib; k++) {
              real_T d;
              real_T vk;
              vk = v_data[k - 1];
              d = v_data[k - 1];
              if (d == vref) {
                v_data[k - 1] = v_data[ilast];
                v_data[ilast] = vk;
                ipiv++;
                ilast++;
              } else if (d < vref) {
                v_data[k - 1] = v_data[ilast];
                v_data[ilast] = vk;
                ilast++;
              }
            }

            v_data[ib] = v_data[ilast];
            v_data[ilast] = vref;
            guard1 = false;
            if (n <= ilast + 1) {
              *nfirst = ilast - ipiv;
              if (n >= *nfirst) {
                exitg1 = true;
              } else {
                ib = ilast - 1;
                guard1 = true;
              }
            } else {
              ia = ilast + 1;
              guard1 = true;
            }

            if (guard1) {
              int32_T c;
              c = (ib - ia) + 1;
              if (checkspeed) {
                isslow = (c > oldnv / 2);
                oldnv = c;
              }

              checkspeed = !checkspeed;
              if (isslow) {
                while (c > 1) {
                  int32_T i;
                  int32_T ngroupsof5;
                  ngroupsof5 = c / 5;
                  *nlast = c - ngroupsof5 * 5;
                  c = ngroupsof5;
                  i = static_cast<uint8_T>(ngroupsof5);
                  for (int32_T k{0}; k < i; k++) {
                    ipiv = (ia + k * 5) + 1;
                    ipiv = thirdOfFive(v_data, ipiv, ipiv + 4) - 1;
                    ilast = ia + k;
                    vref = v_data[ilast];
                    v_data[ilast] = v_data[ipiv];
                    v_data[ipiv] = vref;
                  }

                  if (*nlast > 0) {
                    ipiv = (ia + ngroupsof5 * 5) + 1;
                    ipiv = thirdOfFive(v_data, ipiv, (ipiv + *nlast) - 1) - 1;
                    ilast = ia + ngroupsof5;
                    vref = v_data[ilast];
                    v_data[ilast] = v_data[ipiv];
                    v_data[ipiv] = vref;
                    c = ngroupsof5 + 1;
                  }
                }
              } else if (c >= 3) {
                ipiv = ia + static_cast<int32_T>(static_cast<uint32_T>(c - 1) >>
                  1);
                if (v_data[ia] < v_data[ipiv]) {
                  if (!(v_data[ipiv] < v_data[ib])) {
                    if (v_data[ia] < v_data[ib]) {
                      ipiv = ib;
                    } else {
                      ipiv = ia;
                    }
                  }
                } else if (v_data[ia] < v_data[ib]) {
                  ipiv = ia;
                } else if (v_data[ipiv] < v_data[ib]) {
                  ipiv = ib;
                }

                if (ipiv + 1 > ia + 1) {
                  vref = v_data[ia];
                  v_data[ia] = v_data[ipiv];
                  v_data[ipiv] = vref;
                }
              }

              ipiv = ia + 1;
              *nfirst = ia + 1;
              ilast = ib;
            }
          }

          *vn = v_data[ilast];
          *nlast = ilast + 1;
        }
      }

      //
      //
      namespace scalar
      {
        static real_T c_mod(real_T x)
        {
          real_T r;
          if (std::isnan(x) || std::isinf(x)) {
            r = rtNaN;
          } else if (x == 0.0) {
            r = 0.0;
          } else {
            r = std::fmod(x, 2.0);
            if (r == 0.0) {
              r = 0.0;
            } else if (x < 0.0) {
              r += 2.0;
            }
          }

          return r;
        }

        //
        //
      }

      static void sort(real_T x[32])
      {
        real_T xwork[32];
        real_T x4[4];
        int32_T idx[32];
        int32_T iwork[32];
        int32_T i1;
        int32_T i3;
        int32_T ib;
        int32_T nNaNs;
        int32_T quartetOffset;
        int8_T idx4[4];
        x4[0] = 0.0;
        idx4[0] = 0;
        x4[1] = 0.0;
        idx4[1] = 0;
        x4[2] = 0.0;
        idx4[2] = 0;
        x4[3] = 0.0;
        idx4[3] = 0;
        std::memset(&idx[0], 0, 32U * sizeof(int32_T));
        std::memset(&xwork[0], 0, 32U * sizeof(real_T));
        nNaNs = 0;
        ib = 0;
        for (int32_T k{0}; k < 32; k++) {
          if (std::isnan(x[k])) {
            idx[31 - nNaNs] = k + 1;
            xwork[31 - nNaNs] = x[k];
            nNaNs++;
          } else {
            ib++;
            idx4[ib - 1] = static_cast<int8_T>(k + 1);
            x4[ib - 1] = x[k];
            if (ib == 4) {
              real_T d;
              real_T d1;
              int32_T i4;
              int8_T b_i1;
              int8_T b_i3;
              int8_T i;
              int8_T i2;
              quartetOffset = k - nNaNs;
              if (x4[0] <= x4[1]) {
                i1 = 1;
                ib = 2;
              } else {
                i1 = 2;
                ib = 1;
              }

              if (x4[2] <= x4[3]) {
                i3 = 3;
                i4 = 4;
              } else {
                i3 = 4;
                i4 = 3;
              }

              d = x4[i1 - 1];
              d1 = x4[i3 - 1];
              if (d <= d1) {
                d = x4[ib - 1];
                if (d <= d1) {
                  i = static_cast<int8_T>(i1);
                  b_i1 = static_cast<int8_T>(ib);
                  i2 = static_cast<int8_T>(i3);
                  b_i3 = static_cast<int8_T>(i4);
                } else if (d <= x4[i4 - 1]) {
                  i = static_cast<int8_T>(i1);
                  b_i1 = static_cast<int8_T>(i3);
                  i2 = static_cast<int8_T>(ib);
                  b_i3 = static_cast<int8_T>(i4);
                } else {
                  i = static_cast<int8_T>(i1);
                  b_i1 = static_cast<int8_T>(i3);
                  i2 = static_cast<int8_T>(i4);
                  b_i3 = static_cast<int8_T>(ib);
                }
              } else {
                d1 = x4[i4 - 1];
                if (d <= d1) {
                  if (x4[ib - 1] <= d1) {
                    i = static_cast<int8_T>(i3);
                    b_i1 = static_cast<int8_T>(i1);
                    i2 = static_cast<int8_T>(ib);
                    b_i3 = static_cast<int8_T>(i4);
                  } else {
                    i = static_cast<int8_T>(i3);
                    b_i1 = static_cast<int8_T>(i1);
                    i2 = static_cast<int8_T>(i4);
                    b_i3 = static_cast<int8_T>(ib);
                  }
                } else {
                  i = static_cast<int8_T>(i3);
                  b_i1 = static_cast<int8_T>(i4);
                  i2 = static_cast<int8_T>(i1);
                  b_i3 = static_cast<int8_T>(ib);
                }
              }

              idx[quartetOffset - 3] = idx4[i - 1];
              idx[quartetOffset - 2] = idx4[b_i1 - 1];
              idx[quartetOffset - 1] = idx4[i2 - 1];
              idx[quartetOffset] = idx4[b_i3 - 1];
              x[quartetOffset - 3] = x4[i - 1];
              x[quartetOffset - 2] = x4[b_i1 - 1];
              x[quartetOffset - 1] = x4[i2 - 1];
              x[quartetOffset] = x4[b_i3 - 1];
              ib = 0;
            }
          }
        }

        if (ib > 0) {
          int8_T perm[4];
          perm[1] = 0;
          perm[2] = 0;
          perm[3] = 0;
          if (ib == 1) {
            perm[0] = 1;
          } else if (ib == 2) {
            if (x4[0] <= x4[1]) {
              perm[0] = 1;
              perm[1] = 2;
            } else {
              perm[0] = 2;
              perm[1] = 1;
            }
          } else if (x4[0] <= x4[1]) {
            if (x4[1] <= x4[2]) {
              perm[0] = 1;
              perm[1] = 2;
              perm[2] = 3;
            } else if (x4[0] <= x4[2]) {
              perm[0] = 1;
              perm[1] = 3;
              perm[2] = 2;
            } else {
              perm[0] = 3;
              perm[1] = 1;
              perm[2] = 2;
            }
          } else if (x4[0] <= x4[2]) {
            perm[0] = 2;
            perm[1] = 1;
            perm[2] = 3;
          } else if (x4[1] <= x4[2]) {
            perm[0] = 2;
            perm[1] = 3;
            perm[2] = 1;
          } else {
            perm[0] = 3;
            perm[1] = 2;
            perm[2] = 1;
          }

          quartetOffset = static_cast<uint8_T>(ib);
          for (int32_T k{0}; k < quartetOffset; k++) {
            i1 = perm[k] - 1;
            i3 = ((k - nNaNs) - ib) + 32;
            idx[i3] = idx4[i1];
            x[i3] = x4[i1];
          }
        }

        ib = (nNaNs >> 1) + 32;
        for (int32_T k{0}; k <= ib - 33; k++) {
          i1 = (k - nNaNs) + 32;
          quartetOffset = idx[i1];
          idx[i1] = idx[31 - k];
          idx[31 - k] = quartetOffset;
          x[i1] = xwork[31 - k];
          x[31 - k] = xwork[i1];
        }

        if ((nNaNs & 1) != 0) {
          quartetOffset = ib - nNaNs;
          x[quartetOffset] = xwork[quartetOffset];
        }

        if (32 - nNaNs > 1) {
          std::memset(&iwork[0], 0, 32U * sizeof(int32_T));
          i3 = (32 - nNaNs) >> 2;
          quartetOffset = 4;
          while (i3 > 1) {
            if ((i3 & 1) != 0) {
              i3--;
              ib = quartetOffset * i3;
              i1 = 32 - (nNaNs + ib);
              if (i1 > quartetOffset) {
                merge(idx, x, ib, quartetOffset, i1 - quartetOffset, iwork,
                      xwork);
              }
            }

            ib = quartetOffset << 1;
            i3 >>= 1;
            for (int32_T k{0}; k < i3; k++) {
              merge(idx, x, k * ib, quartetOffset, quartetOffset, iwork, xwork);
            }

            quartetOffset = ib;
          }

          if (32 - nNaNs > quartetOffset) {
            merge(idx, x, 0, quartetOffset, 32 - (nNaNs + quartetOffset), iwork,
                  xwork);
          }
        }
      }

      //
      //
      static int32_T thirdOfFive(const real_T v_data[], int32_T ia, int32_T ib)
      {
        int32_T im;
        if ((ia == ib) || (ia + 1 == ib)) {
          im = ia;
        } else if ((ia + 2 == ib) || (ia + 3 == ib)) {
          real_T v4;
          v4 = v_data[ia - 1];
          if (v4 < v_data[ia]) {
            if (v_data[ia] < v_data[ia + 1]) {
              im = ia + 1;
            } else if (v_data[ia - 1] < v_data[ia + 1]) {
              im = ia + 2;
            } else {
              im = ia;
            }
          } else if (v4 < v_data[ia + 1]) {
            im = ia;
          } else if (v_data[ia] < v_data[ia + 1]) {
            im = ia + 2;
          } else {
            im = ia + 1;
          }
        } else {
          real_T v4;
          real_T v5;
          int32_T j2;
          int32_T j3;
          int32_T j4;
          int32_T j5;
          v4 = v_data[ia - 1];
          if (v4 < v_data[ia]) {
            v5 = v_data[ia + 1];
            if (v_data[ia] < v5) {
              im = ia;
              j2 = ia;
              j3 = ia + 2;
            } else if (v4 < v5) {
              im = ia;
              j2 = ia + 1;
              j3 = ia + 1;
            } else {
              im = ia + 2;
              j2 = ia - 1;
              j3 = ia + 1;
            }
          } else {
            v5 = v_data[ia + 1];
            if (v4 < v5) {
              im = ia + 1;
              j2 = ia - 1;
              j3 = ia + 2;
            } else if (v_data[ia] < v5) {
              im = ia + 1;
              j2 = ia + 1;
              j3 = ia;
            } else {
              im = ia + 2;
              j2 = ia;
              j3 = ia;
            }
          }

          j4 = ia;
          j5 = ia + 1;
          v4 = v_data[ia + 2];
          v5 = v_data[ia + 3];
          if (v5 < v4) {
            j4 = ia + 1;
            j5 = ia;
            v5 = v4;
            v4 = v_data[ia + 3];
          }

          if (!(v5 < v_data[im - 1])) {
            if (v5 < v_data[j2]) {
              im = j5 + 3;
            } else if (v4 < v_data[j2]) {
              im = j2 + 1;
            } else if (v4 < v_data[j3 - 1]) {
              im = j4 + 3;
            } else {
              im = j3;
            }
          }
        }

        return im;
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

    //
    //
    static real_T median(const real_T x_data[], const int32_T x_size[2])
    {
      real_T a__4_data[32];
      real_T b;
      real_T y;
      int32_T a__6;
      int32_T k;
      int32_T vlen;
      vlen = x_size[1];
      if (x_size[1] == 0) {
        y = rtNaN;
      } else {
        k = 0;
        int32_T exitg1;
        do {
          exitg1 = 0;
          if (k <= vlen - 1) {
            if (std::isnan(x_data[k])) {
              y = rtNaN;
              exitg1 = 1;
            } else {
              k++;
            }
          } else {
            if (vlen <= 4) {
              if (vlen == 0) {
                y = rtNaN;
              } else if (vlen == 1) {
                y = x_data[0];
              } else if (vlen == 2) {
                if (((x_data[0] < 0.0) != (x_data[1] < 0.0)) || std::isinf
                    (x_data[0])) {
                  y = (x_data[0] + x_data[1]) / 2.0;
                } else {
                  y = x_data[0] + (x_data[1] - x_data[0]) / 2.0;
                }
              } else if (vlen == 3) {
                if (x_data[0] < x_data[1]) {
                  if (x_data[1] < x_data[2]) {
                    a__6 = 1;
                  } else if (x_data[0] < x_data[2]) {
                    a__6 = 2;
                  } else {
                    a__6 = 0;
                  }
                } else if (x_data[0] < x_data[2]) {
                  a__6 = 0;
                } else if (x_data[1] < x_data[2]) {
                  a__6 = 2;
                } else {
                  a__6 = 1;
                }

                y = x_data[a__6];
              } else {
                if (x_data[0] < x_data[1]) {
                  if (x_data[1] < x_data[2]) {
                    k = 0;
                    a__6 = 1;
                    vlen = 2;
                  } else if (x_data[0] < x_data[2]) {
                    k = 0;
                    a__6 = 2;
                    vlen = 1;
                  } else {
                    k = 2;
                    a__6 = 0;
                    vlen = 1;
                  }
                } else if (x_data[0] < x_data[2]) {
                  k = 1;
                  a__6 = 0;
                  vlen = 2;
                } else if (x_data[1] < x_data[2]) {
                  k = 1;
                  a__6 = 2;
                  vlen = 0;
                } else {
                  k = 2;
                  a__6 = 1;
                  vlen = 0;
                }

                if (x_data[k] < x_data[3]) {
                  if (x_data[3] < x_data[vlen]) {
                    if (((x_data[a__6] < 0.0) != (x_data[3] < 0.0)) || std::
                        isinf(x_data[a__6])) {
                      y = (x_data[a__6] + x_data[3]) / 2.0;
                    } else {
                      y = x_data[a__6] + (x_data[3] - x_data[a__6]) / 2.0;
                    }
                  } else if (((x_data[a__6] < 0.0) != (x_data[vlen] < 0.0)) ||
                             std::isinf(x_data[a__6])) {
                    y = (x_data[a__6] + x_data[vlen]) / 2.0;
                  } else {
                    y = x_data[a__6] + (x_data[vlen] - x_data[a__6]) / 2.0;
                  }
                } else if (((x_data[k] < 0.0) != (x_data[a__6] < 0.0)) || std::
                           isinf(x_data[k])) {
                  y = (x_data[k] + x_data[a__6]) / 2.0;
                } else {
                  y = x_data[k] + (x_data[a__6] - x_data[k]) / 2.0;
                }
              }
            } else {
              int32_T midm1;
              midm1 = vlen >> 1;
              if ((vlen & 1) == 0) {
                k = x_size[1];
                std::copy(&x_data[0], &x_data[k], &a__4_data[0]);
                internal::quickselect(a__4_data, midm1 + 1, vlen, &y, &k, &a__6);
                if (midm1 < k) {
                  internal::quickselect(a__4_data, midm1, a__6 - 1, &b, &k,
                                        &vlen);
                  if (((y < 0.0) != (b < 0.0)) || std::isinf(y)) {
                    y = (y + b) / 2.0;
                  } else {
                    y += (b - y) / 2.0;
                  }
                }
              } else {
                k = x_size[1];
                std::copy(&x_data[0], &x_data[k], &a__4_data[0]);
                internal::quickselect(a__4_data, midm1 + 1, vlen, &y, &k, &a__6);
              }
            }

            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      return y;
    }

    //
    //
    static void mldivide(const ::coder::array<real_T, 2U> &A, const real_T
                         B_data[], real_T Y_data[], int32_T *Y_size)
    {
      ::coder::array<real_T, 2U> b_A;
      real_T b_B_data[128];
      real_T tau_data[127];
      int32_T jpvt_data[127];
      int32_T jA;
      if (A.size(1) == 0) {
        *Y_size = 0;
      } else if (A.size(1) == 128) {
        real_T tol;
        int32_T i;
        int32_T yk;
        uint8_T ipiv_data[128];
        b_A.set_size(A.size(0), 128);
        for (i = 0; i < 16384; i++) {
          b_A[i] = A[i];
        }

        std::copy(&B_data[0], &B_data[128], &b_B_data[0]);
        ipiv_data[0] = 1U;
        yk = 1;
        for (int32_T k{0}; k < 127; k++) {
          int32_T b_tmp;
          int32_T jp1j;
          int32_T mmj_tmp;
          int32_T rankA;
          int32_T temp_tmp;
          uint8_T u;
          yk++;
          ipiv_data[k + 1] = static_cast<uint8_T>(yk);
          mmj_tmp = 126 - k;
          b_tmp = k * 129;
          jp1j = b_tmp + 2;
          jA = 128 - k;
          rankA = 0;
          tol = std::abs(b_A[b_tmp]);
          for (int32_T b_i{2}; b_i <= jA; b_i++) {
            real_T s;
            s = std::abs(b_A[(b_tmp + b_i) - 1]);
            if (s > tol) {
              rankA = b_i - 1;
              tol = s;
            }
          }

          if (b_A[b_tmp + rankA] != 0.0) {
            if (rankA != 0) {
              rankA += k;
              ipiv_data[k] = static_cast<uint8_T>(rankA + 1);
              for (int32_T b_i{0}; b_i < 128; b_i++) {
                jA = b_i << 7;
                temp_tmp = k + jA;
                tol = b_A[temp_tmp];
                i = rankA + jA;
                b_A[temp_tmp] = b_A[i];
                b_A[i] = tol;
              }
            }

            i = (b_tmp - k) + 128;
            for (int32_T b_i{jp1j}; b_i <= i; b_i++) {
              b_A[b_i - 1] = b_A[b_i - 1] / b_A[b_tmp];
            }
          }

          jA = b_tmp;
          for (jp1j = 0; jp1j <= mmj_tmp; jp1j++) {
            tol = b_A[(b_tmp + (jp1j << 7)) + 128];
            if (tol != 0.0) {
              i = jA + 130;
              temp_tmp = (jA - k) + 256;
              for (rankA = i; rankA <= temp_tmp; rankA++) {
                b_A[rankA - 1] = b_A[rankA - 1] + b_A[((b_tmp + rankA) - jA) -
                  129] * -tol;
              }
            }

            jA += 128;
          }

          u = ipiv_data[k];
          if (u != k + 1) {
            tol = b_B_data[k];
            b_B_data[k] = b_B_data[u - 1];
            b_B_data[u - 1] = tol;
          }
        }

        for (int32_T k{0}; k < 128; k++) {
          jA = k << 7;
          if (b_B_data[k] != 0.0) {
            i = k + 2;
            for (int32_T b_i{i}; b_i < 129; b_i++) {
              b_B_data[b_i - 1] -= b_B_data[k] * b_A[(b_i + jA) - 1];
            }
          }
        }

        for (int32_T k{127}; k >= 0; k--) {
          jA = k << 7;
          tol = b_B_data[k];
          if (tol != 0.0) {
            tol /= b_A[k + jA];
            b_B_data[k] = tol;
            for (int32_T b_i{0}; b_i < k; b_i++) {
              b_B_data[b_i] -= b_B_data[k] * b_A[b_i + jA];
            }
          }
        }

        *Y_size = 128;
        std::copy(&b_B_data[0], &b_B_data[128], &Y_data[0]);
      } else {
        real_T tol;
        int32_T i;
        int32_T rankA;
        b_A.set_size(A.size(0), A.size(1));
        jA = A.size(0) * A.size(1);
        for (i = 0; i < jA; i++) {
          b_A[i] = A[i];
        }

        int32_T jpvt_size[2];
        internal::lapack::xgeqp3(b_A, tau_data, &jA, jpvt_data, jpvt_size);
        rankA = 0;
        if (b_A.size(1) > 0) {
          tol = 2.8421709430404007E-13 * std::abs(b_A[0]);
          while ((rankA < b_A.size(1)) && (!(std::abs(b_A[rankA + 128 * rankA]) <=
                   tol))) {
            rankA++;
          }
        }

        std::copy(&B_data[0], &B_data[128], &b_B_data[0]);
        *Y_size = b_A.size(1);
        jA = b_A.size(1);
        if (jA - 1 >= 0) {
          std::memset(&Y_data[0], 0, static_cast<uint32_T>(jA) * sizeof(real_T));
        }

        i = b_A.size(1);
        for (int32_T jp1j{0}; jp1j < i; jp1j++) {
          if (tau_data[jp1j] != 0.0) {
            int32_T temp_tmp;
            tol = b_B_data[jp1j];
            temp_tmp = jp1j + 2;
            for (int32_T b_i{temp_tmp}; b_i < 129; b_i++) {
              tol += b_A[(b_i + 128 * jp1j) - 1] * b_B_data[b_i - 1];
            }

            tol *= tau_data[jp1j];
            if (tol != 0.0) {
              b_B_data[jp1j] -= tol;
              for (int32_T b_i{temp_tmp}; b_i < 129; b_i++) {
                b_B_data[b_i - 1] -= b_A[(b_i + 128 * jp1j) - 1] * tol;
              }
            }
          }
        }

        for (int32_T b_i{0}; b_i < rankA; b_i++) {
          Y_data[jpvt_data[b_i] - 1] = b_B_data[b_i];
        }

        for (int32_T jp1j{rankA}; jp1j >= 1; jp1j--) {
          i = jpvt_data[jp1j - 1];
          Y_data[i - 1] /= b_A[(jp1j + 128 * (jp1j - 1)) - 1];
          for (int32_T b_i{0}; b_i <= jp1j - 2; b_i++) {
            Y_data[jpvt_data[b_i] - 1] -= Y_data[jpvt_data[jp1j - 1] - 1] *
              b_A[b_i + 128 * (jp1j - 1)];
          }
        }
      }
    }

    //
    //
    static real_T sum(const ::coder::array<real_T, 2U> &x)
    {
      real_T y;
      if (x.size(1) == 0) {
        y = 0.0;
      } else {
        int32_T firstBlockLength;
        int32_T lastBlockLength;
        int32_T nblocks;
        if (x.size(1) <= 1024) {
          firstBlockLength = x.size(1);
          lastBlockLength = 0;
          nblocks = 1;
        } else {
          firstBlockLength = 1024;
          nblocks = static_cast<int32_T>(static_cast<uint32_T>(x.size(1)) >> 10);
          lastBlockLength = x.size(1) - (nblocks << 10);
          if (lastBlockLength > 0) {
            nblocks++;
          } else {
            lastBlockLength = 1024;
          }
        }

        y = x[0];
        for (int32_T k{2}; k <= firstBlockLength; k++) {
          y += x[k - 1];
        }

        for (int32_T ib{2}; ib <= nblocks; ib++) {
          real_T bsum;
          int32_T hi;
          firstBlockLength = (ib - 1) << 10;
          bsum = x[firstBlockLength];
          if (ib == nblocks) {
            hi = lastBlockLength;
          } else {
            hi = 1024;
          }

          for (int32_T k{2}; k <= hi; k++) {
            bsum += x[(firstBlockLength + k) - 1];
          }

          y += bsum;
        }
      }

      return y;
    }

    //
    //
    static void tukeywin(real_T N, ::coder::array<real_T, 1U> &w)
    {
      ::coder::array<real_T, 2U> y;
      ::coder::array<real_T, 1U> b_y;
      ::coder::array<real_T, 1U> t;
      real_T b_N;
      int32_T i;
      int32_T nx;
      int32_T trivialwin;
      int8_T w_data;
      nx = 1;
      w_data = 0;
      trivialwin = 0;
      if (N == std::floor(N)) {
        b_N = N;
      } else {
        b_N = std::round(N);
      }

      if (b_N == 0.0) {
        nx = 0;
        trivialwin = 1;
      } else if (b_N == 1.0) {
        w_data = 1;
        trivialwin = 1;
      }

      w.set_size(nx);
      for (i = 0; i < nx; i++) {
        w[0] = w_data;
      }

      if (trivialwin == 0) {
        real_T delta1;
        real_T x;
        int32_T i1;
        int32_T loop_ub_tmp;
        delta1 = std::floor(b_N);
        y.set_size(1, static_cast<int32_T>(std::floor(b_N)));
        if (static_cast<int32_T>(delta1) >= 1) {
          y[static_cast<int32_T>(delta1) - 1] = 1.0;
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

        t.set_size(y.size(1));
        nx = y.size(1);
        for (i = 0; i < nx; i++) {
          t[i] = y[i];
        }

        x = std::floor(0.025 * (b_N - 1.0));
        delta1 = (b_N - (x + 1.0)) + 1.0;
        if (x + 1.0 < 1.0) {
          nx = 0;
        } else {
          nx = static_cast<int32_T>(x + 1.0);
        }

        if (delta1 > t.size(0)) {
          i = 0;
          i1 = 0;
        } else {
          i = static_cast<int32_T>(delta1) - 1;
          i1 = t.size(0);
        }

        b_y.set_size(nx);
        for (trivialwin = 0; trivialwin < nx; trivialwin++) {
          b_y[trivialwin] = 125.66370614359172 * (t[trivialwin] - 0.025);
        }

        loop_ub_tmp = i1 - i;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          t[i1] = 125.66370614359172 * ((t[i + i1] - 1.0) + 0.025);
        }

        t.set_size(loop_ub_tmp);
        nx = b_y.size(0);
        for (trivialwin = 0; trivialwin < nx; trivialwin++) {
          b_y[trivialwin] = std::cos(b_y[trivialwin]);
        }

        for (trivialwin = 0; trivialwin < loop_ub_tmp; trivialwin++) {
          t[trivialwin] = std::cos(t[trivialwin]);
        }

        nx = static_cast<int32_T>((delta1 - (x + 1.0)) - 1.0);
        w.set_size((b_y.size(0) + nx) + t.size(0));
        trivialwin = b_y.size(0);
        for (i = 0; i < trivialwin; i++) {
          w[i] = (b_y[i] + 1.0) / 2.0;
        }

        for (i = 0; i < nx; i++) {
          w[i + b_y.size(0)] = 1.0;
        }

        trivialwin = t.size(0);
        for (i = 0; i < trivialwin; i++) {
          w[(i + b_y.size(0)) + nx] = (t[i] + 1.0) / 2.0;
        }
      }
    }

    //
    //
    static void unique_vector(const real_T a[32], real_T b_data[], int32_T
      b_size[2])
    {
      real_T x;
      int32_T idx[32];
      int32_T iwork[32];
      int32_T i;
      int32_T i2;
      int32_T j;
      int32_T k;
      int32_T nb;
      int32_T pEnd;
      int32_T qEnd;
      boolean_T exitg1;
      for (k = 0; k <= 30; k += 2) {
        x = a[k + 1];
        if ((a[k] <= x) || std::isnan(x)) {
          idx[k] = k + 1;
          idx[k + 1] = k + 2;
        } else {
          idx[k] = k + 2;
          idx[k + 1] = k + 1;
        }
      }

      i = 2;
      while (i < 32) {
        i2 = i << 1;
        j = 1;
        for (pEnd = i + 1; pEnd < 33; pEnd = qEnd + i) {
          int32_T kEnd;
          int32_T q;
          nb = j;
          q = pEnd - 1;
          qEnd = j + i2;
          k = 0;
          kEnd = qEnd - j;
          while (k + 1 <= kEnd) {
            int32_T b_i;
            x = a[idx[q] - 1];
            b_i = idx[nb - 1];
            if ((a[b_i - 1] <= x) || std::isnan(x)) {
              iwork[k] = b_i;
              nb++;
              if (nb == pEnd) {
                while (q + 1 < qEnd) {
                  k++;
                  iwork[k] = idx[q];
                  q++;
                }
              }
            } else {
              iwork[k] = idx[q];
              q++;
              if (q + 1 == qEnd) {
                while (nb < pEnd) {
                  k++;
                  iwork[k] = idx[nb - 1];
                  nb++;
                }
              }
            }

            k++;
          }

          for (k = 0; k < kEnd; k++) {
            idx[(j + k) - 1] = iwork[k];
          }

          j = qEnd;
        }

        i = i2;
      }

      b_size[0] = 1;
      for (k = 0; k < 32; k++) {
        b_data[k] = a[idx[k] - 1];
      }

      k = 0;
      while ((k + 1 <= 32) && std::isinf(b_data[k]) && (b_data[k] < 0.0)) {
        k++;
      }

      i2 = k;
      k = 32;
      while ((k >= 1) && std::isnan(b_data[k - 1])) {
        k--;
      }

      pEnd = 32 - k;
      exitg1 = false;
      while ((!exitg1) && (k >= 1)) {
        x = b_data[k - 1];
        if (std::isinf(x) && (x > 0.0)) {
          k--;
        } else {
          exitg1 = true;
        }
      }

      i = 32 - (k + pEnd);
      nb = -1;
      if (i2 > 0) {
        nb = 0;
      }

      while (i2 + 1 <= k) {
        x = b_data[i2];
        do {
          i2++;
        } while (!((i2 + 1 > k) || (b_data[i2] != x)));

        nb++;
        b_data[nb] = x;
      }

      if (i > 0) {
        nb++;
        b_data[nb] = b_data[k];
      }

      i2 = k + i;
      for (j = 0; j < pEnd; j++) {
        b_data[(nb + j) + 1] = b_data[i2 + j];
      }

      nb += pEnd;
      if (nb + 1 < 1) {
        b_size[1] = 0;
      } else {
        b_size[1] = nb + 1;
      }
    }

    //
    //
    static void vitdec(const real_T code[144], real_T varargout_1[72])
    {
      static const uint16_T uv[256]{ 0U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U,
        32767U, 32767U, 32767U, 32767U, 32767U, 32767U, 32767U };

      static const int8_T acsOutputs[512]{ 0, 3, 2, 1, 0, 3, 2, 1, 2, 1, 0, 3, 2,
        1, 0, 3, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3,
        0, 1, 2, 1, 2, 3, 0, 1, 2, 3, 0, 2, 1, 0, 3, 2, 1, 0, 3, 0, 3, 2, 1, 0,
        3, 2, 1, 3, 0, 1, 2, 3, 0, 1, 2, 1, 2, 3, 0, 1, 2, 3, 0, 2, 1, 0, 3, 2,
        1, 0, 3, 0, 3, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 2, 1, 0, 3, 2,
        1, 0, 3, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3, 0, 1, 2, 2, 1, 0, 3, 2,
        1, 0, 3, 0, 3, 2, 1, 0, 3, 2, 1, 3, 0, 1, 2, 3, 0, 1, 2, 1, 2, 3, 0, 1,
        2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3, 0, 1, 2, 0, 3, 2, 1, 0,
        3, 2, 1, 2, 1, 0, 3, 2, 1, 0, 3, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3,
        0, 1, 2, 0, 3, 2, 1, 0, 3, 2, 1, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 0, 3, 2,
        1, 0, 3, 0, 3, 2, 1, 0, 3, 2, 1, 3, 0, 1, 2, 3, 0, 1, 2, 1, 2, 3, 0, 1,
        2, 3, 0, 3, 0, 1, 2, 3, 0, 1, 2, 1, 2, 3, 0, 1, 2, 3, 0, 2, 1, 0, 3, 2,
        1, 0, 3, 0, 3, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 2, 1, 0, 3, 2,
        1, 0, 3, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3, 0, 1, 2, 0, 3, 2, 1, 0,
        3, 2, 1, 2, 1, 0, 3, 2, 1, 0, 3, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3,
        0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 1, 2, 3, 0, 1, 2, 3, 0, 2, 1, 0, 3, 2,
        1, 0, 3, 0, 3, 2, 1, 0, 3, 2, 1, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3,
        0, 1, 2, 0, 3, 2, 1, 0, 3, 2, 1, 2, 1, 0, 3, 2, 1, 0, 3, 2, 1, 0, 3, 2,
        1, 0, 3, 0, 3, 2, 1, 0, 3, 2, 1, 3, 0, 1, 2, 3, 0, 1, 2, 1, 2, 3, 0, 1,
        2, 3, 0, 2, 1, 0, 3, 2, 1, 0, 3, 0, 3, 2, 1, 0, 3, 2, 1, 3, 0, 1, 2, 3,
        0, 1, 2, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 3, 0, 1, 2, 3,
        0, 1, 2, 0, 3, 2, 1, 0, 3, 2, 1, 2, 1, 0, 3, 2, 1, 0, 3 };

      static const uint8_T acsNextStates[512]{ 0U, 0U, 1U, 1U, 2U, 2U, 3U, 3U,
        4U, 4U, 5U, 5U, 6U, 6U, 7U, 7U, 8U, 8U, 9U, 9U, 10U, 10U, 11U, 11U, 12U,
        12U, 13U, 13U, 14U, 14U, 15U, 15U, 16U, 16U, 17U, 17U, 18U, 18U, 19U,
        19U, 20U, 20U, 21U, 21U, 22U, 22U, 23U, 23U, 24U, 24U, 25U, 25U, 26U,
        26U, 27U, 27U, 28U, 28U, 29U, 29U, 30U, 30U, 31U, 31U, 32U, 32U, 33U,
        33U, 34U, 34U, 35U, 35U, 36U, 36U, 37U, 37U, 38U, 38U, 39U, 39U, 40U,
        40U, 41U, 41U, 42U, 42U, 43U, 43U, 44U, 44U, 45U, 45U, 46U, 46U, 47U,
        47U, 48U, 48U, 49U, 49U, 50U, 50U, 51U, 51U, 52U, 52U, 53U, 53U, 54U,
        54U, 55U, 55U, 56U, 56U, 57U, 57U, 58U, 58U, 59U, 59U, 60U, 60U, 61U,
        61U, 62U, 62U, 63U, 63U, 64U, 64U, 65U, 65U, 66U, 66U, 67U, 67U, 68U,
        68U, 69U, 69U, 70U, 70U, 71U, 71U, 72U, 72U, 73U, 73U, 74U, 74U, 75U,
        75U, 76U, 76U, 77U, 77U, 78U, 78U, 79U, 79U, 80U, 80U, 81U, 81U, 82U,
        82U, 83U, 83U, 84U, 84U, 85U, 85U, 86U, 86U, 87U, 87U, 88U, 88U, 89U,
        89U, 90U, 90U, 91U, 91U, 92U, 92U, 93U, 93U, 94U, 94U, 95U, 95U, 96U,
        96U, 97U, 97U, 98U, 98U, 99U, 99U, 100U, 100U, 101U, 101U, 102U, 102U,
        103U, 103U, 104U, 104U, 105U, 105U, 106U, 106U, 107U, 107U, 108U, 108U,
        109U, 109U, 110U, 110U, 111U, 111U, 112U, 112U, 113U, 113U, 114U, 114U,
        115U, 115U, 116U, 116U, 117U, 117U, 118U, 118U, 119U, 119U, 120U, 120U,
        121U, 121U, 122U, 122U, 123U, 123U, 124U, 124U, 125U, 125U, 126U, 126U,
        127U, 127U, 128U, 128U, 129U, 129U, 130U, 130U, 131U, 131U, 132U, 132U,
        133U, 133U, 134U, 134U, 135U, 135U, 136U, 136U, 137U, 137U, 138U, 138U,
        139U, 139U, 140U, 140U, 141U, 141U, 142U, 142U, 143U, 143U, 144U, 144U,
        145U, 145U, 146U, 146U, 147U, 147U, 148U, 148U, 149U, 149U, 150U, 150U,
        151U, 151U, 152U, 152U, 153U, 153U, 154U, 154U, 155U, 155U, 156U, 156U,
        157U, 157U, 158U, 158U, 159U, 159U, 160U, 160U, 161U, 161U, 162U, 162U,
        163U, 163U, 164U, 164U, 165U, 165U, 166U, 166U, 167U, 167U, 168U, 168U,
        169U, 169U, 170U, 170U, 171U, 171U, 172U, 172U, 173U, 173U, 174U, 174U,
        175U, 175U, 176U, 176U, 177U, 177U, 178U, 178U, 179U, 179U, 180U, 180U,
        181U, 181U, 182U, 182U, 183U, 183U, 184U, 184U, 185U, 185U, 186U, 186U,
        187U, 187U, 188U, 188U, 189U, 189U, 190U, 190U, 191U, 191U, 192U, 192U,
        193U, 193U, 194U, 194U, 195U, 195U, 196U, 196U, 197U, 197U, 198U, 198U,
        199U, 199U, 200U, 200U, 201U, 201U, 202U, 202U, 203U, 203U, 204U, 204U,
        205U, 205U, 206U, 206U, 207U, 207U, 208U, 208U, 209U, 209U, 210U, 210U,
        211U, 211U, 212U, 212U, 213U, 213U, 214U, 214U, 215U, 215U, 216U, 216U,
        217U, 217U, 218U, 218U, 219U, 219U, 220U, 220U, 221U, 221U, 222U, 222U,
        223U, 223U, 224U, 224U, 225U, 225U, 226U, 226U, 227U, 227U, 228U, 228U,
        229U, 229U, 230U, 230U, 231U, 231U, 232U, 232U, 233U, 233U, 234U, 234U,
        235U, 235U, 236U, 236U, 237U, 237U, 238U, 238U, 239U, 239U, 240U, 240U,
        241U, 241U, 242U, 242U, 243U, 243U, 244U, 244U, 245U, 245U, 246U, 246U,
        247U, 247U, 248U, 248U, 249U, 249U, 250U, 250U, 251U, 251U, 252U, 252U,
        253U, 253U, 254U, 254U, MAX_uint8_T, MAX_uint8_T };

      int32_T stateMetric[256];
      int32_T preDecodVec[144];
      int32_T i;
      int32_T input;
      int32_T minState;
      int32_T minStateLastTB;
      int32_T tbIdx;
      uint32_T tbWorkLastTB;
      int8_T tbInput[11776];
      uint8_T tbState[11776];
      for (minState = 0; minState < 256; minState++) {
        stateMetric[minState] = uv[minState];
      }

      std::memset(&tbInput[0], 0, 11776U * sizeof(int8_T));
      std::memset(&tbState[0], 0, 11776U * sizeof(uint8_T));
      tbIdx = 0;
      for (i = 0; i < 144; i++) {
        real_T d;
        d = std::round(code[i]);
        if (d < 2.147483648E+9) {
          if (d >= -2.147483648E+9) {
            minState = static_cast<int32_T>(d);
          } else {
            minState = MIN_int32_T;
          }
        } else if (d >= 2.147483648E+9) {
          minState = MAX_int32_T;
        } else {
          minState = 0;
        }

        preDecodVec[i] = minState;
      }

      std::memset(&varargout_1[0], 0, 72U * sizeof(real_T));
      tbWorkLastTB = 1U;
      minStateLastTB = 0;
      input = 0;
      for (int32_T ib{0}; ib < 72; ib++) {
        int32_T tempMetric[256];
        int32_T branchMetric[4];
        int32_T q0;
        int32_T qY;
        int32_T renorm;
        uint32_T tbWork;
        i = (ib << 1) + 1;
        for (int32_T p{0}; p < 4; p++) {
          branchMetric[p] = 0;
          if ((p & 1) != 0) {
            minState = preDecodVec[i];
            if (minState < -2147483392) {
              qY = MAX_int32_T;
            } else {
              qY = 255 - minState;
            }

            branchMetric[p] = qY;
          } else {
            qY = preDecodVec[i];
            branchMetric[p] = qY;
          }

          if (p >> 1 != 0) {
            minState = preDecodVec[i - 1];
            if (minState < -2147483392) {
              minState = MAX_int32_T;
            } else {
              minState = 255 - minState;
            }

            if ((qY < 0) && (minState < MIN_int32_T - qY)) {
              qY = MIN_int32_T;
            } else if ((qY > 0) && (minState > MAX_int32_T - qY)) {
              qY = MAX_int32_T;
            } else {
              qY += minState;
            }

            branchMetric[p] = qY;
          } else {
            minState = preDecodVec[i - 1];
            if ((qY < 0) && (minState < MIN_int32_T - qY)) {
              qY = MIN_int32_T;
            } else if ((qY > 0) && (minState > MAX_int32_T - qY)) {
              qY = MAX_int32_T;
            } else {
              qY += minState;
            }

            branchMetric[p] = qY;
          }
        }

        renorm = 32767;
        for (i = 0; i < 256; i++) {
          tempMetric[i] = 32767;
        }

        for (int32_T p{0}; p < 256; p++) {
          i = acsNextStates[p];
          q0 = stateMetric[p];
          minState = branchMetric[acsOutputs[p]];
          if ((q0 < 0) && (minState < MIN_int32_T - q0)) {
            qY = MIN_int32_T;
          } else if ((q0 > 0) && (minState > MAX_int32_T - q0)) {
            qY = MAX_int32_T;
          } else {
            qY = q0 + minState;
          }

          if (qY < tempMetric[i]) {
            tempMetric[i] = qY;
            if (qY < renorm) {
              renorm = qY;
            }

            i += tbIdx << 8;
            tbState[i] = static_cast<uint8_T>(p);
            tbInput[i] = 0;
          }

          i = acsNextStates[p + 256];
          minState = branchMetric[acsOutputs[p + 256]];
          if ((q0 < 0) && (minState < MIN_int32_T - q0)) {
            qY = MIN_int32_T;
          } else if ((q0 > 0) && (minState > MAX_int32_T - q0)) {
            qY = MAX_int32_T;
          } else {
            qY = q0 + minState;
          }

          if (qY < tempMetric[i]) {
            tempMetric[i] = qY;
            if (qY < renorm) {
              renorm = qY;
            }

            i += tbIdx << 8;
            tbState[i] = static_cast<uint8_T>(p);
            tbInput[i] = 1;
          }
        }

        minState = 0;
        for (int32_T p{0}; p < 256; p++) {
          q0 = tempMetric[p];
          if ((q0 >= 0) && (renorm < q0 - MAX_int32_T)) {
            qY = MAX_int32_T;
          } else if ((q0 < 0) && (renorm > q0 - MIN_int32_T)) {
            qY = MIN_int32_T;
          } else {
            qY = q0 - renorm;
          }

          stateMetric[p] = qY;
          if (qY == 0) {
            minState = p;
          }
        }

        tbWork = static_cast<uint32_T>(tbIdx) + 1U;
        if (ib == 71) {
          minStateLastTB = minState;
          tbWorkLastTB = static_cast<uint32_T>(tbIdx) + 1U;
        }

        if (ib >= 45) {
          for (i = 0; i < 46; i++) {
            minState += (static_cast<int32_T>(tbWork) - 1) << 8;
            input = tbInput[minState];
            minState = tbState[minState];
            if (tbWork - 1U > 0U) {
              tbWork--;
            } else {
              tbWork = 46U;
            }
          }

          varargout_1[(ib - div_nde_s32_floor(ib - 45) * 72) - 45] = input;
        }

        if (tbIdx < 45) {
          tbIdx = static_cast<int32_T>(static_cast<uint32_T>(tbIdx) + 1U);
        } else {
          tbIdx = 0;
        }
      }

      for (i = 0; i < 45; i++) {
        minState = minStateLastTB + ((static_cast<int32_T>(tbWorkLastTB) - 1) <<
          8);
        varargout_1[71 - i] = tbInput[minState];
        minStateLastTB = tbState[minState];
        if (tbWorkLastTB - 1U > 0U) {
          tbWorkLastTB--;
        } else {
          tbWorkLastTB = 46U;
        }
      }
    }

    //
    // function [gamma, speed] = compute_doppler(preamble, chip_dur, chip_frq, freq_list, bband_fs, cfreq, max_speed, nchip)
  }

  static void compute_doppler(const ::coder::array<creal_T, 2U> &preamble,
    real_T chip_dur, const real_T freq_list[32], real_T bband_fs, real_T cfreq,
    real_T max_speed, real_T *b_gamma, real_T *speed)
  {
    ::coder::array<creal_T, 2U> fft_v;
    ::coder::array<creal_T, 1U> yCol;
    ::coder::array<real_T, 2U> costab;
    ::coder::array<real_T, 2U> fvalues;
    ::coder::array<real_T, 2U> psd;
    ::coder::array<real_T, 2U> sintab;
    ::coder::array<real_T, 2U> sintabinv;
    ::coder::array<real_T, 1U> r;
    real_T gammas[32];
    real_T gammas_data[32];
    real_T c_end;
    real_T c_start;
    real_T cpad;
    real_T cpad_tmp;
    real_T fs_shift;
    real_T res_freq;
    int32_T gammas_size[2];
    int32_T i;
    int32_T idx;
    int32_T k;
    int32_T last_tmp;
    int8_T tmp_data[32];
    boolean_T exitg1;
    boolean_T useRadix2;

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
    // | Author: Giovanni Zappa                                                 |
    // +------------------------------------------------------------------------+
    //
    //  COMPUTE_DOPPLER estimate gamma dialation factor (c+v)/c and speed (v) for a chip sequence.
    //
    //  Inputs:
    //     preamble          Baseband waveform containg the preamble.
    //     chip_dur          Chip duration [s].
    //     chip_frq          Chip frequency separation [Hz].
    //     freq_list         List of baseband frequency sequence of chips.
    //     bband_fs          Baseband sampling frequency [Hz].
    //     cfreq             Central frequency of the pass-band signal [Hz].
    //     max_speed         Max Doppler speed [m/s]. Default 5.
    //     nchip             Number of chips to process. Default 32.
    //
    //  Outputs:
    //     gamma             Doppler frequency dialation factor.
    //     speed             Estimated Doppler speed [m/s].
    //
    //  See also DETECTOR_PARAMETERS, CHIPS_ALIGNMENT, DETECT_FIRST, QUAD_FITN.
    // 'compute_doppler:46' c = 1540;
    // 'compute_doppler:48' if (nargin < 7)
    // 'compute_doppler:55' lacc = ceil(chip_dur * bband_fs * (nchip * c / (c - max_speed) - (nchip - 1) * c / (c + max_speed)));
    //  Compute zero padding to have 9 points into the main lobe.
    // 'compute_doppler:58' int_npoint = 9;
    //  only odd numbers
    // 'compute_doppler:59' hf_npoint = fix(int_npoint/2);
    // 'compute_doppler:60' cpad = max(round((int_npoint + 3) * bband_fs * chip_dur / 2), lacc);
    cpad_tmp = chip_dur * bband_fs;
    cpad = std::fmax(std::round(12.0 * bband_fs * chip_dur / 2.0), std::ceil
                     (cpad_tmp * (49280.0 / (1540.0 - max_speed) - 47740.0 /
      (max_speed + 1540.0))));

    // 'compute_doppler:62' res_freq = bband_fs / cpad;
    res_freq = bband_fs / cpad;

    //  Compute maximum Doppler shift at max_speed.
    // 'compute_doppler:65' fs_shift = ceil((cfreq + max(abs(freq_list)) + 2 / chip_dur) * max_speed / c / res_freq);
    for (k = 0; k < 32; k++) {
      gammas[k] = std::abs(freq_list[k]);
    }

    if (!std::isnan(gammas[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= 32)) {
        if (!std::isnan(gammas[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      c_start = gammas[0];
    } else {
      c_start = gammas[idx - 1];
      i = idx + 1;
      for (k = i; k < 33; k++) {
        c_end = gammas[k - 1];
        if (c_start < c_end) {
          c_start = c_end;
        }
      }
    }

    fs_shift = std::ceil(((cfreq + c_start) + 2.0 / chip_dur) * max_speed /
                         1540.0 / res_freq);

    // 'compute_doppler:67' fvalues = floor((-cpad + 1) / 2) / cpad * bband_fs : res_freq : floor((cpad - 1) / 2) / cpad * bband_fs;
    c_end = std::floor((-cpad + 1.0) / 2.0) / cpad * bband_fs;
    c_start = std::floor((cpad - 1.0) / 2.0) / cpad * bband_fs;
    if (std::isnan(c_end) || std::isnan(res_freq) || std::isnan(c_start)) {
      fvalues.set_size(1, 1);
      fvalues[0] = rtNaN;
    } else if ((res_freq == 0.0) || ((c_end < c_start) && (res_freq < 0.0)) ||
               ((c_start < c_end) && (res_freq > 0.0))) {
      fvalues.set_size(1, 0);
    } else if ((std::isinf(c_end) || std::isinf(c_start)) && (std::isinf
                (res_freq) || (c_end == c_start))) {
      fvalues.set_size(1, 1);
      fvalues[0] = rtNaN;
    } else if (std::isinf(res_freq)) {
      fvalues.set_size(1, 1);
      fvalues[0] = c_end;
    } else if ((std::floor(c_end) == c_end) && (std::floor(res_freq) == res_freq))
    {
      k = static_cast<int32_T>((c_start - c_end) / res_freq);
      fvalues.set_size(1, k + 1);
      for (i = 0; i <= k; i++) {
        fvalues[i] = c_end + res_freq * static_cast<real_T>(i);
      }
    } else {
      coder::eml_float_colon(c_end, res_freq, c_start, fvalues);
    }

    // 'compute_doppler:69' if (verbose)
    //  Compute Doppler estimator quadratic interpolation.
    // 'compute_doppler:76' gammas = NaN * ones(1, nchip);
    for (i = 0; i < 32; i++) {
      gammas[i] = rtNaN;
    }

    // 'compute_doppler:77' for count = 1 : nchip
    for (int32_T count{0}; count < 32; count++) {
      real_T sxy_tmp_data[9];
      real_T a_tmp;
      real_T b_a_tmp;
      real_T b_costab;
      real_T b_sintab;
      real_T d;
      real_T f_idx;
      real_T s1;
      real_T s2;
      real_T s3;
      real_T sy;
      int32_T i1;

      // 'compute_doppler:78' c_start = max(1, round(bband_fs * chip_dur * (count - 1) * c / (c + max_speed)));
      c_start = std::fmax(1.0, std::round(cpad_tmp * ((static_cast<real_T>(count)
        + 1.0) - 1.0) * 1540.0 / (max_speed + 1540.0)));

      // 'compute_doppler:79' c_end = min(length(preamble), round(bband_fs * chip_dur * count * c / (c - max_speed)));
      c_end = std::fmin(static_cast<real_T>(preamble.size(1)), std::round
                        (cpad_tmp * (static_cast<real_T>(count) + 1.0) * 1540.0 /
                         (1540.0 - max_speed)));

      // 'compute_doppler:81' fft_v = fft(preamble(c_start : c_end) .* hamming(c_end - c_start + 1) .', cpad);
      if (c_start > c_end) {
        i = 0;
        i1 = 0;
      } else {
        i = static_cast<int32_T>(c_start) - 1;
        i1 = static_cast<int32_T>(c_end);
      }

      coder::hamming((c_end - c_start) + 1.0, r);
      k = i1 - i;
      if (k == r.size(0)) {
        fft_v.set_size(1, k);
        for (i1 = 0; i1 < k; i1++) {
          last_tmp = i + i1;
          fft_v[i1].re = r[i1] * preamble[last_tmp].re;
          fft_v[i1].im = r[i1] * preamble[last_tmp].im;
        }
      } else {
        binary_expand_op(fft_v, preamble, i, i1 - 1, r);
      }

      if ((fft_v.size(1) == 0) || (static_cast<int32_T>(cpad) == 0)) {
        k = static_cast<int32_T>(cpad);
        fft_v.set_size(1, static_cast<int32_T>(cpad));
        for (i = 0; i < k; i++) {
          fft_v[i].re = 0.0;
          fft_v[i].im = 0.0;
        }
      } else {
        useRadix2 = ((static_cast<int32_T>(cpad) > 0) && ((static_cast<int32_T>
          (cpad) & (static_cast<int32_T>(cpad) - 1)) == 0));
        coder::internal::FFTImplementationCallback::get_algo_sizes
          (static_cast<int32_T>(cpad), useRadix2, &k, &idx);
        coder::internal::FFTImplementationCallback::generate_twiddle_tables(idx,
          useRadix2, costab, sintab, sintabinv);
        if (useRadix2) {
          ::coder::array<creal_T, 1U> b_fft_v;
          idx = fft_v.size(1);
          b_fft_v = fft_v.reshape(idx);
          coder::internal::FFTImplementationCallback::r2br_r2dit_trig_impl
            (b_fft_v, static_cast<int32_T>(cpad), costab, sintab, yCol);
        } else {
          ::coder::array<creal_T, 1U> b_fft_v;
          idx = fft_v.size(1);
          b_fft_v = fft_v.reshape(idx);
          coder::internal::FFTImplementationCallback::dobluesteinfft(b_fft_v, k,
            static_cast<int32_T>(cpad), costab, sintab, sintabinv, yCol);
        }

        fft_v.set_size(1, static_cast<int32_T>(cpad));
        k = static_cast<int32_T>(cpad);
        for (i = 0; i < k; i++) {
          fft_v[i] = yCol[i];
        }
      }

      // 'compute_doppler:82' psd = abs(fftshift(fft_v)) .^ 2;
      coder::fftshift(fft_v);
      idx = fft_v.size(1);
      costab.set_size(1, fft_v.size(1));
      for (k = 0; k < idx; k++) {
        costab[k] = rt_hypotd_snf(fft_v[k].re, fft_v[k].im);
      }

      psd.set_size(1, costab.size(1));
      k = costab.size(1);
      for (i = 0; i < k; i++) {
        c_start = costab[i];
        psd[i] = c_start * c_start;
      }

      //  Compute the index of the tone.
      // 'compute_doppler:85' f_idx = round(freq_list(count) / res_freq) + fix(cpad / 2) + 1;
      f_idx = (std::round(freq_list[count] / res_freq) + std::trunc(cpad / 2.0))
        + 1.0;

      //  Compute the peak position.
      // 'compute_doppler:88' [p_peak f_peak_idx] = max(psd(f_idx - fs_shift - hf_npoint : f_idx + fs_shift + hf_npoint));
      c_end = (f_idx - fs_shift) - 4.0;
      c_start = (f_idx + fs_shift) + 4.0;
      if (c_end > c_start) {
        i = -1;
        i1 = -1;
      } else {
        i = static_cast<int32_T>(c_end) - 2;
        i1 = static_cast<int32_T>(c_start) - 1;
      }

      last_tmp = i1 - i;
      if (last_tmp <= 2) {
        if (last_tmp == 1) {
          idx = 1;
        } else if ((psd[i + 1] < psd[i1]) || (std::isnan(psd[i + 1]) && (!std::
                     isnan(psd[i1])))) {
          idx = last_tmp;
        } else {
          idx = 1;
        }
      } else {
        if (!std::isnan(psd[i + 1])) {
          idx = 1;
        } else {
          idx = 0;
          k = 2;
          exitg1 = false;
          while ((!exitg1) && (k <= last_tmp)) {
            if (!std::isnan(psd[i + k])) {
              idx = k;
              exitg1 = true;
            } else {
              k++;
            }
          }
        }

        if (idx == 0) {
          idx = 1;
        } else {
          c_start = psd[i + idx];
          i1 = idx + 1;
          for (k = i1; k <= last_tmp; k++) {
            c_end = psd[i + k];
            if (c_start < c_end) {
              c_start = c_end;
              idx = k;
            }
          }
        }
      }

      // 'compute_doppler:89' f_peak_idx = f_peak_idx - fs_shift - hf_npoint - 1;
      //  Computes the interpolation coefficients.
      // 'compute_doppler:92' [a b] = quad_fitN((fvalues(f_idx + f_peak_idx - hf_npoint : f_idx + f_peak_idx + hf_npoint)) - freq_list(count), ...
      // 'compute_doppler:93'                             psd(f_idx + f_peak_idx - hf_npoint : f_idx + f_peak_idx + hf_npoint), int_npoint);
      c_end = f_idx + (((static_cast<real_T>(idx) - fs_shift) - 4.0) - 1.0);
      if (c_end - 4.0 > c_end + 4.0) {
        i = 0;
        i1 = 0;
        last_tmp = 0;
        idx = 0;
      } else {
        i = static_cast<int32_T>(c_end - 4.0) - 1;
        i1 = static_cast<int32_T>(c_end + 4.0);
        last_tmp = static_cast<int32_T>(c_end - 4.0) - 1;
        idx = static_cast<int32_T>(c_end + 4.0);
      }

      k = i1 - i;
      costab.set_size(1, k);
      for (i1 = 0; i1 < k; i1++) {
        costab[i1] = fvalues[i + i1] - freq_list[count];
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
      // | Author: Giovanni Zappa                                                 |
      // +------------------------------------------------------------------------+
      //
      //  QUAD_FITN computes the a*x^2+b*x parameter of the LSE quadratic passing through N points.
      //
      //  Inputs:
      //     x         Vector value.
      //     y         Vector value.
      //     N         Number of vector points.
      //
      //  Outputs:
      //     a         Polynomial coefficient.
      //     b         Polynomial coefficient.
      // 'quad_fitN:37' np = length(x);
      // 'quad_fitN:39' if (N ~= np)
      // 'quad_fitN:43' if (N ~= length(y))
      // 'quad_fitN:47' s1 = sum(x);
      s1 = coder::sum(costab);

      // 'quad_fitN:48' s2 = sum(x .^ 2);
      sintab.set_size(1, costab.size(1));
      k = costab.size(1);
      for (i = 0; i < k; i++) {
        c_start = costab[i];
        sintab[i] = c_start * c_start;
      }

      s2 = coder::sum(sintab);

      // 'quad_fitN:49' s3 = sum(x .^ 3);
      sintabinv.set_size(1, costab.size(1));
      k = costab.size(1);
      for (i = 0; i < k; i++) {
        c_start = costab[i];
        sintabinv[i] = rt_powd_snf(c_start, 3.0);
      }

      s3 = coder::sum(sintabinv);

      // 'quad_fitN:50' s4 = sum(x .^ 4);
      sintabinv.set_size(1, costab.size(1));
      k = costab.size(1);
      for (i = 0; i < k; i++) {
        c_start = costab[i];
        sintabinv[i] = rt_powd_snf(c_start, 4.0);
      }

      f_idx = coder::sum(sintabinv);

      // 'quad_fitN:52' sy = sum(y);
      k = idx - last_tmp;
      sintabinv.set_size(1, k);
      for (i = 0; i < k; i++) {
        sintabinv[i] = psd[last_tmp + i];
      }

      sy = coder::sum(sintabinv);

      // 'quad_fitN:53' sxy = x * y .';
      for (i = 0; i < k; i++) {
        sxy_tmp_data[i] = psd[last_tmp + i];
      }

      b_costab = 0.0;
      k = costab.size(1);
      for (i = 0; i < k; i++) {
        b_costab += costab[i] * sxy_tmp_data[i];
      }

      // 'quad_fitN:54' sx2y = (x .^ 2) * y .';
      b_sintab = 0.0;
      k = sintab.size(1);
      for (i = 0; i < k; i++) {
        b_sintab += sintab[i] * sxy_tmp_data[i];
      }

      // 'quad_fitN:56' d = (N * s2 * s4 - s1^2 * s4 - N * s3^2 + 2 * s1 * s2 * s3 - s2^3);
      c_start = s1 * s1;
      d = (((9.0 * s2 * f_idx - c_start * f_idx) - 9.0 * (s3 * s3)) + 2.0 * s1 *
           s2 * s3) - rt_powd_snf(s2, 3.0);

      // 'quad_fitN:58' a = (s1 * s3 * sy - s2^2 * sy - N * s3 * sxy + s1 * s2 * sxy + N * s2 * sx2y - s1^2 * sx2y) / d;
      a_tmp = s2 * s2;
      b_a_tmp = s1 * s2;
      c_end = (((((s1 * s3 * sy - a_tmp * sy) - 9.0 * s3 * b_costab) + b_a_tmp *
                 b_costab) + 9.0 * s2 * b_sintab) - c_start * b_sintab) / d;

      // 'quad_fitN:60' b = -(s1 * s4 * sy - s2 * s3 * sy - N * s4 * sxy + s2^2 * sxy + N * s3 * sx2y - s1 * s2 * sx2y) / d;
      // 'compute_doppler:94' if (a < 0)
      if (c_end < 0.0) {
        // 'compute_doppler:95' est_f_offset = -b / (2 * a);
        // 'compute_doppler:96' gamma_chip = 1 + est_f_offset / (freq_list(count) + cfreq);
        c_start = -(-(((((s1 * f_idx * sy - s2 * s3 * sy) - 9.0 * f_idx *
                         b_costab) + a_tmp * b_costab) + 9.0 * s3 * b_sintab) -
                      b_a_tmp * b_sintab) / d) / (2.0 * c_end) /
          (freq_list[count] + cfreq) + 1.0;

        // 'compute_doppler:97' speed_chip = c - c .* gamma_chip;
        // 'compute_doppler:98' if (abs(speed_chip) < max_speed)
        if (std::abs(1540.0 - 1540.0 * c_start) < max_speed) {
          //  fprintf('chip = %02d, freq = %-03.1f, err = %-1.3f\n', count, fvalues(f_idx + f_peak_idx), est_f_offset);  %debuging info
          // 'compute_doppler:100' gammas(count) = gamma_chip;
          gammas[count] = c_start;
        }
      }

      // 'compute_doppler:103' if (verbose)
    }

    // 'compute_doppler:124' if (verbose)
    // 'compute_doppler:129' gamma = median(gammas(~isnan(gammas)));
    k = 0;
    idx = 0;
    for (last_tmp = 0; last_tmp < 32; last_tmp++) {
      useRadix2 = !std::isnan(gammas[last_tmp]);
      if (useRadix2) {
        k++;
        tmp_data[idx] = static_cast<int8_T>(last_tmp + 1);
        idx++;
      }
    }

    gammas_size[0] = 1;
    gammas_size[1] = k;
    for (i = 0; i < k; i++) {
      gammas_data[i] = gammas[tmp_data[i] - 1];
    }

    *b_gamma = coder::median(gammas_data, gammas_size);

    // 'compute_doppler:130' if (isnan(gamma))
    if (std::isnan(*b_gamma)) {
      // 'compute_doppler:131' gamma = 1;
      *b_gamma = 1.0;

      // 'compute_doppler:132' speed = NaN;
      *speed = rtNaN;
    } else {
      // 'compute_doppler:133' else
      // 'compute_doppler:134' speed = c - c .* gamma;
      *speed = 1540.0 - 1540.0 * *b_gamma;
    }
  }

  //
  // function [bband, bband_fs] = ddc(pband, pband_fs, cfreq, bwidth, params)
  static void ddc(const ::coder::array<real_T, 2U> &pband, real_T pband_fs,
                  real_T cfreq, real_T bwidth, ::coder::array<creal_T, 1U>
                  &bband, real_T *bband_fs)
  {
    ::coder::array<creal_T, 2U> b_d;
    ::coder::array<creal_T, 2U> e;
    ::coder::array<creal_T, 1U> b_a;
    ::coder::array<creal_T, 1U> b_r;
    ::coder::array<real_T, 2U> t;
    ::coder::array<real_T, 1U> a;
    creal_T B_data[2048];
    creal_T b_b[256];
    creal_T phase;
    real_T b[256];
    real_T d;
    real_T d1;
    real_T dt;
    real_T f1;
    real_T off;
    real_T p1;
    real_T p2;
    real_T phase1_im;
    real_T phase1_re;
    real_T posit;
    real_T r;
    real_T ratio;
    int32_T B_size;
    int32_T N;
    int32_T b_loop_ub;
    int32_T i;
    int32_T i1;
    int32_T loop_ub;
    int32_T nx;

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
    // | Authors: Dale Green, Giovanni Zappa, Ricardo Martins                   |
    // +------------------------------------------------------------------------+
    //
    //  DDC Digital down-converter.
    //
    //  Convert and down-sample a digitized real signal to a basebanded
    //  complex signal.
    //
    //  Inputs:
    //     pband     Passband signal.
    //     bband_fs  Passband sampling frequency (Hz).
    //     cfreq     Passband center frequency (Hz).
    //     bwidth    Baseband bandwidth (Hz).
    //
    //  Outputs:
    //     bband     Complex baseband signal.
    //     bband_fs  Sampling frequency of baseband signal (Hz).
    //
    // 'ddc:41' if (nargin < 5)
    //  Compute ratio and make it a power of two. The ratio allows 40%
    //  more bandwidth than the nyquist frequency.
    // 'ddc:47' bwidth = bwidth * 1.40;
    bwidth *= 1.4;

    // 'ddc:48' ratio = floor(pband_fs / (2 * bwidth));
    // 'ddc:49' if (ratio == 0)
    // 'ddc:52' ratio = bitshift(1, fix(log2(ratio)));
    p2 = std::floor(pband_fs / (2.0 * bwidth));
    if (p2 == 0.0) {
      p2 = rtMinusInf;
    } else if (p2 < 0.0) {
      p2 = rtNaN;
    } else if ((!std::isinf(p2)) && (!std::isnan(p2))) {
      p2 = std::frexp(p2, &nx);
      if (p2 == 0.5) {
        p2 = static_cast<real_T>(nx) - 1.0;
      } else if ((nx == 1) && (p2 < 0.75)) {
        p2 = std::log(2.0 * p2) / 0.69314718055994529;
      } else {
        p2 = std::log(p2) / 0.69314718055994529 + static_cast<real_T>(nx);
      }
    }

    p2 = std::trunc(p2);
    if (p2 >= 0.0) {
      if (p2 <= 63.0) {
        ratio = static_cast<real_T>(1ULL << static_cast<uint8_T>(p2));
      } else {
        ratio = 0.0;
      }
    } else if (p2 >= -63.0) {
      ratio = static_cast<real_T>(1ULL >> static_cast<uint8_T>(-static_cast<
        int32_T>(p2)));
    } else {
      ratio = 0.0;
    }

    // 'ddc:53' bband_fs = pband_fs / ratio;
    // 'ddc:55' pband = pband(:);
    // 'ddc:56' M = length(pband);
    // 'ddc:57' N = min(M, 2048);
    N = static_cast<int32_T>(std::fmin(static_cast<real_T>(pband.size(0) *
      pband.size(1)), 2048.0));

    // 'ddc:58' off = fix(cfreq / ratio);
    off = std::trunc(cfreq / ratio);

    // 'ddc:59' f1 = cfreq - off;
    f1 = cfreq - off;

    // 'ddc:60' dt = 1 / pband_fs;
    dt = 1.0 / pband_fs;

    // 'ddc:61' t = 0 : dt : (N - 1) * dt;
    p2 = (static_cast<real_T>(N) - 1.0) * dt;
    if (std::isnan(dt) || std::isnan(p2)) {
      t.set_size(1, 1);
      t[0] = rtNaN;
    } else if ((dt == 0.0) || ((p2 > 0.0) && (dt < 0.0)) || ((p2 < 0.0) && (dt >
      0.0))) {
      t.set_size(1, 0);
    } else if (std::isinf(p2) && std::isinf(dt)) {
      t.set_size(1, 1);
      t[0] = rtNaN;
    } else if (std::isinf(dt)) {
      t.set_size(1, 1);
      t[0] = 0.0;
    } else if (std::floor(dt) == dt) {
      loop_ub = static_cast<int32_T>(p2 / dt);
      t.set_size(1, loop_ub + 1);
      for (i = 0; i <= loop_ub; i++) {
        t[i] = dt * static_cast<real_T>(i);
      }
    } else {
      coder::eml_float_colon(dt, p2, t);
    }

    // 'ddc:62' e = exp(-i * 2 * pi * f1 * t);
    phase1_re = f1 * -0.0;
    phase1_im = f1 * -6.2831853071795862;
    e.set_size(1, t.size(1));
    loop_ub = t.size(1);
    for (i = 0; i < loop_ub; i++) {
      e[i].re = t[i] * phase1_re;
      e[i].im = t[i] * phase1_im;
    }

    nx = e.size(1);
    for (int32_T k{0}; k < nx; k++) {
      if (e[k].im == 0.0) {
        e[k].re = std::exp(e[k].re);
        e[k].im = 0.0;
      } else if (std::isinf(e[k].im) && std::isinf(e[k].re) && (e[k].re < 0.0))
      {
        e[k].re = 0.0;
        e[k].im = 0.0;
      } else {
        r = std::exp(e[k].re / 2.0);
        e[k].re = r * (r * std::cos(e[k].im));
        e[k].im = r * (r * std::sin(e[k].im));
      }
    }

    // 'ddc:63' e = e(:);
    // 'ddc:64' bband = complex(zeros(fix(length(pband) / ratio), 1));
    loop_ub = static_cast<int32_T>(std::trunc(static_cast<real_T>(pband.size(0) *
      pband.size(1)) / ratio));
    bband.set_size(static_cast<int32_T>(std::trunc(static_cast<real_T>
      (pband.size(0) * pband.size(1)) / ratio)));
    for (i = 0; i < loop_ub; i++) {
      bband[i].re = 0.0;
      bband[i].im = 0.0;
    }

    // 'ddc:65' b = fir1(255, bwidth / pband_fs);
    coder::fir1(bwidth / pband_fs, b);

    // 'ddc:66' if (size(b, 1) ~= 1)
    // 'ddc:69' b = b .* exp(i * 2 * pi * off * [0 : (length(b) - 1)] * dt);
    phase1_re = off * 0.0;
    phase1_im = off * 6.2831853071795862;

    // 'ddc:70' b = b(:);
    // 'ddc:71' B = fft(b, N);
    for (int32_T k{0}; k < 256; k++) {
      p2 = dt * (static_cast<real_T>(k) * phase1_re);
      p1 = dt * (static_cast<real_T>(k) * phase1_im);
      if (p1 == 0.0) {
        p2 = std::exp(p2);
        p1 = 0.0;
      } else {
        r = std::exp(p2 / 2.0);
        p2 = r * (r * std::cos(p1));
        p1 = r * (r * std::sin(p1));
      }

      d = b[k];
      b_b[k].re = d * p2;
      b_b[k].im = d * p1;
    }

    coder::fft(b_b, static_cast<real_T>(N), B_data, &B_size);

    // 'ddc:72' posit = N / (2 * ratio);
    posit = static_cast<real_T>(N) / (2.0 * ratio);

    // 'ddc:73' count = ceil(M / (N / 2));
    // 'ddc:74' phase1 = exp(-i * 2 * pi * N / 2 * f1 * dt);
    p2 = -6.2831853071795862 * static_cast<real_T>(N);
    if (p2 == 0.0) {
      nx = 0;
      p1 = 0.0;
    } else {
      nx = 0;
      p1 = p2 / 2.0;
    }

    phase1_re = dt * (f1 * static_cast<real_T>(nx));
    phase1_im = dt * (f1 * p1);
    if (phase1_im == 0.0) {
      phase1_re = std::exp(phase1_re);
      phase1_im = 0.0;
    } else {
      r = std::exp(phase1_re / 2.0);
      phase1_re = r * (r * std::cos(phase1_im));
      phase1_im = r * (r * std::sin(phase1_im));
    }

    // 'ddc:76' for k = 1 : count
    d = static_cast<real_T>(N) / 2.0;
    i = static_cast<int32_T>(std::ceil(static_cast<real_T>(pband.size(0) *
      pband.size(1)) / d));
    if (i - 1 >= 0) {
      if (d + 1.0 > N) {
        i1 = 1;
      } else {
        i1 = static_cast<int32_T>(d + 1.0);
      }

      b_loop_ub = static_cast<int32_T>(ratio) * static_cast<int32_T>(d / ratio);
    }

    for (int32_T k{0}; k < i; k++) {
      creal_T D_data[2048];
      real_T d2;
      int32_T i2;
      int32_T i3;

      // 'ddc:76' ,
      // 'ddc:77' p1 = (k - 1) * N / 2;
      p1 = ((static_cast<real_T>(k) + 1.0) - 1.0) * static_cast<real_T>(N) / 2.0;

      // 'ddc:78' phase = exp(-i * 2 * pi * p1 * f1 * dt);
      phase.re = dt * (f1 * (p1 * -0.0));
      phase.im = dt * (f1 * (p1 * -6.2831853071795862));
      if (phase.im == 0.0) {
        d1 = phase.re;
        phase.re = std::exp(d1);
        phase.im = 0.0;
      } else {
        r = std::exp(phase.re / 2.0);
        d1 = phase.im;
        d2 = phase.im;
        phase.re = r * (r * std::cos(d1));
        phase.im = r * (r * std::sin(d2));
      }

      // 'ddc:79' p2 = p1 + N;
      // 'ddc:80' p2 = min(p2, M);
      p2 = std::fmin(p1 + static_cast<real_T>(N), static_cast<real_T>(pband.size
        (0) * pband.size(1)));

      // 'ddc:81' a = pband(p1 + 1 : p2);
      if (p1 + 1.0 > p2) {
        i2 = -1;
        i3 = -1;
      } else {
        i2 = static_cast<int32_T>(p1 + 1.0) - 2;
        i3 = static_cast<int32_T>(p2) - 1;
      }

      // 'ddc:82' a = [a; zeros(N - (p2 - p1), 1)];
      nx = static_cast<int32_T>(static_cast<real_T>(N) - (p2 - p1));
      loop_ub = i3 - i2;
      a.set_size(loop_ub + nx);
      for (int32_T i4{0}; i4 < loop_ub; i4++) {
        a[i4] = pband[(i2 + i4) + 1];
      }

      for (int32_T i4{0}; i4 < nx; i4++) {
        a[(i4 + i3) - i2] = 0.0;
      }

      // 'ddc:83' dum = a .* e * phase;
      // 'ddc:84' D = fft(dum, N);
      if (a.size(0) == e.size(1)) {
        b_a.set_size(a.size(0));
        loop_ub = a.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          p1 = a[i2] * e[i2].re;
          p2 = a[i2] * e[i2].im;
          b_a[i2].re = p1 * phase.re - p2 * phase.im;
          b_a[i2].im = p1 * phase.im + p2 * phase.re;
        }

        coder::fft(b_a, static_cast<real_T>(N), b_r);
      } else {
        binary_expand_op(b_r, a, e, phase, N);
      }

      nx = b_r.size(0);
      loop_ub = b_r.size(0);
      for (i2 = 0; i2 < loop_ub; i2++) {
        D_data[i2] = b_r[i2];
      }

      // 'ddc:85' d = ifft(D .* B);
      if (nx == B_size) {
        creal_T b_D_data[2048];
        for (i2 = 0; i2 < nx; i2++) {
          d1 = D_data[i2].re;
          d2 = B_data[i2].im;
          p2 = D_data[i2].im;
          p1 = B_data[i2].re;
          b_D_data[i2].re = d1 * p1 - p2 * d2;
          b_D_data[i2].im = d1 * d2 + p2 * p1;
        }

        coder::ifft(b_D_data, nx, D_data, &nx);
      } else {
        binary_expand_op(D_data, &nx, B_data, &B_size);
      }

      // 'ddc:86' d = reshape(d(N / 2 + 1 : N), ratio, N / 2 / ratio);
      b_d.set_size(static_cast<int32_T>(ratio), static_cast<int32_T>(d / ratio));
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        b_d[i2] = D_data[(i1 + i2) - 1];
      }

      // 'ddc:87' d = d(1,:);
      // 'ddc:88' bband((k - 1) * posit + 1 : k * posit) = d;
      d1 = ((static_cast<real_T>(k) + 1.0) - 1.0) * posit + 1.0;
      if (d1 > (static_cast<real_T>(k) + 1.0) * posit) {
        i2 = 1;
      } else {
        i2 = static_cast<int32_T>(d1);
      }

      loop_ub = b_d.size(1);
      for (i3 = 0; i3 < loop_ub; i3++) {
        bband[(i2 + i3) - 1] = b_d[b_d.size(0) * i3];
      }
    }

    // 'ddc:91' bband = bband(1 : fix(length(pband) / ratio)) * phase1;
    d = std::trunc(static_cast<real_T>(pband.size(0) * pband.size(1)) / ratio);
    if (d < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = static_cast<int32_T>(d);
    }

    for (i = 0; i < loop_ub; i++) {
      p2 = bband[i].re;
      p1 = bband[i].im;
      bband[i].re = p2 * phase1_re - p1 * phase1_im;
      bband[i].im = p2 * phase1_im + p1 * phase1_re;
    }

    bband.set_size(loop_ub);

    // 'ddc:92' dt = dt * ratio;
    dt *= ratio;

    // 'ddc:93' t = 0 : dt : (length(bband) - 1) * dt;
    p2 = (static_cast<real_T>(loop_ub) - 1.0) * dt;
    if (std::isnan(dt) || std::isnan(p2)) {
      t.set_size(1, 1);
      t[0] = rtNaN;
    } else if ((dt == 0.0) || ((p2 > 0.0) && (dt < 0.0)) || ((p2 < 0.0) && (dt >
      0.0))) {
      t.set_size(1, 0);
    } else if (std::isinf(p2) && std::isinf(dt)) {
      t.set_size(1, 1);
      t[0] = rtNaN;
    } else if (std::isinf(dt)) {
      t.set_size(1, 1);
      t[0] = 0.0;
    } else if (std::floor(dt) == dt) {
      b_loop_ub = static_cast<int32_T>(p2 / dt);
      t.set_size(1, b_loop_ub + 1);
      for (i = 0; i <= b_loop_ub; i++) {
        t[i] = dt * static_cast<real_T>(i);
      }
    } else {
      coder::eml_float_colon(dt, p2, t);
    }

    // 'ddc:94' e = exp(-i*2*pi*off*t);
    phase1_re = off * -0.0;
    phase1_im = off * -6.2831853071795862;
    e.set_size(1, t.size(1));
    b_loop_ub = t.size(1);
    for (i = 0; i < b_loop_ub; i++) {
      e[i].re = t[i] * phase1_re;
      e[i].im = t[i] * phase1_im;
    }

    nx = e.size(1);
    for (int32_T k{0}; k < nx; k++) {
      if (e[k].im == 0.0) {
        e[k].re = std::exp(e[k].re);
        e[k].im = 0.0;
      } else if (std::isinf(e[k].im) && std::isinf(e[k].re) && (e[k].re < 0.0))
      {
        e[k].re = 0.0;
        e[k].im = 0.0;
      } else {
        r = std::exp(e[k].re / 2.0);
        e[k].re = r * (r * std::cos(e[k].im));
        e[k].im = r * (r * std::sin(e[k].im));
      }
    }

    // 'ddc:95' e = e(:);
    // 'ddc:96' bband = -bband .* e;
    if (loop_ub == e.size(1)) {
      for (i = 0; i < loop_ub; i++) {
        p2 = -bband[i].re;
        p1 = -bband[i].im;
        d = e[i].im;
        d1 = e[i].re;
        bband[i].re = p2 * d1 - p1 * d;
        bband[i].im = p2 * d + p1 * d1;
      }
    } else {
      binary_expand_op(bband, e);
    }

    //  Can't explain this minus sign.
    *bband_fs = pband_fs / ratio;
  }

  //
  // function [data, dec_bits, dlv_seq, bit_prob] = demod(pset, bband, bband_fs, slots, nbits, cfactor)
  static void demod(real_T pset_cfreq, real_T pset_chip_frq, real_T
                    pset_chip_dur, const ::coder::array<creal_T, 1U> &bband,
                    real_T bband_fs, const real_T slots[144], real_T cfactor,
                    uint8_T data[8], real_T dec_bits[64], real_T dlv_seq[144],
                    real_T bit_prob[144])
  {
    static const uint8_T a[8]{ 128U, 64U, 32U, 16U, 8U, 4U, 2U, 1U };

    ::coder::array<creal_T, 2U> b_t;
    ::coder::array<creal_T, 2U> r;
    ::coder::array<creal_T, 2U> st;
    ::coder::array<creal_T, 2U> w;
    ::coder::array<real_T, 2U> b_tw;
    ::coder::array<real_T, 2U> t;
    ::coder::array<real_T, 1U> tw;
    ::coder::array<boolean_T, 2U> isp;
    creal_T tmp_data[26];
    real_T b_r[288];
    real_T stats[288];
    real_T bits[144];
    real_T b_dec_bits[72];
    real_T c_dec_bits[64];
    real_T bband_ts;
    real_T d;
    real_T factor;
    real_T fh;
    real_T slots_idx;
    real_T testp;
    int32_T count;
    int32_T i;
    int32_T loop_ub;
    int32_T nx;

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
    //  DEMOD Demodulate a JANUS signal.
    //
    //  Inputs:
    //     pset       Parameter set object.
    //     bband      Complex baseband signal.
    //     slots      Frequency hopping pattern, generated by HOP_PATTERN.
    //     nbits      Number of bits to demodulate.
    //     cfactor    fixme
    //
    //  Outputs:
    //     data       Sequence of decoded bytes.
    //     dec_bits   Sequence of decoded bits.
    //     dlv_seq    Sequence of bytes used as input for the decoder.
    //     bit_prob   Sequence of probability metrics in the range of 0 < p < 1.
    //
    // 'demod:47' defaults = defaultFun;
    // 'demod:49' if (nargin < 6)
    // 'demod:53' bband_ts = 1 / bband_fs;
    bband_ts = 1.0 / bband_fs;

    //  Correct hopping edges for range rate.
    // 'demod:56' fh = (fix(defaults.CHIP_NFRQ / 2) * defaults.ALPHABET_SIZE  + 1) * pset.chip_frq ;
    fh = 13.0 * pset_chip_frq;

    // 'demod:57' fkeep = -fh + (0 : pset.prim_q * 2 - 1) * pset.chip_frq;
    // 'demod:58' fkeep = (pset.cfreq + fkeep) * cfactor - pset.cfreq;
    //  Time correlation (no FFT), generating bank of frequencies.
    // 'demod:61' factor = (2 - cfactor) * pset.chip_dur * bband_fs;
    factor = (2.0 - cfactor) * pset_chip_dur * bband_fs;

    // 'demod:62' t = 0 : bband_ts : ceil(factor - 1) * bband_ts;
    slots_idx = std::ceil(factor - 1.0) * bband_ts;
    if (std::isnan(bband_ts) || std::isnan(slots_idx)) {
      t.set_size(1, 1);
      t[0] = rtNaN;
    } else if ((bband_ts == 0.0) || ((slots_idx > 0.0) && (bband_ts < 0.0)) ||
               ((slots_idx < 0.0) && (bband_ts > 0.0))) {
      t.set_size(1, 0);
    } else if (std::isinf(slots_idx) && std::isinf(bband_ts)) {
      t.set_size(1, 1);
      t[0] = rtNaN;
    } else if (std::isinf(bband_ts)) {
      t.set_size(1, 1);
      t[0] = 0.0;
    } else if (std::floor(bband_ts) == bband_ts) {
      loop_ub = static_cast<int32_T>(slots_idx / bband_ts);
      t.set_size(1, loop_ub + 1);
      for (i = 0; i <= loop_ub; i++) {
        t[i] = bband_ts * static_cast<real_T>(i);
      }
    } else {
      coder::eml_float_colon(bband_ts, slots_idx, t);
    }

    // 'demod:63' tw = tukeywin(length(t), 0.05);
    coder::tukeywin(static_cast<real_T>(t.size(1)), tw);

    // 'demod:64' st = tw * ones(size(fkeep)) .* exp(-i * 2 * pi * fkeep' * t) .';
    for (i = 0; i < 26; i++) {
      d = (pset_cfreq + (-fh + static_cast<real_T>(i) * pset_chip_frq)) *
        cfactor - pset_cfreq;
      tmp_data[i].re = d * -0.0;
      tmp_data[i].im = d * -6.2831853071795862;
    }

    b_t.set_size(1, t.size(1));
    loop_ub = t.size(1);
    for (i = 0; i < loop_ub; i++) {
      b_t[i].re = t[i];
      b_t[i].im = 0.0;
    }

    r.set_size(26, b_t.size(1));
    loop_ub = b_t.size(1);
    for (i = 0; i < loop_ub; i++) {
      d = b_t[i].im;
      fh = b_t[i].re;
      for (nx = 0; nx < 26; nx++) {
        slots_idx = tmp_data[nx].re;
        bband_ts = tmp_data[nx].im;
        r[nx + r.size(0) * i].re = slots_idx * fh - bband_ts * d;
        r[nx + r.size(0) * i].im = slots_idx * d + bband_ts * fh;
      }
    }

    nx = r.size(0) * r.size(1);
    for (int32_T k{0}; k < nx; k++) {
      if (r[k].im == 0.0) {
        r[k].re = std::exp(r[k].re);
        r[k].im = 0.0;
      } else if (std::isinf(r[k].im) && std::isinf(r[k].re) && (r[k].re < 0.0))
      {
        r[k].re = 0.0;
        r[k].im = 0.0;
      } else {
        bband_ts = std::exp(r[k].re / 2.0);
        d = r[k].im;
        r[k].re = bband_ts * (bband_ts * std::cos(d));
        r[k].im = bband_ts * (bband_ts * std::sin(d));
      }
    }

    if ((tw.size(0) == r.size(1)) && (r.size(0) == 26)) {
      b_tw.set_size(tw.size(0), 26);
      loop_ub = tw.size(0);
      for (i = 0; i < 26; i++) {
        for (nx = 0; nx < loop_ub; nx++) {
          b_tw[nx + b_tw.size(0) * i] = tw[nx];
        }
      }

      st.set_size(b_tw.size(0), 26);
      loop_ub = b_tw.size(0);
      for (i = 0; i < 26; i++) {
        for (nx = 0; nx < loop_ub; nx++) {
          st[nx + st.size(0) * i].re = b_tw[nx + b_tw.size(0) * i] * r[i +
            r.size(0) * nx].re;
          st[nx + st.size(0) * i].im = b_tw[nx + b_tw.size(0) * i] * r[i +
            r.size(0) * nx].im;
        }
      }
    } else {
      binary_expand_op(st, tw, r);
    }

    //  Prepare demodulation statistics (power).
    // 'demod:67' nchip = 2 * (nbits + defaults.CONV_ENC_MEM);
    // 'demod:68' stats = zeros(defaults.ALPHABET_SIZE, nchip);
    std::memset(&stats[0], 0, 288U * sizeof(real_T));

    //  Compute statistics.
    // 'demod:71' grab1 = 1;
    bband_ts = 1.0;

    // 'demod:72' count = 1;
    count = 0;

    // 'demod:73' for kk = 1 : nchip
    for (int32_T kk{0}; kk < 144; kk++) {
      real_T grab2;
      real_T lchip;
      int32_T b_slots_idx[2];

      // 'demod:73' ,
      // 'demod:74' lchip = round(kk * factor) - round((kk - 1) * factor);
      lchip = std::round((static_cast<real_T>(kk) + 1.0) * factor) - std::round
        (((static_cast<real_T>(kk) + 1.0) - 1.0) * factor);

      // 'demod:75' grab2 = grab1 + lchip - 1;
      grab2 = (bband_ts + lchip) - 1.0;

      // 'demod:76' slots_idx = slots(kk) * 2;
      slots_idx = slots[kk] * 2.0;

      // 'demod:77' w = st(1 : lchip, [slots_idx + 1 slots_idx + 2]);
      if (lchip < 1.0) {
        loop_ub = 0;
      } else {
        loop_ub = static_cast<int32_T>(lchip);
      }

      b_slots_idx[0] = static_cast<int32_T>(slots_idx + 1.0) - 1;
      b_slots_idx[1] = static_cast<int32_T>(slots_idx + 2.0) - 1;
      w.set_size(loop_ub, 2);
      for (i = 0; i < 2; i++) {
        for (nx = 0; nx < loop_ub; nx++) {
          w[nx + w.size(0) * i] = st[nx + st.size(0) * b_slots_idx[i]];
        }
      }

      // 'demod:78' stats(:, count) = (abs(bband(grab1 : grab2) .' * w) / lchip) .^ 2;
      if (bband_ts > grab2) {
        i = 0;
        nx = 0;
      } else {
        i = static_cast<int32_T>(bband_ts) - 1;
        nx = static_cast<int32_T>(grab2);
      }

      nx -= i;
      for (int32_T j{0}; j < 2; j++) {
        int32_T boffset;
        boffset = j * loop_ub;
        bband_ts = 0.0;
        fh = 0.0;
        for (int32_T k{0}; k < nx; k++) {
          int32_T b_bband_re_tmp;
          int32_T bband_re_tmp;
          bband_re_tmp = i + k;
          b_bband_re_tmp = boffset + k;
          slots_idx = bband[bband_re_tmp].re;
          testp = bband[bband_re_tmp].im;
          bband_ts += slots_idx * w[b_bband_re_tmp].re - testp *
            w[b_bband_re_tmp].im;
          fh += slots_idx * w[b_bband_re_tmp].im + testp * w[b_bband_re_tmp].re;
        }

        d = rt_hypotd_snf(bband_ts, fh) / lchip;
        stats[j + (count << 1)] = d * d;
      }

      // 'demod:80' if (verbose && ~mod(kk, 8))
      // 'demod:90' count = count + 1;
      count++;

      // 'demod:91' grab1 = grab2 + 1;
      bband_ts = grab2 + 1.0;
    }

    //  Deinterleave.
    // 'demod:95' q = interleaver_prime(nchip);
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
    nx = 0;

    // initialize for coder
    // 'interleaver_prime:50' testp = 2;
    testp = 2.0;

    // 'interleaver_prime:52' while done == 0
    while (nx == 0) {
      uint32_T b_k;
      uint32_T kmax;
      uint32_T m;
      uint32_T nleft;
      uint32_T np;

      // 'interleaver_prime:53' testp = max(primes(k));
      if (bband_ts < 4.294967296E+9) {
        m = static_cast<uint32_T>(bband_ts);
      } else {
        m = MAX_uint32_T;
      }

      np = m >> 1;
      if (m - (np << 1) > 0U) {
        np++;
      }

      isp.set_size(1, static_cast<int32_T>(np));
      loop_ub = static_cast<int32_T>(np);
      for (i = 0; i < loop_ub; i++) {
        isp[i] = true;
      }

      kmax = coder::intsqrt(m);
      b_k = 3U;
      nleft = np;
      while (b_k <= kmax) {
        if (isp[static_cast<int32_T>((b_k + 1U) >> 1) - 1]) {
          m = (b_k * b_k + 1U) >> 1;
          for (uint32_T b_j{m}; b_j <= np; b_j += b_k) {
            if (isp[static_cast<int32_T>(b_j) - 1]) {
              isp[static_cast<int32_T>(b_j) - 1] = false;
              nleft--;
            }
          }
        }

        b_k += 2U;
      }

      t.set_size(1, static_cast<int32_T>(nleft));
      m = 1U;
      t[0] = 2.0;
      for (b_k = 2U; b_k <= np; b_k++) {
        if (isp[static_cast<int32_T>(b_k) - 1] && (m < 203280221U)) {
          m++;
          t[static_cast<int32_T>(m) - 1] = (b_k << 1) - 1U;
        }
      }

      testp = coder::internal::maximum(t);

      // 'interleaver_prime:54' if ((data_len / testp < testp) && rem(data_len, testp) ~= 0)
      if ((144.0 / testp < testp) && (rt_remd_snf(144.0, testp) != 0.0)) {
        // 'interleaver_prime:55' done = 1;
        nx = 1;
      }

      // 'interleaver_prime:57' k = k + 1;
      bband_ts++;
    }

    // 'interleaver_prime:60' prime = testp;
    // 'demod:96' bit_prob = fsk2prob(stats');
    for (i = 0; i < 2; i++) {
      for (nx = 0; nx < 144; nx++) {
        b_r[nx + 144 * i] = stats[i + (nx << 1)];
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
    // | Authors: Sandipa Singh, Lee Freitag                                    |
    // +------------------------------------------------------------------------+
    //
    //  FSK2PROB Convert FSK filter back outputs into a probability metric.
    //
    //  Inputs:
    //    r       Two column matrix of FSK filter bank outputs.
    //
    //  Outputs:
    //    prob    Probability metric in the range of 0 < p < 1.
    //
    // 'fsk2prob:34' sumr = (sum(r.')).';
    // 'fsk2prob:35' a1 = r(:, 1) ./ sumr;
    // 'fsk2prob:36' b1 = r(:, 2) ./ sumr;
    //  i.e. a' + b' = 1
    // 'fsk2prob:39' prob = ((b1 - a1) + 1) / 2;
    //  so that 0 < prob < 1
    // 'demod:97' bits = floor(bit_prob * 256);
    // 'demod:98' dlv_seq = deinterleave(bits', q)';
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
    //  DEINTERLEAVE Deinterleave a sequence interleaved by INTERLEAVE.
    //
    //  Inputs:
    //    ileaved  Interleaved sequence in the form (Mary, Nchips).
    //    q        Prime number used to interleave the sequence.
    //
    //  Outputs:
    //    dleaved  Deinterleaved sequence.
    //
    // 'deinterleave:35' ileaved_len = length(ileaved);
    // 'deinterleave:36' dleaved = zeros(size(ileaved));
    for (nx = 0; nx < 144; nx++) {
      d = b_r[nx];
      fh = b_r[nx + 144];
      slots_idx = d + fh;
      slots_idx = ((fh / slots_idx - d / slots_idx) + 1.0) / 2.0;
      bit_prob[nx] = slots_idx;
      bits[nx] = std::floor(slots_idx * 256.0);
      dlv_seq[nx] = 0.0;
    }

    // 'deinterleave:37' dleaved(:, 1) = ileaved(:, 1);
    dlv_seq[0] = bits[0];

    // 'deinterleave:38' idx = 1;
    bband_ts = 1.0;

    // 'deinterleave:39' for k = 2 : ileaved_len
    for (int32_T k{0}; k < 143; k++) {
      // 'deinterleave:39' ,
      // 'deinterleave:40' idx = rem(idx + q - 1, ileaved_len) + 1;
      slots_idx = rt_remd_snf((bband_ts + testp) - 1.0, 144.0);
      bband_ts = slots_idx + 1.0;

      // 'deinterleave:41' dleaved(:, idx) = ileaved(:, k);
      dlv_seq[static_cast<int32_T>(slots_idx + 1.0) - 1] = bits[k + 1];
    }

    //  Decode.
    // 'demod:101' trellis = poly2trellis(defaults.CONV_ENC_CLEN, defaults.CONV_ENC_CGEN);
    // 'demod:102' dec_bits = vitdec(dlv_seq, trellis, min(9 * 5, length(dlv_seq) / 2), 'trunc', 'soft', 8);
    coder::vitdec(dlv_seq, b_dec_bits);

    // 'demod:103' dec_bits = dec_bits(1 : nbits);
    //  Convert back to bytes.
    // 'demod:106' data = reshape(dec_bits, 8, length(dec_bits) / 8);
    // 'demod:107' data = uint8(([128 64 32 16 8 4 2 1] * data));
    std::copy(&b_dec_bits[0], &b_dec_bits[64], &dec_bits[0]);
    std::copy(&b_dec_bits[0], &b_dec_bits[64], &c_dec_bits[0]);
    for (i = 0; i < 8; i++) {
      uint8_T u;
      d = 0.0;
      for (nx = 0; nx < 8; nx++) {
        d += static_cast<real_T>(a[nx]) * c_dec_bits[nx + (i << 3)];
      }

      d = std::round(d);
      if (d < 256.0) {
        if (d >= 0.0) {
          u = static_cast<uint8_T>(d);
        } else {
          u = 0U;
        }
      } else if (d >= 256.0) {
        u = MAX_uint8_T;
      } else {
        u = 0U;
      }

      data[i] = u;
    }
  }

  //
  // function [offs_detector] = detect_first(chip_corr, threshold, step_l, chip_oversampling, guard_time)
  static real_T detect_first(const ::coder::array<real_T, 2U> &chip_corr, real_T
    step_l, real_T guard_time)
  {
    ::coder::array<creal_T, 2U> mov_avgF;
    ::coder::array<creal_T, 2U> y;
    ::coder::array<creal_T, 1U> yCol;
    ::coder::array<real_T, 2U> b_tmp_data;
    ::coder::array<real_T, 2U> chip_corr1;
    ::coder::array<real_T, 2U> chip_corr_padded;
    ::coder::array<real_T, 2U> detector;
    ::coder::array<real_T, 2U> mov_avg;
    ::coder::array<real_T, 2U> varargin_1;
    ::coder::array<real_T, 2U> varargin_2;
    ::coder::array<int32_T, 2U> jj;
    ::coder::array<int8_T, 2U> b_detector;
    ::coder::array<int8_T, 2U> r;
    ::coder::array<boolean_T, 2U> x;
    real_T tmp_data[832];
    real_T d_istop;
    real_T flen;
    real_T hw_size;
    real_T offs_detector;
    int32_T i;
    int32_T i1;
    int32_T idx;
    int32_T k;
    int32_T nx;
    boolean_T exitg1;

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
    // | Authors: Giovanni Zappa, Luigi Elia D'Amaro                            |
    // +------------------------------------------------------------------------+
    //
    //  DETECT_FIRST detects the first transmission.
    //
    //  Inputs:
    //     chip_corr         Inchorent sum of energy of preamble chips.
    //     threshold         Detector GO-CFAR threshold.
    //     step_l            Number of quarter of chips used for the mooving average.
    //     chip_oversampling Chips oversampling factor.
    //     guard_time        Number of quarter of chips used for the guard time of CFAR.
    //
    //  Outputs:
    //     offs_detector     Start of detected signal in the oversampled domain.
    //
    //  See also DETECTOR_PARAMETERS, CHIPS_ALIGNMENT.
    // global mcp mm mv mvd mmd;
    // 'detect_first:46' hw_size = step_l + guard_time;
    hw_size = step_l + guard_time;

    // 'detect_first:47' pad_size = hw_size;
    // 'detect_first:48' chip_corr_padded = [zeros(1, pad_size) chip_corr zeros(1, pad_size)];
    chip_corr_padded.set_size(1, (static_cast<int32_T>(hw_size) + chip_corr.size
      (1)) + static_cast<int32_T>(hw_size));
    idx = static_cast<int32_T>(hw_size);
    for (i = 0; i < idx; i++) {
      chip_corr_padded[i] = 0.0;
    }

    idx = chip_corr.size(1);
    for (i = 0; i < idx; i++) {
      chip_corr_padded[i + static_cast<int32_T>(hw_size)] = chip_corr[i];
    }

    idx = static_cast<int32_T>(hw_size);
    for (i = 0; i < idx; i++) {
      chip_corr_padded[(i + static_cast<int32_T>(hw_size)) + chip_corr.size(1)] =
        0.0;
    }

    //  Cell filter.
    // 'detect_first:51' step = ones(1, step_l) / step_l;
    // 'detect_first:52' flen = step_l + length(chip_corr_padded) - 1;
    flen = (step_l + static_cast<real_T>(chip_corr_padded.size(1))) - 1.0;

    // 'detect_first:54' mov_avgF = complex(zeros(1, flen));
    // 'detect_first:55' mov_avgF(:) = fft(chip_corr_padded, flen) .* fft(step, flen);
    coder::fft(chip_corr_padded, flen, mov_avgF);
    nx = static_cast<int32_T>(step_l);
    for (i = 0; i < nx; i++) {
      tmp_data[i] = 1.0 / step_l;
    }

    b_tmp_data.set(&tmp_data[0], 1, nx);
    coder::fft(b_tmp_data, flen, y);
    mov_avgF.set_size(1, mov_avgF.size(1));
    idx = mov_avgF.size(1) - 1;
    for (i = 0; i <= idx; i++) {
      flen = mov_avgF[i].re;
      d_istop = mov_avgF[i].im;
      mov_avgF[i].re = flen * y[i].re - d_istop * y[i].im;
      mov_avgF[i].im = flen * y[i].im + d_istop * y[i].re;
    }

    //  abs remove eventual negative values due to the an overshot.
    // 'detect_first:58' mov_avg = abs(real(ifft(mov_avgF)));
    if (mov_avgF.size(1) == 0) {
      y.set_size(1, 0);
    } else {
      boolean_T useRadix2;
      useRadix2 = ((mov_avgF.size(1) & (mov_avgF.size(1) - 1)) == 0);
      coder::internal::FFTImplementationCallback::get_algo_sizes(mov_avgF.size(1),
        useRadix2, &idx, &nx);
      coder::internal::FFTImplementationCallback::b_generate_twiddle_tables(nx,
        useRadix2, detector, chip_corr1, mov_avg);
      if (useRadix2) {
        ::coder::array<creal_T, 1U> b_mov_avgF;
        nx = mov_avgF.size(1);
        b_mov_avgF = mov_avgF.reshape(nx);
        coder::internal::FFTImplementationCallback::r2br_r2dit_trig_impl
          (b_mov_avgF, mov_avgF.size(1), detector, chip_corr1, yCol);
        if (yCol.size(0) > 1) {
          flen = 1.0 / static_cast<real_T>(yCol.size(0));
          idx = yCol.size(0);
          for (i = 0; i < idx; i++) {
            yCol[i].re = flen * yCol[i].re;
            yCol[i].im = flen * yCol[i].im;
          }
        }
      } else {
        ::coder::array<creal_T, 1U> b_mov_avgF;
        nx = mov_avgF.size(1);
        b_mov_avgF = mov_avgF.reshape(nx);
        coder::internal::FFTImplementationCallback::b_dobluesteinfft(b_mov_avgF,
          idx, mov_avgF.size(1), detector, chip_corr1, mov_avg, yCol);
      }

      y.set_size(1, mov_avgF.size(1));
      idx = mov_avgF.size(1);
      for (i = 0; i < idx; i++) {
        y[i] = yCol[i];
      }
    }

    detector.set_size(1, y.size(1));
    idx = y.size(1);
    for (i = 0; i < idx; i++) {
      detector[i] = y[i].re;
    }

    nx = detector.size(1);
    mov_avg.set_size(1, detector.size(1));
    for (k = 0; k < nx; k++) {
      mov_avg[k] = std::abs(detector[k]);
    }

    // 'detect_first:60' d_istart = hw_size +  1;
    // 'detect_first:61' d_istop = length(chip_corr) + pad_size;
    d_istop = static_cast<real_T>(chip_corr.size(1)) + hw_size;

    // 'detect_first:63' r_window_correction = 0.145 * min((32 + 144) / round(step_l / chip_oversampling), 1);
    flen = 0.145 * std::fmin(176.0 / std::round(step_l / 4.0), 1.0);

    // 'detect_first:65' detector = chip_corr_padded(d_istart : d_istop) > threshold * max(...  % GO-CFAR
    // 'detect_first:66'            mov_avg((d_istart : d_istop) - guard_time), ...  % cell before
    // 'detect_first:67'            mov_avg((d_istart : d_istop) + hw_size) - ... % following cell
    // 'detect_first:68'            chip_corr_padded(d_istart : d_istop) * r_window_correction);
    if (hw_size + 1.0 > d_istop) {
      i = 0;
      i1 = 0;
      nx = 0;
      k = 0;
    } else {
      i = static_cast<int32_T>(hw_size + 1.0) - 1;
      i1 = static_cast<int32_T>(d_istop);
      nx = static_cast<int32_T>(hw_size + 1.0) - 1;
      k = static_cast<int32_T>(d_istop);
    }

    if (d_istop < hw_size + 1.0) {
      detector.set_size(1, 0);
    } else if (std::isinf(hw_size + 1.0) && (hw_size + 1.0 == d_istop)) {
      detector.set_size(1, 1);
      detector[0] = rtNaN;
    } else {
      idx = static_cast<int32_T>(d_istop - (hw_size + 1.0));
      detector.set_size(1, idx + 1);
      for (int32_T i2{0}; i2 <= idx; i2++) {
        detector[i2] = (hw_size + 1.0) + static_cast<real_T>(i2);
      }
    }

    chip_corr1.set_size(1, detector.size(1));
    idx = detector.size(1);
    for (int32_T i2{0}; i2 < idx; i2++) {
      chip_corr1[i2] = mov_avg[static_cast<int32_T>(detector[i2] + hw_size) - 1];
    }

    if (d_istop < hw_size + 1.0) {
      detector.set_size(1, 0);
    } else if (std::isinf(hw_size + 1.0) && (hw_size + 1.0 == d_istop)) {
      detector.set_size(1, 1);
      detector[0] = rtNaN;
    } else {
      detector.set_size(1, static_cast<int32_T>(d_istop - (hw_size + 1.0)) + 1);
      idx = static_cast<int32_T>(d_istop - (hw_size + 1.0));
      for (int32_T i2{0}; i2 <= idx; i2++) {
        detector[i2] = (hw_size + 1.0) + static_cast<real_T>(i2);
      }
    }

    varargin_1.set_size(1, detector.size(1));
    idx = detector.size(1);
    for (int32_T i2{0}; i2 < idx; i2++) {
      varargin_1[i2] = mov_avg[static_cast<int32_T>(detector[i2] - guard_time) -
        1];
    }

    if (chip_corr1.size(1) == k - nx) {
      varargin_2.set_size(1, chip_corr1.size(1));
      idx = chip_corr1.size(1);
      for (k = 0; k < idx; k++) {
        varargin_2[k] = chip_corr1[k] - chip_corr_padded[nx + k] * flen;
      }
    } else {
      binary_expand_op(varargin_2, chip_corr1, chip_corr_padded, nx, k - 1, flen);
    }

    if (detector.size(1) == varargin_2.size(1)) {
      mov_avg.set_size(1, varargin_1.size(1));
      idx = varargin_1.size(1);
      for (nx = 0; nx < idx; nx++) {
        flen = varargin_1[nx];
        d_istop = varargin_2[nx];
        mov_avg[nx] = std::fmax(flen, d_istop);
      }
    } else {
      coder::internal::expand_max(varargin_1, varargin_2, mov_avg);
    }

    //   % GO-CFAR
    //   % cell before
    //  % following cell
    //  autocorr correction
    // 'detect_first:70' detector = [zeros(1, d_istart - 1) detector];
    idx = i1 - i;
    if (idx == mov_avg.size(1)) {
      detector.set_size(1, (static_cast<int32_T>((hw_size + 1.0) - 1.0) + i1) -
                        i);
      nx = static_cast<int32_T>((hw_size + 1.0) - 1.0);
      for (i1 = 0; i1 < nx; i1++) {
        detector[i1] = 0.0;
      }

      for (i1 = 0; i1 < idx; i1++) {
        detector[i1 + static_cast<int32_T>((hw_size + 1.0) - 1.0)] =
          (chip_corr_padded[i + i1] > 2.5 * mov_avg[i1]);
      }
    } else {
      binary_expand_op(detector, hw_size, chip_corr_padded, i, i1 - 1, mov_avg);
    }

    // 'detect_first:72' chip_corr1 = chip_corr_padded;
    chip_corr1.set_size(1, chip_corr_padded.size(1));
    idx = chip_corr_padded.size(1);
    for (i = 0; i < idx; i++) {
      chip_corr1[i] = chip_corr_padded[i];
    }

    // 'detect_first:73' chip_corr1(detector == 0) = 0;
    nx = detector.size(1);
    for (idx = 0; idx < nx; idx++) {
      if (static_cast<int8_T>(detector[idx]) == 0) {
        chip_corr1[idx] = 0.0;
      }
    }

    //  only where detector is true
    // 'detect_first:75' detector = [detector(1 : end - 1), 0] - [0, detector(1 : end - 1)];
    if (detector.size(1) - 1 < 1) {
      idx = 1;
    } else {
      idx = detector.size(1);
    }

    if (detector.size(1) - 1 < 1) {
      nx = 1;
    } else {
      nx = detector.size(1);
    }

    if (idx == nx) {
      b_detector.set_size(1, idx);
      for (i = 0; i <= idx - 2; i++) {
        b_detector[i] = static_cast<int8_T>(detector[i]);
      }

      b_detector[idx - 1] = 0;
      r.set_size(1, nx);
      r[0] = 0;
      for (i = 0; i <= nx - 2; i++) {
        r[i + 1] = static_cast<int8_T>(detector[i]);
      }

      detector.set_size(1, b_detector.size(1));
      idx = b_detector.size(1);
      for (i = 0; i < idx; i++) {
        detector[i] = static_cast<int8_T>(b_detector[i] - r[i]);
      }
    } else {
      binary_expand_op(detector, idx - 2, nx - 2);
    }

    //  numeric derivative
    // 'detect_first:76' [detect_int_start_v, detect_int_start_h] = find(detector == 1);
    x.set_size(1, detector.size(1));
    idx = detector.size(1);
    for (i = 0; i < idx; i++) {
      x[i] = (detector[i] == 1.0);
    }

    if (x.size(1) == 0) {
      b_detector.set_size(b_detector.size(0), 0);
      jj.set_size(1, 0);
    } else {
      idx = 0;
      b_detector.set_size(1, x.size(1));
      jj.set_size(1, x.size(1));
      nx = 1;
      exitg1 = false;
      while ((!exitg1) && (nx <= x.size(1))) {
        if (x[nx - 1]) {
          idx++;
          b_detector[idx - 1] = 1;
          jj[idx - 1] = nx;
          if (idx >= x.size(1)) {
            exitg1 = true;
          } else {
            nx++;
          }
        } else {
          nx++;
        }
      }

      if (x.size(1) == 1) {
        if (idx == 0) {
          b_detector.set_size(b_detector.size(0), 0);
          jj.set_size(1, 0);
        }
      } else {
        if (idx < 1) {
          i = 0;
        } else {
          i = idx;
        }

        b_detector.set_size(b_detector.size(0), i);
        if (idx < 1) {
          idx = 0;
        }

        jj.set_size(jj.size(0), idx);
      }
    }

    detector.set_size(1, jj.size(1));
    idx = jj.size(1);
    for (i = 0; i < idx; i++) {
      detector[i] = jj[i];
    }

    //  detection intervals begin
    //  Look for the maximum in twice the preamble length from the first detection.
    // 'detect_first:79' offs_detector = -1;
    offs_detector = -1.0;

    // default if no detections
    // 'detect_first:80' if (~ isempty(detect_int_start_v))
    if (b_detector.size(1) != 0) {
      // 'detect_first:81' [ vm, imc ] = max(chip_corr1(detect_int_start_h(1) : detect_int_start_h(1) + 2 * 32 * chip_oversampling));
      i = static_cast<int32_T>(detector[0]);
      if (!std::isnan(chip_corr1[i - 1])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k < 258)) {
          if (!std::isnan(chip_corr1[(k + i) - 2])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        idx = 1;
      } else {
        flen = chip_corr1[(idx + i) - 2];
        i1 = idx + 1;
        for (k = i1; k < 258; k++) {
          d_istop = chip_corr1[(k + i) - 2];
          if (flen < d_istop) {
            flen = d_istop;
            idx = k;
          }
        }
      }

      // [ rb, imp ] = min(imc + detect_int_start_h(1) - 1 - ...
      //                   detect_int_start_h(detect_int_start_h - detect_int_start_h(1) < imc ));
      // 'detect_first:84' offs_detector = detect_int_start_h(1) + (imc - 1);
      offs_detector = detector[0] + (static_cast<real_T>(idx) - 1.0);

      // 'detect_first:86' offs_detector_r = offs_detector + findstep(chip_corr_padded(offs_detector - chip_oversampling : offs_detector));
      if (offs_detector - 4.0 > offs_detector) {
        i = 0;
        i1 = 0;
      } else {
        i = static_cast<int32_T>(offs_detector - 4.0) - 1;
        i1 = static_cast<int32_T>(offs_detector);
      }

      idx = i1 - i;
      detector.set_size(1, idx);
      for (i1 = 0; i1 < idx; i1++) {
        detector[i1] = chip_corr_padded[i + i1];
      }

      //  FINDSTEP find the offset of step function in the data
      //
      //  Inputs:
      //     x              Sequence hiding a step function.
      //
      //  Outputs:
      //     r              Delay of the step function compared to a centred in the middle.
      // 'detect_first:124' mx = max(x);
      // 'detect_first:126' r = 1 - sum(x) / mx;
      // 'detect_first:88' if (verbose)
      // 'detect_first:111' offs_detector = offs_detector_r - pad_size;
      offs_detector = (offs_detector + (1.0 - coder::sum(detector) / coder::
        internal::maximum(detector))) - hw_size;
    }

    return offs_detector;
  }

  static int32_T div_nde_s32_floor(int32_T numerator)
  {
    int32_T i;
    if ((numerator < 0) && (numerator % 72 != 0)) {
      i = -1;
    } else {
      i = 0;
    }

    return numerator / 72 + i;
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

  static real_T rt_hypotd_snf(real_T u0, real_T u1)
  {
    real_T a;
    real_T b;
    real_T y;
    a = std::abs(u0);
    b = std::abs(u1);
    if (a < b) {
      a /= b;
      y = b * std::sqrt(a * a + 1.0);
    } else if (a > b) {
      b /= a;
      y = a * std::sqrt(b * b + 1.0);
    } else if (std::isnan(b)) {
      y = rtNaN;
    } else {
      y = a * 1.4142135623730951;
    }

    return y;
  }

  static real_T rt_powd_snf(real_T u0, real_T u1)
  {
    real_T y;
    if (std::isnan(u0) || std::isnan(u1)) {
      y = rtNaN;
    } else {
      real_T d;
      real_T d1;
      d = std::abs(u0);
      d1 = std::abs(u1);
      if (std::isinf(u1)) {
        if (d == 1.0) {
          y = 1.0;
        } else if (d > 1.0) {
          if (u1 > 0.0) {
            y = rtInf;
          } else {
            y = 0.0;
          }
        } else if (u1 > 0.0) {
          y = 0.0;
        } else {
          y = rtInf;
        }
      } else if (d1 == 0.0) {
        y = 1.0;
      } else if (d1 == 1.0) {
        if (u1 > 0.0) {
          y = u0;
        } else {
          y = 1.0 / u0;
        }
      } else if (u1 == 2.0) {
        y = u0 * u0;
      } else if ((u1 == 0.5) && (u0 >= 0.0)) {
        y = std::sqrt(u0);
      } else if ((u0 < 0.0) && (u1 > std::floor(u1))) {
        y = rtNaN;
      } else {
        y = std::pow(u0, u1);
      }
    }

    return y;
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
  // function [pkt, pkt_bytes, state] = rx(pset, bband, bband_fs, params)
  static void rx(SWiG_rx_class *aInstancePtr, const char_T pset_name[27], real_T
                 pset_cfreq, real_T pset_chip_frq, real_T pset_chip_dur, real_T
                 pset_bwidth, const ::coder::array<creal_T, 1U> &bband, real_T
                 bband_fs, real_T params_verbose, const real_T
                 params_c32_sequence[32], real_T params_pset_chip_len_mul,
                 real_T params_doppler_correction, real_T
                 params_doppler_max_speed, struct1_T *pkt, uint8_T pkt_bytes[8],
                 struct2_T *state)
  {
    static const real_T dv[176]{ 0.00641025641025641, 0.01282051282051282,
      0.019230769230769232, 0.02564102564102564, 0.032051282051282048,
      0.038461538461538464, 0.044871794871794872, 0.05128205128205128,
      0.057692307692307696, 0.0641025641025641, 0.070512820512820512,
      0.076923076923076927, 0.083333333333333329, 0.089743589743589744,
      0.096153846153846159, 0.10256410256410256, 0.10897435897435898,
      0.11538461538461539, 0.12179487179487179, 0.12820512820512819,
      0.13461538461538461, 0.14102564102564102, 0.14743589743589744,
      0.15384615384615385, 0.16025641025641027, 0.16666666666666666,
      0.17307692307692307, 0.17948717948717949, 0.1858974358974359,
      0.19230769230769232, 0.19871794871794871, 0.20512820512820512,
      0.21153846153846154, 0.21794871794871795, 0.22435897435897437,
      0.23076923076923078, 0.23717948717948717, 0.24358974358974358, 0.25,
      0.25641025641025639, 0.26282051282051283, 0.26923076923076922,
      0.27564102564102566, 0.28205128205128205, 0.28846153846153844,
      0.29487179487179488, 0.30128205128205127, 0.30769230769230771,
      0.3141025641025641, 0.32051282051282054, 0.32692307692307693,
      0.33333333333333331, 0.33974358974358976, 0.34615384615384615,
      0.35256410256410259, 0.358974358974359, 0.36538461538461536,
      0.37179487179487181, 0.37820512820512819, 0.38461538461538464,
      0.391025641025641, 0.39743589743589741, 0.40384615384615385,
      0.41025641025641024, 0.41666666666666669, 0.42307692307692307,
      0.42948717948717946, 0.4358974358974359, 0.44230769230769229,
      0.44871794871794873, 0.45512820512820512, 0.46153846153846156,
      0.46794871794871795, 0.47435897435897434, 0.48076923076923078,
      0.48717948717948717, 0.49358974358974361, 0.5, 0.50641025641025639,
      0.51282051282051277, 0.51923076923076927, 0.52564102564102566,
      0.532051282051282, 0.53846153846153844, 0.54487179487179482,
      0.55128205128205132, 0.55769230769230771, 0.5641025641025641,
      0.57051282051282048, 0.57692307692307687, 0.58333333333333337,
      0.58974358974358976, 0.59615384615384615, 0.60256410256410253,
      0.60897435897435892, 0.61538461538461542, 0.62179487179487181,
      0.62820512820512819, 0.63461538461538458, 0.64102564102564108,
      0.64743589743589747, 0.65384615384615385, 0.66025641025641024,
      0.66666666666666663, 0.67307692307692313, 0.67948717948717952,
      0.6858974358974359, 0.69230769230769229, 0.69871794871794868,
      0.70512820512820518, 0.71153846153846156, 0.717948717948718,
      0.72435897435897434, 0.73076923076923073, 0.73717948717948723,
      0.74358974358974361, 0.75, 0.75641025641025639, 0.76282051282051277,
      0.76923076923076927, 0.77564102564102566, 0.782051282051282,
      0.78846153846153844, 0.79487179487179482, 0.80128205128205132,
      0.80769230769230771, 0.8141025641025641, 0.82051282051282048,
      0.82692307692307687, 0.83333333333333337, 0.83974358974358976,
      0.84615384615384615, 0.85256410256410253, 0.85897435897435892,
      0.86538461538461542, 0.87179487179487181, 0.87820512820512819,
      0.88461538461538458, 0.89102564102564108, 0.89743589743589747,
      0.90384615384615385, 0.91025641025641024, 0.91666666666666663,
      0.92307692307692313, 0.92948717948717952, 0.9358974358974359,
      0.94230769230769229, 0.94871794871794868, 0.95512820512820518,
      0.96153846153846156, 0.967948717948718, 0.97435897435897434,
      0.98076923076923073, 0.98717948717948723, 0.99358974358974361, 1.0,
      1.0064102564102564, 1.0128205128205128, 1.0192307692307692,
      1.0256410256410255, 1.0320512820512822, 1.0384615384615385,
      1.0448717948717949, 1.0512820512820513, 1.0576923076923077,
      1.0641025641025641, 1.0705128205128205, 1.0769230769230769,
      1.0833333333333333, 1.0897435897435896, 1.0961538461538463,
      1.1025641025641026, 1.108974358974359, 1.1153846153846154,
      1.1217948717948718, 1.1282051282051282 };

    static const real_T dv1[176]{ 0.0, 0.083333333333333329, 0.16666666666666666,
      0.25, 0.33333333333333331, 0.41666666666666669, 0.5, 0.58333333333333337,
      0.66666666666666663, 0.75, 0.83333333333333337, 0.91666666666666663, 1.0,
      1.0833333333333333, 1.1666666666666667, 1.25, 1.3333333333333333,
      1.4166666666666667, 1.5, 1.5833333333333333, 1.6666666666666667, 1.75,
      1.8333333333333333, 1.9166666666666667, 2.0, 2.0833333333333335,
      2.1666666666666665, 2.25, 2.3333333333333335, 2.4166666666666665, 2.5,
      2.5833333333333335, 2.6666666666666665, 2.75, 2.8333333333333335,
      2.9166666666666665, 3.0, 3.0833333333333335, 3.1666666666666665, 3.25,
      3.3333333333333335, 3.4166666666666665, 3.5, 3.5833333333333335,
      3.6666666666666665, 3.75, 3.8333333333333335, 3.9166666666666665, 4.0,
      4.083333333333333, 4.166666666666667, 4.25, 4.333333333333333,
      4.416666666666667, 4.5, 4.583333333333333, 4.666666666666667, 4.75,
      4.833333333333333, 4.916666666666667, 5.0, 5.083333333333333,
      5.166666666666667, 5.25, 5.333333333333333, 5.416666666666667, 5.5,
      5.583333333333333, 5.666666666666667, 5.75, 5.833333333333333,
      5.916666666666667, 6.0, 6.083333333333333, 6.166666666666667, 6.25,
      6.333333333333333, 6.416666666666667, 6.5, 6.583333333333333,
      6.666666666666667, 6.75, 6.833333333333333, 6.916666666666667, 7.0,
      7.083333333333333, 7.166666666666667, 7.25, 7.333333333333333,
      7.416666666666667, 7.5, 7.583333333333333, 7.666666666666667, 7.75,
      7.833333333333333, 7.916666666666667, 8.0, 8.0833333333333339,
      8.1666666666666661, 8.25, 8.3333333333333339, 8.4166666666666661, 8.5,
      8.5833333333333339, 8.6666666666666661, 8.75, 8.8333333333333339,
      8.9166666666666661, 9.0, 9.0833333333333339, 9.1666666666666661, 9.25,
      9.3333333333333339, 9.4166666666666661, 9.5, 9.5833333333333339,
      9.6666666666666661, 9.75, 9.8333333333333339, 9.9166666666666661, 10.0,
      10.083333333333334, 10.166666666666666, 10.25, 10.333333333333334,
      10.416666666666666, 10.5, 10.583333333333334, 10.666666666666666, 10.75,
      10.833333333333334, 10.916666666666666, 11.0, 11.083333333333334,
      11.166666666666666, 11.25, 11.333333333333334, 11.416666666666666, 11.5,
      11.583333333333334, 11.666666666666666, 11.75, 11.833333333333334,
      11.916666666666666, 12.0, 12.083333333333334, 12.166666666666666, 12.25,
      12.333333333333334, 12.416666666666666, 12.5, 12.583333333333334,
      12.666666666666666, 12.75, 12.833333333333334, 12.916666666666666, 13.0,
      13.083333333333334, 13.166666666666666, 13.25, 13.333333333333334,
      13.416666666666666, 13.5, 13.583333333333334, 13.666666666666666, 13.75,
      13.833333333333334, 13.916666666666666, 14.0, 14.083333333333334,
      14.166666666666666, 14.25, 14.333333333333334, 14.416666666666666, 14.5,
      14.583333333333334 };

    static const real_T dv4[128]{ 0.0033211, 0.00365321, 0.00401853, 0.00442038,
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

    static const real_T dv5[128]{ 0.033211, 0.0390817, 0.04599017, 0.05411984,
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

    ::coder::array<creal_T, 2U> b_bband;
    ::coder::array<creal_T, 2U> b_xin;
    ::coder::array<creal_T, 2U> c_xin;
    ::coder::array<creal_T, 2U> s;
    ::coder::array<creal_T, 2U> xin;
    ::coder::array<creal_T, 1U> kernel;
    ::coder::array<real_T, 3U> c_r;
    ::coder::array<real_T, 2U> b_r;
    ::coder::array<real_T, 2U> c_freq_vec_data;
    ::coder::array<real_T, 2U> colindex;
    ::coder::array<real_T, 2U> rr;
    ::coder::array<real_T, 2U> y;
    ::coder::array<real_T, 1U> rowindex;
    ::coder::array<real_T, 1U> win;
    real_T b_tmp_data[528];
    real_T b_x[528];
    real_T mghat[528];
    real_T mu[528];
    real_T slots[176];
    real_T dv3[144];
    real_T pkt_bit_prob[144];
    real_T table[128];
    real_T dv2[64];
    real_T freq_sec[32];
    real_T freq_vec_data[32];
    real_T fscaled_data[32];
    real_T k_data[32];
    real_T ofslots_data[26];
    real_T chip_nsample;
    real_T chip_nsample_tmp;
    real_T gf_size;
    real_T max_speed;
    real_T offs;
    real_T temp;
    real_T varargout_1;
    uint64_T bin;
    int32_T tmp_data[528];
    int32_T xx_data[32];
    int32_T b_freq_vec_size[2];
    int32_T freq_vec_size[2];
    int32_T b_i;
    int32_T i;
    int32_T loop_ub;
    int32_T nx;
    int32_T tmp_size;
    char_T c_tmp_data[17];
    int8_T x[176];
    uint8_T c_x[8];
    uint8_T xtmp;

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
    // | Authors: Ricardo Martins, Giovanni Zappa, Luigi Elia D'Amaro           |
    // +------------------------------------------------------------------------+
    //
    //  RX Interface to decode a JANUS waveform.
    //
    //  Inputs:
    //     pset       Parameter set structure.
    //     bband      Complex baseband waveform.
    //     bband_fs   Baseband sampling frequency (Hz).
    //     params     Optional parameters.
    //
    //  Outputs:
    //     pkt        Decoded packet structure.
    //     pkt_bytes  Unprocessed packet bytes.
    //     state      Structure with info from the decoder.
    //
    //  Remarks:
    //     Set global variable verbose different from 0 to plot various
    //     debugging informations.
    //      rx_path = fileparts(mfilename('fullpath'));
    //      addpath([rx_path '/plugins']);
    // 'rx:51' defaults = defaultFun;
    // 'rx:53' if (nargin < 3)
    // 'rx:57' verbose = params.verbose;
    aInstancePtr->verbose = params_verbose;

    //     %% Initialize output variables to sane values.
    // 'rx:60' pkt = {};
    // 'rx:61' pkt_bytes = [];
    //      state = {};
    // 'rx:63' state.pset_id = pset.id;
    state->pset_id = 1.0;

    // 'rx:64' state.pset_name = pset.name;
    for (i = 0; i < 27; i++) {
      state->pset_name[i] = pset_name[i];
    }

    // 'rx:65' state.cfreq = pset.cfreq;
    state->cfreq = pset_cfreq;

    // 'rx:66' state.bwidth = pset.bwidth;
    state->bwidth = pset_bwidth;

    // 'rx:67' state.chip_frq = pset.chip_frq;
    state->chip_frq = pset_chip_frq;

    // 'rx:68' state.chip_dur = pset.chip_dur;
    state->chip_dur = pset_chip_dur;

    // 'rx:69' state.prim_q = pset.prim_q;
    state->prim_q = 13.0;

    // 'rx:70' state.prim_a = pset.prim_a;
    state->prim_a = 2.0;

    // 'rx:71' state.nblock = pset.nblock;
    state->nblock = 12.0;

    // 'rx:72' state.pkt_idx = 0;
    // 'rx:73' state.crg_idx = 0;
    state->crg_idx = 0.0;

    // 'rx:74' coder.varsize("null");
    // 'rx:75' null=[];
    state->crg_raw_bits.size[0] = 0;
    state->crg_raw_bits.size[1] = 0;

    // 'rx:76' state.pkt_raw_bits = null;
    // 'rx:77' state.pkt_dec_bits = null;
    // 'rx:78' state.crg_raw_bits = null;
    // 'rx:79' state.crg_dec_bits = null;
    state->crg_dec_bits.size[0] = 0;
    state->crg_dec_bits.size[1] = 0;

    // placeholders for coder
    // 'rx:81' state.gamma = 0;
    // 'rx:82' state. speed = 0;
    // 'rx:83' state.process_up_to = 0;
    // 'rx:84' state.bit_prob = null;
    //  Number of samples in a chip.
    // 'rx:87' chip_nsample = round(pset.chip_dur * bband_fs);
    chip_nsample_tmp = pset_chip_dur * bband_fs;
    chip_nsample = std::round(chip_nsample_tmp);

    //     %% Search 32 chips.
    // 'rx:90' pkt_nchip = defaults.ALPHABET_SIZE * (defaults.PKT_MIN_NBIT + defaults.CONV_ENC_MEM);
    // 'rx:91' slots = hop_pattern(pset.prim_a, pset.prim_q, 32 + pkt_nchip);
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
    std::memset(&mu[0], 0, 528U * sizeof(real_T));

    // 'hop_pattern:47' mu(:, k - 1) = ceil((1 : m) / ((block_len - 1) * block_len));
    // 'hop_pattern:48' mu(:, k) = floor((0 : m - 1)' ./ (block_len - 1));
    // 'hop_pattern:49' mghat = mod_pow(alpha, ((0 : k - 1)' * (rem(0 : m - 1, block_len - 1) + 1))', block_len);
    for (int32_T k{0}; k < 176; k++) {
      mu[k + 176] = std::ceil(dv[k]);
      mu[k + 352] = std::floor(dv1[k]);
      x[k] = static_cast<int8_T>(static_cast<int32_T>(rt_remd_snf
        ((static_cast<real_T>(k) + 1.0) - 1.0, 12.0)) + 1);
    }

    for (i = 0; i < 3; i++) {
      for (tmp_size = 0; tmp_size < 176; tmp_size++) {
        b_x[tmp_size + 176 * i] = i * x[tmp_size];
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
      mghat[i] = 1.0;
    }

    // 'mod_pow:40' temp = b;
    temp = 2.0;

    // 'mod_pow:41' while max(e(:)) > 0
    while (coder::internal::maximum(b_x) > 0.0) {
      boolean_T r[528];

      // 'mod_pow:42' [in] = find(mod(e(:), 2) == 1);
      // 'mod_pow:43' p(in) = mod(p(in) * temp, n);
      for (int32_T k{0}; k < 528; k++) {
        r[k] = (coder::internal::scalar::c_mod(b_x[k]) == 1.0);
      }

      coder::eml_find(r, tmp_data, &tmp_size);
      for (i = 0; i < tmp_size; i++) {
        offs = mghat[tmp_data[i] - 1] * temp;
        if (std::isnan(offs) || std::isinf(offs)) {
          varargout_1 = rtNaN;
        } else if (offs == 0.0) {
          varargout_1 = 0.0;
        } else {
          varargout_1 = std::fmod(offs, 13.0);
          if (varargout_1 == 0.0) {
            varargout_1 = 0.0;
          } else if (offs < 0.0) {
            varargout_1 += 13.0;
          }
        }

        b_tmp_data[i] = varargout_1;
      }

      for (i = 0; i < tmp_size; i++) {
        mghat[tmp_data[i] - 1] = b_tmp_data[i];
      }

      // 'mod_pow:44' temp = mod(temp .^ 2, n);
      temp = coder::b_mod(temp * temp);

      // 'mod_pow:45' e = floor(e / 2);
      for (int32_T k{0}; k < 528; k++) {
        b_x[k] = std::floor(b_x[k] / 2.0);
      }
    }

    // 'hop_pattern:50' slots = rem(mu .* mghat * ones(1, k)', block_len);
    for (i = 0; i < 528; i++) {
      mu[i] *= mghat[i];
    }

    for (int32_T k{0}; k < 176; k++) {
      slots[k] = rt_remd_snf((mu[k] + mu[k + 176]) + mu[k + 352], 13.0);
    }

    //  Chip oversampling.
    // 'rx:94' chip_oversampling = 4;
    //  Max Doppler speed.
    // 'rx:97' if (~params.doppler_correction)
    if (!(params_doppler_correction != 0.0)) {
      // 'rx:98' max_speed = 0;
      max_speed = 0.0;
    } else {
      // 'rx:99' else
      // 'rx:100' max_speed = params.doppler_max_speed;
      max_speed = params_doppler_max_speed;
    }

    // 'rx:103' [ freq_vec, chip_order ] = detector_parameters(params, pset, slots(1 : 32));
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
    // | Authors: Giovanni Zappa, Luigi Elia D'Amaro                            |
    // +------------------------------------------------------------------------+
    //
    //  DETECTOR_PARAMETERS Computes parameters of preamble for detector.
    //
    //  Inputs:
    //     params      Parameters structure.
    //     pset        Parameters set structure.
    //     f32slots    First 32 hopping sequence values.
    //
    //  Outputs:
    //     freq_vec    Vector of used baseband frequencies in the preamble.
    //     chip_order  Indexes order of preamble's frequencies.
    //
    //  See also PSET_NEW, PARAMETERS.
    // 'detector_parameters:42' ofslots = (-pset.nblock - 1 : pset.nblock) * pset.chip_frq;
    for (i = 0; i < 26; i++) {
      ofslots_data[i] = (static_cast<real_T>(i) - 13.0) * pset_chip_frq;
    }

    // 'detector_parameters:43' freq_sec = ofslots(f32slots(:) * 2 + 1 + params.c32_sequence(:));
    // 'detector_parameters:45' freq_vec = unique(sort(freq_sec));
    for (b_i = 0; b_i < 32; b_i++) {
      varargout_1 = slots[b_i];
      k_data[b_i] = varargout_1 * 2.0;
      varargout_1 = (static_cast<real_T>(static_cast<int32_T>((varargout_1 * 2.0
        + 1.0) + params_c32_sequence[b_i]) - 1) - 13.0) * pset_chip_frq;
      freq_sec[b_i] = varargout_1;
      fscaled_data[b_i] = varargout_1;
    }

    coder::internal::sort(fscaled_data);
    coder::unique_vector(fscaled_data, freq_vec_data, freq_vec_size);

    //      chip_order = arrayfun(@(f) find(freq_vec == f,1,'first'), freq_sec);
    // 'detector_parameters:47' chip_order = freq_sec;
    // 'detector_parameters:48' for i=1:length(freq_sec)
    loop_ub = freq_vec_size[1];
    b_freq_vec_size[0] = 1;
    b_freq_vec_size[1] = freq_vec_size[1];
    for (b_i = 0; b_i < 32; b_i++) {
      int32_T xx_size[2];
      boolean_T b_freq_vec_data[32];

      // 'detector_parameters:49' xx=find(freq_vec == freq_sec(i));
      temp = ofslots_data[static_cast<int32_T>((k_data[b_i] + 1.0) +
        params_c32_sequence[b_i]) - 1];
      for (i = 0; i < loop_ub; i++) {
        b_freq_vec_data[i] = (freq_vec_data[i] == temp);
      }

      coder::b_eml_find(b_freq_vec_data, b_freq_vec_size, xx_data, xx_size);

      // 'detector_parameters:50' if length(xx) == 1
      if (xx_size[1] == 1) {
        // 'detector_parameters:51' chip_order(i) = xx;
        freq_sec[b_i] = xx_data[0];
      }
    }

    // 'rx:104' [ chip_corr, align_delay ] = chips_alignment(bband, bband_fs, pset.chip_dur, chip_oversampling, freq_vec, chip_order, max_speed);
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
    // | Authors: Giovanni Zappa, Luigi Elia D'Amaro                            |
    // +------------------------------------------------------------------------+
    //
    //  CHIPS_ALIGNMENT Compute inchorent sum of energy of preamble chips.
    //
    //  Inputs:
    //     bband             Complex baseband signal.
    //     bband_fs          Baseband sampling frequency [Hz].
    //     chip_dur          Chip duration [s].
    //     chip_oversampling Chip oversampling factor.
    //     freq_vec          Vector of used baseband frequencies in the preamble.
    //     chip_order        Indexes order of preamble's frequencies.
    //     max_speed         Max Doppler speed [m/s].
    //
    //  Outputs:
    //     chip_corr         Inchorent sum of energy of preamble chips.
    //     align_delay       Delay from baseband signal and chip_corr [s].
    //
    //  See also DETECTOR_PARAMETERS.
    // 'chips_alignment:43' n_chips = length(chip_order);
    // 'chips_alignment:45' chip_s = fix(chip_dur * bband_fs);
    // 'chips_alignment:47' gf_size = floor(bband_fs * (1540 * chip_dur) / ((chip_dur * max(freq_vec) + 1) * max_speed + 1540));
    //  forcing Goertzel window to be at least 3 / 4 of chip
    // 'chips_alignment:50' gf_size = max(gf_size, fix(3 * chip_s / 4));
    c_freq_vec_data.set(&freq_vec_data[0], freq_vec_size[0], freq_vec_size[1]);
    gf_size = std::fmax(std::floor(bband_fs * (1540.0 * pset_chip_dur) /
      ((pset_chip_dur * coder::internal::maximum(c_freq_vec_data) + 1.0) *
       max_speed + 1540.0)), std::trunc(3.0 * std::trunc(chip_nsample_tmp) / 4.0));

    // 'chips_alignment:52' step_s = (chip_dur * bband_fs) / chip_oversampling;
    // 'chips_alignment:53' [s] = goertzel_spectrum(bband, gf_size, gf_size - step_s, freq_vec, bband_fs);
    temp = gf_size - chip_nsample_tmp / 4.0;

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
    // | Authors: Giovanni Zappa, Luigi Elia D'Amaro                            |
    // +------------------------------------------------------------------------+
    //
    //  GOERTZEL_SPECTRUM calculate the Spectrogram using a Short-Time Fourier
    //  Transform (STFT) of a signal using the Goertzel algorithm, similar to
    //  the Matlab function spectrogram.
    //
    //  Inputs:
    //     x                 The input signal.
    //     window            x is divided into segments of length window and
    //                       a Hamming window of equal length is used.
    //     noverlap          The length of each segment of x overlaps.
    //     freqvec           Vector corresponds to the frequency points at
    //                       which the DFTis calculated using goertzel.
    //     fs                Sampling frequency.
    //
    //  Outputs:
    //     s                 The DFT using the Goertzel algorithm.
    //
    //  See also DETECTOR_PARAMETERS, CHIPS_ALIGNMENT.
    //  [1] Oppenheim, A.V., and R.W. Schafer, Discrete-Time Signal Processing,
    //  Prentice-Hall, Englewood Cliffs, NJ, 1989, pp. 713-718.
    //  [2] Mitra, S. K., Digital Signal Processing. A Computer-Based Approach.
    //  2nd Ed. McGraw-Hill, N.Y., 2001.
    //  [x,nx,xisreal,y,Ly,win,winName,winParam,noverlap,k,L,options,msg]
    // 'goertzel_spectrum:53' nx = length(x);
    // 'goertzel_spectrum:55' win = hamming(window);
    coder::hamming(gf_size, win);

    //  Determine the number of columns of the STFT output (i.e., the S output)
    // 'goertzel_spectrum:58' ncol = fix((nx - noverlap) / (window - noverlap));
    offs = gf_size - temp;
    temp = std::trunc((static_cast<real_T>(bband.size(0)) - temp) / offs);

    // 'goertzel_spectrum:60' L = floor(noverlap);
    // 'goertzel_spectrum:62' colindex = 1 + (0 : (ncol - 1)) * (window - noverlap);
    if (std::isnan(temp - 1.0)) {
      colindex.set_size(1, 1);
      colindex[0] = rtNaN;
    } else if (temp - 1.0 < 0.0) {
      colindex.set_size(colindex.size(0), 0);
    } else {
      colindex.set_size(1, static_cast<int32_T>(temp - 1.0) + 1);
      loop_ub = static_cast<int32_T>(temp - 1.0);
      for (i = 0; i <= loop_ub; i++) {
        colindex[i] = i;
      }
    }

    colindex.set_size(1, colindex.size(1));
    loop_ub = colindex.size(1) - 1;
    for (i = 0; i <= loop_ub; i++) {
      colindex[i] = colindex[i] * offs + 1.0;
    }

    // 'goertzel_spectrum:64' rowindex = (1 : window)';
    if (std::isnan(gf_size)) {
      y.set_size(1, 1);
      y[0] = rtNaN;
    } else if (gf_size < 1.0) {
      y.set_size(1, 0);
    } else {
      y.set_size(1, static_cast<int32_T>(gf_size - 1.0) + 1);
      loop_ub = static_cast<int32_T>(gf_size - 1.0);
      for (i = 0; i <= loop_ub; i++) {
        y[i] = static_cast<real_T>(i) + 1.0;
      }
    }

    rowindex.set_size(y.size(1));
    loop_ub = y.size(1);
    for (i = 0; i < loop_ub; i++) {
      rowindex[i] = y[i];
    }

    // 'goertzel_spectrum:66' xin = complex(zeros(window, ncol));
    //  Put x into columns of xin with the proper offset
    // 'goertzel_spectrum:69' xin(:) = x(rowindex(:, ones(1, ncol)) + fix(colindex(ones(window, 1), :)) - 1);
    nx = static_cast<int32_T>(gf_size);
    b_r.set_size(nx, colindex.size(1));
    loop_ub = colindex.size(1);
    for (i = 0; i < loop_ub; i++) {
      for (tmp_size = 0; tmp_size < nx; tmp_size++) {
        b_r[tmp_size + b_r.size(0) * i] = colindex[i];
      }
    }

    nx = static_cast<int32_T>(gf_size) * colindex.size(1);
    for (int32_T k{0}; k < nx; k++) {
      b_r[k] = std::trunc(b_r[k]);
    }

    if ((rowindex.size(0) == b_r.size(0)) && (static_cast<int32_T>(temp) ==
         b_r.size(1))) {
      xin.set_size(rowindex.size(0), static_cast<int32_T>(temp));
      loop_ub = static_cast<int32_T>(temp);
      for (i = 0; i < loop_ub; i++) {
        nx = rowindex.size(0);
        for (tmp_size = 0; tmp_size < nx; tmp_size++) {
          xin[tmp_size + xin.size(0) * i] = bband[static_cast<int32_T>
            ((rowindex[tmp_size] + b_r[tmp_size + b_r.size(0) * i]) - 1.0) - 1];
        }
      }
    } else {
      binary_expand_op(xin, bband, rowindex, temp, b_r);
    }

    //  Apply the window to the array of offset signal segments.
    // 'goertzel_spectrum:72' xin = win(:, ones(1, ncol)) .* xin;
    if ((win.size(0) == xin.size(0)) && (static_cast<int32_T>(temp) == xin.size
         (1))) {
      b_xin.set_size(win.size(0), static_cast<int32_T>(temp));
      loop_ub = static_cast<int32_T>(temp);
      for (i = 0; i < loop_ub; i++) {
        nx = win.size(0);
        for (tmp_size = 0; tmp_size < nx; tmp_size++) {
          b_xin[tmp_size + b_xin.size(0) * i].re = win[tmp_size] * xin[tmp_size
            + xin.size(0) * i].re;
          b_xin[tmp_size + b_xin.size(0) * i].im = win[tmp_size] * xin[tmp_size
            + xin.size(0) * i].im;
        }
      }
    } else {
      binary_expand_op(b_xin, win, temp, xin);
    }

    // 'goertzel_spectrum:74' f = mod(freqvec(:), fs);
    //  0 <= f < = Fs
    // 'goertzel_spectrum:76' xm = size(xin, 1);
    //  NFFT
    //  Indices used by the Goertzel function (see equation 11.1 pg. 755 of [2])
    // 'goertzel_spectrum:79' fscaled = f / fs * xm + 1;
    tmp_size = freq_vec_size[1];
    loop_ub = freq_vec_size[1];
    for (i = 0; i < loop_ub; i++) {
      offs = freq_vec_data[i];
      varargout_1 = offs;
      if (bband_fs == 0.0) {
        if (offs == 0.0) {
          varargout_1 = bband_fs;
        }
      } else if (std::isnan(offs) || std::isnan(bband_fs) || std::isinf(offs)) {
        varargout_1 = rtNaN;
      } else if (offs == 0.0) {
        varargout_1 = 0.0 / bband_fs;
      } else if (std::isinf(bband_fs)) {
        if ((bband_fs < 0.0) != (offs < 0.0)) {
          varargout_1 = bband_fs;
        }
      } else {
        boolean_T rEQ0;
        varargout_1 = std::fmod(offs, bband_fs);
        rEQ0 = (varargout_1 == 0.0);
        if ((!rEQ0) && (bband_fs > std::floor(bband_fs))) {
          temp = std::abs(offs / bband_fs);
          rEQ0 = !(std::abs(temp - std::floor(temp + 0.5)) >
                   2.2204460492503131E-16 * temp);
        }

        if (rEQ0) {
          varargout_1 = bband_fs * 0.0;
        } else if ((offs < 0.0) != (bband_fs < 0.0)) {
          varargout_1 += bband_fs;
        }
      }

      b_tmp_data[i] = varargout_1;
    }

    for (i = 0; i < tmp_size; i++) {
      fscaled_data[i] = b_tmp_data[i] / bband_fs * static_cast<real_T>
        (b_xin.size(0)) + 1.0;
    }

    // 'goertzel_spectrum:80' k = round(fscaled);
    if (tmp_size - 1 >= 0) {
      std::copy(&fscaled_data[0], &fscaled_data[tmp_size], &k_data[0]);
    }

    for (int32_T k{0}; k < tmp_size; k++) {
      k_data[k] = std::round(k_data[k]);
    }

    //  shift for each frequency from default xm length grid
    // 'goertzel_spectrum:83' deltak = fscaled - k;
    for (i = 0; i < tmp_size; i++) {
      fscaled_data[i] -= k_data[i];
    }

    // 'goertzel_spectrum:85' tempk = k;
    //  If k > xm, fold over to the 1st bin
    // 'goertzel_spectrum:87' k(tempk > xm) = 1;
    for (b_i = 0; b_i < tmp_size; b_i++) {
      if (k_data[b_i] > b_xin.size(0)) {
        k_data[b_i] = 1.0;
      }
    }

    // 'goertzel_spectrum:89' n = (0 : xm - 1)';
    if (b_xin.size(0) - 1 < 0) {
      colindex.set_size(1, 0);
    } else {
      colindex.set_size(1, b_xin.size(0));
      loop_ub = b_xin.size(0) - 1;
      for (i = 0; i <= loop_ub; i++) {
        colindex[i] = i;
      }
    }

    // 'goertzel_spectrum:90' s = complex(zeros(size(k, 1), size(xin, 2)));
    s.set_size(freq_vec_size[1], b_xin.size(1));
    loop_ub = freq_vec_size[1] * b_xin.size(1);
    for (i = 0; i < loop_ub; i++) {
      s[i].re = 0.0;
      s[i].im = 0.0;
    }

    // 'goertzel_spectrum:91' for kindex = 1 : length(k)
    for (int32_T kindex{0}; kindex < tmp_size; kindex++) {
      //  We need to evaluate the DFT at the requested frequency instead of a
      //  neighboring frequency that lies on the grid obtained with xm number
      //  of points in the 0 to fs range. We do that by giving a complex phase
      //  to xin equal to the offset from the frequency to its nearest neighbor
      //  on the grid. This phase translates into a shift in the DFT by the
      //  same amount. The s(k) then is the DFT at (k+deltak).
      //  apply kernal to xin so as to evaluate DFT at k+deltak)
      // 'goertzel_spectrum:100' kernel = exp(-1j * 2 * pi * deltak(kindex) / xm * n);
      varargout_1 = fscaled_data[kindex];
      temp = -0.0 * varargout_1;
      varargout_1 *= -6.2831853071795862;
      if (varargout_1 == 0.0) {
        offs = temp / static_cast<real_T>(b_xin.size(0));
        temp = 0.0;
      } else if (temp == 0.0) {
        offs = 0.0;
        temp = varargout_1 / static_cast<real_T>(b_xin.size(0));
      } else {
        offs = rtNaN;
        temp = varargout_1 / static_cast<real_T>(b_xin.size(0));
      }

      loop_ub = colindex.size(1);
      kernel.set_size(colindex.size(1));
      for (i = 0; i < loop_ub; i++) {
        kernel[i].re = colindex[i] * offs;
        kernel[i].im = colindex[i] * temp;
      }

      nx = kernel.size(0);
      for (int32_T k{0}; k < nx; k++) {
        if (kernel[k].im == 0.0) {
          kernel[k].re = std::exp(kernel[k].re);
          kernel[k].im = 0.0;
        } else if (std::isinf(kernel[k].im) && std::isinf(kernel[k].re) &&
                   (kernel[k].re < 0.0)) {
          kernel[k].re = 0.0;
          kernel[k].im = 0.0;
        } else {
          temp = std::exp(kernel[k].re / 2.0);
          kernel[k].re = temp * (temp * std::cos(kernel[k].im));
          kernel[k].im = temp * (temp * std::sin(kernel[k].im));
        }
      }

      // 'goertzel_spectrum:101' xin_phaseshifted = xin .* repmat(kernel, 1, size(xin, 2));
      i = b_xin.size(1);
      xin.set_size(kernel.size(0), b_xin.size(1));
      nx = kernel.size(0);
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        b_i = loop_ub * nx;
        for (int32_T k{0}; k < nx; k++) {
          xin[b_i + k] = kernel[k];
        }
      }

      // 'goertzel_spectrum:103' s(kindex, :) = goertzel(xin_phaseshifted, k(kindex));
      if ((b_xin.size(0) == xin.size(0)) && (b_xin.size(1) == xin.size(1))) {
        c_xin.set_size(b_xin.size(0), b_xin.size(1));
        loop_ub = b_xin.size(0) * b_xin.size(1);
        for (i = 0; i < loop_ub; i++) {
          c_xin[i].re = b_xin[i].re * xin[i].re - b_xin[i].im * xin[i].im;
          c_xin[i].im = b_xin[i].re * xin[i].im + b_xin[i].im * xin[i].re;
        }

        coder::goertzel(c_xin, k_data[kindex], b_bband);
        loop_ub = b_bband.size(1);
        for (i = 0; i < loop_ub; i++) {
          s[kindex + s.size(0) * i] = b_bband[i];
        }
      } else {
        binary_expand_op(s, kindex, b_xin, xin, k_data);
      }
    }

    // 'chips_alignment:55' rr = abs(s) ./ n_chips;
    nx = s.size(0) * s.size(1);
    rr.set_size(s.size(0), s.size(1));
    for (int32_T k{0}; k < nx; k++) {
      rr[k] = rt_hypotd_snf(s[k].re, s[k].im);
    }

    loop_ub = rr.size(0) * rr.size(1);
    for (i = 0; i < loop_ub; i++) {
      rr[i] = rr[i] / 32.0;
    }

    //  maximum filter
    // 'chips_alignment:58' r = zeros(size(rr, 1), size(rr, 2), 2);
    c_r.set_size(rr.size(0), rr.size(1), 2);
    loop_ub = (rr.size(0) * rr.size(1)) << 1;
    for (i = 0; i < loop_ub; i++) {
      c_r[i] = 0.0;
    }

    // 'chips_alignment:59' r(:, 1 : end - 1, 2) = rr(:, 2 : end);
    if (rr.size(1) < 2) {
      i = 0;
      tmp_size = 0;
    } else {
      i = 1;
      tmp_size = rr.size(1);
    }

    loop_ub = tmp_size - i;
    for (tmp_size = 0; tmp_size < loop_ub; tmp_size++) {
      nx = rr.size(0);
      for (b_i = 0; b_i < nx; b_i++) {
        c_r[(b_i + c_r.size(0) * tmp_size) + c_r.size(0) * c_r.size(1)] = rr[b_i
          + rr.size(0) * (i + tmp_size)];
      }
    }

    // 'chips_alignment:60' r(:, :, 1) = [ rr(:, :) ];
    loop_ub = rr.size(1);
    for (i = 0; i < loop_ub; i++) {
      nx = rr.size(0);
      for (tmp_size = 0; tmp_size < nx; tmp_size++) {
        c_r[tmp_size + c_r.size(0) * i] = rr[tmp_size + rr.size(0) * i];
      }
    }

    // 'chips_alignment:61' g = max(r, [], 3);
    coder::internal::maximum(c_r, rr);

    // 'chips_alignment:63' chip_corr_len = length(g) - 2 * chip_oversampling * (length(chip_order) - 1);
    if ((rr.size(0) == 0) || (rr.size(1) == 0)) {
      b_i = 0;
    } else {
      nx = rr.size(0);
      b_i = rr.size(1);
      if (nx >= b_i) {
        b_i = nx;
      }
    }

    // 'chips_alignment:64' chip_corr = zeros(1, chip_corr_len);
    colindex.set_size(1, b_i - 248);
    loop_ub = b_i - 248;
    for (i = 0; i < loop_ub; i++) {
      colindex[i] = 0.0;
    }

    // 'chips_alignment:65' for c = 1 : length(chip_order)
    for (i = 0; i <= b_i - 249; i++) {
      colindex[i] = rr[(static_cast<int32_T>(freq_sec[0]) + rr.size(0) * i) - 1];
    }

    // 'chips_alignment:69' align_delay = gf_size * (1 - 1 / chip_oversampling) / bband_fs / 2;
    // 'chips_alignment:71' chip_corr = sum(chip_corr, 1);
    y.set_size(1, colindex.size(1));
    loop_ub = colindex.size(0) * colindex.size(1) - 1;
    for (i = 0; i <= loop_ub; i++) {
      y[i] = colindex[i];
    }

    if (y.size(1) == 0) {
      colindex.set_size(1, 0);
    } else {
      nx = y.size(1);
      colindex.set_size(1, y.size(1));
      for (b_i = 0; b_i < nx; b_i++) {
        colindex[b_i] = y[b_i];
      }
    }

    // 'rx:106' cfar_mov_avg_time = .150;
    // 'rx:107' cfar_mov_avg = max(cfar_mov_avg_time, 26 * pset.chip_dur);
    // 'rx:108' step_l = fix(cfar_mov_avg * chip_oversampling / pset.chip_dur);
    // 'rx:110' guard_time = chip_oversampling * params.pset_chip_len_mul;
    //  one chip
    //  Todo: choose the optimal threshold.
    // 'rx:113' threshold = 2.5;
    // 'rx:115' d_istart = step_l + guard_time +1;
    // 'rx:116' d_istop = length(chip_corr);
    // 'rx:118' if (d_istart >= d_istop)
    //  Detection.
    // 'rx:123' offs_detector = detect_first(chip_corr, threshold, step_l, chip_oversampling, guard_time);
    temp = detect_first(colindex, std::trunc(std::fmax(0.15, 26.0 *
      pset_chip_dur) * 4.0 / pset_chip_dur), 4.0 * params_pset_chip_len_mul);

    //  Converting oversampled chip in baseband index and time.
    // 'rx:126' offs = fix(offs_detector * chip_nsample / chip_oversampling + align_delay * bband_fs);
    offs = std::trunc(temp * chip_nsample / 4.0 + gf_size * 0.75 / bband_fs /
                      2.0 * bband_fs);

    // 'rx:128' state.after = offs / bband_fs;
    state->after = offs / bband_fs;

    // 'rx:130' if (isempty(offs))
    // 'rx:134' if (verbose)
    // 'rx:142' max_cfactor = 1540 / (1540 - max_speed);
    // 'rx:143' if (params.doppler_correction)
    if (params_doppler_correction != 0.0) {
      // 'rx:144' [state.gamma, state.speed] = compute_doppler(bband(offs : offs + ...
      // 'rx:145'             ceil(32 * chip_nsample * max_cfactor)).', pset.chip_dur, pset.chip_frq, ...
      // 'rx:146'             freq_vec(chip_order), bband_fs, pset.cfreq, max_speed, 32);
      varargout_1 = std::ceil(32.0 * chip_nsample * (1540.0 / (1540.0 -
        max_speed)));
      colindex.set_size(1, static_cast<int32_T>(varargout_1) + 1);
      loop_ub = static_cast<int32_T>(varargout_1);
      for (i = 0; i <= loop_ub; i++) {
        colindex[i] = offs + static_cast<real_T>(i);
      }

      b_bband.set_size(1, colindex.size(1));
      loop_ub = colindex.size(1);
      for (i = 0; i < loop_ub; i++) {
        b_bband[i] = bband[static_cast<int32_T>(colindex[i]) - 1];
      }

      for (i = 0; i < 32; i++) {
        fscaled_data[i] = freq_vec_data[static_cast<int32_T>(freq_sec[i]) - 1];
      }

      compute_doppler(b_bband, pset_chip_dur, fscaled_data, bband_fs, pset_cfreq,
                      max_speed, &state->gamma, &state->speed);
    } else {
      // 'rx:147' else
      // 'rx:148' state.gamma = 1;
      state->gamma = 1.0;

      // 'rx:149' state.speed = NaN;
      state->speed = rtNaN;
    }

    //  Skip 32 chips.
    // 'rx:153' offs = offs + round(32 * bband_fs * pset.chip_dur / state.gamma);
    offs += std::round(32.0 * bband_fs * pset_chip_dur / state->gamma);

    //     %% Decode packet.
    // 'rx:156' pkt_len = ceil(pkt_nchip * bband_fs * pset.chip_dur / state.gamma);
    temp = std::ceil(144.0 * bband_fs * pset_chip_dur / state->gamma);

    // 'rx:157' if (offs + pkt_len > length(bband))
    // 'rx:160' state.pkt_idx = offs;
    state->pkt_idx = offs;

    // 'rx:162' signal = bband(offs : offs + pkt_len);
    colindex.set_size(1, static_cast<int32_T>(temp) + 1);
    loop_ub = static_cast<int32_T>(temp);
    for (i = 0; i <= loop_ub; i++) {
      colindex[i] = offs + static_cast<real_T>(i);
    }

    // 'rx:163' state.process_up_to = (offs + pkt_len) / bband_fs;
    state->process_up_to = (offs + temp) / bband_fs;

    // 'rx:164' slots = slots(33 : end);
    // 'rx:166' [pkt_bytes, state.pkt_dec_bits, state.pkt_raw_bits pkt_bit_prob] = demod(pset, signal, bband_fs, slots, defaults.PKT_MIN_NBIT, state.gamma);
    kernel.set_size(colindex.size(1));
    loop_ub = colindex.size(1);
    for (i = 0; i < loop_ub; i++) {
      kernel[i] = bband[static_cast<int32_T>(colindex[i]) - 1];
    }

    demod(pset_cfreq, pset_chip_frq, pset_chip_dur, kernel, bband_fs, &slots[32],
          state->gamma, pkt_bytes, dv2, dv3, pkt_bit_prob);
    state->pkt_dec_bits.size[0] = 64;
    state->pkt_dec_bits.size[1] = 1;
    std::copy(&dv2[0], &dv2[64], &state->pkt_dec_bits.data[0]);
    state->pkt_raw_bits.size[0] = 144;
    state->pkt_raw_bits.size[1] = 1;
    std::copy(&dv3[0], &dv3[144], &state->pkt_raw_bits.data[0]);

    // 'rx:167' [pkt, err] = packet_unpack(pkt_bytes);
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
    //  PACKET_UNPACK Convert a byte sequence to a JANUS packet structure.
    //
    //  Inputs:
    //    data   Byte array.
    //
    //  Outputs:
    //    pkt    Packet structure.
    //    err    Error code, 0 for no error, 1 for CRC error.
    //
    //  See also PACKET_NEW, PACKET_PACK.
    //
    // 'packet_unpack:42' defaults = defaultFun;
    // 'packet_unpack:44' bin = typecast(uint8(fliplr(data(1 : 8))), 'uint64');
    for (i = 0; i < 8; i++) {
      c_x[i] = pkt_bytes[i];
    }

    xtmp = c_x[0];
    c_x[0] = c_x[7];
    c_x[7] = xtmp;
    xtmp = c_x[1];
    c_x[1] = c_x[6];
    c_x[6] = xtmp;
    xtmp = c_x[2];
    c_x[2] = c_x[5];
    c_x[5] = xtmp;
    xtmp = c_x[3];
    c_x[3] = c_x[4];
    c_x[4] = xtmp;
    std::memcpy((void *)&bin, (void *)&c_x[0], (uint32_T)((size_t)1 * sizeof
      (uint64_T)));

    //  Initialize packet structure and error code.
    // 'packet_unpack:47' err = 0;
    // 'packet_unpack:48' pkt = packet_new();
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
    //          params = parameters({});
    // 'packet_new:45' params = parameters();
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
    //  PARAMETERS Retrieve JANUS parameters.
    //
    //    PARAMETERS() returns a structure with the required default
    //    parameters to encode/decode a JANUS compliant waveform.
    //
    //    PARAMETERS(args) adds all the missing parameters to structure
    //    'args'. These parameters are initialized to default JANUS
    //    compliant values.
    //
    //    The user may modify the fields of the returned structure to change
    //    the format of the generated waveform and finetune the behaviour
    //    of the encoder/decoder. Waveforms generated using user-defined
    //    parameters might not be JANUS compliant.
    //
    //  Inputs:
    //     iargs     Structure containing parameters.
    //
    //  Outputs:
    //     oargs     Structure containing all valid JANUS parameters.
    //
    // 'parameters:50' if (nargin < 1)
    // 'parameters:51' iargs = [];
    // 'parameters:54' oargs = defaultParameters;
    // 'parameters:118' defaults = defaultFun;
    //  Verbose: vebosity level.
    // 'parameters:120' oargs.verbose = 0;
    //  Initial fixed sequence of 32 chips (hex).
    // 'parameters:123' sequence_32_chips = 'AEC7CD20';
    // 10101110110001111100110100100000
    // 'parameters:124' oargs.sequence_32_chips = sequence_32_chips;
    // 'parameters:125' oargs.c32_sequence = de2bi(hex2dec(sequence_32_chips), 32, 'left-msb');
    //  Chip length dyadic exponent.
    // 'parameters:128' chip_len_exp = 0;
    // 'parameters:129' if (chip_len_exp < 0)
    // 'parameters:132' oargs.chip_len_exp = chip_len_exp;
    // 'parameters:133' oargs.pset_chip_len_mul = 2 ^ fix(chip_len_exp);
    //  Stream parameters.
    //  Stream: Driver (wav, mat, mem).
    // 'parameters:138' stream_driver = 'wav';
    // 'parameters:139' oargs.stream_driver = stream_driver;
    //  Stream: Driver Arguments.
    // 'parameters:142' switch (stream_driver)
    // 'parameters:143' case 'wav'
    // 'parameters:144' oargs.stream_driver_args = 'janus.wav';
    //  Stream: Sampling Frequency (Hz). Zero means 'choose the first
    //  suitable sampling frequency from a list of common frequencies'.
    // 'parameters:151' oargs.stream_fs = 0;
    //  Stream: Format (U8, S16, S24, FLOAT).
    // 'parameters:154' stream_format = 'S16';
    // 'parameters:155' oargs.stream_format = stream_format;
    //  Stream: Bits per sample.
    // 'parameters:158' switch (stream_format)
    // 'parameters:161' case 'S16'
    // 'parameters:162' oargs.stream_bps = 16;
    //  Stream: Passband or Baseband Signal.
    // 'parameters:172' oargs.stream_passband = 1;
    //  Stream: Number of channels
    // 'parameters:175' oargs.stream_channels = 1;
    //  Stream: Channel to use
    // 'parameters:178' oargs.stream_channel = 0;
    //  Stream: amplitude factor.
    // 'parameters:181' oargs.stream_amp = 0.95;
    //  Stream: force number of output samples to be a multiple
    //  of a given number.
    // 'parameters:185' oargs.stream_mul = 0;
    //  Tx parameters.
    //  Padding: enabled/disabled.
    // 'parameters:190' oargs.pad = 1;
    //  Wake Up Tones: enabled/disabled.
    // 'parameters:193' oargs.wut = 0;
    //  Packet: Mobility Flag.
    // 'parameters:196' oargs.packet_mobility = uint64(0);
    //  Packet: Tx/Rx Flag.
    // 'parameters:199' oargs.packet_tx_rx = 1;
    //  Packet: Forwarding Capability.
    // 'parameters:202' oargs.packet_forward = 0;
    //  Packet: Class User Identifier.
    // 'parameters:205' oargs.packet_class_id = defaults.JANUS_RI_CLASS_ID;
    //  Packet: Application Type.
    // 'parameters:208' oargs.packet_app_type = 0;
    //  Packet: Reservation Time.
    // 'parameters:211' oargs.packet_reserv_time = 0.0;
    //  Packet: Repeat Interval.
    // 'parameters:214' oargs.packet_repeat_int = 0.0;
    //  Packet: Application Data.
    // 'parameters:217' oargs.packet_app_data = '';
    //  Packet: Application Data Fields.
    // 'parameters:220' oargs.packet_app_fields = [];
    //  Rx parameters.
    //  Doppler correction: enabled/disabled.
    // 'parameters:226' oargs.doppler_correction = 1;
    //  Doppler correction: maximum speed [m/s].
    // 'parameters:229' oargs.doppler_max_speed = 5;
    // 'parameters:56' if isempty(iargs)
    // 'packet_new:46' if (nargin < 2)
    // 'packet_new:47' pset_id = 0;
    // 'packet_new:51' coder.varsize("nullstr");
    // 'packet_new:52' nullstr=uint8(zeros(1,0));
    // 'packet_new:53' pkt.bytes = nullstr;
    //  Version Number.
    // 'packet_new:56' pkt.version = defaults.JANUS_VERSION;
    //  Mobility Flag.
    // 'packet_new:59' pkt.mobility = uint64(params.packet_mobility);
    //  Schedule Flag.
    // 'packet_new:62' pkt.schedule = uint64(0);
    //  Tx/Rx capability.
    // 'packet_new:65' pkt.tx_rx = uint64(params.packet_tx_rx);
    //  Forwarding capability.
    // 'packet_new:68' pkt.forward = uint64(params.packet_forward);
    //  Class User Id.
    // 'packet_new:71' pkt.class_id = uint64(params.packet_class_id);
    //  Class User name.
    //      pkt.class_id_name = '';
    // 'packet_new:75' coder.varsize("empty");
    // 'packet_new:76' empty='';
    // 'packet_new:77' pkt.class_id_name = empty;
    //  Application Type.
    // 'packet_new:80' pkt.app_type = uint64(params.packet_app_type);
    // 'packet_new:82' if (params.packet_reserv_time > 0)
    // 'packet_new:100' else
    // required by compiler
    // 'packet_new:101' pkt.schedule = uint64(0);
    // 'packet_new:102' pkt.reserv_repeat = uint64(0);
    pkt->reserv_repeat = 0ULL;

    // 'packet_new:103' pkt.reserv_time =0;
    pkt->reserv_time = 0.0;

    // 'packet_new:104' pkt.repeat_int = double(0);
    pkt->repeat_int = 0.0;

    //  Cargo Size.
    // 'packet_new:108' pkt.cargo_size = 0;
    pkt->cargo_size = 0.0;

    //  Application data.
    // 'packet_new:111' coder.varsize("app_data");
    // 'packet_new:112' app_data = intmax('uint64');
    // 'packet_new:113' pkt.app_data = app_data;
    // 'packet_new:114' pkt.packet_app_data = uint64(0);
    pkt->packet_app_data = 0ULL;

    // 'packet_new:115' if (~isempty(params.packet_app_data))
    //  CRC.
    // 'packet_new:127' pkt.crc = uint8(0);
    //  Computed CRC Validity.
    // 'packet_new:130' pkt.crc_validity = false;
    //  Optional cargo.
    // 'packet_new:133' if (isfield(params, 'packet_cargo'))
    // 'packet_new:136' else
    // 'packet_new:137' coder.varsize("nullint8");
    // 'packet_new:138' nullint8=zeros(1,0,'uint8');
    pkt->cargo.size[0] = 1;
    pkt->cargo.size[1] = 0;

    // 'packet_new:139' pkt.cargo = nullint8;
    //  Packet bytes.
    // 'packet_unpack:51' pkt.bytes = data;
    pkt->bytes.size[0] = 1;
    pkt->bytes.size[1] = 8;
    for (i = 0; i < 8; i++) {
      pkt->bytes.data[i] = pkt_bytes[i];
    }

    //  4 bits: Version Number.
    // 'packet_unpack:54' pkt.version = bitshift(bin, -60);
    pkt->version = bin >> 60;

    //  1 bit: Mobility Flag.
    // 'packet_unpack:57' pkt.mobility = uint64(bitand(bitshift(bin, -59), 1));
    pkt->mobility = bin >> 59 & 1ULL;

    //  1 bit: Schedule Flag.
    // 'packet_unpack:60' pkt.schedule = uint64(bitand(bitshift(bin, -58), 1));
    pkt->schedule = bin >> 58 & 1ULL;

    //  1 bit: Tx/Rx Flag.
    // 'packet_unpack:63' pkt.tx_rx = uint64(bitand(bitshift(bin, -57), 1));
    pkt->tx_rx = bin >> 57 & 1ULL;

    //  1 bit: Forwarding Capability.
    // 'packet_unpack:66' pkt.forward = uint64(bitand(bitshift(bin, -56), 1));
    pkt->forward = bin >> 56 & 1ULL;

    //  8 bits: Class User Identifier.
    // 'packet_unpack:69' pkt.class_id = uint64(bitand(bitshift(bin, -48), 2^8 - 1));
    pkt->class_id = bin >> 48 & 255ULL;

    // 'packet_unpack:70' pkt.class_id_name = user_class_lookup_index(pkt.class_id);
    user_class_lookup_index(pkt->class_id, pkt->class_id_name.data,
      pkt->class_id_name.size);

    //  6 bits: Application Type.
    // 'packet_unpack:73' pkt.app_type = bitand(bitshift(bin, -42), 2^6 - 1);
    pkt->app_type = bin >> 42 & 63ULL;

    // 'packet_unpack:75' if (pkt.schedule == 1)
    if (pkt->schedule == 1ULL) {
      uint64_T u;

      //  1 bit: Reservation/Repeat Flag.
      // 'packet_unpack:77' pkt.reserv_repeat = uint64(bitand(bitshift(bin, -41), 1));
      pkt->reserv_repeat = bin >> 41 & 1ULL;

      //  7 bits: Reservation Time or Repeat Interval Table Index.
      // 'packet_unpack:79' index = uint8(bitand(bitshift(bin, -34), 2^7 - 1));
      u = bin >> 34 & 127ULL;
      if (u > 255ULL) {
        u = 255ULL;
      }

      // 'packet_unpack:80' if (pkt.reserv_repeat == 0)
      if (pkt->reserv_repeat == 0ULL) {
        // 'packet_unpack:81' pkt.reserv_time = packet_tx_interval_lookup_index(index, pkt.reserv_repeat);
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
        //  PACKET_TX_INTERVAL_LOOKUP_INDEX(index, res_rep)
        //
        //  Return the transmit reservation time or repeat interval (in seconds)
        //  associated with the supplied 'index' and reservation/repeat flag.
        //
        //  Inputs:
        //    index    Index.
        //    res_rep  Reservation or repeat flag.
        //
        //  Outputs:
        //    value    Transmit reservation time or repeat interval (in seconds).
        //
        //  See also PACKET_TX_INTERVAL_LOOKUP_VALUE, PACKET_TX_RESERVATION_TIME_TABLE,
        //  PACKET_TX_REPEAT_INTERVAL_TABLE.
        //
        // 'packet_tx_interval_lookup_index:41' if (res_rep == 0)
        // 'packet_tx_interval_lookup_index:42' table = packet_tx_reservation_time_table;
        std::copy(&dv4[0], &dv4[128], &table[0]);

        // 'packet_tx_interval_lookup_index:46' value = table(index + 1);
        i = static_cast<int32_T>(static_cast<uint8_T>(u) + 1U);
        if (static_cast<uint8_T>(u) + 1U > 255U) {
          i = 255;
        }

        pkt->reserv_time = table[i - 1];
      } else {
        // 'packet_unpack:82' else
        // 'packet_unpack:83' pkt.repeat_int = packet_tx_interval_lookup_index(index, pkt.reserv_repeat);
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
        //  PACKET_TX_INTERVAL_LOOKUP_INDEX(index, res_rep)
        //
        //  Return the transmit reservation time or repeat interval (in seconds)
        //  associated with the supplied 'index' and reservation/repeat flag.
        //
        //  Inputs:
        //    index    Index.
        //    res_rep  Reservation or repeat flag.
        //
        //  Outputs:
        //    value    Transmit reservation time or repeat interval (in seconds).
        //
        //  See also PACKET_TX_INTERVAL_LOOKUP_VALUE, PACKET_TX_RESERVATION_TIME_TABLE,
        //  PACKET_TX_REPEAT_INTERVAL_TABLE.
        //
        // 'packet_tx_interval_lookup_index:41' if (res_rep == 0)
        if (pkt->reserv_repeat == 0ULL) {
          // 'packet_tx_interval_lookup_index:42' table = packet_tx_reservation_time_table;
          std::copy(&dv4[0], &dv4[128], &table[0]);
        } else {
          // 'packet_tx_interval_lookup_index:43' else
          // 'packet_tx_interval_lookup_index:44' table = packet_tx_repeat_interval_table;
          std::copy(&dv5[0], &dv5[128], &table[0]);
        }

        // 'packet_tx_interval_lookup_index:46' value = table(index + 1);
        i = static_cast<int32_T>(static_cast<uint8_T>(u) + 1U);
        if (static_cast<uint8_T>(u) + 1U > 255U) {
          i = 255;
        }

        pkt->repeat_int = table[i - 1];
      }

      // 'packet_unpack:85' n_pkt_fields = length(fieldnames(pkt));
      //          pkt = orderfields(pkt, [(1:8) (n_pkt_fields-1) n_pkt_fields (9:n_pkt_fields-2)]);
      // 'packet_unpack:88' app_data_len = 26;
      nx = 26;
    } else {
      // 'packet_unpack:89' else
      // 'packet_unpack:90' app_data_len = 34;
      nx = 34;
    }

    //  26/34 bits: Application Data.
    // 'packet_unpack:94' pkt.app_data = uint64(bitand(bitshift(bin, -8), 2^app_data_len - 1));
    bin = bin >> 8 & static_cast<uint64_T>(rt_powd_snf(2.0, static_cast<real_T>
      (nx)) - 1.0);

    //      try
    //          plugin = sprintf('plugin_%03d_%02d', pkt.class_id, pkt.app_type);
    //          eval(['[pkt.cargo_size, pkt.app_fields] = ' plugin '(''app_data_decode'', pkt.app_data, app_data_len);']);
    //      catch ME
    //          if (verbose)
    //              disp([plugin ': ' ME.message '.' ]);
    //          end
    //      end
    // 'packet_unpack:105' if (app_data_len == 26)
    if (nx == 26) {
      // 'packet_unpack:106' pkt.app_data = uint64(dec2hex(pkt.app_data(:), 7));
      coder::dec2hex((const uint64_T *)&bin, c_tmp_data, freq_vec_size);
      pkt->app_data.size[0] = 1;
      pkt->app_data.size[1] = freq_vec_size[1];
      loop_ub = freq_vec_size[1];
      for (i = 0; i < loop_ub; i++) {
        pkt->app_data.data[i] = static_cast<uint8_T>(c_tmp_data[i]);
      }
    } else {
      // 'packet_unpack:107' else
      // 'packet_unpack:108' pkt.app_data = uint64(dec2hex(pkt.app_data(:), 9));
      coder::b_dec2hex((const uint64_T *)&bin, c_tmp_data, freq_vec_size);
      pkt->app_data.size[0] = 1;
      pkt->app_data.size[1] = freq_vec_size[1];
      loop_ub = freq_vec_size[1];
      for (i = 0; i < loop_ub; i++) {
        pkt->app_data.data[i] = static_cast<uint8_T>(c_tmp_data[i]);
      }
    }

    //  8 bits: CRC.
    // 'packet_unpack:112' pkt.crc = data(8);
    pkt->crc = pkt_bytes[7];

    //  Check CRC.
    // 'packet_unpack:115' my_crc = crc(data(1 : 7), defaults.CRC_POLY);
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
    xtmp = 0U;

    // 'crc:43' for i = 1 : length(data)
    for (b_i = 0; b_i < 7; b_i++) {
      // 'crc:44' c = bitxor(c, data(i));
      xtmp = static_cast<uint8_T>(xtmp ^ pkt_bytes[b_i]);

      // 'crc:45' for j = 0 : 7
      for (nx = 0; nx < 8; nx++) {
        // 'crc:46' if (bitand(c, 128))
        if ((xtmp & 128) != 0) {
          // 'crc:47' c = bitshift(c, 1);
          // 'crc:48' c = bitxor(c, poly);
          xtmp = static_cast<uint8_T>(static_cast<uint8_T>(xtmp << 1) ^ 7);
        } else {
          // 'crc:49' else
          // 'crc:50' c = bitshift(c, 1);
          xtmp = static_cast<uint8_T>(xtmp << 1);
        }
      }

      // 'crc:54' c = bitand(c, 255);
    }

    // 'packet_unpack:116' pkt.crc_validity = (pkt.crc == my_crc);
    pkt->crc_validity = (pkt_bytes[7] == xtmp);

    // 'packet_unpack:117' err = ~pkt.crc_validity;
    // 'rx:169' if (err ~= 0)
    // 'rx:175' if (~isfield(pkt, 'cargo_size') || pkt.cargo_size == 0)
    // 'rx:176' state.bit_prob = pkt_bit_prob;
    state->bit_prob.size[0] = 144;
    state->bit_prob.size[1] = 1;
    std::copy(&pkt_bit_prob[0], &pkt_bit_prob[144], &state->bit_prob.data[0]);
  }

  static void times(real_T in1[256], const real_T in2_data[], const int32_T
                    in2_size[2], const real_T in3[256])
  {
    int32_T stride_0_1;
    stride_0_1 = (in2_size[1] != 1);
    for (int32_T i{0}; i < 256; i++) {
      in1[i] = in2_data[i * stride_0_1] * in3[i];
    }
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
    cell_wrap_19 rv[256];
    cell_wrap_19 rv1[256];
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

  SWiG_rx_class::SWiG_rx_class()
  {
    omp_init_nest_lock(&swig_rx_nestLockGlobal);
    verbose = 1.0;
  }

  SWiG_rx_class::~SWiG_rx_class()
  {
    omp_destroy_nest_lock(&swig_rx_nestLockGlobal);
  }

  //
  // function [pkt, state] = swig_rx(Rate_value, Fc_value, params, signalIn)
  void SWiG_rx_class::swig_rx(real_T Rate_value, real_T Fc_value, const
    struct0_T *params, const ::coder::array<real_T, 2U> &signalIn, struct1_T
    *pkt, struct2_T *state)
  {
    static const char_T pset_name[27]{ 'S', 'W', 'i', 'G', ' ', 't', 'i', 'm',
      'e', '/', 'f', 'r', 'e', 'q', 'u', 'e', 'n', 'c', 'y', ' ', 's', 'c', 'a',
      'l', 'i', 'n', 'g' };

    ::coder::array<creal_T, 1U> bband;
    ::coder::array<real_T, 2U> pband;
    ::coder::array<real_T, 1U> b_signalIn;
    real_T bband_fs;
    int32_T Fsw;
    int32_T pset_bwidth;
    int32_T pset_cfreq;
    uint8_T pkt_bytes[8];

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
    // | Authors: Ricardo Martins, Giovanni Zappa, Luigi Elia D'Amaro           |
    // +------------------------------------------------------------------------+
    //
    //  SIMPLE_RX Simplified interface to decode a JANUS waveform.
    //
    //  Inputs:
    //     pset_file  Parameter set file (CSV).
    //     pset_id    Parameter set Id.
    //     varargin   Optional parameters.
    //
    //  Outputs:
    //     pkt        Decoded packet.
    //     state      Structure with info from the decoder.
    //
    //  See also RX, TX, SIMPLE_TX, PARAMETERS.
    //
    // 'swig_rx:48' if (nargin < 2)
    // 'swig_rx:52' bband = [];
    // 'swig_rx:53' pband = [];
    //  Load parameter set configuration.
    // 'swig_rx:57' pset.id = 1;
    // required
    // 'swig_rx:58' pset.name = 'SWiG time/frequency scaling';
    // 'swig_rx:59' pset.prim_q = 13;
    // 'swig_rx:60' pset.prim_a = 2;
    // 'swig_rx:61' pset.nblock = 12;
    // time-frequency scaling
    // 'swig_rx:64' switch Fc_value
    switch (static_cast<int32_T>(Fc_value)) {
     case 0:
      // 'swig_rx:65' case 0
      // 'swig_rx:66' pset.cfreq = 18795;
      pset_cfreq = 18795;
      break;

     case 1:
      // 'swig_rx:67' case 1
      // 'swig_rx:68' pset.cfreq = 19640;
      pset_cfreq = 19640;
      break;

     case 2:
      // 'swig_rx:69' case 2
      // 'swig_rx:70' pset.cfreq = 20485;
      pset_cfreq = 20485;
      break;

     case 3:
      // 'swig_rx:71' case 3
      // 'swig_rx:72' pset.cfreq = 21330;
      pset_cfreq = 21330;
      break;

     case 4:
      // 'swig_rx:73' case 4
      // 'swig_rx:74' pset.cfreq = 23465;
      pset_cfreq = 23465;
      break;

     case 5:
      // 'swig_rx:75' case 5
      // 'swig_rx:76' pset.cfreq = 24310;
      pset_cfreq = 24310;
      break;

     case 6:
      // 'swig_rx:77' case 6
      // 'swig_rx:78' pset.cfreq = 25155;
      pset_cfreq = 25155;
      break;

     case 7:
      // 'swig_rx:79' case 7
      // 'swig_rx:80' pset.cfreq = 26000;
      pset_cfreq = 26000;
      break;

     default:
      // 'swig_rx:81' otherwise
      // 'swig_rx:82' pset.cfreq = 26000;
      pset_cfreq = 26000;
      break;
    }

    // 'swig_rx:85' switch Rate_value
    switch (static_cast<int32_T>(Rate_value)) {
     case 0:
      // 'swig_rx:86' case 0
      // 'swig_rx:87' Fsw = 65;
      Fsw = 65;
      break;

     case 1:
      // 'swig_rx:88' case 1
      // 'swig_rx:89' Fsw = 130;
      Fsw = 130;
      break;

     case 2:
      // 'swig_rx:90' case 2
      // 'swig_rx:91' Fsw = 195;
      Fsw = 195;
      break;

     case 3:
      // 'swig_rx:92' case 3
      // 'swig_rx:93' Fsw = 260;
      Fsw = 260;
      break;

     case 4:
      // 'swig_rx:94' case 4
      // 'swig_rx:95' Fsw = 325;
      Fsw = 325;
      break;

     case 5:
      // 'swig_rx:96' case 5
      // 'swig_rx:97' Fsw = 390;
      Fsw = 390;
      break;

     case 6:
      // 'swig_rx:98' case 6
      // 'swig_rx:99' Fsw = 455;
      Fsw = 455;
      break;

     case 7:
      // 'swig_rx:100' case 7
      // 'swig_rx:101' Fsw = 520;
      Fsw = 520;
      break;

     default:
      // 'swig_rx:102' otherwise
      // 'swig_rx:103' Fsw = 520;
      Fsw = 520;
      break;
    }

    // 'swig_rx:106' pset.chip_frq = Fsw;
    // 'swig_rx:107' pset.chip_dur = 1.0 / Fsw;
    // 'swig_rx:108' pset.bwidth = 26 * Fsw;
    pset_bwidth = 26 * Fsw;

    // 'swig_rx:112' pband_fs = params.stream_fs;
    // 'swig_rx:113' bband_fs = params.stream_fs;
    bband_fs = params->stream_fs;

    // 'swig_rx:114' if (params.stream_passband)
    if (params->stream_passband != 0.0) {
      int32_T loop_ub;

      // 'swig_rx:115' params.stream_fs = pband_fs;
      // 'swig_rx:116' pband = signalIn;
      pband.set_size(signalIn.size(0), signalIn.size(1));
      loop_ub = signalIn.size(0) * signalIn.size(1);
      for (int32_T i{0}; i < loop_ub; i++) {
        pband[i] = signalIn[i];
      }

      // 'swig_rx:117' if (params.stream_channels > 1)
      if (params->stream_channels > 1.0) {
        // 'swig_rx:118' pband = pband(:, params.stream_channel + 1);
        b_signalIn.set_size(signalIn.size(0));
        loop_ub = signalIn.size(0);
        for (int32_T i{0}; i < loop_ub; i++) {
          b_signalIn[i] = signalIn[i + signalIn.size(0) * (static_cast<int32_T>
            (params->stream_channel + 1.0) - 1)];
        }

        pband.set_size(signalIn.size(0), 1);
        loop_ub = signalIn.size(0);
        for (int32_T i{0}; i < loop_ub; i++) {
          pband[i] = b_signalIn[i];
        }
      }

      // 'swig_rx:120' [bband, bband_fs] = ddc(pband, pband_fs, pset.cfreq, pset.bwidth, params);
      ddc(pband, params->stream_fs, static_cast<real_T>(pset_cfreq),
          static_cast<real_T>(pset_bwidth), bband, &bband_fs);
    } else {
      int32_T loop_ub;

      // 'swig_rx:121' else
      // 'swig_rx:122' params.stream_fs = bband_fs;
      // 'swig_rx:123' bband = complex(signalIn(:, 1), signalIn(:, 2));
      bband.set_size(signalIn.size(0));
      loop_ub = signalIn.size(0);
      for (int32_T i{0}; i < loop_ub; i++) {
        bband[i].re = signalIn[i];
        bband[i].im = signalIn[i + signalIn.size(0)];
      }
    }

    // 'swig_rx:126' [pkt, pkt_bytes, state] = rx(pset, bband, bband_fs, params);
    rx(this, pset_name, static_cast<real_T>(pset_cfreq), static_cast<real_T>(Fsw),
       1.0 / static_cast<real_T>(Fsw), static_cast<real_T>(pset_bwidth), bband,
       bband_fs, params->verbose, params->c32_sequence,
       params->pset_chip_len_mul, params->doppler_correction,
       params->doppler_max_speed, pkt, pkt_bytes, state);

    // 'swig_rx:128' if (params.stream_passband)
    if (params->stream_passband != 0.0) {
      // 'swig_rx:129' state.after = state.after + (1024 - 128) / pband_fs;
      state->after += 896.0 / params->stream_fs;
    }
  }
}

// End of code generation (SWiG_rx_class.cpp)
