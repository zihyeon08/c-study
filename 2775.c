#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int k = 0, n = 0, t = 0, i, j;
	int lay[15][15] = { 0 };

	scanf("%d", &t);

	for (j = 0;j < 15;j++)
	{
		lay[0][j] = j;
	}
	for (i = 1;i < 15;i++)
	{
		for (j = 1;j < 15;j++)
		{
			lay[i][j] = lay[i][j - 1] + lay[i - 1][j];
		}
	}

	while (t-- && scanf("%d", &k) && scanf("%d", &n))
	{
		printf("%d\n", lay[k][n]);
	}
}