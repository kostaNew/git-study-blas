# include "gtest.h"
extern "C" {
	# include "xasum.h"
}

//Сделать массивы больше
//Нужны тесты на inc? != 1

TEST(xasumFloatTest, postive) {
	const int size = 30;
	float test[size];
	int incx = 2;
	for (int i = 0; i < size; i++) {
		test[i] = i;

	}
	float result = cblas_sasum(size, test, incx);
	ASSERT_FLOAT_EQ(210, result);
}

TEST(xasumDoubleTest, postive) {
	const int size = 30;
	double test[size];
	int incx = 2;
	for (int i = 0; i < size; i++) {
		test[i] = i;

	}
	double result = cblas_dasum(size, test, incx);
	ASSERT_DOUBLE_EQ(210, result);
}
