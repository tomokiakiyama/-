#include <stdio.h>

int main(void)
{
	int a, b;

	printf("�l����͂��Ă��������B\n");
	scanf_s("%d", &a);//�l����͂���B

	for (b = 2; b <= a; b++) {//�J��Ԃ��B
		if (b == a) {
			printf("%d�͑f���ł��B\n", a);//�o�͂���B
		}
		else if ((a%b) == 0) {
			printf("%d�͑f���ł͂���܂���B\n", a);//�o�͂���B
			break;
		}
	}
	return 0;
}
