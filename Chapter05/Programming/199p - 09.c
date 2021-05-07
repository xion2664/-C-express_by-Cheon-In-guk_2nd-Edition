#include <stdio.h>
int main()
{
	double AC, AE, BC, DE;

	printf("삼각형의 변 AC, AE, BC를 차례로 입력하시오. : ");
	scanf("%lf %lf %lf", &AC, &AE, &BC);

	DE = (AE*BC) / AC;

	printf("변 DE의 길이는 %lf입니다.\n", DE);

	return 0;
}