/*
	�ǂݍ��񂾌��̋G�߂�\��
*/

#include  <stdio.h>

int main(void)
{
	int	 month;								/* �� */

	printf("�����ł����F");
	scanf("%d", &month);

	if (month >= 3	&&  month <= 5)
		puts("�t�ł��B");
	else if (month >= 6  &&  month <= 8)
		puts("�Ăł��B");
	else if (month >= 9  &&  month <= 11)
		puts("�H�ł��B");
	else if (month == 1  ||  month == 2  ||  month == 12)
		puts("�~�ł��B");
	else
		puts("����Ȍ��͂���܂����!!\a");

	return (0);
}
