/*
	�����ƕ��������_��
*/

#include  <stdio.h>

int main(void)
{
	int		nx;		/* ���� */
	double	dx;		/* ���������_�� */

	nx = 9.99;
	dx = 9.99;

	printf(" int  �^�ϐ�nx�̒l�F%d\n", nx);			/*  9	   */
	printf("      �@�@�@nx / 2�F%d\n", nx / 2);		/*  9 / 2  */

	printf("double�^�ϐ�dx�̒l�F%f\n", dx);			/* 9.99	   */
	printf("      �@�@�@dx/2.0�F%f\n", dx / 2.0);	/* 9.99 / 2.0 */

	return (0);
}
