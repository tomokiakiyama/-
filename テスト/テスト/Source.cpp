#include<stdio.h>
int main(void)
{
	int test[5][3];
	int i, j;

	for (i = 0; i <= 4; i++)//
	{
		printf("%d人目\n", i + 1);

		for (j = 0; j <= 2; j++)
		{

			if (j == 0)
				printf("国語の点数は");
			else if (j == 1)
				printf("数学の点数は");
			else if (j == 2)
				printf("英語の点数は");

			scanf_s("%d", &test[i][j]);
		}

	}
	return 0;
}
