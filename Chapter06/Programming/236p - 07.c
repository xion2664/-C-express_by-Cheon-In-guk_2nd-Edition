#include <stdio.h>
int main()
{
	double height, weight, std_weight;

	printf("Ű�� �� cm�Դϱ�? : ");
	scanf("%lf", &height);
	printf("ü���� �� kg�Դϱ�? : ");
	scanf("%lf", &weight);

	std_weight = (height - 100)*0.9;

	if (weight < std_weight)
		printf("��ü���Դϴ�.\n");
	else if (weight > std_weight)
		printf("��ü���Դϴ�.\n");
	else
		printf("ǥ��ü���Դϴ�.\n");

	return 0;
}