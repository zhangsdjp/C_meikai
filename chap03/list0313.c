/*
	�ǂݍ��񂾓�̐����l�̑傫�����̒l�����߂ĕ\���i�������Z�q�j
*/

#include  <stdio.h>

int main(void)
{
	int	 n1, n2, max;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");	scanf("%d", &n1);
	printf("�����Q�F");	scanf("%d", &n2);

	max = (n1 > n2) ? n1 : n2;		/* �傫�����̒l��max�ɑ�� */

	printf("�傫�����̒l��%d�ł��B\n", max);

	return (0);
}
