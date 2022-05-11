#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int t = 0, h = 0, w = 0, n = 0, count = 0;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d %d", &h, &w, &n);
		count = 0;
		for (int k = 1; k <= w;k++)
		{
			for (int j = 1;j <= h;j++)
			{
				count++;
				if (count == n)
				{
					printf("%d\n", j * 100 + k);
				}
			}
		}
	}
}