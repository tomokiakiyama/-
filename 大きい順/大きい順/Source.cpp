#include <stdio.h>

int main(void)
{
	int num[10];
	int a,i,j,k ;
	
	printf("�l����͂��Ă��������B\n");

	for (i = 0; i <= 9; i++) {//�z��v�f�ɂP���l��������B
		scanf_s("%d", &num[i]);//�z��v�f�ɂP���l��������l����͂���B
	}
	for (i = 0; i <= 9; i++) {//�o�u���\�[�g�ő傫�����ɕ��тȂ����B
		
		for (j=0; j < 9-i; j++) {

			if (num[j] < num[j + 1]) {
				k = num[j];
				num[j] = num[j + 1];
				num[j+ 1] = k;
			}
		}
	}
	
	printf("\n");

	for (a = 0; a <= 9; a++) {
		printf("%d ", num[a]);//�傫�����ɏo�͂���B
	}
	printf("\n");

	return 0;
}
