# include "gtest.h"
extern "C" {
	# include "xasum.h"
}

TEST(xasumFloatTest, postive) {
	int size = 3;
	float test[size];
	for (int i = 0; i < size; i++) {
		test[i] = i;

	}
	float result = cblas_sasum(size, test, 1);
	ASSERT_FLOAT_EQ(3, result);
}

TEST(xasumDoubleTest, postive) {
	int size = 3;
	double test[size];
	for (int i = 0; i < size; i++) {
		test[i] = i;

	}
	double result = cblas_dasum(size, test, 1);
	ASSERT_DOUBLE_EQ(3, result);
}
