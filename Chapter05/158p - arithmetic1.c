#include <stdio.h>

int main()
{
	double x, y, result;

	printf("�ΰ��� �Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf %lf", &x, &y);

	result = x + y;
	printf("%lf + %lf = %lf\n", x, y, result);

	result = x - y;
	printf("%lf - %lf = %lf\n", x, y, result);

	result = x * y;
	printf("%lf * %lf = %lf\n", x, y, result);

	result = x / y;
	printf("%lf / %lf = %lf\n", x, y, result);
}