#include <stdio.h>
#define PI 3.14
int main()
{
	double r, A, V;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf("%lf", &r);

	A = 4 * PI*r*r;
	V = (4 / 3)*PI*r*r*r;

	printf("���� ǥ������ %lf�Դϴ�.\n", A);
	printf("���� ���Ǵ� %lf�Դϴ�.\n", V);

	return 0;
}