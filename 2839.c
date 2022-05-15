#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0, a = 0, count = 0;
	scanf("%d", &n);
	if (n < 10)
	{
		if (n % 5 == 0)
			printf("%d", 1);
		else if (n % 3 == 0)
			printf("%d", n / 3);
		else if (n == 8)
			printf("%d", 2);
		else
			printf("-1");
	}
	else
	{
		a = n;
		for (int i = 0;i < a / 3;i++)
		{
			if (n % 5 == 0)
			{
				printf("%d", n / 5);
				break;
			}
			else
			{
				n = n - 3;
				count++;
				if (n % 5 == 0)
				{
					printf("%d", count + n / 5);
					break;
				}
				else if (n == 2 || n == 1)
				{
					printf("-1");
					break;
				}
			}
		}

	}
	return 0;
}
