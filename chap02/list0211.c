/*
	�O�̐����l��ǂݍ���ō��v�l�ƕ��ϒl��\��
*/

#include  <stdio.h>

int main(void)
{
	int		na, nb, nc;
	int		sum;				/* ���v�l */
	double	ave;				/* ���ϒl */

	puts("�O�̐�������͂��Ă��������B");
	printf("�����`�F");	  scanf("%d", &na);
	printf("�����a�F");	  scanf("%d", &nb);
	printf("�����b�F");	  scanf("%d", &nc);

	sum = na + nb + nc;
	ave = (double)sum / 3;		/* �L���X�g */

	printf("�����̍��v��%5d�ł��B\n",   sum);		/* 99999 */
	printf("�����̕��ς�%5.1f�ł��B\n", ave);		/* 999.9 */

	return (0);
}