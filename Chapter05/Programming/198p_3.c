#include <stdio.h>
int main()
{
	int x, y, z, max;

	printf("���� 3���� �Է��Ͻÿ�. : ");
	scanf("%d %d %d", &x, &y, &z);

	max = (x > y) ? x : y;
	max = (max > z) ? max : z;

	printf("�ִ� : %d\n", max);
}