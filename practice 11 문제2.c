#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double cal(double x)
{
	double a, b, c, result;
	a = 3 * pow(x, 5);
	b = -7 * pow(x, 4);
	c = 9;
	result = a + b + c;
	return result;
}

void main()
{
	double x = 0;
	printf("x의 값을 입력하세요: ");
	scanf("%lf", &x);
	printf("\noutput:\nx의값이 %.2lf일 때, 다항식의 값은 %.2lf입니다.", x, cal(x));
}