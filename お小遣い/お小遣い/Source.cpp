#include <stdio.h>
int main(void)
{
	int num1, num2;

	for (num1 = 1, num2 = 1; num1 <= 10000; num1 = num1 * 2, num2++) //����̂����������P���~�𒴂���܂ŌJ��Ԃ��B
	{
		printf("%d���ڂ̂���������%d�~�ł��B\n", num2, num1);
	}
	printf("�����������P���~�𒴂������%d���ڂł��B\n", num2);//���ɂ����o�́B


	return 0;
}
