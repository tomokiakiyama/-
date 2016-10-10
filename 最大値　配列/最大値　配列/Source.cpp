#include<stdio.h>
int main(void)
{
	int num[5] = { 37,86,35,77,107 };
	int a, i;

	for (i = 0; i < 5; i++)
	{
		if (num[i] > num[i - 1])
			a = num[i];
	}
	printf("Å‘å’l‚Í%d\n", a);
	return 0;
}
