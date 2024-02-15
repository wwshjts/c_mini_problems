#include<stdio.h>

int main(){
	unsigned long long n;
	char flag = 1;
	scanf("%llu", &n);
	if (n < 2) {
		printf("ERROR\n");
	}
	unsigned long long middle = n / 2;
	for (unsigned long long divisor = 2; divisor <= middle; divisor++) {
		if (n % divisor == 0) {
			flag = 0;
			printf("Not prime\n");
			break;
		}
	}
	if (flag) {
		printf("Prime\n");
	}
	return 0;
}
