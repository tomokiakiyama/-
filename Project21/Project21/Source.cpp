#include<stdio.h>
int num(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main(void)
{
	int a, b, c;
	printf("A\n");
	scanf_s("%d", &a);
	printf("B\n");
	scanf_s("%d", &b);

	c = num(a, b);

	printf("‘å‚«‚¢‚Ù‚¤‚Í%d\n", c);
}