/*
	�ǂݍ��񂾓�̐����l�̘a�����߂ĕ\��
*/

#include  <stdio.h>

int main(void)
{
	int  n1, n2;
	int  wa;			/* �a */

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");	  scanf("%d", &n1);
	printf("�����Q�F");	  scanf("%d", &n2);

	wa = n1 + n2;								/* n1��n2�̘a��wa�ɑ�� */

	printf("�����̘a��%d�ł��B\n", wa);		/* �a��\�� */

	return (0);
}
