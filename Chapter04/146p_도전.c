#include <stdio.h>

int main()
{
	int light_speed = 300000;
	int distance = 149600000;
	int time;

	time = distance / light_speed;

	printf("빛의 속도는 %fkm/s\n", light_speed);
	printf("태양과 지구와의 거리는 %fkm\n", distance);
	printf("도달 시간은 %d분 %d초\n", time/60, time%60);

	return 0;
}