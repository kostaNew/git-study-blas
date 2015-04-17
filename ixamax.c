int cblas_isamax (const int n, const float *x, const int incx){
	int ind = 0;
	float max = *(x + incx);
	for(int i=0; i<n;i++){
		if (*(x + incx*i)>max){
			ind = i;
		}
	}
return ind;
}
int cblas_idamax (const int n, const double *x, const int incx){
	int ind = 0;
	double max = *(x + incx);
	for(int i=0; i<n;i++){
		if (*(x + incx*i)>max){
			ind = i;
		}
	}
return ind;	
}