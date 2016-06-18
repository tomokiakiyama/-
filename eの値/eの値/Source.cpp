#include <stdio.h>

int main(void)
{
	float a, b, c, d;
	
	for (a = 1, d = 1, c = 1; a <= 100; a = a + 1, d = d + 1 / c) {

		for (b = a - 1, c = a; b >= 1; c = c*b, b = b--) {}
	}
	
	printf("e=%f\n", d);

	return 0;
}
