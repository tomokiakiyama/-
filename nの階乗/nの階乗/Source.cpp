#include <stdio.h>

int main(void)
{
	int num,num1,num2;
	printf("�l����͂��Ă��������B\n");//�l���o�͂���B
	scanf_s("%d", &num);//�l����͂���B

	for (num1 = num, num2 = num-1; num2 >= 1; num1 = num1*num2, num2 = num2--) {}//�K��̌v�Z���s�Ȃ��B
 
	printf("%d!��%d�ł��B\n", num, num1);//�K����o�͂���B

	return 0;
}
