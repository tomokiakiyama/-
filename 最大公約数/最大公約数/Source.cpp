#include<stdio.h>
int main(void)
{
	int num, num1, num2, a, b;

	printf("�P�ڂ̒l");
	scanf_s("%d", &num1);
	printf("�Q�ڂ̒l");
	scanf_s("%d", &num2);

	if (num1 > num2)
	{
		num = num1;
		num1 = num2;
		num2 = num;
	}

	for (a = 2; a < num1; a++)
	{
		if (num1%a == 0 && num2%a == 0)
			b = a;
	}
	printf("�ő���񐔂�%d�ł���B\n", b);

	return 0;
}
