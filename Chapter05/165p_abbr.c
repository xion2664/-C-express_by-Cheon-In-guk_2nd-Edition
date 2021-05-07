#include <stdio.h>

int main()
{
	int x = 10, y = 10, z = 33;

	x += 1;
	// x = x + 1과 같다.

	y *= 2;
	// y = y * 2와 같다.

	z %= 10 + 20;
	// z = z % (10+20)과 같다.
	// (복합 대입 연산자의 우선순위는 대입 연산자와 같다.)

	printf("x=%d	y=%d	z=%d\n", x, y, z);
}