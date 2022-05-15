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
	printf("두 수를 입력하세요: ");
	scanf("%d %d", &x, &y);

	getchar();//두 정수 입력시 엔터의 입력버퍼가 op를 입력 받을 때 들어가 두정수를 입력받고 끝남을 방지.
	printf("연산자를 입력하세요: ");
	scanf("%c", &op);

	printf("\n");
	printf("output : \n%d%c%d = ", x, op, y);
	cal(x, y, op);
}




