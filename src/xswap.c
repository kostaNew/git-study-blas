#include <malloc.h>

void cblas_sswap (const int n, float *x, const int incx, float *y, const int incy)
{
	for (int i=0; i < n; i++)
	{
		float temp = x[i*incx];
		x[i*incx] = y[i*incy];
		y[i*incy] = temp;
	}
}

void cblas_dswap (const int n, double *x, const int incx, double *y, const int incy)
{
	for (int i=0; i < n; i++)
	{
		double temp = x[i*incx];
		x[i*incx] = y[i*incy];
		y[i*incy] = temp;
	}
}
