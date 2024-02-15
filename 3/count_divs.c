#include<stdio.h>
#include<assert.h>

unsigned long long count_divs(unsigned long long n);

int main() {
	unsigned long long n, res;
	scanf("%llu", &n);
	if (n < 2) {
		printf("ERROR\n");
	}
	res = count_divs(n);
	printf("Result is %llu\n", res);
	return 0;
}

unsigned long long count_divs(unsigned long long n) {
	assert(n >= 2);
	unsigned long long middle = n / 2;
	unsigned long long cnt = 0;
	for (unsigned long long divisor = 2; divisor <= middle; divisor++) {
		if (n % divisor == 0){
			cnt++;
		}
	}
	cnt = cnt + 2; //every num has two primitive divisors
	return cnt;
}

