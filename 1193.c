#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0, i;
	scanf("%d", &n);//n번째
	for (i = 0;;i++)
	{
		if (i * (i + 1) / 2 >= n)//사선으로 셀 때 i번째
			break;
	}
	n -= i * (i - 1) / 2;//i번째중 몇번째인지
	if (i % 2 == 1)//i가 홀수
	{
		printf("%d/%d", i - n + 1, n);
	}
	else
	{
		printf("%d/%d", n, i - n + 1);
	}

	return 0;
}
