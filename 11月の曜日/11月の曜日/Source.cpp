#include<stdio.h>
int main(void)
{
	int num;

	scanf_s("%d", &num);

	if (num >= 1 && num <= 30) {

		if (num % 7 == 6) {
			printf("11��%d���͓��j��\n", num);
		}
		else if (num % 7 == 0) {
			printf("11��%d���͌��j��\n", num);
		}
		else if (num % 7 == 1) {
			printf("11��%d���͉Ηj��\n", num);
		}
		else if (num % 7 == 2) {
			printf("11��%d���͐��j��\n", num);
		}
		else if (num % 7 == 3) {
			printf("11��%d���͖ؗj��\n", num);
		}
		else if (num % 7 == 4) {
			printf("11��%d���͋��j��\n", num);
		}
		else if (num % 7 == 5) {
			printf("11��%d���͓y�j��\n", num);
		}
	}
	else
		printf("%d����11���ɂ͂���܂���\n", num);

	return 0;
}

