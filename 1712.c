#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c; //a ������� b ������� c��Ʈ�� ����
	scanf("%d %d %d", &a, &b, &c);

	if (c >= b)
	{
		printf("%d", a / (c - b) + 1);
	}
	else
		printf("-1");

	return 0;
}