#include<stdio.h>

int main(){
	unsigned long n;
	scanf("%lu", &n);
	for (int i = 1; i <= n * n; i++){
		printf("%3d", i - 1);
		if (i % n == 0)
			printf("\n");
	}
	return 0;
}
