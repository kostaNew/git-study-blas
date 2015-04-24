int cblas_isamax (const int n, const float *x, const int incx){
	int ind = 0;
	float elem;
	float max = *(x + ind);
	for(int i=0; i<n;i++){
		elem = *(x + incx*i);
		if (elem >max){
			ind = i;
		}
	}
return ind;
}
int cblas_idamax (const int n, const double *x, const int incx){
	int ind = 0;
	double max = *(x + ind);
	double elem;
	for(int i=0; i<n;i++){
	    elem = *(x + incx*i);
		if (elem >max){
			ind = i;
		}
	}
return ind;	
}