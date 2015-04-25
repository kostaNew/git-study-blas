void cblas_sscal (const int n, const float a, float *x, const int incx)
{
	//Мы используем стандарт с99. Переменные объявляются там, где используются
	//Если у вас не компилируется, используйте ключ компилятора -std=c99
	int i=0;
	//Лучше сделать "большой" шаг в цикле, а не умножение внутри на incx
	//for(int i=0;i<n*incx;i+=incx)
	for(i=0;i<n;i++)
	{
		//Используйте арифметику указателей как можно меньше
		//Она плоха для оптимизирующего компилятора
		//Пишите [] везде где это возможно
		//x[i]*=a;
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
