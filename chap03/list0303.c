/*
	�ǂݍ��񂾐����l�͂T�Ŋ���؂�Ȃ�������؂�邩
*/

#include  <stdio.h>

int main(void)
{
	int	 vx;

	printf("��������͂��Ă��������F");
	scanf("%d", &vx);

	if (vx % 5)
		puts("���̐��͂T�Ŋ���؂�܂���B");
	else
		puts("���̐��͂T�Ŋ���؂�܂��B");

	return (0);
}
