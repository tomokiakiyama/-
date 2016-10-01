#include<stdio.h>
int main(void)
{
	int a, b, c;

	printf("値１を入力してください。\n");
	scanf_s("%d", &a);
	printf("値２を入力してください。\n");
	scanf_s("%d", &b);

	if (a > b) {
		c = a - b;
		printf("2つの値の差は%dである\n", c);
	}
	else if (a < b) {
		c = b - a;
		printf("2つの値の差は%dである\n", c);
	}
	else {
		printf("2つの値の差は0である\n");
	}
	return 0;
}