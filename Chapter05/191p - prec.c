#include <stdio.h>
int main()
{
	int x = 0, y = 0;
	int result;

	result = 2 > 3 || 6 > 7;                              // �켱���� : ���� > ��
	printf("%d\n", result);                               // 2>3�� ����, 6>7�� �����̹Ƿ� ��ü ���ĵ� ����(0).

	result = 2 || 3 && 3 > 2;                           // �켱���� : && > ||
	printf("%d\n", result);                               // 3>2 = ��(1), 3&&1 = 1, 2||1 = 1.

	result = x = y = 1;                                     // ���� �����ڴ� ���� ������ �����ʺ���.
	printf("%d\n", result);                               // result = ( x = ( y = 1 ) )�� ����.

	result = - ++x + y--;                                   // �켱���� : ��ȣ = ����
	printf("%d\n", result);                                // ���� ���� �����ڴ� ������ ����ϰ� ���� �����.

	return 0;
}