all: mandelbrot

mandelbrot: *.cpp
	g++ -std=c++11 -ggdb -o mandelbrot *.cpp
	
tests: *.cpp
	g++ -std=c++11 -DTESTS -I../gtest/include ../gtest/lib/gtest_main.a -lpthread -ggdb -o UEB2_tests *.cpp

run: mandelbrot
	../DrMemory-Linux-2.1.0-1/bin64/drmemory -- mandelbrot -show_reachable
	
run_tests: tests
	../DrMemory-Linux-2.1.0-1/bin64/drmemory -- UEB2_tests
	
clean:
	rm -f mandelbrot.exe mandelbrot UEB*_tests.exe UEB*_tests *.o
