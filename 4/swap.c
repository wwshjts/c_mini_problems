#include<stdio.h>

void swap(int* pa, int* pb);

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("x: %d y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d y: %d \n", x, y);
	return 0;
}

void swap(int* pa, int* pb) {
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
