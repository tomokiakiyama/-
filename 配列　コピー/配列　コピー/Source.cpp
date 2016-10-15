#include<stdio.h>
int main(void)
{
	char str1[6] = { "abcde" };
	char str2[6] = "";
	int i;

	for (i = 0; i < 6; i++)
	{
		str2[i] = str1[i];
	}
	for (i = 0; i < 6; i++)
	{
		printf("%c\n", str2[i]);
	}
	
	return 0;
}