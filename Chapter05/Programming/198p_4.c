#include <stdio.h>
int main()
{
	int cm, feet;
	double inch;

	const double cm_per_feet = 12 * 2.54;

	printf("Ű�� �Ƽ�����Դϱ�? : ");
	scanf("%d", &cm);

	feet = cm / (int)cm_per_feet;
	inch = (cm-feet*cm_per_feet) / 2.54;

	printf("%dcm�� %d��Ʈ %lf��ġ�Դϴ�.\n", cm, feet, inch);
}