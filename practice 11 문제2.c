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
	printf("x�� ���� �Է��ϼ���: ");
	scanf("%lf", &x);
	printf("\noutput:\nx�ǰ��� %.2lf�� ��, ���׽��� ���� %.2lf�Դϴ�.", x, cal(x));
}