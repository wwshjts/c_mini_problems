.PHONY : all clean

flags = -fsanitize=address -fsanitize=undefined -fsanitize=leak

all : multi_dim.out 

multi_dim.out : multi_dim.c
	cc multi_dim.c -o multi_dim.out $(flags)

clean :
	rm -f *.out
