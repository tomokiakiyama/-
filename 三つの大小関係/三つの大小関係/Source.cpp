#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num;

	printf("�l����͂��Ă��������B\n");//�l���o�͂���B
	scanf_s("%d", &num1);//�l����͂���B
	scanf_s("%d", &num2);//�l����͂���B
	scanf_s("%d", &num3);//�l����͂���B

	if (num1 < num2)
	{
		num = num1;//num��num1�����B
		num1 = num2;//num1��num2�����B
		num2 = num;//num2��num�����B
	}

	if (num2 < num3)
	{
		num = num2;//num��num2�����B
		num2 = num3;//num2��num3�����B
		num3 = num;//num3��num�����B
	}

	if (num1 < num2)
	{
		num = num1;//num��num1�����B
		num1 = num2;//num1��num2�����B
		num2 = num;//num2��num�����B
	}
	printf("%d,%d.%d\n", num1, num2, num3);//�l��傫�����ɏo�͂���B

	return 0;
}


	   