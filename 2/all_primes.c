#include <stdio.h> 

int main() {
	unsigned long long n;
	scanf("%llu", &n);
	if (n < 2)
		printf("Error\n");
	for (unsigned long long i = 2; i <= n; i++){
		char is_prime = 1;
		for(int d = 2; d <= i / 2; d++){
			if (i % d == 0){
				is_prime = 0;
				break;
			}	
		}
		if (is_prime)
			printf("%llu\n", i);
	}
	return 0;
}
