#include<stdio.h>

int main(){
	unsigned long n;
	unsigned long x;
	x = 0;
	scanf("%lu", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			printf("%3lu", x++);
		}
		printf("\n");
	}
	return 0;
}
