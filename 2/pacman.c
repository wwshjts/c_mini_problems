#include<stdio.h>

int main(){
	unsigned long n, res = 0, x = 0, y = 0;
	int com, game_flag = 1;
	scanf("%lu", &n);
	while (game_flag) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (x == j && y == i) {
					printf("C ");
				} else if (i == n - 1 && j == n - 1) {
					printf("*");
				} else {
					printf(". ");
				}
			}
			printf("\n");
		}
		if (x == n - 1 && y == n - 1) {
			printf("You WIN\n");
			break;
		}
		printf("Result %lu\n", res);
		printf("\n");
		scanf("%d", &com);
		switch (com) {
			case 8: 
				y = (y - 1 < 0) ? y - 1: y;
				res++;
			break;
			case 4: 
				x = (x - 1 > 0) ? x - 1 : x;
				res++;
			break;
			case 5: 
				y = (y + 1 < n) ? y + 1 : y;
				res++;
			break;
			case 6:  
				x = (x + 1 < n) ? x + 1 : x;
				printf("x %lu", x + 1);
				res++;
			break;
			default: game_flag = 0;
		}
	}
	printf("Game over\nYour result : %lu\n", res);
	return 0;
}
