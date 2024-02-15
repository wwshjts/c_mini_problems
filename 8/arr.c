#include <stdio.h>
#include <stdlib.h>
#include "arr.h"

void scanArr(int* a, size_t len) {
	for(size_t i = 0; i < len; i++) {
		scanf("%d", a + i);
	}
}

void scanDynArr(int** arr_to_ret, size_t* size_to_ret, size_t* capacity_to_ret) {
	size_t capacity = BASE_CAPACITY;
	size_t size = 0;
	int* arr = (int*) malloc(sizeof(int) * capacity);
	nullCheck(arr);
	do {
		scanf("%d", &arr[size++]);
		if (size == capacity) {
			capacity = capacity * 2;
			arr = (int*) realloc(arr,sizeof(int) * capacity);
			nullCheck(arr);
		}
	} while(arr[size - 1] != 0);
	*arr_to_ret = arr;
	*size_to_ret = size;
	*capacity_to_ret = capacity;
}

void scanUArr(int** arr_to_ret, size_t* len_to_ret){
	int* arr = NULL;
	size_t len = 0;
	do {
		int* tmp_arr = (int*) malloc((len + 1) * sizeof(int));
		nullCheck(tmp_arr);
		for (int i = 0; i < len; i++) {
			tmp_arr[i] = arr[i];
		}
		free(arr);
		arr = tmp_arr;
		scanf("%d", &arr[len]);
		len++;
	} while(arr[len - 1] != 0);
	len--;
	*arr_to_ret = arr;
	*len_to_ret = len;
}

void scanVArr(int** arr_to_ret, size_t len) {
	int* arr = (int*) malloc(len * sizeof(int));
	for (size_t i = 0; i < len; i++) {
		scanf("%d", &arr[i]);
	}
	*arr_to_ret = arr;
}

void printArr(int* a, size_t len) {
	for (size_t i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void revert(int* a, size_t len) {
	for (size_t i = 0; i < len / 2; i++) {
		swap(a + i, a + (len - 1) - i);
	}
}
	
int maxArr(int* a, size_t len) {
	int res = a[0];
	for (size_t i = 1; i < len; i++) {
		res = (a[i] > res) ? a[i] : res;
	}
	return res;
}

//Как тут быть с типами то..
int findlnArr(int* a, int len, int x) {
	for (int i = 0; i < len; i++) {
		if (x == a[i]) {
			return i;
		}
	}
	return -1;
}

void extractDigits(int* a, size_t len, int x) {
	size_t i = 0;
	while (x > 0) {
		a[i++] = x % 10;
		x = x / 10;
	}
	revert(a, i);
}

int compareArrays(int* a, size_t len_a, int* b, size_t len_b) {
	if (len_a < len_b) {
		printf("%zu %zu\n", len_a, len_b);
		return -1;
	} else if(len_a > len_b) {
		return 1;
	} else {
		for (size_t i = 0; i < len_a; i++) {
			if (a[i] < b[i]) {
				return -1;
			} else if(a[i] > b[i]) {
				return 1;
			}
		}
		return 0;
	}
}

void nullCheck(void* ptr) {
	if (ptr == NULL) {
		printf("ERROR: Out of memory");
		exit(1);
	}
}

void concatArr(int* a, size_t len_a, int* b, size_t len_b, int** arr_to_ret, size_t* len_to_ret) {
	size_t len = len_a + len_b;
	int* arr = (int*) malloc(len * sizeof(int));
	nullCheck(arr);
	for (int i = 0; i < len_a; i++) {
		arr[i] = a[i];
	}
	for (int i = 0; i < len_b; i++) {
		arr[len_a + i] = b[i];
	}
	*arr_to_ret = arr;
	*len_to_ret = len;
}


int findSubArr(int* a, size_t len_a, int* b, size_t len_b) {
	if (len_b > len_a) {
		return -1;
	}
	for (size_t i = 0; i <= len_a - len_b; i++) {
		int matchFlag = 1;
		for (size_t j = 0; j < len_b; j++) {
			if (a[i + j] != b[j]) {
				matchFlag = 0;
				break;
			}
		}
		if (matchFlag) {
			return i;
		}
	}
	return -1;
}

void removeSubArr(int* a, size_t* len_a, int* b, size_t len_b) {
	int index = findSubArr(a, *len_a, b, len_b);
	size_t len_to_ret = *len_a;
	while (index > 0) {
		for(int i = index; i < len_to_ret - len_b; i++) {
			a[i] = a[i + len_b];
		}
		len_to_ret -= len_b;
		printArr(a, len_to_ret);
		index = findSubArr(a, len_to_ret, b, len_b);
	}
	*len_a = len_to_ret;
}