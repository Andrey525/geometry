all:bin/prog

bin/prog: build/src/main.o build/src/circle.o build/src/triangle.o build/src/intersection.o
	gcc build/src/main.o build/src/circle.o build/src/triangle.o build/src/intersection.o -o bin/prog -lm 

build/src/main.o: src/main.c src/point.h
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/circle.o: src/circle.c src/point.h
	gcc -Wall -Werror -c src/circle.c -o build/src/circle.o

build/src/triangle.o: src/triangle.c src/point.h
	gcc -Wall -Werror -c src/triangle.c -o build/src/triangle.o

build/src/intersection.o: src/intersection.c src/point.h
	gcc -Wall -Werror -c src/intersection.c -o build/src/intersection.o

clean: 
	rm -rf Vivod bin/prog build/src/*.o	build/test/*.o

.PHONY: all clean 

