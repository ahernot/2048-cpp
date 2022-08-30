# Define commands as not actual files that are generated
.PHONY: all run clean

# Variables
CXX = g++  # compiler
objects = main.o game.o

# Executed on "make" (default) and on "make all"
all: mygame

# Combine compiled files (implicit compiling through g++ -c header.h code.cpp for each file)
mygame: $(objects)
	$(CXX) -o mygame $(objects)

# Executed on "make run"
run:
	./mygame

# Executed on "make clean"
clean:
	$(RM) *.o mygame
