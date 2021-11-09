# the compiler: gcc for C program, define as g++ for C++
CC= g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CXXFLAGS= -std=c++17 -g -Wall

OBJECTS = ./planet/planet.o ./population/populationunit.o ./planet/districts/district.o \
			./planet/buildings/building.o ./attributes/attributes.o ./planet/districts/districtfactory.o
HEADERS := $(shell find . -path ./test -prune -o -name "*.hpp" -print)

.PHONEY: main clean build run delds

main: main.o $(OBJECTS)
	$(CC) $(CXXFLAGS) -o ptrack.exe $^

$(OBJECTS): $(HEADERS)

clean:
	$(RM) ./attributes/*.{o,gch,s,exe}
	$(RM) ./planet/*.{o,gch,s,exe}
	$(RM) ./planet/districts/*.{o,gch,s,exe}
	$(RM) ./planet/buildings/*.{o,gch,s,exe}
	$(RM) ./population/*.{o,gch,s,exe}
	$(RM) *.{o,gch,s,exe}

build: clean main

run: main
	./ptrack.exe
