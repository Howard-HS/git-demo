CC = g++
FLAGS = --std=c++11
INPUT = main.cpp ./source/*.cpp
INCLUDES = -I ./headers
OUTPUT = -o helloWorld

make: all

all:
	$(CC) $(INPUT) $(INCLUDES) $(FLAGS) $(OUTPUT)

clean:
	rm -rf helloWorld
