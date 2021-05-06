#include <stdio.h>

int main()
{
	int x = 10;				// 10진수의 10.		즉, 10.
	int y = 010;			// 8진수의 10.		즉, 8.
	int z = 0x10;			// 16진수의 10.		즉, 16.

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;
}