#include<stddef.h>
#include<stdio.h>

void scanArr(int a[], size_t len){
	for(size_t i = 0; i < len; i++){
		scanf("%d", a + i);
	}
}

void printArr(int a[], size_t len){
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
void revert(int a[], size_t len){
	for(size_t i = 0; i < len / 2; i++){
		swap(a + i, a + (len - 1) - i);
	}
}
	
int maxArr(int a[], size_t len){
	int res = a[0];
	for(size_t i = 1; i < len; i++){
		res = (a[i] > res) ? a[i] : res;
	}
	return res;
}

//Как тут быть с типами то..
int findlnArr(int a[], int len, int x){
	for(int i = 0; i < len; i++){
		if(x == a[i])
			return i;
	}
	return -1;
}

void extractDigits(int a[], size_t len, int x){
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
