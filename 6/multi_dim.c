#include <stdio.h>

void scanArr(int a[4][4]);
void printArr(int a[4][4]);
void transpose(int a[4][4]);
void swap(int* a, int* b);

int main(void) {
	int arr[4][4];
	scanArr(arr);
	printf("arr: \n");
	printArr(arr);
	transpose(arr);
	printf("transposed arr: \n");
	printArr(arr);
	return 0;
}

void scanArr(int a[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &a[i][j]);
		}
	}
}

void printArr(int a[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void transpose(int a[4][4]) {
	for (int i = 0; i < 4; i++){
		for (int j = 3; j > i; j--){
			swap(&a[i][j], &a[j][i]);
		}
	}
}
