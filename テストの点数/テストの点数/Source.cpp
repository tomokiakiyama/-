#include <stdio.h>

int main(void)
{
	int test[5][3];
	int i, j;

	printf("5�l���̍���A���w�A�p��̓_������͂��Ă�������\n");

	for (i = 0; i <= 4; i++) {
		printf("%d�l��\n", i + 1);
		for (j = 0; j <= 2; j++) {
			scanf_s("%d", &test[i][j]);
		}
	}

	for (i = 0; i <= 4; i++) {
		for (j = 0; j <= 2; j++) {
			printf("%d�l�ڂ�", i + 1);
			if (j == 0) {
				printf("����̃e�X�g�̓_����%d�_\n", test[i][j]);
			}
			else if (j == 1) {
				printf("���w�̃e�X�g�̓_����%d�_\n", test[i][j]);
			}
			else if (j == 2) {
				printf("�p��̃e�X�g�̓_����%d�_\n", test[i][j]);
			}
		}
	}
	return 0;
}