#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void max(int x, int y, int z)
{
	if (x > y)
	{
		if (x > z)
			printf("�ִ밪�� = %d", x);
		else
			printf("�ִ밪�� = %d", z);
	}
	else
	{
		if (y > z)
			printf("�ִ밪�� = %d", y);
		else
			printf("�ִ밪�� = %d", z);
	}

}

void mid(int x, int y, int z)
{
	if (x > y)
	{
		if (x < z)
			printf("�߰����� = %d", x);
		else
			printf("�߰����� = %d", z);
	}
	else
	{
		if (y < z)
		{
			printf("�߰����� = %d", y);
		}
		else if (x < z)
		{
			printf("�߰����� = %d", z);
		}
		else
		{
			printf("�߰����� = %d", x);
		}
	}

}

void min(int x, int y, int z)
{
	if (x < y)
	{
		if (x < z)
			printf("�ּҰ��� = %d", x);
		else
			printf("�ּҰ��� = %d", z);
	}
	else
	{
		if (y < z)
			printf("�ּҰ��� = %d", y);
		else
			printf("�ּҰ��� = %d", z);
	}
}

void main()
{
	int n = 0, x = 0, y = 0, z = 0, a;

	while (1)
	{
		printf("�޴��� �Է��ϼ���(0:���� 1:�ִ밪 2:�߰��� 3:�ּҰ�):");
		scanf("%d", &n);
		if (n == 0)
		{
			break;
		}
		else
		{
			a = n;
		}
		printf("\n���� 3���� �Է��ϼ���:");
		scanf("%d %d %d", &x, &y, &z);
	}
	printf("output:\n");

	switch (a) {
	case 1:
		max(x, y, z);
		break;
	case 2:
		mid(x, y, z);
		break;
	case 3:
		min(x, y, z);
		break;
	}

}