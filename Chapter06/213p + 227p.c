#include <stdio.h>
int main()
{
	int year, month, days;

	printf("년과 달을 입력하시오 : ");
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
		printf("%d년은 윤년이고 %d월은 %d일까지 있습니다.\n", year, month, days);
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
		printf("%d년은 윤년이 아니고 %d월은 %d일까지 있습니다.\n", year, month, days);
	}
return 0;
}