float cblas_sasum (const int n, const float *x, const int incx){
	float result = 0;
	for (int i = 0; i < n; i+=incx) {
		//Арифметика укаателей, это смерть производительности
		//Старайтесь использовать [] везде где только можно
		//Самым лучшим вариантом исправить такой код будет изменить условие прохода цикла на
		//for (int i = 0; i < n*incx; i+=incx) и тело цикла под него
		result += x[i];
	}
	return result;
}

double cblas_dasum (const int n, const double *x, const int incx){
	double result = 0;
	for (int i = 0; i < n; i+=incx) {
		result += x[i];
	}
	return result;
}
