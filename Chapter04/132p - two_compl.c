#include <stdio.h>

int main()
{
	int x = 3;
	int y = -3;

	// 8�ڸ��� 16������ ���. ���ڸ��� 0���� ä���.
	printf("x = %08x\n", x);
	printf("y = %08x\n", y);
	printf("x+y = %08x\n", x + y);

	return 0;
}