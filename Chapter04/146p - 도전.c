#include <stdio.h>

int main()
{
	int light_speed = 300000;
	int distance = 149600000;
	int time;

	time = distance / light_speed;

	printf("���� �ӵ��� %fkm/s\n", light_speed);
	printf("�¾�� �������� �Ÿ��� %fkm\n", distance);
	printf("���� �ð��� %d�� %d��\n", time/60, time%60);

	return 0;
}