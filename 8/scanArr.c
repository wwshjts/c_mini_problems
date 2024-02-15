#include <stdio.h>
#include <stddef.h> 
#include <stdlib.h>
#include "arr.h"

int main(){ 
	int* arr = NULL;
	size_t size, capacity;
	scanDynArr(&arr, &size, &capacity);
	printArr(arr, size);
	free(arr);
	return 0;
} 
