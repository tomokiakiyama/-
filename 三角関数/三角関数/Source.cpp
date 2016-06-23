#include <stdio.h>
#include <math.h>

int main(void)
{
	int a;
	double b,c;

	printf("角度　  sin       cos        tan\n");//出力する。

	for (a = 0, b = 0, c = 0; a <= 90; a++, c++) {//０度から９０度まで繰り返す。

		b = c*3.14159265 / 180;

		printf("%d    %lf   %lf   %lf\n", a, sin(b), cos(b), tan(b));//sin,cos,tanを出力する。
	}
	return 0;
}
