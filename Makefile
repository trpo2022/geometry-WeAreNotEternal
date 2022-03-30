CFLAGS = -Wall -Wextra -Werror 
CCFLAGS = -Wall -Wextra -Wconversion -Wredundant-decls -Wshadow -Wno-unused-parameter
CC=g++
all: geometry

geometry: bin/geometry

test:bin/test

obj/test/main.o:test/main.cpp
	g++ -c $(CCFLAGS) -o $@ $< -lm

obj/test/tests.o:test/tests.cpp
	g++ -c $(CCFLAGS) -o $@ $< -lm

bin/test: obj/test/main.o obj/test/tests.o obj/test/Check.o obj/test/SP.o
	g++ $(LDFLAGS) obj/test/main.o obj/test/tests.o obj/test/Check.o obj/test/SP.o -o bin/test -lm

obj/test/Check.o: src/statlib/Check.cpp
	 g++ -c -I src $(CFLAGS) -o $@ $< -lm
obj/test/SP.o: src/statlib/SP.cpp
	 g++ -c -I src $(CFLAGS) -o $@ $< -lm

bin/geometry: obj/src/geometry/main.o obj/src/statlib/statlib.a
	                $(CC) $(CFLAGS) -o $@ $^ -lm
obj/src/geometry/main.o: src/geometry/main.cpp
	                $(CC) -c -I src $(CFLAGS) -o $@ $< -lm
obj/src/statlib/statlib.a: obj/src/statlib/Check.o obj/src/statlib/otobraj.o obj/src/statlib/SP.o
	                ar rcs $@ $^
obj/src/statlib/Check.o: src/statlib/Check.cpp
	                $(CC) -c -I src $(CFLAGS) -o $@ $< -lm
obj/src/statlib/otobraj.o: src/statlib/otobraj.cpp
	                $(CC) -c -I src $(CFLAGS) -o $@ $< -lm
obj/src/statlib/SP.o: src/statlib/SP.cpp
	                $(CC) -c -I src $(CFLAGS) -o $@ $< -lm

.PHONY: clean

clean:
	        rm obj/test/*.o bin/test obj/src/statlib/*.a obj/src/statlib/*.o obj/src/geometry/*.o bin/geometry
