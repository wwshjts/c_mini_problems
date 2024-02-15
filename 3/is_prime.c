#include <stdio.h>
#include <assert.h>

int isPrime(unsigned long long n);

int main() {
	unsigned long long n;
	int prime_flag;
	scanf("%llu", &n);
	if (n < 2) {
		printf("ERROR\n");
	}
	prime_flag = isPrime(n);
	if (prime_flag) {
		printf("Is Prime!\n");
	} else {
		printf("Isn\'t Prime(\n");
	}
}

int isPrime(unsigned long long n){
	assert(n >= 2);
	unsigned long long middle = n / 2;
	for (unsigned long long divisor = 2; divisor <= middle; divisor++) {
		if(n % divisor == 0){
			return 0;
		}
	}
	return 1;
}

