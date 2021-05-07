#include <stdio.h>

int main()
{
	int x, y, z, tmp;
	x = 10, y = 20, z = 30;

	printf("x=%d, y=%d, z=%d\n", x, y, z);

	tmp = x;
	x = y;
	y = z;
	z = tmp;

	printf("x=%d, y=%d, z=%d\n", x, y, z);
}