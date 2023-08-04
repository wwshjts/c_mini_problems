#include<stdio.h>

int main(){
	unsigned long l, r;
	scanf("%lu", &l);
	scanf("%lu", &r);
	if (l > r)
		printf("Error");
	while (l <= r){
		unsigned long x = l;
		unsigned long frs=0, scn=0;
		for(char i = 0; i < 3; i++){
			scn = scn + (x % 10); 
			x = x / 10;
		}
		for(char i = 0; i < 3; i++){
			frs = frs + (x % 10);
			x = x / 10;
		}
		if (frs == scn)
			printf("%lu\n", l);
		l++;
	}
	return 0;
}
