#include <stdio.h>

int main()
{
	double x, y, z;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &x);
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &y);
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &z);

	printf("�հ�� %lf�̰� ��հ��� %lf�Դϴ�\n", x + y + z, (x + y + z) / 3.0);
}