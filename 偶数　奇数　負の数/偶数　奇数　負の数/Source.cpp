#include <stdio.h>

int main(void)
{
	int num[10] = { 1,-8,5,-4,6,5,7,-3,-9,1 };//�z��v�f�ɂP���l��������B
	int a, b, c, i;

	for (i = 0, a = 0, b = 0, c = 0; i < 10; i++) {

		printf("%d ", num[i]);//�l��\������B

		if ((num[i] % 2) == 0)//�����Ȃ�΁{�P����B
			a++;
		else if ((num[i] % 2) != 0)//��Ȃ�΁{�P����B
			b++;

		if (num[i] < 0)//���̐��Ȃ�΁{�P����B
			c++;
	}
	printf("\n");//���s����B

	printf("���%d�B\n", b);//��̐���\������B
	printf("������%d�B\n", a);//�����̐���\������B
	printf("���̐��̐���%d��\n", c);//���̐��̐���\������B

	return 0;
}