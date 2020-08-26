
all: Test.exe

Test.exe: main.o
	 g++ -o Test.exe main.o

main.o: main.cpp
	 g++ -std=c++11 -c main.cpp -I ./classLargestSum.h
     
clean:
	 rm main.o Test.exe
