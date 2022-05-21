#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//n명의 집단에서 각사람의 덩치 등수는 자신보다 더큰 덩치의 사람의 수
//자신보다 더 큰 덩치의 사람이 k명일때 그사람의 덩치등수는 K+1
int main()
{
	int n = 0, i, j, count = 0, x[100], y[100];
	scanf("%d", &n);

	for (i = 0;i < n;i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			if (x[i] < x[j] && y[i] < y[j])
			{
				count++;
			}
		}
		printf("%d ", count + 1);
		count = 0;
	}
	return 0;
}