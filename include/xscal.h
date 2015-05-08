#ifndef XSCAL_H_
#define XSCAL_H_

/**
    \file
    \brief  На скаляр умножает
    		Массив
*/


/**
    На скаляр умножает
    Значений массив
    Double

    \param[in] n Число элементов массива
    \param[in] alpha А вот и скаляр типа Double
    \param[in] a Ссылка на первый элемент массива
    \param[in] incx Расстояние между элементами массива

 */
void cblas_sscal (const int n, const float a, float *x, const int incx);

/**
    На скаляр умножает
    Значений массив
    Float

    \param[in] n Число элементов массива
    \param[in] alpha А вот и скаляр типа Float
    \param[in] a Ссылка на первый элемент массива
    \param[in] incx Расстояние между элементами массива

 */
void cblas_dscal (const int n, const double a, double *x, const int incx);

#endif // xscal.h
