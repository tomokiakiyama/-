#include<stdio.h>
int main(void)
{
	int a, b, c;

	for (a = 1, b = 0, c = 0; c <= 100; c = a + b)
	{
		b = a;
		a = c;
		printf("%d\n", c);
	}
	return 0;
}