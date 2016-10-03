#include<stdio.h>
int main(void)
{
	int x;

	printf("1ˆÈã9ˆÈ‰º‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &x);

	for (; x < 1 || x>9;)
	{
		printf("1ˆÈã9ˆÈ‰º‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		scanf_s("%d", &x);
	}

	return 0;
}