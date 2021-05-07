#include <stdio.h>

int main()
{
	float rate;
	float usd;
	int krw;

	printf("달러에 대한 통화 환율을 입력하세요 : ");
	scanf("%f", &rate);

	printf("원화 금액을 입력하세요 : ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("원화 %d원은 %f달러입니다\n", krw, usd);

	return 0;
}