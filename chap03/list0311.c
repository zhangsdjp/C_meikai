/*
	�ǂݍ��񂾓�̐����l�̑傫�����̒l�����߂ĕ\��
*/

#include  <stdio.h>

int main(void)
{
	int	 n1, n2, max;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");	scanf("%d", &n1);
	printf("�����Q�F");	scanf("%d", &n2);

	if (n1 > n2) max = n1; else max = n2;

	printf("�傫�����̒l��%d�ł��B\n", max);

	return (0);
}
