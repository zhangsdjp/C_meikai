/*
	�ǂݍ��񂾐����l���R�Ŋ�������]��\��
*/

#include  <stdio.h>

int main(void)
{
	int	 num;

	printf("��������͂��Ă��������F");
	scanf("%d", &num);

	if (num % 3 == 0)
		puts("���̐��͂R�Ŋ���؂�܂��B");
	else if (num % 3 == 1)
		puts("���̐����R�Ŋ������]��͂P�ł��B");
	else
		puts("���̐����R�Ŋ������]��͂Q�ł��B");

	return (0);
}
