#include <stdio.h>
int main()
{
	char op;
	int x, y, result;

	printf("������ �Է��Ͻʽÿ�.\n");
	printf("(�� : 2 + 5)\n>>");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '&' || op == '|' || op == '^')
	{
		if(op=='&')
			printf("%d %c %d = %x\n", x, op, y, x&y);
		else if(op=='|')
			printf("%d %c %d = %x\n", x, op, y, x|y);            // ���� �´°ǰ� ��
		else
			printf("%d %c %d = %x\n", x, op, y, x^y);
	}
	else
	{
		if (op == '+')
			result = x + y;
		else if (op == '-')
			result = x - y;
		else if (op == '*')
			result = x * y;
		else if (op == '/')
			result = x / y;
		else if (op == '%')
			result = x % y;
		else
			printf("�������� �ʴ� �������Դϴ�.\n");

		printf("%d %c %d = %d\n", x, op, y, result);
	}
	
	return 0;
}