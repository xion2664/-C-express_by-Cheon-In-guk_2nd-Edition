#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, dis;
	
	printf("계수 a, b, c를 차례로 입력하시오 : ");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0)
		printf("방정식의 근은 %lf입니다.\n", -c / b);
	else if (b*b - 4 * a*c == 0)
		printf("방정식의 근은 %lf입니다.\n", -b / 2*a);
	else
	{
		dis = b * b - 4.0*a*c;
		
		if (dis >= 0)
		{
			printf("방정식의 근은 %lf입니다.\n", (-b + sqrt(dis)) / (2.0*a));
			printf("방정식의 근은 %lf입니다.\n", (-b - sqrt(dis)) / (2.0*a));
		}
		else
			printf("실근이 존재하지 않습니다.\n");
	}
}