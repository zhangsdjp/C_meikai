/*
	�ǂݍ��񂾓�̐����l�̑傫�����̒l��\��
*/

#include  <stdio.h>

int main(void)
{
	int	 n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");	scanf("%d", &n1);
	printf("�����Q�F");	scanf("%d", &n2);

	if (n1 > n2)
		printf("�傫�����̒l��%d�ł��B\n", n1);
	else
		printf("�傫�����̒l��%d�ł��B\n", n2);

	return (0);
}
