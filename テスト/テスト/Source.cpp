#include<stdio.h>
int main(void)
{
	int test[5][3];
	int i, j;

	for (i = 0; i <= 4; i++)//
	{
		printf("%d�l��\n", i + 1);

		for (j = 0; j <= 2; j++)
		{

			if (j == 0)
				printf("����̓_����");
			else if (j == 1)
				printf("���w�̓_����");
			else if (j == 2)
				printf("�p��̓_����");

			scanf_s("%d", &test[i][j]);
		}

	}
	return 0;
}
