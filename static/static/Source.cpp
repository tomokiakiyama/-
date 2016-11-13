#include<stdio.h>

/*func*/
int func(void)
{
	static int x = 1;

	printf("%d\n", x);

	x++;

	return x;
}

/*main*/
int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
		func();

	return 0;
}


