float cblas_sasum (const int n, const float *x, const int incx){
	float result = 0;
	for (int i = 0; i < n; i++) {
		result += *(x + i * incx);
	}
	return result;
}

double cblas_dasum (const int n, const double *x, const int incx){
	double result = 0;
	for (int i = 0; i < n; i++) {
		result += *(x + i * incx);
	}
	return result;
}
