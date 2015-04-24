# include "gtest.h"
extern "C" {
	# include "ixamax.h"
}

TEST(ixamaxFloatTest, postive) {
	int size = 100;
	float vector[size];
	for (int i = 0; i < size; i++){
		vector[i] = i % 31;
	}
	float max_res = cblas_isamax(size, vector, 1);
	ASSERT_FLOAT_EQ(30, max_res);
} 
TEST(ixamaxDoubleTest, postive) {
	int size = 100;
	double vector[size];
	for (int i = 0; i < size; i++){
		vector[i] = i % 31;
	}
	double max_res = cblas_isamax(size, vector, 1);
	ASSERT_DOUBLE_EQ(30, max_res);
}
