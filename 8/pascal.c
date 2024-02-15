#include<stdio.h>
#include<stddef.h> 
#include<stdlib.h>
#include"arr.h"

int** madeTriangle(int l);
void fillTriangle(int** arr, int len);
void showTriangle(int** arr, int len);

int main(){ 
	int n; //Number of lines in triangle
	printf("Enter amount of lines in triangle> ");
	scanf("%d", &n);
	int **triangle = madeTriangle(n);
	fillTriangle(triangle, n);
	showTriangle(triangle, n);
	for (int i = 0; i < n; i++) {
		free(triangle[i]);
	}
	free(triangle);
	return 0;
}

int** madeTriangle(int l) {
	int** triangle = malloc(sizeof(int*) * l);
	nullCheck(triangle);
	for (int n = 0; n < l; n++) {	
		int* new_arr = (int*) malloc(sizeof(int) * (n + 1));
		nullCheck(new_arr);
		triangle[n] = new_arr;
	}
	return triangle;
}

void fillTriangle(int** arr, int len) {
	arr[0][0] = 1;
	for (int n = 1; n < len; n++) {
		arr[n][0] = 1;
		for (int k = 1; k < n; k++) {
			arr[n][k] = arr[n-1][k] + arr[n-1][k-1];
		}
		arr[n][n] = 1;
	}
}

void showTriangle(int** arr, int len) {	
	for (int n = 0; n < len; n++) {
		for (int k = 0; k <= n; k++) {
			printf("%d ", arr[n][k]);
		}
		printf("\n");
	}
}
