#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int n, m = 0;
	scanf("%d", &n);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	int i, j;
	for (i = n;i >= 0;i--)
	{
		if (i == 0)
		{
			for (j = 0;j < n;j++)printf("____");
			printf("\"����Լ��� ������?\"\n");
			for (j = 0;j < n;j++)printf("____");
			printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		}
		else
		{
			for (j = 0;j < m;j++)printf("____");
			printf("\"����Լ��� ������?\"\n");
			for (j = 0;j < m;j++)printf("____");
			printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
			for (j = 0;j < m;j++)printf("____");
			printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
			for (j = 0;j < m;j++)printf("____");
			printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
		}
		m++;

	}
	int k = n;
	for (i = 0;i <= n;i++)
	{
		for (j = k;j > 0;j--)printf("____");
		printf("""��� �亯�Ͽ���.""\n");
		k--;
	}

	return 0;
}