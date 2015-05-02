#ifndef XSWAP_H_
#define XSWAP_H_

/**
    \file
    \brief Меняет местами два массива.
*/


/**
    Меняет местами массивы из элементов типа float
    \param[in] n Размер массива
    \param[in] x Ссылка на первый элемент первого массива
    \param[in] incx Расстояние между элементами первого массива
    \param[in] y Ссылка на первый элемент второго массива
    \param[in] incy Расстояние между элементами второго массива
 */
void cblas_sswap (const int n, float *x, const int incx, float *y, const int incy);

/**
    Меняет местами массивы из элементов типа double
    \param[in] n Размер массива
    \param[in] x Ссылка на первый элемент первого массива
    \param[in] incx Расстояние между элементами первого массива
    \param[in] y Ссылка на первый элемент второго массива
    \param[in] incy Расстояние между элементами второго массива
 */
void cblas_dswap (const int n, double *x, const int incx, double *y, const int incy);

#endif // xswap.h
