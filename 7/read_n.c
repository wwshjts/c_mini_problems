#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include"arr.h"

int main(void){
	int len;
	printf("Lenght of array> ");
	scanf("%d", &len);
	int* arr = (int*) malloc(len * sizeof(int));
	nullCheck(arr);
	scanArr(arr, len);
	printArr(arr, len);
	revert(arr, len);
	printArr(arr, len);
	printf("max %d\n", maxArr(arr, len));
	printf("index of 3 is %d\n", findlnArr(arr, len, 3));
	int new_arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printArr(new_arr, 10);
	extractDigits(arr, len, 331);
	printArr(arr, len);
	printf("cmp: %d\n", compareArrays(arr, len, new_arr, 10));
	free(arr);
	return 0;
}
