#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
		//if n=3이면 1.3*factorial(2), 2. 3*2*fatorial(1) 3. 3*2*1. 따라서 return 6;
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	printf("%d", factorial(n));
	return 0;
}