#include <stdio.h>
int main()
{
	int x = 0, y = 0;
	int result;

	result = 2 > 3 || 6 > 7;                              // 우선순위 : 관계 > 논리
	printf("%d\n", result);                               // 2>3은 거짓, 6>7도 거짓이므로 전체 수식도 거짓(0).

	result = 2 || 3 && 3 > 2;                           // 우선순위 : && > ||
	printf("%d\n", result);                               // 3>2 = 참(1), 3&&1 = 1, 2||1 = 1.

	result = x = y = 1;                                     // 단항 연산자는 결합 방향이 오른쪽부터.
	printf("%d\n", result);                               // result = ( x = ( y = 1 ) )과 같다.

	result = - ++x + y--;                                   // 우선순위 : 부호 = 증감
	printf("%d\n", result);                                // 후위 증감 연산자는 수식을 계산하고 나서 수행됨.

	return 0;
}