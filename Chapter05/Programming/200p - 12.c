#include <stdio.h>
int main()
{
	unsigned int value;
	char c1, c2, c3, c4;

	printf("ù��° ���� : ");
	scanf(" %c", &c1);                   // �̷��� %c�տ� ���⸦ ��ĭ ����� ������ �ȳ��� ������ ����...
	printf("�ι�° ���� : ");
	scanf(" %c", &c2);
	printf("����° ���� : ");
	scanf(" %c", &c3);
	printf("�׹�° ���� : ");
	scanf(" %c", &c4);

	value = (c4 << 24) | (c3 << 16) | (c2 << 8) | c1;
	printf("����� : %x\n", value);
}