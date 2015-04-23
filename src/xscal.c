void cblas_sscal (const int n, const float a, float *x, const int incx)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		*(x + incx * i) *= a;
	}	
}
void cblas_dscal (const int n, const double a, double *x, const int incx)
{
	int i=0;
	for(i=0;i<n;i++)
		{
		*(x + incx * i) *= a;
		}
}
