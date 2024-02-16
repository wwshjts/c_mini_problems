.PHONY : all clean

flags = -fsanitize=address -fsanitize=undefined -fsanitize=leak

all : count_divs.out gcd.out is_prime.out max_10.out 

count_divs.out : count_divs.c
	cc count_divs.c -o count_divs.out $(flags)

gcd.out : gcd.c
	cc gcd.c -o gcd.out $(flags)

is_prime.out : is_prime.c
	cc is_prime.c -o is_prime.out $(flags)

max_10.out : max_10.c 
	cc max_10.c -o max_10.out $(flags)

clean :
	rm -f *.out
