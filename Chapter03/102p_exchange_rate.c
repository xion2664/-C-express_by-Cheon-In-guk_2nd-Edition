#include <stdio.h>

int main()
{
	float rate;
	float usd;
	int krw;

	printf("�޷��� ���� ��ȭ ȯ���� �Է��ϼ��� : ");
	scanf("%f", &rate);

	printf("��ȭ �ݾ��� �Է��ϼ��� : ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("��ȭ %d���� %f�޷��Դϴ�\n", krw, usd);

	return 0;
}