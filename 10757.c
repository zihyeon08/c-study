#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10005
char a[MAX_SIZE] = { 0 }, b[MAX_SIZE] = { 0 }, c[MAX_SIZE] = { 0 };

void reverse(char ary[]);

void reverse(char ary[])
{
	int length = strlen(ary);
	for (int i = 0; i < length / 2; i++)
	{
		char temp = ary[i];
		ary[i] = ary[length - i - 1];
		ary[length - i - 1] = temp;
	}
}

int main(void)
{
	int i, sum = 0, leng = 0;
	int k = 0;

	scanf("%s %s", &a, &b);

	reverse(a);
	reverse(b);

	if (strlen(a) < strlen(b))
	{
		leng = strlen(b);
	}
	else
	{
		leng = strlen(a);
	}

	for (i = 0;i < leng;i++)
	{
		sum = a[i] - '0' + b[i] - '0' + k;

		while (sum < 0)
		{
			sum += '0';
		}

		if (sum > 9)
		{
			k = 1;
		}
		else
		{
			k = 0;
		}

		c[i] = sum % 10 + '0';

	}

	if (k == 1)
	{
		c[leng] = '1';
	}


	//c다시 reverse 함수
	reverse(c);
	printf("%s", c);

	return 0;
}