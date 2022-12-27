//
// _coder_swig_tx_mex.h
//
// Code generation for function 'swig_tx'
//
#ifndef _CODER_SWIG_TX_MEX_H
#define _CODER_SWIG_TX_MEX_H

// Include files
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"

// Function Declarations
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
  const mxArray *prhs[]);
emlrtCTX mexFunctionCreateRootTLS();
void unsafe_swig_tx_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T nrhs,
  const mxArray *prhs[3]);

#endif

// End of code generation (_coder_swig_tx_mex.h)
