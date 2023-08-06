#include<stdio.h>

int max(int a, int b); 
int max10(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int main(void){
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, res;	
	scanf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10);
	res = max10(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	printf("Max is: %d\n", res);
	return 0;
}

int max(int a, int b){ 
	return (a >= b) ? a : b;
}

int max10(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10){
	int res = max(a1, a2);
	res = max(res, a3);
	res = max(res, a4);
	res = max(res, a5);
	res = max(res, a6);
	res = max(res, a7);
	res = max(res, a8);
	res = max(res, a9);
	res = max(res, a10);
	return res;
}
