#include <stdio.h>

void evil_scanf(int* p0, int* p1, int* p2);

int main(void){
	int x = 1, y = 2, z = 3;
	evil_scanf(&x, &y, &z);
	printf("x: %d, y: %d, z: %d\n", x, y, z);
	return 0;
}

void evil_scanf(int* p0, int* p1, int* p2) {
	int n0, n1, n2;
	scanf("%d %d %d", &n0, &n1, &n2);
	if (n0 > 0) {
		*p1 = n1;
		*p2 = n2;
	} else {
		*p2 = n0 * n1 * n2 * (*p1) * (*p2);
		*p1 = *p0;
	}
	*p0 = n0;
}
