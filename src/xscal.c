void cblas_sscal (const int n, const float a, float *x, const int incx)
{

	for(int i=0;i<n*incx;i+=incx)
	{
		x[i]*=a;
	}	
}
void cblas_dscal (const int n, const double a, double *x, const int incx)
{
	for(int i=0;i<n*incx;i+=incx)
	{
		x[i]*=a;
	}
}
