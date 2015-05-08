# include "gtest.h"
extern "C" {
	# include "xscal.h"
}

//Тесты?

TEST(xscalDoubleTest, postive) {
		double a[10] = {1,2,3,4,5,6,7,8,9,10};
		double b[10] = {10,20,30,40,50,60,70,80,90,100};
		double alpha = 10;
		cblas_dscal(10,alpha,a,1);

		 for (int i=0; i<10; i++)
		    {
		        ASSERT_DOUBLE_EQ(a[i], b[i]);
		    }
		}
