CC = gcc
CC_FLAGS = -std=c99 -O0 -fPIC
CCC = g++
CCC_FLAGS = -O0
HEADERS = ./include/
TEST = ./test/
SRC = ./src/
OBJ = ./obj/
BIN = ./bin/

all: study_blas

study_blas: $(OBJ)ixamax.o $(OBJ)xasum.o $(OBJ)xdot.o $(OBJ)xscal.o $(OBJ)xnrm2.o $(OBJ)xswap.o
	$(CC) $(CC_FLAGS) $(OBJ)ixamax.o $(OBJ)xasum.o $(OBJ)xdot.o $(OBJ)xscal.o $(OBJ)xnrm2.o $(OBJ)xswap.o -shared -o $(BIN)study_blas.so

$(OBJ)xnrm2.o: $(SRC)xnrm2.c
	$(CC) $(CC_FLAGS) -c $(SRC)xnrm2.c -I$(HEADERS) -o $(OBJ)xnrm2.o

$(OBJ)ixamax.o: $(SRC)ixamax.c
	$(CC) $(CC_FLAGS) -c $(SRC)ixamax.c -I$(HEADERS) -o $(OBJ)ixamax.o

$(OBJ)xasum.o: $(SRC)xasum.c
	$(CC) $(CC_FLAGS) -c $(SRC)xasum.c -I$(HEADERS) -o $(OBJ)xasum.o

$(OBJ)xdot.o: $(SRC)xdot.c
	$(CC) $(CC_FLAGS) -c $(SRC)xdot.c -I$(HEADERS) -o $(OBJ)xdot.o

$(OBJ)xscal.o: $(SRC)xscal.c
	$(CC) $(CC_FLAGS) -c $(SRC)xscal.c -I$(HEADERS) -o $(OBJ)xscal.o

$(OBJ)xswap.o: $(SRC)xswap.c
	$(CC) $(CC_FLAGS) -c $(SRC)xswap.c -I$(HEADERS) -o $(OBJ)xswap.o

#test

test: blas_test

blas_test: study_blas test_main test_cases
	$(CCC) $(CCC_FLAGS) \
	$(OBJ)ixamax.o $(OBJ)xasum.o $(OBJ)xdot.o $(OBJ)xscal.o $(OBJ)xswap.o \
	$(OBJ)gtest-all.obj $(OBJ)gtest_main.obj \
	$(OBJ)ixamax_test.obj $(OBJ)xasum_test.obj $(OBJ)xdot_test.obj $(OBJ)xscal_test.obj $(OBJ)xswap_test.obj \
	-lpthread -o $(BIN)blas_test

test_main: $(OBJ)gtest-all.obj $(OBJ)gtest_main.obj
	
test_cases: $(OBJ)ixamax_test.obj $(OBJ)xasum_test.obj $(OBJ)xdot_test.obj $(OBJ)xscal_test.obj $(OBJ)xswap_test.obj
	
$(OBJ)gtest-all.obj: ./third_party/gtest/gtest-all.cc
	$(CCC) $(CCC_FLAGS) -c ./third_party/gtest/gtest-all.cc -lpthread -I./third_party/gtest/ -I$(HEADERS) -o $(OBJ)gtest-all.obj

$(OBJ)gtest_main.obj:  $(TEST)gtest_main.cpp 
	$(CCC) $(CCC_FLAGS) -c $(TEST)gtest_main.cpp -lpthreads -I./third_party/gtest/ -I$(HEADERS) -o $(OBJ)gtest_main.obj

#Test cases
$(OBJ)ixamax_test.obj: $(TEST)ixamax_test.cpp
	$(CCC) $(CCC_FLAGS) -c $(TEST)ixamax_test.cpp -lpthreads -I./third_party/gtest/ -I$(HEADERS) -o $(OBJ)ixamax_test.obj
	
$(OBJ)xasum_test.obj: $(TEST)xasum_test.cpp
	$(CCC) $(CCC_FLAGS) -c $(TEST)xasum_test.cpp -lpthreads -I./third_party/gtest/ -I$(HEADERS) -o $(OBJ)xasum_test.obj
	
$(OBJ)xdot_test.obj: $(TEST)xdot_test.cpp
	$(CCC) $(CCC_FLAGS) -c $(TEST)xdot_test.cpp -lpthreads -I./third_party/gtest/ -I$(HEADERS) -o $(OBJ)xdot_test.obj
	
$(OBJ)xscal_test.obj: $(TEST)xscal_test.cpp
	$(CCC) $(CCC_FLAGS) -c $(TEST)xscal_test.cpp -lpthreads -I./third_party/gtest/ -I$(HEADERS) -o $(OBJ)xscal_test.obj

$(OBJ)xswap_test.obj: $(TEST)xswap_test.cpp
	$(CCC) $(CCC_FLAGS) -c $(TEST)xswap_test.cpp -lpthreads -I./third_party/gtest/ -I$(HEADERS) -o $(OBJ)xswap_test.obj
	
clean:
	rm -rf $(OBJ)*.o $(OBJ)*.obj
	rm -rf bin/study_blas
