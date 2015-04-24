# include "gtest.h"
extern "C" {
	# include "ixamax.h"
}

TEST(ixamaxFloatTest, postive) {
	int size = 100;
	float test_arr[size];
	for (int i = 0; i < size; i++) {
		test_arr[i] = 0;
	}
	test_arr[19] = 117;
	int max_ind = cblas_isamax(size, test_arr, 1);
	ASSERT_FLOAT_EQ(19, max_ind);
} 
TEST(ixamaxDoubleTest, postive) {
	int size = 100;
	double test_arr[size];
	for (int i = 0; i < size; i++) {
		test_arr[i] = 0;
	}
	test_arr[17] = 117;
	int max_ind = cblas_idamax(size, test_arr, 1);
	ASSERT_DOUBLE_EQ(17, max_ind);
}
