#include <stdio.h>

int main(void)
{
	int a[9]{ 1,2,3,4,5,6,7,8,9 };//�z��v�f�ɂP���l��������B
	int b[9]{ 1,2,3,4,5,6,7,8,9 };//�z��v�f�ɂP���l��������B
	int i, j;

	for (i = 0, j = 0; i <= 8; i++) {//�J��Ԃ��Đ錾���ꂽ�l���o�͂���B
		
		
		for (j = 0; j <= 8; j++) {//�J��Ԃ��Đ錾���ꂽ�l���o�͂���B
			
			printf(" %d", a[i] * b[j]);//���̌v�Z������B
			
			if (a[i] * b[j] <= 9) {//�v�Z�����l���X�ȉ��Ȃ�P�}�X������B
				printf(" ");
			}

		}
		printf("\n");//�P�̒i���I��������s��ς���B
	}

	return 0;
}
