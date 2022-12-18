//
// SWiG_rx_class.h
//
// Code generation for function 'SWiG_rx_class'
//
#ifndef SWIG_RX_CLASS_H
#define SWIG_RX_CLASS_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "omp.h"
#include <cstddef>
#include <cstdlib>

// Type Declarations
namespace SWiG_rx_namespace
{
  struct struct0_T;
  struct struct1_T;
  struct struct2_T;
}

// Type Definitions
namespace SWiG_rx_namespace
{
  class SWiG_rx_class
  {
   public:
    SWiG_rx_class();
    ~SWiG_rx_class();
    void swig_rx(real_T Rate_value, real_T Fc_value, const struct0_T *params,
                 const ::coder::array<real_T, 2U> &signalIn, struct1_T *pkt,
                 struct2_T *state);
    real_T verbose;
  };
}

// Variable Declarations
namespace SWiG_rx_namespace
{
  extern omp_nest_lock_t swig_rx_nestLockGlobal;
}

#endif

// End of code generation (SWiG_rx_class.h)
