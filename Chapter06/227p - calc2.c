#include <stdio.h>
int main()
{
	char op;
	int x, y, result;

	printf("수식을 입력하시오\n");
	printf("(예 : 2 + 5)\n>>");
	scanf("%d %c %d", &x, &op, &y);
	
	if ((op == '&') || (op=='|') || (op == '^'))
	{
		switch (op)
		{
		case '&':		result = x & y;		break;
		case '|':		result = x | y;		break;
		case '^':		result = x ^ y;		break;
		}
		printf("%d %c %d = %x\n", x, op, y, result);
	}
	else
	{
		switch (op)
		{
		case '+':		result = x + y;		break;
		case '-':		result = x - y;		break;
		case '*':		result = x * y;		break;
		case '/':		result = x / y;		break;
		case '%':		result = x % y;		break;
		default:			printf("지원되지 않는 연산자입니다...\n");		break;
		}

		printf("%d %c %d = %d\n", x, op, y, result);
	}
}