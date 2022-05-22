#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0, x = 0, sum = 2;
	scanf("%d", &n);


	while (1)
	{
		if (n == 1)
		{
			printf("1");
			break;
		}
		x++;
		sum += (x * 6);
		if (n < sum)
		{
			printf("%d", x + 1);//시작점에서 이미 방 한개포함.
			break;
		}

	}
	return 0;
}