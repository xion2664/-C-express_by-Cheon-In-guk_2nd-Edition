#include <stdio.h>

int main()
{
	int id, pw;

	printf("���̵�� �н����带 4���� ���ڷ� �Է��Ͻÿ� : \n");
	
	printf("id : ____\b\b\b\b");		// [\b] : Ŀ���� �ڷ� �����̴� ���� ����
	scanf("%d", &id);

	printf("pw : ____\b\b\b\b");
	scanf("%d", &pw);

	printf("\a�Էµ� ���̵�� \"%d\"�̰�, �н������ \"%d\"�Դϴ�.\n", id, pw);		// [\a] : ������� ����ϴ� ���� ����

	return 0;
}