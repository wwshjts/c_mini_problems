.PHONY : all clean

flags = -fsanitize=address -fsanitize=undefined -fsanitize=leak

all : all_primes.out fizz_buzz.out is_prime.out lucky.out pacman.out square.out triangle.out

all_primes.out : all_primes.c
	cc all_primes.c -o all_primes.out $(flags)

fizz_buzz.out : fizz_buzz.c
	cc fizz_buzz.c -o fizz_buzz.out $(flags)

is_prime.out : is_prime.c
	cc is_prime.c -o is_prime.out $(flags)

lucky.out : lucky.c 
	cc lucky.c -o lucky.out $(flags)

pacman.out : pacman.c
	cc pacman.c -o pacman.out $(flags) 

square.out : square.c
	cc square.c -o square.out $(flags) 

triangle.out : triangle.c
	cc triangle.c -o triangle.out $(flags) 


clean :
	rm -f *.out
