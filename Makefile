all: build_cpp

build/%: %.cpp
	mkdir -p build
	g++ $< -o $@

build_cpp: $(addprefix build/,$(basename $(wildcard *.cpp)))

clean:
	rm -rf build/
