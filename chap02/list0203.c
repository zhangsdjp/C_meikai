/*
	��̐����l��ǂݍ���ŏ��Ə�]��\��
*/

#include  <stdio.h>

int main(void)
{
	int	 na, nb;

	puts("��̐�������͂��Ă��������B");
	printf("�����`�F");	  scanf("%d", &na);
	printf("�����a�F");	  scanf("%d", &nb);

	printf("�`���a�Ŋ����%d���܂�%d�ł��B\n", na / nb, na % nb);

	return (0);
}
