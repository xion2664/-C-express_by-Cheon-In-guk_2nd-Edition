#include <stdio.h>

int main()
{
	double w, h, area, perimeter;

	printf("사각형의 너비 입력 : ");
	scanf("%lf", &w);
	
	printf("사각형의 높이 입력 : ");
	scanf("%lf", &h);
	
	area = w * h;
	perimeter = 2 * (w + h);

	printf("사각형의 넓이 : %lf\n사각형의 둘레 : %lf\n", area, perimeter);

	return 0;
}