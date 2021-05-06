#include <stdio.h>

int main()
{
	double m, v;

	printf("질량 : ");
	scanf("%lf", &m);

	printf("속도 : ");
	scanf("%lf", &v);

	printf("운동에너지 : %lf\n", (m*v*v) / 2.0);
}