#include <stdio.h>
int main()
{
	int age, time, fee;

	printf("현재 시각은 몇 시 입니까? \n24시간 단위로 입력해주십시오. (예: 오후 4시 = 16시) : ");
	scanf("%d", &time);
	printf("이용자의 나이는 몇 세 입니까? : ");
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
	printf("요금은 %d입니다.\n", fee);

	return 0;
}