#ifndef XAXPY_H_
#define XAXPY_H_

void cblas_saxpy (const int n, const float a, const float *x, const int incx, float *y, const int incy);

void cblas_daxpy (const int n, const double a, const double *x, const int incx, double *y, const int incy);

#endif // xaxpy.h
