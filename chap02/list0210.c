/*
	��̐����l��ǂݍ���ŕ��ϒl�������ŕ\���i�L���X�g�j
*/

#include  <stdio.h>

int main(void)
{
	int	 na, nb;

	puts("��̐�������͂��Ă��������B");
	printf("�����`�F");	  scanf("%d", &na);
	printf("�����a�F");	  scanf("%d", &nb);

	printf("�����̕��ς�%f�ł��B\n", (double)(na + nb) / 2);	/* �L���X�g */

	return (0);
}
