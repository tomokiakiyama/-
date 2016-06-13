#include <stdio.h>

int main(void)
{
	int num,num1,num2;
	printf("値を入力してください。\n");//値を出力する。
	scanf_s("%d", &num);//値を入力する。

	for (num1 = num, num2 = num-1; num2 >= 1; num1 = num1*num2, num2 = num2--) {}//階乗の計算を行なう。
 
	printf("%d!は%dです。\n", num, num1);//階乗を出力する。

	return 0;
}
