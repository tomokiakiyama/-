#include <stdio.h>

int main(void)
{
	char month[13][10]{ {},{ "January  " },{ "Febrary  " },{ "March    " },{ "April    " },{ "May      " },{ "June     " },{ "July     " },{ "August   "},{ "September" },{ "October  " },{ "November " },{ "December " }//�z��v�f�ɂP���P���������B
	};
	char stone[13][13]{ {},{ "�K�[�l�b�g" },{ "�A���V�X�g" },{ "�A�N�A���}��" } ,{ "�_�C�������h" },{ "�G�������h" },{ "�p�[��" },{ "���r�[" },{ "�y���h�b�g" },{ "�T�t�@�C�A" },{ "�I�p�[��" },{ "�g�p�[�Y" },{ "�^���U�i�C�g" }//�z��v�f�ɂP���P���������B
	};
	int i, j, k;

	printf("�����ł����H\n");//�o�͂���B

	scanf_s("%d", &i);//�l����͂���B

	printf("%d��\n", i);

	printf("�X�y����");

	for (j = 0; j < 10; j++) {//�P����o�͂���B
		printf("%c", month[i][j]);
	}
	printf("\n");//���s����B

	printf("�a���΂�");

	for (k = 0; k < 13; k++) {//�a���΂��o�͂���B
		printf("%c", stone[i][k]);
	}
	printf("\n");

	return 0;
}
