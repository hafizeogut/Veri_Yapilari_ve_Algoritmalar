all: compile run



compile:
	g++ -I ./include/ -o ./lib/Position.o -c ./src/Position.cpp
	g++ -I ./include/ -o ./lib/Stack.o -c ./src/Stack.cpp
	g++ -I ./include/ -o ./bin/main ./lib/Position.o ./lib/Stack.o ./src/main.cpp


run:
	./bin/main