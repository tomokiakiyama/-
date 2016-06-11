#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c, num1, num2;

	printf("二次方程式ax2乗 + bx + c = 0の係数を入力\n");//二次方程式を出力。

	printf("a=");//aの値を出力。
	scanf_s("%d", &a);//aの値を入力。
	
	printf("b=");//bの値を出力。
	scanf_s("%d", &b);//bの値を入力。
	
	printf("c=");//cの値を出力。
	scanf_s("%d", &c);//cの値を入力。
	

	num1 = (-b + sqrt(b*b - 4 * a*c)) / (2*a);//
	num2 = (-b - sqrt(b*b - 4 * a*c)) / (2*a);//

	if (b*b - 4 * a*c >= 0) {
		printf("x=%d,%d\n", num1, num2);//二次方程式の解を出力。
	}
	else printf("虚根です。\n");

	return 0;
}
