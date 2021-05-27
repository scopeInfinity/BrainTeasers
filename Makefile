build_cpp: *.cpp
	mkdir -p build
	g++ GameOfPointers.cpp -o build/game_of_pointers

clean:
	rm -rf build/