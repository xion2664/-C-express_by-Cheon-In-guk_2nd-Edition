#include <stdio.h>
int main()
{
	int w, x, y, z;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);

	w = (x / 100) % 10;
	y = (x / 10) % 10;
	z = x % 10;

	printf("���� �ڸ� : %d\n", w);
	printf("���� �ڸ� : %d\n", y);
	printf("���� �ڸ� : %d\n", z);
	return 0;
}