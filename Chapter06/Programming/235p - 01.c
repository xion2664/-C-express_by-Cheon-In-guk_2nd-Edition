#include <stdio.h>
int main()
{
	char ch;

	printf("���ڸ� �Է��Ͻʽÿ� : ");
	scanf("%c", &ch);
	
	switch (ch)
	{
	case 'a': case 'e': case 'i': case 'o': case 'u':
		printf("�����Դϴ�.\n"); break;

	default:
		printf("�����Դϴ�.\n"); break;
	} 
}