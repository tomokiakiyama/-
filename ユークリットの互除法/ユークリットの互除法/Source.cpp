#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("���l����͂��Ă��������B\n");//���l���o�͂���B
	scanf_s("%d", &a);//���l����͂���B

	printf("���l����͂��Ă��������B\n");//���l���o�͂���B
	scanf_s("%d", &b);//���l����͂���B

	printf("%d��%d�̍ő���񐔂�", a, b);

	for (c = a%b; c != 0; a / b, c = a%b) {//���[�N���b�g�̌ݏ��@�Ōv�Z����B
		a = b;
		b = c;
	}
	
	printf("%d�ł��B\n", b);//�ő���񐔂��o�͂���B

	return 0;

}
