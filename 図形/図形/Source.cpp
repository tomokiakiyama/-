#include <stdio.h>

int main(void)
{
	int a, b, c;

	for (a = 1; a <= 5; a++) {//�J��Ԃ��B

		for (c = 5; c >= 5 - (5 - a); c = c - 1) {//�J��Ԃ�
			printf(" ");//�󗓂��o�͂���B
		}

		for (b = 1; b <= a * 2 - 1; b = b++) {//�J��Ԃ�
			printf("*");//*���o�͂���B
		}
		
		printf("\n");//���s����B
	}
	
	return 0;
}



