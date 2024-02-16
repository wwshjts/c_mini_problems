.PHONY : all

objects = calc.out years.out

calc : calc.c
	cc calc.c -o calc.out -fsanitize=address -fsanitize=undefined -fsanitize=leak

years : years.c
	cc years.c -o years.out -fsanitize=address -fsanitize=undefined -fsanitize=leak


