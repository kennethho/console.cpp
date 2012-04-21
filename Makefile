.PHONY: all clean distclean release debug

all: release

release: console

console: src/console.cpp src/buffer.cpp src/main.cpp
	$(CXX) -std=c++0x -Iinclude/ -O3 -o $@ $+
