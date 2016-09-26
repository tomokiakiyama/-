#include<stdio.h>
int main(void)
{
	int num;

	scanf_s("%d", &num);

	if (num >= 1 && num <= 30) {

		if (num % 7 == 6) {
			printf("11ŒŽ%d“ú‚Í“ú—j“ú\n", num);
		}
		else if (num % 7 == 0) {
			printf("11ŒŽ%d“ú‚ÍŒŽ—j“ú\n", num);
		}
		else if (num % 7 == 1) {
			printf("11ŒŽ%d“ú‚Í‰Î—j“ú\n", num);
		}
		else if (num % 7 == 2) {
			printf("11ŒŽ%d“ú‚Í…—j“ú\n", num);
		}
		else if (num % 7 == 3) {
			printf("11ŒŽ%d“ú‚Í–Ø—j“ú\n", num);
		}
		else if (num % 7 == 4) {
			printf("11ŒŽ%d“ú‚Í‹à—j“ú\n", num);
		}
		else if (num % 7 == 5) {
			printf("11ŒŽ%d“ú‚Í“y—j“ú\n", num);
		}
	}
	else
		printf("%d“ú‚Í11ŒŽ‚É‚Í‚ ‚è‚Ü‚¹‚ñ\n", num);

	return 0;
}

