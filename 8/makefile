.PHONY : all clean

flags = -fsanitize=address -fsanitize=undefined -fsanitize=leak

all : concat.out findSubArr.out pascal.out removeSubArr.out scanArr.out

findSubArr.out : arr.o findSubArr.c
	cc findSubArr.c arr.o -o findSubArr.out $(flags)

concat.out : arr.o concat.c
	cc concat.c arr.o -o concat.out $(flags)

pascal.out : arr.o pascal.c
	cc pascal.c arr.o -o pascal.out $(flags)

removeSubArr.out : arr.o removeSubArr.c
	cc removeSubArr.c arr.o -o removeSubArr.out $(flags)

scanArr.out : arr.o scanArr.c
	cc scanArr.c arr.o -o scanArr.out $(flags)

arr.o : arr.c arr.h
	cc -c arr.c

clean :
	rm -f *.out *.o
