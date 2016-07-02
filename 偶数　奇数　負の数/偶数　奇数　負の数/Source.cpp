#include <stdio.h>

int main(void)
{
	int num[10] = { 1,-8,5,-4,6,5,7,-3,-9,1 };//配列要素に１つずつ値を代入する。
	int a, b, c, i;

	for (i = 0, a = 0, b = 0, c = 0; i < 10; i++) {

		printf("%d ", num[i]);//値を表示する。

		if ((num[i] % 2) == 0)//偶数ならば＋１する。
			a++;
		else if ((num[i] % 2) != 0)//奇数ならば＋１する。
			b++;

		if (num[i] < 0)//負の数ならば＋１する。
			c++;
	}
	printf("\n");//改行する。

	printf("奇数は%d個。\n", b);//奇数の数を表示する。
	printf("偶数は%d個。\n", a);//偶数の数を表示する。
	printf("負の数の数は%d個\n", c);//負の数の数を表示する。

	return 0;
}