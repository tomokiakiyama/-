#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c, num1, num2;

	printf("�񎟕�����ax2�� + bx + c = 0�̌W�������\n");//�񎟕��������o�́B

	printf("a=");//a�̒l���o�́B
	scanf_s("%d", &a);//a�̒l����́B
	
	printf("b=");//b�̒l���o�́B
	scanf_s("%d", &b);//b�̒l����́B
	
	printf("c=");//c�̒l���o�́B
	scanf_s("%d", &c);//c�̒l����́B
	

	num1 = (-b + sqrt(b*b - 4 * a*c)) / (2*a);//
	num2 = (-b - sqrt(b*b - 4 * a*c)) / (2*a);//

	if (b*b - 4 * a*c >= 0) {
		printf("x=%d,%d\n", num1, num2);//�񎟕������̉����o�́B
	}
	else printf("�����ł��B\n");

	return 0;
}
