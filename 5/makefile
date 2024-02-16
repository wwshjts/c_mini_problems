.PHONY : all clean

flags = -fsanitize=address -fsanitize=undefined -fsanitize=leak

all : test.out

test.out : arr.o test.c
	cc test.c arr.o -o test.out $(flags)

arr.o : arr.c arr.h
	cc -c arr.c

clean :
	rm -f *.out *.o
