#include <stdio.h>
int main()
{
	int height, age;

	printf("Ű�� ��cm�Դϱ�? : ");
	scanf("%d", &height);
	printf("���̴� �� �� �Դϱ�? : ");
	scanf("%d", &age);

	if (height >= 140 && age >= 10)
		printf("ž���ϼŵ� �����ϴ�.\n");
	else
		printf("ž���� �Ұ��մϴ�.\n");

	return 0;
}