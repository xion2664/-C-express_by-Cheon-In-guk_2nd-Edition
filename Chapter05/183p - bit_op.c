#include <stdio.h>
int main()
{
	int x = 9;		// 1001
	int x = 10;		// 1010
	
	printf("��Ʈ AND = %08X\n", x & y);		// 00001000
	printf("��Ʈ OR = %08X\n", x | y);			// 00001011
	printf("��Ʈ XOR = %08X\n", x ^ y);		// 00000011
	printf("��Ʈ NOT = %08X\n", ~x);			// 11110110

	return 0;
}