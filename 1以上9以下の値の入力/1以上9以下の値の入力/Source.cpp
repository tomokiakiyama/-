#include<stdio.h>
int main(void)
{
	int x;

	do {
		printf("1�ȏ�9�ȉ��̐�����͂��Ă�������\n");
		scanf_s("%d", &x);
	} while (x < 1 || x>9);
	return 0;
}