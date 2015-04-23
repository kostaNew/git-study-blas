#include "xswap.h"

void cblas_sswap (const int n, float *x, const int incx, float *y, const int incy)
{
	t = (float*) malloc(n);		//Temp array
	
	
	for (int i=0; i < n; i++)
	{
		t[i] = *(x+i*incx);
		*(x + i*incx) = *(y+i*incy);
		*(y+i*incy) = t[i];
	}

	free(t);
}

void cblas_dswap (const int n, double *x, const int incx, double *y, const int incy)
{
	t = (double*) malloc(n);	//Temp array
	
	for (int i=0; i < n; i++)
	{
		t[i] = *(x+i*incx);
		*(x + i*incx) = *(y+i*incy);
		*(y+i*incy) = t[i];
	}

	free(t);
}