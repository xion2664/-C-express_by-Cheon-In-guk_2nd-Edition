#include <stdio.h>

int main()
{
	int usd;
	int krw;

	printf("달러화 금액을 입력하시오 : ");
	scanf("%d", &usd);

	krw = 1120 * usd;

	printf("달러화 %d달러는 %d원입니다.\n", usd, krw);

	return 0;
}