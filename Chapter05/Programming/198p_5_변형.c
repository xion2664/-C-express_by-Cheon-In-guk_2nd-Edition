#include <stdio.h>
int main()
{
	int w, x, y, z;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	w = (x / 100) % 10;
	y = (x / 10) % 10;
	z = x % 10;

	printf("백의 자리 : %d\n", w);
	printf("십의 자리 : %d\n", y);
	printf("일의 자리 : %d\n", z);
	return 0;
}