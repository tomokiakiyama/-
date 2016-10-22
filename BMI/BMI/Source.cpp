#include<stdio.h>
int main(void)
{
	double a, b, num;

	printf("g’·‚ğ“ü—Í\n");
	scanf_s("%lf", &a);
	printf("‘Ìd‚ğ“ü—Í\n");
	scanf_s("%lf", &b);

	num = b / ((a / 100)*(a / 100));

	printf("BMI‚Í%lf\n", num);

	return 0;
}