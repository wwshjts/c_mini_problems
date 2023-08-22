#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include"arr.h"

void scanArr(int* a, size_t len){
	for(size_t i = 0; i < len; i++){
		scanf("%d", a + i);
	}
}

void scanUArr(int** arr_to_ret, size_t* len_to_ret){
	int* arr = NULL;
	size_t len = 0;
	do{
		int* tmp_arr = (int*) malloc((len + 1) * sizeof(int));
		nullCheck(tmp_arr);
		for(int i = 0; i < len; i++){
			tmp_arr[i] = arr[i];
		}
		free(arr);
		arr = tmp_arr;
		scanf("%d", &arr[len]);
		len++;
	} while(arr[len - 1] != 0);
	*arr_to_ret = arr;
	*len_to_ret = len;
}

void scanVArr(int** arr_to_ret, size_t len){
	int* arr = (int*) malloc(len * sizeof(int));
	for(size_t i = 0; i < len; i++){
		scanf("%d", &arr[i]);
	}
	*arr_to_ret = arr;
}

void printArr(int* a, size_t len){
	for(size_t i = 0; i < len; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void revert(int* a, size_t len){
	for(size_t i = 0; i < len / 2; i++){
		swap(a + i, a + (len - 1) - i);
	}
}
	
int maxArr(int* a, size_t len){
	int res = a[0];
	for(size_t i = 1; i < len; i++){
		res = (a[i] > res) ? a[i] : res;
	}
	return res;
}

//Как тут быть с типами то..
int findlnArr(int* a, int len, int x){
	for(int i = 0; i < len; i++){
		if(x == a[i])
			return i;
	}
	return -1;
}

void extractDigits(int* a, size_t len, int x){
	size_t i = 0;
	while(x > 0){
		a[i++] = x % 10;
		x = x / 10;
	}
	revert(a, i);
}

int compareArrays(int* a, size_t len_a, int* b, size_t len_b){
	if(len_a < len_b){
		printf("%zu %zu\n", len_a, len_b);
		return -1;
	}
	else if(len_a > len_b){
		return 1;
	}
	else{
		for(size_t i = 0; i < len_a; i++){
			if(a[i] < b[i])
				return -1;
			else if(a[i] > b[i])
				return 1;
		}
	return 0;
	}
}

void nullCheck(void* ptr){
	if(ptr == NULL){
		printf("ERROR: Out of memory");
		exit(0);
	}
}

void concatArr(int* a, size_t len_a, int* b, size_t len_b, int** arr_to_ret, size_t* len_to_ret){
	size_t len = len_a + len_b;
	int* arr = (int*) malloc(len * sizeof(int));
	nullCheck(arr);
	for(int i = 0; i < len_a; i++){
		arr[i] = a[i];
	}
	for(int i = 0; i < len_b; i++){
		arr[len_a + i] = b[i];
	}
	*arr_to_ret = arr;
	*len_to_ret = len;
}
