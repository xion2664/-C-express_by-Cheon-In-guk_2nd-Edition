#include <stdio.h>

int main()
{
	double x;

	printf("실수를 입력하시오 : ");
	scanf("%lf", &x);

	printf("다항식의 값은 %lf\n", 3 * x*x + 7 * x + 11);
}