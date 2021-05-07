#include <stdio.h>
int main()
{
	int cm, feet;
	double inch;

	const double cm_per_feet = 12 * 2.54;

	printf("키는 몇센티미터입니까? : ");
	scanf("%d", &cm);

	feet = cm / (int)cm_per_feet;
	inch = (cm-feet*cm_per_feet) / 2.54;

	printf("%dcm는 %d피트 %lf인치입니다.\n", cm, feet, inch);
}