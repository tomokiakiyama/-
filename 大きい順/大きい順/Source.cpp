#include <stdio.h>

int main(void)
{
	int num[10];
	int a,i,j,k ;
	
	printf("値を入力してください。\n");

	for (i = 0; i <= 9; i++) {//配列要素に１つずつ値を代入する。
		scanf_s("%d", &num[i]);//配列要素に１つずつ値を代入する値を入力する。
	}
	for (i = 0; i <= 9; i++) {//バブルソートで大きい順に並びなおす。
		
		for (j=0; j < 9-i; j++) {

			if (num[j] < num[j + 1]) {
				k = num[j];
				num[j] = num[j + 1];
				num[j+ 1] = k;
			}
		}
	}
	
	printf("\n");

	for (a = 0; a <= 9; a++) {
		printf("%d ", num[a]);//大きい順に出力する。
	}
	printf("\n");

	return 0;
}
