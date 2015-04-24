#include "xaxpy.h"

cblas_saxpy (const int n, const float a, const float *x, const int incx, float *y, const int incy)
{
	int i;
	
	for (i = 0; i < n; ++i)
		y[i * incy] = y[i * incy] + a * x[i * incx];	
}

void cblas_daxpy (const int n, const double a, const double *x, const int incx, double *y, const int incy)
{
	int i;
	
	for (i = 0; i < n; ++i)
		y[i * incy] = y[i * incy] + a * x[i * incx];		
}
