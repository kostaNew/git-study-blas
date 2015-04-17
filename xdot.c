float cblas_sdot (const int n, const float *x, const int incx, const float *y, const int incy) {
	float result = 0;
	int i;
	for (i = 0; i < n; i++) {
		float current_x = *(x + incx * i);
		float current_y = *(y + incy * i);
		result += current_x * current_y;
	}
	return result;
}

double cblas_ddot (const int n, const double *x, const int incx, const double *y, const int incy) {
	double result = 0;
	int i;
	for (i = 0; i < n; i++) {
		double current_x = *(x + incx * i);
		double current_y = *(y + incy * i);
		result += current_x * current_y;
	}
	return result;
}
