#include <stdio.h>

int main()
{
	double light_speed = 300000;
	double distance = 149600000;
	double time;

	time = distance / light_speed;

	printf("���� �ӵ��� %fkm/s\n", light_speed);
	printf("�¾�� �������� �Ÿ��� %fkm\n", distance);
	printf("���� �ð��� %f��\n", time);

	return 0;
}