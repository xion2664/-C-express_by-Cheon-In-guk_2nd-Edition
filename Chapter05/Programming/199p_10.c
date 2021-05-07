#include <stdio.h>
int main()
{
	double x, y;

	printf("x좌표와 y좌표를 입력하십시오 : ");
	scanf("%lf %lf", &x, &y);

	(x > 0 && y > 0) ? printf("제 1사분면의 좌표입니다.\n") : printf("");
	(x < 0 && y > 0) ? printf("제 2사분면의 좌표입니다.\n") : printf("");
	(x < 0 && y < 0) ? printf("제 3사분면의 좌표입니다.\n") : printf("");
	(x > 0 && y < 0) ? printf("제 4사분면의 좌표입니다.\n") : printf("");
}