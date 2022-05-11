#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int v = 0, a = 0, b = 0, result = 0, day = 0;
	scanf("%d %d %d", &a, &b, &v);

	while (1)
	{
		result += a;

		if (result >= v)
		{
			day++;
			break;
		}

		else
		{
			result -= b;
			day++;
		}
	}

	printf("%d", day);
	return 0;
}