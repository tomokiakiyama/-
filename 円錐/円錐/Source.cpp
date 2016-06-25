#include <stdio.h>

int main(void)
{
	double h, r, n, a, b;

	printf("高さは");//高さを出力する。
	scanf_s("%lf", &h);//高さを入力する。

	printf("底辺の半径は");//底辺の半径を出力する。
	scanf_s("%lf", &r);//底辺の変形を入力する。

	printf("分割数は");//分割数を出力する。
	scanf_s("%lf", &n);//分割数を入力する。

	for (a = 1, b = 0; a <= n; b = b + 3.14159*((a - 1) / n)*r*((a - 1) / n)*r*(h / n), a++) {}//体積を計算。
	printf("円錐の体積は%lfです。\n", b);//体積を出力する。
	
	return 0;
}
