/*
	�ǂݍ��񂾓�̐����l�͓��������i���̂Q�j
*/

#include  <stdio.h>

int main(void)
{
	int	 x1, x2;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");	scanf("%d", &x1);
	printf("�����Q�F");	scanf("%d", &x2);

	if (x1 != x2)
		puts("�����̒l�͈Ⴂ�܂��B");
	else
		puts("�����̒l�͓����ł��B");

	return (0);
}
