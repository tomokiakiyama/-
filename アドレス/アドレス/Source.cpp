#include<stdio.h>
int main(void)
{
	int x = 5;
	printf("x=%d x:%p\n", x, &x);
	
	int*px;
	px = &x;
	printf("px=%d px=%p\n", *px, px);

	*px = 50;
	printf("x=%d x:%p\n", x,&x);


	char str = 'H';
	printf("str=%c str:%p\n", str, &str);


	int num[5] = { 1,2,3,4,5 };
	int  i, a;
	
	for (a = 0; a <= 5; a++)
		printf("a=%d a:%p\n", a, &a);
	for (i = 0; i <= 4; i++)
		printf("num[%d]=%d num[%d]:%p\n", i, num[i], i, &num[i]);

	return 0;
}
