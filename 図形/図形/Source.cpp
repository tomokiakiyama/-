#include <stdio.h>

int main(void)
{
	int a, b, c;

	for (a = 1; a <= 5; a++) {

		for (c = 5; c >= 5 - (5 - a); c = c - 1) {
			printf(" ");
		}

		for (b = 1; b <= a * 2 - 1; b = b++) {
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}



