#include<stdio.h>
int main(void)
{
	int num1, num2, year;

	printf("¶‚Ü‚ê‚½”N‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &num1);

	for (num2 = 2016, year = 0; num2 > num1; year++,--num2);

	printf("%dÎ‚Å‚·\n", year);

	return 0;
	
}