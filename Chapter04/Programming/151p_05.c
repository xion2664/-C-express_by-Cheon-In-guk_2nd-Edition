#include <stdio.h>

int main()
{
	const double SQM_PER_PYEONG = 3.3;
	int pyeong;
	double sqm;

	printf("�� ���Դϱ�? :");
	scanf("%d", &pyeong);

	sqm = SQM_PER_PYEONG * pyeong;

	printf("%lf�������Դϴ�.\n", sqm);
}