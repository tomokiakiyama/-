#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num;

	printf("値を入力してください。\n");//値を出力する。
	scanf_s("%d", &num1);//値を入力する。
	scanf_s("%d", &num2);//値を入力する。
	scanf_s("%d", &num3);//値を入力する。

	if (num1 < num2)
	{
		num = num1;//numにnum1を代入。
		num1 = num2;//num1にnum2を代入。
		num2 = num;//num2にnumを代入。
	}

	if (num2 < num3)
	{
		num = num2;//numにnum2を代入。
		num2 = num3;//num2にnum3を代入。
		num3 = num;//num3にnumを代入。
	}

	if (num1 < num2)
	{
		num = num1;//numにnum1を代入。
		num1 = num2;//num1にnum2を代入。
		num2 = num;//num2にnumを代入。
	}
	printf("%d,%d.%d\n", num1, num2, num3);//値を大きい順に出力する。

	return 0;
}


	   