#include<stdio.h>
void B(void);
void C(void);

int main() {
	printf("Calling B from main\n");
	B();
	C();
	return 0;
}

void B(void) {
	int b;
	printf("Local addres b: %p\n", &b);
}

void C(void) {
	printf("Calling B from C\n");
	B();
}
