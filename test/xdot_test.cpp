# include "gtest.h"
extern "C" {
	# include "xdot.h"
}


/**
    \file
    \brief Тесты для скалярного произведения векторов
*/


/**
    Наивный тест скалярного произведения векторов типа float.
    Incx, incy равны 1.
 */

TEST(xdotFloatTest, postive) {
	const int vector_size = 100;
	const int inc = 1;
	float x_vec[vector_size];
	float y_vec[vector_size];
	for (int i = 0; i < vector_size; i++) {
		x_vec[i] = 1;
		y_vec[i] = 2;
	}

	float dot_res = cblas_sdot(vector_size, x_vec, inc, y_vec, inc);

	ASSERT_FLOAT_EQ(200, dot_res);
}


/**
    Наивный тест скалярного произведения векторов типа double.
    Incx, incy равны 1.
 */
TEST(xdotDoubleTest, postive) {
	const int vector_size = 100;
	const int inc = 1;
	double x_vec[vector_size];
	double y_vec[vector_size];
	for (int i = 0; i < vector_size; i++) {
		x_vec[i] = 2;
		y_vec[i] = 1;
	}

	double dot_res = cblas_ddot(vector_size, x_vec, inc, y_vec, inc);
	
	ASSERT_DOUBLE_EQ(200, dot_res);
}



/**
    Тест различных incx, incy для скалярного произведения векторов типа float.
 */
TEST(xdotFloatIncTest, postive) {
	const int vector_size = 150;
	const int incx = 3;
	const int incy = 5;
	const int x_holder_size = 1+(vector_size-1)*incx;
	const int y_holder_size = 1+(vector_size-1)*incy;
	float x_vec[x_holder_size];
	float y_vec[y_holder_size];
	for (int i = 0; i < x_holder_size; i++) {
		x_vec[i] = 1;
		y_vec[i] = 2;
	}
	for (int i = x_holder_size; i < y_holder_size; i++) {
		y_vec[i] = 2;
	}

	float dot_res = cblas_sdot(vector_size, x_vec, incx, y_vec, incy);
	
	ASSERT_FLOAT_EQ(300, dot_res);
}

/**
    Тест различных incx, incy для скалярного произведения векторов типа double.
 */
TEST(xdotDoubleIncTest, postive) {
	const int vector_size = 150;
	const int incx = 5;
	const int incy = 3;
	const int x_holder_size = 1+(vector_size-1)*incx;
	const int y_holder_size = 1+(vector_size-1)*incy;
	double x_vec[x_holder_size];
	double y_vec[y_holder_size];
	for (int i = 0; i < y_holder_size; i++) {
		x_vec[i] = 1;
		y_vec[i] = 2;
	}
	for (int i = y_holder_size; i < x_holder_size; i++) {
		x_vec[i] = 1;
	}

	double dot_res = cblas_ddot(vector_size, x_vec, incx, y_vec, incy);
	
	ASSERT_DOUBLE_EQ(300, dot_res);
}
