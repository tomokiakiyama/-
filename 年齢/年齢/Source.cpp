#include<stdio.h>
int main(void)
{
	int num1, num2, year;

	printf("���܂ꂽ�N����͂��Ă�������\n");
	scanf_s("%d", &num1);

	for (num2 = 2016, year = 0; num2 > num1; year++,--num2);

	printf("%d�΂ł�\n", year);

	return 0;
	
}