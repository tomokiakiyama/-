#include <stdio.h>
#define SUB 2
#define NUM 5

int main(void)
{
	int test[2][5] = { { 80,60,22,50,75 }, { 90,55,62,78,58 }
	};
	int i;



	for (i = 0; i < NUM; i++) {
		printf("%d�Ԗڂ̐l�̍���̓_����%d�ł��B\n", i + 1, test[0][i]);
		printf("%d�Ԗڂ̐l�̎Z���̓_����%d�ł��B\n", i + 1, test[1][i]);
	}
	return 0;
}