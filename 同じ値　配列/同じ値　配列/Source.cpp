#include<stdio.h>
int main(void)
{
	int num[10] = { 43,54,35,642,64,25,65,35,64,787 };
	int a, b, i, j;

	b = 0;
	
	for (i = 0; i < 10; i++)
	{
		a = num[i];
		
		for (j = 0; j < 10; j++)
		{
			if (i == j)
				continue;
			if (a == num[j])
				b = b++;
		}
	}
	printf("“¯‚¶’l‚ª%dŽí—Þ‚ ‚è‚Ü‚·\n", b / 2);

	return 0;
}



