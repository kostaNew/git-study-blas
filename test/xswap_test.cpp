#include "gtest.h"
extern "C" {
	# include "xswap.h"
}

//Нужно два отдельных теста под double и float варианты.
//Тесты при inc? != 1

TEST(xswapTest, postive) {
    double a[10] = {1,2,3,4,5,6,7,8,9,10};
    double b[10] = {10,9,8,7,6,5,4,3,2,1};
    
    double c[10] = {1,2,3,4,5,6,7,8,9,10};
    double d[10] = {10,9,8,7,6,5,4,3,2,1};
    
    cblas_dswap(10, a, 1, b, 1);
    
    for (int i=0; i<10; i++)
    {
        ASSERT_DOUBLE_EQ(d[i], a[i]);
        ASSERT_DOUBLE_EQ(c[i], b[i]);
    }
    
    
    float af[10] = {1,2,3,4,5,6,7,8,9,10};
    float bf[10] = {10,9,8,7,6,5,4,3,2,1};
    
    float cf[10] = {1,2,3,4,5,6,7,8,9,10};
    float df[10] = {10,9,8,7,6,5,4,3,2,1};
    
    cblas_sswap(10, af, 1, bf, 1);
    
    for (int i=0; i<10; i++)
    {
        ASSERT_FLOAT_EQ(df[i], af[i]);
        ASSERT_FLOAT_EQ(cf[i], bf[i]);
    }
}
