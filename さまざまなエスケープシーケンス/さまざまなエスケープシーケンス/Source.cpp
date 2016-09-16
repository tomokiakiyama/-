#include<stdio.h>
int main(void)
{
	printf("\a\n");
	printf("abc\bdef\n");
	printf("abc\tdef\n");
	printf("abc\vdef\n");
	printf("\r\n");
	printf("\`\n");
	printf("\"\n");
	printf("\\\n");
	printf("\?\n");
	printf("\101\n");
	printf("\x42\n");
	return 0;
}