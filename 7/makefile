.PHONY : all clean

flags = -fsanitize=address -fsanitize=undefined -fsanitize=leak

all : read_until.out read_n.out

read_n.out : arr.o read_n.c
	cc read_n.c arr.o -o read_n.out $(flags)

read_until.out : arr.o read_until.c
	cc read_until.c arr.o -o read_until.out $(flags)

arr.o : arr.c arr.h
	cc -c arr.c

clean :
	rm -f *.out *.o
