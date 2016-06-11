#include <stdio.h>

int main(void)
{
	int num1, num2, a, b;

	printf("頭の数を入力してください。\n");//頭の数を出力する。
	scanf_s("%d", &num1);//頭の数を入力する。

	printf("足の数を入力してください。\n");//足の数を出力する。
	scanf_s("%d", &num2);//足の数を入力する。

	for (a = num1, b = 0; 4 * a + 2 * b >= num2; a--, b++)//aに１を足し、bから１を引くを繰り返す。
	{
		if (a + b == num1 && 4 * a + 2 * b == num2 && a >= 0 && b >= 0)
		{
			printf("亀の数は%d匹。\n", a);//亀の数を出力する。
			printf("鶴の数は%d羽。\n", b);//鶴の数を出力する。
			break;
		}
	}
	if (num2 != 4 * a + 2 * b)
		printf("計算できません。\n");

	return 0;
}
