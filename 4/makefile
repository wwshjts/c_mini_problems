.PHONY : all clean

flags = -fsanitize=address -fsanitize=undefined -fsanitize=leak

all : evil_scanf.out local_vars.out swap.out 

evil_scanf.out : evil_scanf.c
	cc evil_scanf.c -o evil_scanf.out $(flags)

local_vars.out : local_vars.c
	cc local_vars.c -o local_vars.out $(flags)

swap.out : swap.c
	cc swap.c -o swap.out $(flags)

clean :
	rm -f *.out
