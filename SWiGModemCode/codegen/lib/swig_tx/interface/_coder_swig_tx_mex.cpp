//
// _coder_swig_tx_mex.cpp
//
// Code generation for function 'swig_tx'
//

// Include files
#include "_coder_swig_tx_mex.h"
#include "_coder_swig_tx_api.h"

// Function Definitions
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&swig_tx_atexit);

  // Module initialization.
  swig_tx_initialize();

  // Dispatch the entry-point.
  unsafe_swig_tx_mexFunction(nlhs, plhs, nrhs, prhs);

  // Module termination.
  swig_tx_terminate();
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
    nullptr, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void unsafe_swig_tx_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T nrhs,
  const mxArray *prhs[3])
{
  emlrtStack st{ nullptr,              // site
    nullptr,                           // tls
    nullptr                            // prev
  };

  const mxArray *outputs[4];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;

  // Check for proper number of arguments.
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4, 7,
                        "swig_tx");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 7,
                        "swig_tx");
  }

  // Call the function.
  swig_tx_api(prhs, nlhs, outputs);

  // Copy over outputs to the caller.
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }

  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

// End of code generation (_coder_swig_tx_mex.cpp)
