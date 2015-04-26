# include "gtest.h"
extern "C" {
	# include "xasum.h"
}

//Сделать массивы больше
//Нужны тесты на inc? != 1

TEST(xasumFloatTest, postive) {
	const int size = 30;
	float test[size];
	for (int i = 0; i < size; i++) {
		test[i] = i;

	}
	float result = cblas_sasum(size, test, 1);
	ASSERT_FLOAT_EQ(435, result);
}

TEST(xasumDoubleTest, postive) {
	const int size = 30;
	double test[size];
	for (int i = 0; i < size; i++) {
		test[i] = i;

	}
	double result = cblas_dasum(size, test, 1);
	ASSERT_DOUBLE_EQ(435, result);
}
