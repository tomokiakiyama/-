#include <stdio.h>
int main(void)
{
	int num1, num2;

	for (num1 = 1, num2 = 1; num1 <= 10000; num1 = num1 * 2, num2++) //ˆê“ú‚Ì‚¨¬Œ­‚¢‚ª‚P–œ‰~‚ğ’´‚¦‚é‚Ü‚ÅŒJ‚è•Ô‚·B
	{
		printf("%d“ú–Ú‚Ì‚¨¬Œ­‚¢‚Í%d‰~‚Å‚·B\n", num2, num1);
	}
	printf("‚¨¬Œ­‚¢‚ª‚P–œ‰~‚ğ’´‚¦‚é“ú‚Í%d“ú–Ú‚Å‚·B\n", num2);//“ú‚É‚¿‚ğo—ÍB


	return 0;
}
