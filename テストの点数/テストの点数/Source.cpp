#include <stdio.h>

int main(void)
{
	int test[5][3];
	int i, j;

	printf("5人分の国語、数学、英語の点数を入力してください\n");

	for (i = 0; i <= 4; i++) {
		printf("%d人目\n", i + 1);
		for (j = 0; j <= 2; j++) {
			scanf_s("%d", &test[i][j]);
		}
	}

	for (i = 0; i <= 4; i++) {
		for (j = 0; j <= 2; j++) {
			printf("%d人目の", i + 1);
			if (j == 0) {
				printf("国語のテストの点数は%d点\n", test[i][j]);
			}
			else if (j == 1) {
				printf("数学のテストの点数は%d点\n", test[i][j]);
			}
			else if (j == 2) {
				printf("英語のテストの点数は%d点\n", test[i][j]);
			}
		}
	}
	return 0;
}