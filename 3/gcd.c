#include<stdio.h>
#include<assert.h>

unsigned int gcd(unsigned int a, unsigned int b);

int main(void){
	unsigned int x, y, res;
	scanf("%u %u", &x, &y);
	res = gcd(x, y);
	printf("GCD: %u\n", res);
	return 0;
}


unsigned int gcd(unsigned int a, unsigned int b){
	assert(a > 0 && b > 0);
	if (a < b){
		int tmp = b;
		b = a;
		a = tmp;
	}
	int r;
	while (b > 0){
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
