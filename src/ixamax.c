int cblas_isamax (const int n, const float *x, const int incx){
	int max_index = 0;
	float max = x[0];
	for (int i = 0; i < n; i++) {
		float current = x[i*incx];
		if (current > max) {
			max_index = i*incx;
			max = current;
		}
	}
	return max_index;
}
int cblas_idamax (const int n, const double *x, const int incx){
	int max_index = 0;
	double max = x[0];
	for (int i = 0; i < n; i++) {
		double current = x[i*incx];
		if (current > max) {
			max_index = i*incx;
			max = current;
		}
	}
	return max_index;
}
