
all: Add.exe

Add.exe: main.o
	 g++ -o Add.exe main.o

main.o: main.cpp
	 g++ -std=c++11 -c main.cpp 
     
clean:
	 rm main.o Add.exe
