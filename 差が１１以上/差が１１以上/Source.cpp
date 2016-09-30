#include<stdio.h>
int main(void)
{
	int a, b;
	
	printf("®”A:");
	scanf_s("%d", &a);
	printf("®”B:");
	scanf_s("%d", &b);

	if (a - b >= 11 || b - a >= 11)
	{
		printf("‚Q‚Â‚Ì’l‚Ì·‚Í‚P‚PˆÈã‚Å‚ ‚é\n");
	}
	else if (a - b < 11 || b - a < 11)
	{
		printf("‚Q‚Â‚Ì’l‚Ì·‚Í‚P‚OˆÈ‰º‚Å‚ ‚é\n");
	}

	return 0;
}