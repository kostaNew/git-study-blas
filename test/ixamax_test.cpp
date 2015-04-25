# include "gtest.h"
extern "C" {
	# include "ixamax.h"
}

//Нужны тесты на inc? != 1

TEST(ixamaxFloatTest, postive) {
	int size = 100;
	float test_arr[size];
	for (int i = 0; i < size; i++) {
		test_arr[i] = i % 31;
	}
	int max_ind = cblas_isamax(size, test_arr, 1);
	ASSERT_FLOAT_EQ(30, max_ind);
} 
TEST(ixamaxDoubleTest, postive) {
	int size = 100;
	double test_arr[size];
	for (int i = 0; i < size; i++) {
		test_arr[i] = i % 31;
	}
	int max_ind = cblas_idamax(size, test_arr, 1);
	ASSERT_DOUBLE_EQ(30, max_ind);
}
