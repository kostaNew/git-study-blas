#ifndef XDOT_H_
#define XDOT_H_

/**
    \file
    \brief Вычисляет скалярное произведение векторов.
*/


/**
    Вычисляет скалярное произведение векторов типа float
    \param[in] n Размер массива
    \param[in] x Ссылка на первый элемент первого массива
    \param[in] incx Расстояние между элементами первого массива
    \param[in] y Ссылка на первый элемент второго массива
    \param[in] incy Расстояние между элементами второго массива
 */
float cblas_sdot (const int n, const float *x, const int incx, const float *y, const int incy);

/**
    Вычисляет скалярное произведение векторов типа double
    \param[in] n Размер массива
    \param[in] x Ссылка на первый элемент первого массива
    \param[in] incx Расстояние между элементами первого массива
    \param[in] y Ссылка на первый элемент второго массива
    \param[in] incy Расстояние между элементами второго массива
 */
double cblas_ddot (const int n, const double *x, const int incx, const double *y, const int incy);

#endif // xdot.h
