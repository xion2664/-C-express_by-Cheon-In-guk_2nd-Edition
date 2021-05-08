#include <stdio.h>
int main()
{
	int number;

	printf("정수를 입력하시오. : ");
	scanf("%d", &number);

	if (number > 0)
		printf("양수입니다.\n");

	return 0;
}