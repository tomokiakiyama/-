#include <stdio.h>

int main(void)
{
	int num1, num2, a, b;

	printf("���̐�����͂��Ă��������B\n");//���̐����o�͂���B
	scanf_s("%d", &num1);//���̐�����͂���B

	printf("���̐�����͂��Ă��������B\n");//���̐����o�͂���B
	scanf_s("%d", &num2);//���̐�����͂���B

	for (a = num1, b = 0; 4 * a + 2 * b >= num2; a--, b++)//a�ɂP�𑫂��Ab����P���������J��Ԃ��B
	{
		if (a + b == num1 && 4 * a + 2 * b == num2 && a >= 0 && b >= 0)
		{
			printf("�T�̐���%d�C�B\n", a);//�T�̐����o�͂���B
			printf("�߂̐���%d�H�B\n", b);//�߂̐����o�͂���B
			break;
		}
	}
	if (num2 != 4 * a + 2 * b)
		printf("�v�Z�ł��܂���B\n");

	return 0;
}
