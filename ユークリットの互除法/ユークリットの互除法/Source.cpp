#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("数値を入力してください。\n");//数値を出力する。
	scanf_s("%d", &a);//数値を入力する。

	printf("数値を入力してください。\n");//数値を出力する。
	scanf_s("%d", &b);//数値を入力する。

	printf("%dと%dの最大公約数は", a, b);

	for (c = a%b; c != 0; a / b, c = a%b) {//ユークリットの互除法で計算する。
		a = b;
		b = c;
	}
	
	printf("%dです。\n", b);//最大公約数を出力する。

	return 0;

}
