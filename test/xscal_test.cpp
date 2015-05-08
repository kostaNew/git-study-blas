# include "gtest.h"
extern "C" {
	# include "xscal.h"
}

/**
    \file
    \brief Тесты для умножения массива на скаляр.
*/

/**
    Тест с массивом из 10 элементов с шагом=1 и скаляром=10.
 */
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
/**
    Тест с умножением массива на 0.
 */
TEST(xscalDoubleTest, postive) {
		double a[10] = {1,2,3,4,5,6,7,8,9,10};
		double b[10] = {0,0,0,0,0,0,0,0,0,0};
		double alpha = 0;
		cblas_dscal(10,alpha,a,1);

		 for (int i=0; i<10; i++)
		    {
		        ASSERT_DOUBLE_EQ(a[i], b[i]);
		    }
		}

/**
    Тест с умножением массива на отрицательный скаляр.
 */
TEST(xscalDoubleTest, postive) {
		double a[10] = {1,-2,3,4,-5,6,7,8,-9,10};
		double b[10] = {-3,6,-9,-12,15,-18,-21,-24,27,-30};
		double alpha = -3;
		cblas_dscal(10,alpha,a,1);
		for (int i=0; i<10; i++)
		    {
		        ASSERT_DOUBLE_EQ(a[i], b[i]);
		    }
		}
