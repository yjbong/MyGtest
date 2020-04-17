CC=g++
CPPFLAG=-std=c++11 -Iinclude -Llib
all:
	$(CC) -o main main.cpp func.cpp $(CPPFLAG)
test:
	$(CC) -o test testmain.cpp func.cpp $(CPPFLAG) -pthread -lgtest
	./test
clean:
	rm main test
