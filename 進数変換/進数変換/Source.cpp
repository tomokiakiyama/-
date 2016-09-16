#include<stdio.h>
int main(void)
{
	int num, num1, i;
	int box[100];

	printf("‚P‚Oi”‚Í");
	scanf_s("%d", &num);
	printf("‚Qi”‚Í");
	num1 = num;

	for (i = 0; num >=1; i = i + 1) {
		box[i] = num % 2;
		num = num / 2;
	}
	i = i - 1;
	for (; i >= 0; )
	{
		printf("%d", box[i]);
		i = i - 1;
	}

	printf("\n");
	printf("‚P‚Ui”‚Í%x", num1);

	return 0;
}
