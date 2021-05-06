#include <stdio.h>

int main()
{
	const double SQM_PER_PYEONG = 3.3;
	int pyeong;
	double sqm;

	printf("몇 평입니까? :");
	scanf("%d", &pyeong);

	sqm = SQM_PER_PYEONG * pyeong;

	printf("%lf평방미터입니다.\n", sqm);
}