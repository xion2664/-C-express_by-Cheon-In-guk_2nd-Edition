#include <stdio.h>
#define PI 3.141592
int main()
{
	double angle, distance, circum_, radius;

	printf("������ ���ִ� ��� �Է��ϼ���.\n");
	printf("����� �׸��ڰ� �̷�� ������ �� ���ΰ���? : ");
	scanf("%lf", &angle);
	printf("�˷���帮�ƿ��� �ÿ��ױ����� �Ÿ��� �� km�ΰ���? : ");
	scanf("%lf", &distance);

	circum_ = distance * 360.0 / angle;
	radius = circum_ / (2*PI);

	printf("������ �������� %lfkm�Դϴ�...\n", radius);
}