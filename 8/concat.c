#include <stdio.h>
#include <stddef.h> 
#include <stdlib.h>
#include "arr.h"
#define SIZE 5

int main(void){ 
	int* arr1 = NULL; 
	int* arr2 = NULL;
	size_t len1, len2;
	printf("Enter a first array> ");
	scanUArr(&arr1, &len1);
	printf("Enter a second array> ");
	scanUArr(&arr2, &len2);
	printf("First array: ");
	printArr(arr1, len1);
	printf("Second array: ");
	printArr(arr2, len2);
	int* new_arr;
	size_t new_len;
	concatArr(arr1, len1, arr2, len2, &new_arr, &new_len);
	printArr(new_arr, new_len);
	free(arr1);
	free(arr2);
	free(new_arr);
	return 0;
}
