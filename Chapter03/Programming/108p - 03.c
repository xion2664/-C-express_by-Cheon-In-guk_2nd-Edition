#include <stdio.h>

int main()
{
	int w, h;
	double a;

	printf("삼각형의 밑변 : ");
	scanf("%d", &w);
	printf("삼각형의 높이 : ");
	scanf("%d", &h);

	a = w * h*0.5;

	printf("삼각형의 넓이 : %lf\n", a);
}