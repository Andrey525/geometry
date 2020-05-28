main:bin/prog

test: bin/main-test

build/test/main-test.o: test/main.c
	gcc -std=c99 -I thirdparty -I src -c test/main.c -o build/test/main-test.o

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

bin/main-test: build/test/main-test.o build/src/intersection.o build/src/triangle.o build/src/circle.o
	gcc -Wall -Werror build/test/main-test.o build/src/intersection.o build/src/triangle.o build/src/circle.o -lm -o bin/main-test

clean: 
	rm -rf Vivod bin/prog bin/main-test build/src/*.o	build/test/*.o

.PHONY: all clean 

