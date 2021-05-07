#include <stdio.h>

int main()
{
	double width, length, height, volume;

	printf("상자의 가로, 세로, 높이를 한번에 입력 : ");
	scanf("%lf %lf %lf", &width, &length, &height);

	volume = width * length * height;

	printf("상자의 부피는 %lf입니다.", volume);
}