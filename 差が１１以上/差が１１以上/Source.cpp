#include<stdio.h>
int main(void)
{
	int a, b;
	
	printf("整数A:");
	scanf_s("%d", &a);
	printf("整数B:");
	scanf_s("%d", &b);

	if (a - b >= 11 || b - a >= 11)
	{
		printf("２つの値の差は１１以上である\n");
	}
	else if (a - b < 11 || b - a < 11)
	{
		printf("２つの値の差は１０以下である\n");
	}

	return 0;
}