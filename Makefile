# the compiler: gcc for C program, define as g++ for C++
CC= g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CXXFLAGS= -std=c++17 -g -Wall

OBJECTS = planet.o 
HEADERS := $(shell find . -path ./test -prune -o -name "*.hpp" -print)

.PHONEY: main clean build run delds 

main: main.o $(OBJECTS)
	$(CC) $(CXXFLAGS) -o ptrack.exe $^

$(OBJECTS): $(HEADERS)

clean: 
	$(RM) *.o *.gch *.s ptrack.exe

build: clean main

run: main
	./ptrack.exe
