#include<stdio.h>
int main(void)
{
	int a, b, c;

	printf("�l�P����͂��Ă��������B\n");
	scanf_s("%d", &a);
	printf("�l�Q����͂��Ă��������B\n");
	scanf_s("%d", &b);

	if (a > b) {
		c = a - b;
		printf("2�̒l�̍���%d�ł���\n", c);
	}
	else if (a < b) {
		c = b - a;
		printf("2�̒l�̍���%d�ł���\n", c);
	}
	else {
		printf("2�̒l�̍���0�ł���\n");
	}
	return 0;
}