#include <stdio.h>
int main()
{
	int age, time, fee;

	printf("���� �ð��� �� �� �Դϱ�? \n24�ð� ������ �Է����ֽʽÿ�. (��: ���� 4�� = 16��) : ");
	scanf("%d", &time);
	printf("�̿����� ���̴� �� �� �Դϱ�? : ");
	scanf("%d", &age);

	if (time < 17)
	{
		if (age < 3)
			fee = 0;
		else if (age >= 65 || age <= 12)
			fee = 25000;
		else
			fee = 34000;
	}
	else
	{
		if (age < 3)
			fee = 0;
		else
			fee = 10000;
	}
	printf("����� %d�Դϴ�.\n", fee);

	return 0;
}