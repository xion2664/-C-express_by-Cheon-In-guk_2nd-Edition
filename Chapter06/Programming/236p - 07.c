#include <stdio.h>
int main()
{
	double height, weight, std_weight;

	printf("키는 몇 cm입니까? : ");
	scanf("%lf", &height);
	printf("체중은 몇 kg입니까? : ");
	scanf("%lf", &weight);

	std_weight = (height - 100)*0.9;

	if (weight < std_weight)
		printf("저체중입니다.\n");
	else if (weight > std_weight)
		printf("과체중입니다.\n");
	else
		printf("표준체중입니다.\n");

	return 0;
}