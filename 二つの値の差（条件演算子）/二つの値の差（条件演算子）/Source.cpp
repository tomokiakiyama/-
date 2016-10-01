#include<stdio.h>
int main(void)
{
	int a, b, c;

	printf("値１を入力してください。\n");
	scanf_s("%d", &a);
	printf("値２を入力してください。\n");
	scanf_s("%d", &b);
	
	a > b ? c = a - b : c = b - a;
	printf("2つの値の差は%dである\n", c);
	
	return 0;
}