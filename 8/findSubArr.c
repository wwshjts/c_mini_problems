#include<stdio.h>
#include<stddef.h> 
#include<stdlib.h>
#include"arr.h"
#define SIZE 5

int main(){ 
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
	printf("%d\n", findSubArr(arr1, len1, arr2, len2));
	free(arr1);
	free(arr2);
	return 0;
}
