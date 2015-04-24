CC = gcc
CC_FLAGS = -std=c99 -O0
CCC = g++
CCC_FLAGS = -O0
HEADERS = ./include/
TEST = ./test/
SRC = ./src/
OBJ = ./obj/
BIN = ./bin/

all: study_blas

study_blas: $(OBJ)ixamax.o $(OBJ)xasum.o $(OBJ)xdot.o $(OBJ)xscal.o
	$(CC) $(CC_FLAGS) $(OBJ)ixamax.o $(OBJ)xasum.o $(OBJ)xdot.o $(OBJ)xscal.o -shared -o $(BIN)study_blas.so

$(OBJ)ixamax.o: $(SRC)ixamax.c
	$(CC) $(CC_FLAGS) -c $(SRC)ixamax.c -I$(HEADERS) -o $(OBJ)ixamax.o

$(OBJ)xasum.o: $(SRC)xasum.c
	$(CC) $(CC_FLAGS) -c $(SRC)xasum.c -I$(HEADERS) -o $(OBJ)xasum.o

$(OBJ)xdot.o: $(SRC)xdot.c
	$(CC) $(CC_FLAGS) -c $(SRC)xdot.c -I$(HEADERS) -o $(OBJ)xdot.o

$(OBJ)xscal.o: $(SRC)xscal.c
	$(CC) $(CC_FLAGS) -c $(SRC)xscal.c -I$(HEADERS) -o $(OBJ)xscal.o

#bad code
#$(OBJ)xswap.o: $(SRC)xswap.c
#	$(CC) $(FLAGS) -c $(SRC)xswap.c -I$(HEADERS) -o $(OBJ)xswap.o

#tests

tests: blas_test

blas_test: $(OBJ)ixamax.o $(OBJ)xasum.o $(OBJ)xdot.o $(OBJ)xscal.o $(OBJ)gtest-all.obj $(OBJ)gtest_main.obj $(OBJ)xcopy_test.obj
	$(CCC) $(CCC_FLAGS) $(OBJ)ixamax.o $(OBJ)xasum.o $(OBJ)xdot.o $(OBJ)xscal.o $(OBJ)gtest-all.obj $(OBJ)gtest_main.obj $(OBJ)xcopy_test.obj -lpthread -o $(BIN)blas_test

$(OBJ)gtest-all.obj: ./third_party/gtest/gtest-all.cc
	$(CCC) $(CCC_FLAGS) -c ./third_party/gtest/gtest-all.cc -lpthread -I./third_party/gtest/ -I$(HEADERS) -o $(OBJ)gtest-all.obj

$(OBJ)gtest_main.obj: ./third_party/gtest/gtest-all.cc
	$(CCC) $(CCC_FLAGS) -c $(TEST)gtest_main.cpp -lpthreads -I./third_party/gtest/ -I$(HEADERS) -o $(OBJ)gtest_main.obj
	
$(OBJ)xcopy_test.obj: ./third_party/gtest/gtest-all.cc
	$(CCC) $(CCC_FLAGS) -c $(TEST)xcopy_test.cpp -lpthreads -I./third_party/gtest/ -I$(HEADERS) -o $(OBJ)xcopy_test.obj
	
clean:
	rm -rf $(OBJ)*.o $(OBJ)*.obj
	rm -rf bin/study_blas
