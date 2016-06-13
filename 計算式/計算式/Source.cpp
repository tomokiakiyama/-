#include <stdio.h>

int main(void)
{
	double num1, num2;
	char ch;

	printf("演算子の入力\n");//演算子を出力する。
	ch = getchar();//演算子を入力する。
	printf("計算式を入力してください。\n");
	printf("値１の入力\n");//値１を出力する。
	scanf_s("%lf", &num1);//値１を入力する。
	printf("値２の入力\n");//値２を出力する。
	scanf_s("%lf", &num2);//値２を入力する。

	
	switch (ch) {
	case '+':
		printf("%lf+%lf=%lf\n", num1, num2 , num1 + num2);//計算式を出力する。
		break;
	case'-':
		printf("%lf-%lf=%lf\n", num1, num2, num1 - num2);//計算式を出力する。
		break;
	case'*':
		printf("%lf*%lf=%lf\n", num1, num2, num1*num2);//計算式を出力する。
		break;
	case'/':
		printf("%lf/%lf=%lf\n", num1, num2 , num1 / num2);//計算式を出力する
		break;
	default:
		printf("計算できません。\n");//「計算できません。」を出力する。
	}

	return 0;
}
