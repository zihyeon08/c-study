#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//n���� ���ܿ��� ������� ��ġ ����� �ڽź��� ��ū ��ġ�� ����� ��
//�ڽź��� �� ū ��ġ�� ����� k���϶� �׻���� ��ġ����� K+1
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