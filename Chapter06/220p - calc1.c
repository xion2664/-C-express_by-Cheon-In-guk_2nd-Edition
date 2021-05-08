#include <stdio.h>
int main()
{
	char op;
	int x, y, result;

	printf("수식을 입력하십시오.\n");
	printf("(예 : 2 + 5)\n>>");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '&' || op == '|' || op == '^')
	{
		if(op=='&')
			printf("%d %c %d = %x\n", x, op, y, x&y);
		else if(op=='|')
			printf("%d %c %d = %x\n", x, op, y, x|y);            // 뭐지 맞는건가 ㄷ
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
			printf("지원되지 않는 연산자입니다.\n");

		printf("%d %c %d = %d\n", x, op, y, result);
	}
	
	return 0;
}