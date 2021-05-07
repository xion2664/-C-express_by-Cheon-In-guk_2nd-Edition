#include <stdio.h>

int main()
{
	double x, y, z;

	printf("실수를 입력하시오 : ");
	scanf("%lf", &x);
	printf("실수를 입력하시오 : ");
	scanf("%lf", &y);
	printf("실수를 입력하시오 : ");
	scanf("%lf", &z);

	printf("합계는 %lf이고 평균값은 %lf입니다\n", x + y + z, (x + y + z) / 3.0);
}