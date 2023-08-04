#include<stdio.h>

int main(int){
	unsigned short year;
	scanf("%hu", &year);
	if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
		printf("This year is leap year!\n");
	else
		printf("This isn't leap yaer :(\n");
	return 0;
}
