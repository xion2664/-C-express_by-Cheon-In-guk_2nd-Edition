#include <stdio.h>
int main()
{
	double x, y;
	
	printf("2개의 실수를 입력하시오 : ");
	scanf("%f %f", &x, &y);

	printf("%f %f %f %f\n", x+y, x-y, x*y, x/y);
}