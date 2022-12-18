//
// main.cpp
//
// Code generation for function 'main'
//

/*************************************************************************/
/* This automatically generated example C++ main file shows how to call  */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

// Include files
#include "main.h"
#include "SWiG_tx_class.h"
#include "rt_nonfinite.h"
#include "swig_tx_types.h"
#include "coder_array.h"

// Function Declarations
static void argInit_1x32_real_T(real_T result[32]);
static void argInit_1x3_char_T(char_T result[3]);
static void argInit_1x8_char_T(char_T result[8]);
static void argInit_1x9_char_T(char_T result[9]);
static coder::array<char_T, 2U> argInit_1xUnbounded_char_T();
static char_T argInit_char_T();
static real_T argInit_real_T();
static void argInit_struct0_T(SWiG_tx_namespace::struct0_T *result);
static uint64_T argInit_uint64_T();

// Function Definitions
static void argInit_1x32_real_T(real_T result[32])
{
  // Loop over the array to initialize each element.
  for (int32_T idx1{0}; idx1 < 32; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_real_T();
  }
}

static void argInit_1x3_char_T(char_T result[3])
{
  // Loop over the array to initialize each element.
  for (int32_T idx1{0}; idx1 < 3; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_char_T();
  }
}

static void argInit_1x8_char_T(char_T result[8])
{
  // Loop over the array to initialize each element.
  for (int32_T idx1{0}; idx1 < 8; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_char_T();
  }
}

static void argInit_1x9_char_T(char_T result[9])
{
  // Loop over the array to initialize each element.
  for (int32_T idx1{0}; idx1 < 9; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_char_T();
  }
}

static coder::array<char_T, 2U> argInit_1xUnbounded_char_T()
{
  coder::array<char_T, 2U> result;

  // Set the size of the array.
  // Change this size to the value that the application requires.
  result.set_size(1, 2);

  // Loop over the array to initialize each element.
  for (int32_T idx0{0}; idx0 < 1; idx0++) {
    for (int32_T idx1{0}; idx1 < result.size(1); idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result[idx1] = argInit_char_T();
    }
  }

  return result;
}

static char_T argInit_char_T()
{
  return '?';
}

static real_T argInit_real_T()
{
  return 0.0;
}

static void argInit_struct0_T(SWiG_tx_namespace::struct0_T *result)
{
  real_T result_tmp;

  // Set the value of each structure field.
  // Change this value to the value that the application requires.
  result_tmp = argInit_real_T();
  result->chip_len_exp = result_tmp;
  result->pset_chip_len_mul = result_tmp;
  result->stream_fs = result_tmp;
  argInit_1x3_char_T(result->stream_driver);
  result->stream_bps = result_tmp;
  result->stream_passband = result_tmp;
  result->stream_channels = result_tmp;
  result->stream_channel = result_tmp;
  result->stream_amp = result_tmp;
  result->stream_mul = result_tmp;
  result->pad = result_tmp;
  result->wut = result_tmp;
  result->packet_tx_rx = result_tmp;
  result->packet_forward = result_tmp;
  result->packet_class_id = result_tmp;
  result->packet_app_type = result_tmp;
  result->packet_reserv_time = result_tmp;
  result->packet_repeat_int = result_tmp;
  result->doppler_correction = result_tmp;
  result->doppler_max_speed = result_tmp;
  result->verbose = result_tmp;
  argInit_1x8_char_T(result->sequence_32_chips);
  argInit_1x32_real_T(result->c32_sequence);
  argInit_1x9_char_T(result->stream_driver_args);
  result->packet_mobility = argInit_uint64_T();
  result->packet_app_data = argInit_1xUnbounded_char_T();
  result->stream_format[0] = result->stream_driver[0];
  result->stream_format[1] = result->stream_driver[1];
  result->stream_format[2] = result->stream_driver[2];
}

static uint64_T argInit_uint64_T()
{
  return 0ULL;
}

int32_T main(int32_T, char **)
{
  SWiG_tx_namespace::SWiG_tx_class *classInstance;
  classInstance = new SWiG_tx_namespace::SWiG_tx_class;

  // Invoke the entry-point functions.
  // You can call entry-point functions multiple times.
  main_swig_tx(classInstance);
  delete classInstance;
  return 0;
}

void main_swig_tx(SWiG_tx_namespace::SWiG_tx_class *instancePtr)
{
  coder::array<creal_T, 1U> bband;
  coder::array<real_T, 2U> passband;
  SWiG_tx_namespace::struct0_T params;
  SWiG_tx_namespace::struct1_T pkt;
  SWiG_tx_namespace::struct2_T state;
  real_T Rate_value_tmp;

  // Initialize function 'swig_tx' input arguments.
  Rate_value_tmp = argInit_real_T();

  // Initialize function input argument 'params'.
  argInit_struct0_T(&params);

  // Call the entry-point 'swig_tx'.
  instancePtr->swig_tx(Rate_value_tmp, Rate_value_tmp, &params, passband, bband,
                       &pkt, &state);
}

// End of code generation (main.cpp)
