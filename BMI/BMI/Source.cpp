#include<stdio.h>
int main(void)
{
	double a, b, num;

	printf("身長を入力\n");
	scanf_s("%lf", &a);
	printf("体重を入力\n");
	scanf_s("%lf", &b);

	num = b / ((a / 100)*(a / 100));

	printf("BMIは%lf\n", num);

	return 0;
}