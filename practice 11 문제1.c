#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int cal(int x, int y, char op)
{
	int result = 0;
	switch (op)
	{
	case '+':
		printf("%d", x + y);
		break;
	case '-':
		printf("%d", x - y);
		break;
	case '*':
		printf("%d", x * y);
		break;
	case '/':
		printf("%d", x / y);
		break;
	case '%':
		printf("%d", x % y);
		break;
	}

}

void main()
{
	int x = 0, y = 0;
	char op;
	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &x, &y);

	getchar();//�� ���� �Է½� ������ �Է¹��۰� op�� �Է� ���� �� �� �������� �Է¹ް� ������ ����.
	printf("�����ڸ� �Է��ϼ���: ");
	scanf("%c", &op);

	printf("\n");
	printf("output : \n%d%c%d = ", x, op, y);
	cal(x, y, op);
}




