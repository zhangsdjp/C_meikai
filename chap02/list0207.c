/*
	��̎����l��ǂݍ���Řa�E���E�ρE���������ŕ\��
*/

#include  <stdio.h>

int main(void)
{
	double	vx, vy;		/* ���������_�� */

	puts("��̐�����͂��Ă��������B");
	printf("����vx�F");	  scanf("%lf", &vx);
	printf("����vy�F");	  scanf("%lf", &vy);

	printf("vx + vy = %f\n", vx + vy);
	printf("vx - vy = %f\n", vx - vy);
	printf("vx * vy = %f\n", vx * vy);
	printf("vx / vy = %f\n", vx / vy);

	return (0);
}
