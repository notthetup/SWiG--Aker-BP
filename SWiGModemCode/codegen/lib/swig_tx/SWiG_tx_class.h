//
// SWiG_tx_class.h
//
// Code generation for function 'SWiG_tx_class'
//
#ifndef SWIG_TX_CLASS_H
#define SWIG_TX_CLASS_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include <cstddef>
#include <cstdlib>

// Type Declarations
namespace SWiG_tx_namespace
{
  struct struct0_T;
  struct struct1_T;
  struct struct2_T;
}

// Type Definitions
namespace SWiG_tx_namespace
{
  class SWiG_tx_class
  {
   public:
    SWiG_tx_class();
    ~SWiG_tx_class();
    void swig_tx(real_T Rate_value, real_T Fc_value, const struct0_T *params, ::
                 coder::array<real_T, 2U> &passband, ::coder::array<creal_T, 1U>
                 &bband, struct1_T *pkt, struct2_T *state);
    real_T verbose;
  };
}

#endif

// End of code generation (SWiG_tx_class.h)
