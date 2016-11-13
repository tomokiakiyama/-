#include<stdio.h>
int a;

/*funcŠÖ”*/
void func(void)
{
	a++;
	printf("funcŠÖ”@%d\n", a);
}

/*mainŠÖ”*/
void main(void)
{
	func();
	a++;
	printf("mainŠÖ”@%d\n", a);
	func();

}