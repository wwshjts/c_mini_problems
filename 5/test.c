#include <stdio.h>
#include "arr.h"
#define SIZE 10 

int main(void) {
	int arr[SIZE];
	scanArr(arr, SIZE);
	printArr(arr, SIZE);
	revert(arr, SIZE);
	printArr(arr, SIZE);
	printf("max %d\n", maxArr(arr, SIZE));
	printf("index of 3 is %d\n", findlnArr(arr, SIZE, 3));
	int new_arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printArr(new_arr, 10);
	extractDigits(new_arr, 10, 331);
	printArr(new_arr, 10);
	printf("cmp: %d\n", compareArrays(arr, SIZE, new_arr, 10));
	return 0;
}
