#include <stdio.h>

int main()
{
	int x = 3;
	int y = -3;

	// 8자리의 16진수로 출력. 빈자리는 0으로 채운다.
	printf("x = %08x\n", x);
	printf("y = %08x\n", y);
	printf("x+y = %08x\n", x + y);

	return 0;
}