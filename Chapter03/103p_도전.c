#include <stdio.h>

int main()
{
	double w, h, area, perimeter;

	printf("�簢���� �ʺ� �Է� : ");
	scanf("%lf", &w);
	
	printf("�簢���� ���� �Է� : ");
	scanf("%lf", &h);
	
	area = w * h;
	perimeter = 2 * (w + h);

	printf("�簢���� ���� : %lf\n�簢���� �ѷ� : %lf\n", area, perimeter);

	return 0;
}