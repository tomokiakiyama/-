#include<stdio.h>
int main(void)
{
	double a, b, num;

	printf("�g�������\n");
	scanf_s("%lf", &a);
	printf("�̏d�����\n");
	scanf_s("%lf", &b);

	num = b / ((a / 100)*(a / 100));

	printf("BMI��%lf\n", num);

	return 0;
}