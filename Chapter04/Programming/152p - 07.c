#include <stdio.h>

int main()
{
	double m, v;

	printf("���� : ");
	scanf("%lf", &m);

	printf("�ӵ� : ");
	scanf("%lf", &v);

	printf("������� : %lf\n", (m*v*v) / 2.0);
}