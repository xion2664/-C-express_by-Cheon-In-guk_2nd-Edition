#include <stdio.h>

int main()
{
	int usd;
	int krw;

	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &usd);

	krw = 1120 * usd;

	printf("�޷�ȭ %d�޷��� %d���Դϴ�.\n", usd, krw);

	return 0;
}