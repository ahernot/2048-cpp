# Define commands as not actual files that are generated
.PHONY: all run clean


# Command line variables
CXX = g++  # compiler
FLAGS = -g -c

# Paths
EXECUTABLE = Game
SOURCEDIR = ./src
BUILDDIR = ./build

# Files
SOURCES = $(wildcard $(SOURCEDIR)/*.cpp)  # Find all .cpp files in ./src
OBJECTS = $(patsubst $(SOURCEDIR)/%.cpp, $(BUILDDIR)/%.o, $(SOURCES))  # Replace extension .cpp with .o


# Executed on "make" (default) and on "make all"
all: Game


# Combine compiled files (implicit compiling through g++ -c header.h code.cpp for each file)
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $^ -o $@
#	$(CXX) -o $(EXECUTABLE) build/$(OBJECTS)

# Compile files
$(OBJECTS): $(BUILDDIR)/%.o : $(SOURCEDIR)/%.cpp
	$(CXX) $(FLAGS) $< -o $@


# Executed on "make run"
run:
	./$(EXECUTABLE)

# Executed on "make clean"
clean:
	$(RM) build/*.o mygame
