#include <stdio.h>

int main(void)
{
	double num1, num2;
	char ch;

	printf("���Z�q�̓���\n");//���Z�q���o�͂���B
	ch = getchar();//���Z�q����͂���B
	printf("�v�Z������͂��Ă��������B\n");
	printf("�l�P�̓���\n");//�l�P���o�͂���B
	scanf_s("%lf", &num1);//�l�P����͂���B
	printf("�l�Q�̓���\n");//�l�Q���o�͂���B
	scanf_s("%lf", &num2);//�l�Q����͂���B

	
	switch (ch) {
	case '+':
		printf("%lf+%lf=%lf\n", num1, num2 , num1 + num2);//�v�Z�����o�͂���B
		break;
	case'-':
		printf("%lf-%lf=%lf\n", num1, num2, num1 - num2);//�v�Z�����o�͂���B
		break;
	case'*':
		printf("%lf*%lf=%lf\n", num1, num2, num1*num2);//�v�Z�����o�͂���B
		break;
	case'/':
		printf("%lf/%lf=%lf\n", num1, num2 , num1 / num2);//�v�Z�����o�͂���
		break;
	default:
		printf("�v�Z�ł��܂���B\n");//�u�v�Z�ł��܂���B�v���o�͂���B
	}

	return 0;
}
