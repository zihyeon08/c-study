#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0, i;
	scanf("%d", &n);//n��°
	for (i = 0;;i++)
	{
		if (i * (i + 1) / 2 >= n)//�缱���� �� �� i��°
			break;
	}
	n -= i * (i - 1) / 2;//i��°�� ���°����
	if (i % 2 == 1)//i�� Ȧ��
	{
		printf("%d/%d", i - n + 1, n);
	}
	else
	{
		printf("%d/%d", n, i - n + 1);
	}

	return 0;
}
