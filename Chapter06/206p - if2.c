#include <stdio.h>
int main()
{
	int number;

	printf("������ ���� ������ �Է��Ͻÿ�. : ");
	scanf("%d", &number);

	if (number < 0)
		number = -number;

	printf("���밪�� %d�Դϴ�.\n", number);

	return 0;
}