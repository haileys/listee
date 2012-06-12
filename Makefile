CXX=g++
CXXFLAGS=-std=c++0x -g

.PHONY: all default test

.SILENT:

all: default

default: test

test: test.o listee.h
	$(CXX) $^ -o $@


%.o: %.c
	$(CXX) -c $@ $< $(CXXFLAGS)

%.h :
	$(CXX) -c $@ $(CXXFLAGS)

clean:
	rm -f *.o test *.gch
