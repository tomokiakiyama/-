#include<stdio.h>
int a;

/*func�֐�*/
void func(void)
{
	a++;
	printf("func�֐��@%d\n", a);
}

/*main�֐�*/
void main(void)
{
	func();
	a++;
	printf("main�֐��@%d\n", a);
	func();

}