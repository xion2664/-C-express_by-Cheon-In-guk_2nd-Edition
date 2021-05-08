#include <stdio.h>
int main()
{
	int height, age;

	printf("키가 몇cm입니까? : ");
	scanf("%d", &height);
	printf("나이는 몇 세 입니까? : ");
	scanf("%d", &age);

	if (height >= 140 && age >= 10)
		printf("탑승하셔도 좋습니다.\n");
	else
		printf("탑승이 불가합니다.\n");

	return 0;
}