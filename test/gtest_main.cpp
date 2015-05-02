#include <stdio.h>
#include "gtest.h"

/**
    \file
    \brief Точка входа в программу и запуск тестов
 
    Запуск консольного приложения всегда начинается с функции main.
    Написанный в этой функции код инициализирует и запускает Google Test.
    Компилируется компилятором C++, а не C. 
    
    (Это очень избыточное описание, но мне нужен пример для Doxygen)
 
 */
GTEST_API_ int main(int argc, char **argv) {
  printf("Running main() from gtest_main.cc\n");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}