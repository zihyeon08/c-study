#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void max(int x, int y, int z)
{
	if (x > y)
	{
		if (x > z)
			printf("최대값은 = %d", x);
		else
			printf("최대값은 = %d", z);
	}
	else
	{
		if (y > z)
			printf("최대값은 = %d", y);
		else
			printf("최대값은 = %d", z);
	}

}

void mid(int x, int y, int z)
{
	if (x > y)
	{
		if (x < z)
			printf("중간값은 = %d", x);
		else
			printf("중간값은 = %d", z);
	}
	else
	{
		if (y < z)
		{
			printf("중간값은 = %d", y);
		}
		else if (x < z)
		{
			printf("중간값은 = %d", z);
		}
		else
		{
			printf("중간값은 = %d", x);
		}
	}

}

void min(int x, int y, int z)
{
	if (x < y)
	{
		if (x < z)
			printf("최소값은 = %d", x);
		else
			printf("최소값은 = %d", z);
	}
	else
	{
		if (y < z)
			printf("최소값은 = %d", y);
		else
			printf("최소값은 = %d", z);
	}
}

void main()
{
	int n = 0, x = 0, y = 0, z = 0, a;

	while (1)
	{
		printf("메뉴를 입력하세요(0:종료 1:최대값 2:중간값 3:최소값):");
		scanf("%d", &n);
		if (n == 0)
		{
			break;
		}
		else
		{
			a = n;
		}
		printf("\n정수 3개를 입력하세요:");
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