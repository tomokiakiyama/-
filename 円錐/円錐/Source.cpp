#include <stdio.h>

int main(void)
{
	double h, r, n, a, b;

	printf("������");//�������o�͂���B
	scanf_s("%lf", &h);//��������͂���B

	printf("��ӂ̔��a��");//��ӂ̔��a���o�͂���B
	scanf_s("%lf", &r);//��ӂ̕ό`����͂���B

	printf("��������");//���������o�͂���B
	scanf_s("%lf", &n);//����������͂���B

	for (a = 1, b = 0; a <= n; b = b + 3.14159*((a - 1) / n)*r*((a - 1) / n)*r*(h / n), a++) {}//�̐ς��v�Z�B
	printf("�~���̑̐ς�%lf�ł��B\n", b);//�̐ς��o�͂���B
	
	return 0;
}
