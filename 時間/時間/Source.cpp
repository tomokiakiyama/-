#include<stdio.h>
int main(void)
{
	int a, b, c;
	
	printf("•b”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	scanf_s("%d", &a);

	b = a / 60;
	c = b / 60;
	a = a % 60;
	b = b % 60;

	printf("%dŠÔ%d•ª%d•b\n", c, b, a);

	return 0;
}