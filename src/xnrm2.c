#include<math.h>
#include"xnrm2.h"

float cblas_snrm2 (const int n, const float *x, const int incx)
{
	float res = 0;
	for(int i = 0; i < n*incx; i+=i*incx) res += x[i]*x[i];
	return sqrt(res);
}

double cblas_dnrm2 (const int n, const double *x, const int incx)
{
	double res = 0; 
	for(int i = 0; i < n*incx; i+=i*incx) res += x[i]*x[i];
	return sqrt(res);
}
