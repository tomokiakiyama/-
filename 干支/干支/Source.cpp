#include<stdio.h>
int main(void)
{
	int num;

	printf("¶‚Ü‚ê‚½”N‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	scanf_s("%d", &num);

	if (num % 12 == 4)
		printf("Š±x‚Íq‚Å‚·\n");
	
	else if (num % 12 == 5)
		printf("Š±x‚Í‰N‚Å‚·\n");

	else if (num % 12 ==6 )
		printf("Š±x‚Í“Ğ‚Å‚·\n");

	else if (num % 12 ==7 )
		printf("Š±x‚Í‰K‚Å‚·\n");

	else if (num % 12 == 8)
		printf("Š±x‚Í’C‚Å‚·\n");

	else if (num % 12 ==9 )
		printf("Š±x‚Í–¤‚Å‚·\n");

	else if (num % 12 ==10 )
		printf("Š±x‚ÍŒß‚Å‚·\n");

	else if (num % 12 ==11 )
		printf("Š±x‚Í–¢‚Å‚·\n");

	else if (num % 12 ==0 )
		printf("Š±x‚Í\‚Å‚·\n");

	else if (num % 12 ==1 )
		printf("Š±x‚Í“Ñ‚Å‚·\n");

	else if (num % 12 ==2 )
		printf("Š±x‚Íœú‚Å‚·\n");

	else if (num % 12 ==3 )
		printf("Š±x‚Íˆå‚Å‚·\n");

	return 0;
}