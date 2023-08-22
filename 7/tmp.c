#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

int main(void){
	int len;
	printf("Lenght of array> ");
	scanf("%d", &len);
	int* arr = (int*) malloc(len * sizeof(int));
	nullCheck(arr);

	free(arr);
	return 0;
}
