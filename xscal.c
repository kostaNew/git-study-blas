void cblas_sscal (const int n, const float a, float *x, const int incx)
{
	int i=0,t;
	for(t=0;t<n;t++)
	{
		*(x + incx * i) *= a;
	}	
}
void cblas_dscal (const int n, const double a, double *x, const int incx)
{
	int i=0,t;
	for(t=0;t<n;t++)
		{
		*(x + incx * i) *= a;
		}
}
