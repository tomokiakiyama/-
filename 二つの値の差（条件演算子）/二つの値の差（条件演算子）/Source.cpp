#include<stdio.h>
int main(void)
{
	int a, b, c;

	printf("�l�P����͂��Ă��������B\n");
	scanf_s("%d", &a);
	printf("�l�Q����͂��Ă��������B\n");
	scanf_s("%d", &b);
	
	a > b ? c = a - b : c = b - a;
	printf("2�̒l�̍���%d�ł���\n", c);
	
	return 0;
}