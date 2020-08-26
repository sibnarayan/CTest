
all: hello.exe

hello.exe: main.o
	 g++ -o hello.exe main.o

main.o: main.cpp
	 g++ -std=c++11 -c main.cpp -I ./classLargestSum.h
     
clean:
	 rm main.o hello.exe
