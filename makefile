CC = gcc
FLAGS = -std=c99 -O0 -fPIC
CCC = g++
HEADERS = ./include/
SRC = ./src/
OBJ = ./obj/
BIN = ./bin/

all: study_blas

study_blas: $(OBJ)ixamax.o $(OBJ)xasum.o $(OBJ)xdot.o $(OBJ)xscal.o
	$(CC) $(FLAGS) $(OBJ)ixamax.o $(OBJ)xasum.o $(OBJ)xdot.o $(OBJ)xscal.o -shared -o $(BIN)study_blas.so

$(OBJ)ixamax.o: $(SRC)ixamax.c
	$(CC) $(FLAGS) -c $(SRC)ixamax.c -I$(HEADERS) -o $(OBJ)ixamax.o

$(OBJ)xasum.o: $(SRC)xasum.c
	$(CC) $(FLAGS) -c $(SRC)xasum.c -I$(HEADERS) -o $(OBJ)xasum.o

$(OBJ)xdot.o: $(SRC)xdot.c
	$(CC) $(FLAGS) -c $(SRC)xdot.c -I$(HEADERS) -o $(OBJ)xdot.o

$(OBJ)xscal.o: $(SRC)xscal.c
	$(CC) $(FLAGS) -c $(SRC)xscal.c -I$(HEADERS) -o $(OBJ)xscal.o

#bad code
#$(OBJ)xswap.o: $(SRC)xswap.c
#	$(CC) $(FLAGS) -c $(SRC)xswap.c -I$(HEADERS) -o $(OBJ)xswap.o

#tests
tests: ./third_party/gtest/gtest-all.cc
	$(CCC) -c ./third_party/gtest/gtest-all.cc -I./third_party/gtest/ -o $(OBJ)gtest-all.obj

clean:
	rm -rf $(OBJ)*.o
	rm -rf bin/study_blas
