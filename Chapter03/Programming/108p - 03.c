#include <stdio.h>

int main()
{
	int w, h;
	double a;

	printf("�ﰢ���� �غ� : ");
	scanf("%d", &w);
	printf("�ﰢ���� ���� : ");
	scanf("%d", &h);

	a = w * h*0.5;

	printf("�ﰢ���� ���� : %lf\n", a);
}