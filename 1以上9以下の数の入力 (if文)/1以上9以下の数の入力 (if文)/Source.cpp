#include<stdio.h>
int main(void)
{
	int x;

	printf("1�ȏ�9�ȉ��̐�����͂��Ă�������\n");
	scanf_s("%d", &x);

	for (; x < 1 || x>9;)
	{
		printf("1�ȏ�9�ȉ��̐�����͂��Ă�������\n");
		scanf_s("%d", &x);
	}

	return 0;
}