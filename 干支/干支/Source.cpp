#include<stdio.h>
int main(void)
{
	int num;

	printf("���܂ꂽ�N����͂��Ă��������B\n");
	scanf_s("%d", &num);

	if (num % 12 == 4)
		printf("���x�͎q�ł�\n");
	
	else if (num % 12 == 5)
		printf("���x�͉N�ł�\n");

	else if (num % 12 ==6 )
		printf("���x�͓Ђł�\n");

	else if (num % 12 ==7 )
		printf("���x�͉K�ł�\n");

	else if (num % 12 == 8)
		printf("���x�͒C�ł�\n");

	else if (num % 12 ==9 )
		printf("���x�͖��ł�\n");

	else if (num % 12 ==10 )
		printf("���x�͌߂ł�\n");

	else if (num % 12 ==11 )
		printf("���x�͖��ł�\n");

	else if (num % 12 ==0 )
		printf("���x�͐\�ł�\n");

	else if (num % 12 ==1 )
		printf("���x�͓тł�\n");

	else if (num % 12 ==2 )
		printf("���x�͜��ł�\n");

	else if (num % 12 ==3 )
		printf("���x�͈�ł�\n");

	return 0;
}