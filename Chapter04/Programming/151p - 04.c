#include <stdio.h>

int main()
{
	double width, length, height, volume;

	printf("������ ����, ����, ���̸� �ѹ��� �Է� : ");
	scanf("%lf %lf %lf", &width, &length, &height);

	volume = width * length * height;

	printf("������ ���Ǵ� %lf�Դϴ�.", volume);
}