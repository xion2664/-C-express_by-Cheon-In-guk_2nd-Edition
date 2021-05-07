#include <stdio.h>

int main()
{
	double d;

	printf("실수를 입력하시오 : ");
	scanf("%lf", &d);

	printf("실수 형식으로는 %f입니다.\n", d);
	printf("지수 형식으로는 %e입니다.\n", d);
}