#include <stdio.h>

int main()
{
	int mile;
	double meter;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &mile);

	meter = 1609.0*mile;

	printf("%d������ %lf�����Դϴ�\n", mile, meter);
}