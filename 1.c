#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1��
/*long long sum(int* a, int n)
{
	int i,sum=0;
	if (n >= 1 && n <= 3000000)
	{
		for (i = 0;i < n;i++)
		{
			sum += a[i];
		}
	}
	return sum;
}*/

//2��
/*int self(int a)
{
	int b=a;
	if (a > 0)
	{
		b = b + a % 10;
		a = a / 10;
		self(a);
	}
	while (a > 0)
	{
		b = b + a % 10;
		a = a / 10;
	}
		return b;
}

int main()
{
	int arr[10001];
	int i,sel;
	for (i = 1;i < 10001;i++)
	{
		sel = self(i);
		if (sel < 10001)
			arr[sel] = 1;

	}
	for (i = 1;i < 10001;i++)
	{
		if (arr[i] != 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
*/

//3��
/*int check(int n)
{
	int count = 0,a,b,c,i,d;
		if (n < 100)
		{
			count = n;
			return count;
		}
		else if(n==1000)
		{
			for (i = 100;i < n;i++)
			{
				a = i % 10; //�����ڸ�
				b = (i / 10) % 10;//�����ڸ�
				c = (i / 100) % 10;//�����ڸ�
				if (a+c==2*b)
				{
					count++;
				}
			}
			return (99 + count);
		}
		else
		{
			for (i = 100;i <=n;i++)
			{
				a = i % 10; //�����ڸ�
				b = (i / 10) % 10;//�����ڸ�
				c = (i / 100) % 10;//�����ڸ�
				if (a + c == 2 * b)
				{
					count++;
				}
			}
			return (99+count);
		}
	
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", check(n));
	return 0;
}
*/