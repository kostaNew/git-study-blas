# include "gtest.h"
extern "C" {
	# include "xdot.h"
}

TEST(xdotFloatTest, postive) {
	int size = 5;
	float test1[size];
	float test2[size];
	for (int i = 0; i < size; i++) {
		test1[i] = i;
		test2[i] = 2*i;
	}

	float dot_res = cblas_sdot(size, test1, 1, test2, 1);

	ASSERT_FLOAT_EQ(60, dot_res);
} 

TEST(xdotDoubleTest, postive) {
	int size = 5;
	double test1[size];
	double test2[size];
	for (int i = 0; i < size; i++) {
		test1[i] = i;
		test2[i] = 2*i;
	}

	double dot_res = cblas_ddot(size, test1, 1, test2, 1);
	
	ASSERT_DOUBLE_EQ(60, dot_res);
} 
