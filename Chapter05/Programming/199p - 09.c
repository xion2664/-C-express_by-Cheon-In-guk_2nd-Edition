#include <stdio.h>
int main()
{
	double AC, AE, BC, DE;

	printf("�ﰢ���� �� AC, AE, BC�� ���ʷ� �Է��Ͻÿ�. : ");
	scanf("%lf %lf %lf", &AC, &AE, &BC);

	DE = (AE*BC) / AC;

	printf("�� DE�� ���̴� %lf�Դϴ�.\n", DE);

	return 0;
}