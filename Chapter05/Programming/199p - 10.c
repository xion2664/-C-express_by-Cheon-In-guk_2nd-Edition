#include <stdio.h>
int main()
{
	double x, y;

	printf("x��ǥ�� y��ǥ�� �Է��Ͻʽÿ� : ");
	scanf("%lf %lf", &x, &y);

	(x > 0 && y > 0) ? printf("�� 1��и��� ��ǥ�Դϴ�.\n") : printf("");
	(x < 0 && y > 0) ? printf("�� 2��и��� ��ǥ�Դϴ�.\n") : printf("");
	(x < 0 && y < 0) ? printf("�� 3��и��� ��ǥ�Դϴ�.\n") : printf("");
	(x > 0 && y < 0) ? printf("�� 4��и��� ��ǥ�Դϴ�.\n") : printf("");
}