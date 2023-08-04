#include<stdio.h>

int main(int){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("Result of '+' %d \n", a + b);
	printf("Result of '-' %d \n", a - b);
	printf("Result of '*' %d \n", a * b);
	if (b == 0)
		printf("Cannot divide by zero in op '/'\n");
	else
		printf("Result of '/' %d \n", a / b);
	if (b == 0)
		printf("Cannot divide by zero in op '%%'\n");
	else
		printf("Result of '%%' %d \n", a % b);
	printf("Result of '&' %d \n", a & b);
	printf("Result of '|' %d \n", a | b);
	printf("Result of '^' %d \n", a ^ b);
	return 0;
}
