#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pibonacci(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 0)
	{
		return 0;
	}
	else
	{
		return pibonacci(n - 1) + pibonacci(n - 2);

	}
}

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", pibonacci(n));

	return 0;
}