#include<stdio.h>
int main(void)
{
	int a, b, c, d;

	scanf_s("%d", &a);
	printf("%d‚Ì‘fˆö”‚Í", a);

	for (b = 2; b <= a; b++) {
		if (a%b == 0) {
			c = b;

			for (d = 2; d <= c; d++) {
				if (c != d) {
					if (c%d == 0)
						break;
				}

				if (c == d)
					printf("%d ", d);
			}
		}
	}
	printf("\n");
	return 0;

}
