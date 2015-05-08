#include <omp.h>

float cblas_sdot (const int n, const float *x, const int incx, const float *y, const int incy) {
	float result = 0;
	#pragma omp parallel for reduction(+:result)
	for (int i = 0; i < n; i++)
	{
		result += x[i*incx] * y[i*incy];
	}
	return result;
}

double cblas_ddot (const int n, const double *x, const int incx, const double *y, const int incy) {
	double result = 0; 
	#pragma omp parallel for reduction(+:result)
	for (int i = 0; i < n; i++) {
		result += x[i*incx] * y[i*incy];
	}
	return result;
}
