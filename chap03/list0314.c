/*
	�ǂݍ��񂾓�̐����l�̍������߂ĕ\���i�������Z�q�j
*/

#include  <stdio.h>

int main(void)
{
	int	 n1, n2;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");	scanf("%d", &n1);
	printf("�����Q�F");	scanf("%d", &n2);

	printf("�����̍���%d�ł��B\n", (n1 > n2) ? n1 - n2 : n2 - n1);

	return (0);
}
