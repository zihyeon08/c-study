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

	printf("������ ������ ��ǥ�� �Է��Ͻÿ�:");
	scanf("%d %d", &x1, &y1);
	printf("������ ���� ��ǥ�� �Է��Ͻÿ�:");
	scanf("%d %d", &x2, &y2);
	printf("\noutput:\n");
	printf("(%d,%d) ~ (%d,%d) ������ ����: %.2lf�Դϴ�.", x1, y1, x2, y2, cal(x1, y1, x2, y2));
}