#include <stdio.h>
#define PI 3.14
int main()
{
	double r, A, V;

	printf("구의 반지름을 입력하시오 : ");
	scanf("%lf", &r);

	A = 4 * PI*r*r;
	V = (4 / 3)*PI*r*r*r;

	printf("구의 표면적은 %lf입니다.\n", A);
	printf("구의 부피는 %lf입니다.\n", V);

	return 0;
}