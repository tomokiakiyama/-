#include<stdio.h>
int main(void)
{
	int a, b;
	
	printf("����A:");
	scanf_s("%d", &a);
	printf("����B:");
	scanf_s("%d", &b);

	if (a - b >= 11 || b - a >= 11)
	{
		printf("�Q�̒l�̍��͂P�P�ȏ�ł���\n");
	}
	else if (a - b < 11 || b - a < 11)
	{
		printf("�Q�̒l�̍��͂P�O�ȉ��ł���\n");
	}

	return 0;
}