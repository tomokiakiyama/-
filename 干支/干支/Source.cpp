#include<stdio.h>
int main(void)
{
	int num;

	printf("生まれた年を入力してください。\n");
	scanf_s("%d", &num);

	if (num % 12 == 4)
		printf("干支は子です\n");
	
	else if (num % 12 == 5)
		printf("干支は丑です\n");

	else if (num % 12 ==6 )
		printf("干支は寅です\n");

	else if (num % 12 ==7 )
		printf("干支は卯です\n");

	else if (num % 12 == 8)
		printf("干支は辰です\n");

	else if (num % 12 ==9 )
		printf("干支は巳です\n");

	else if (num % 12 ==10 )
		printf("干支は午です\n");

	else if (num % 12 ==11 )
		printf("干支は未です\n");

	else if (num % 12 ==0 )
		printf("干支は申です\n");

	else if (num % 12 ==1 )
		printf("干支は酉です\n");

	else if (num % 12 ==2 )
		printf("干支は戌です\n");

	else if (num % 12 ==3 )
		printf("干支は亥です\n");

	return 0;
}