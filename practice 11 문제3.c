#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cal(int x1, int y1, int x2, int y2)
{
	double a, b, c;
	a = pow(abs(x1 - x2), 2);
	b = pow(abs(y1 - y2), 2);
	c = sqrt(a + b);

	return c;
}

void main()
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

	printf("직선의 시작점 좌표를 입력하시오:");
	scanf("%d %d", &x1, &y1);
	printf("직선의 끝점 좌표를 입력하시오:");
	scanf("%d %d", &x2, &y2);
	printf("\noutput:\n");
	printf("(%d,%d) ~ (%d,%d) 직선의 길이: %.2lf입니다.", x1, y1, x2, y2, cal(x1, y1, x2, y2));
}