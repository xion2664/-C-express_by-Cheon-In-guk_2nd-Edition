#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, dis;
	
	printf("��� a, b, c�� ���ʷ� �Է��Ͻÿ� : ");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0)
		printf("�������� ���� %lf�Դϴ�.\n", -c / b);
	else if (b*b - 4 * a*c == 0)
		printf("�������� ���� %lf�Դϴ�.\n", -b / 2*a);
	else
	{
		dis = b * b - 4.0*a*c;
		
		if (dis >= 0)
		{
			printf("�������� ���� %lf�Դϴ�.\n", (-b + sqrt(dis)) / (2.0*a));
			printf("�������� ���� %lf�Դϴ�.\n", (-b - sqrt(dis)) / (2.0*a));
		}
		else
			printf("�Ǳ��� �������� �ʽ��ϴ�.\n");
	}
}