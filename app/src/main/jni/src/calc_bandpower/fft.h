/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: fft.h
 *
 * MATLAB Coder version            : 3.0
 * C/C++ source code generated on  : 10-May-2016 22:57:56
 */

#ifndef __FFT_H__
#define __FFT_H__

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "calc_bandpower_types.h"

/* Function Declarations */
extern void fft(const double x[256], creal_T y[512]);

#endif

/*
 * File trailer for fft.h
 *
 * [EOF]
 */
