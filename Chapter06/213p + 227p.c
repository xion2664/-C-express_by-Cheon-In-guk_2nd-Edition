#include <stdio.h>
int main()
{
	int year, month, days;

	printf("��� ���� �Է��Ͻÿ� : ");
	scanf("%d %d", &year, &month);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		switch (month)
		{
		case 2:
			days = 29;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;
			break;
		}
		printf("%d���� �����̰� %d���� %d�ϱ��� �ֽ��ϴ�.\n", year, month, days);
	}
	else
	{
		switch (month)
		{
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;
			break;
		}
		printf("%d���� ������ �ƴϰ� %d���� %d�ϱ��� �ֽ��ϴ�.\n", year, month, days);
	}
return 0;
}