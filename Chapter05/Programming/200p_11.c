#include <stdio.h>
#define PI 3.141592
int main()
{
	double angle, distance, circum_, radius;

	printf("문제에 써있는 대로 입력하세요.\n");
	printf("막대와 그림자가 이루는 각도는 몇 도인가요? : ");
	scanf("%lf", &angle);
	printf("알렉산드리아에서 시에네까지의 거리는 몇 km인가요? : ");
	scanf("%lf", &distance);

	circum_ = distance * 360.0 / angle;
	radius = circum_ / (2*PI);

	printf("지구의 반지름은 %lfkm입니다...\n", radius);
}