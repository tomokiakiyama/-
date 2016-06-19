#include <stdio.h>

int main(void)
{
	int a, b, c;

	for (a = 1; a <= 5; a++) {//繰り返す。

		for (c = 5; c >= 5 - (5 - a); c = c - 1) {//繰り返す
			printf(" ");//空欄を出力する。
		}

		for (b = 1; b <= a * 2 - 1; b = b++) {//繰り返す
			printf("*");//*を出力する。
		}
		
		printf("\n");//改行する。
	}
	
	return 0;
}



