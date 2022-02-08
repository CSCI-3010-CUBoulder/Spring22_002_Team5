CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: test


clean:
        rm test

main: test.cpp
        $(CXX) $(CXXFLAGS) test.cpp -o test
