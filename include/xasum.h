#ifndef XASUM_H_
#define XASUM_H_

/**
    \file
    \brief Складывает элементы массива.
*/


/**
    Меняет местами массивы из элементов типа float
    \param[in] n Размер массива
    \param[in] x Ссылка на первый элемент массива
    \param[in] incx Расстояние между элементами массива
 */
float cblas_sasum (const int n, const float *x, const int incx);

/**
    Меняет местами массивы из элементов типа double
    \param[in] n Размер массива
    \param[in] x Ссылка на первый элемент массива
    \param[in] incx Расстояние между элементами массива
 */
double cblas_dasum (const int n, const double *x, const int incx);

#endif // xasum.h
 
