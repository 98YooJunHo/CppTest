#include <iostream>
#include <stdio.h>

void Square(int size), MakeSquare();

//int main()
//{
//	MakeSquare();
//
//	return 0;
//}

void MakeSquare()
{
	void Square(int size);
	int size;

	printf("정사각형의 사이즈를 입력해주세요 (3~10사이로 입력해주세요) : ");
	scanf_s("%d", &size);
	if (size > 10 || size < 3)
	{
		printf("3~10 사이의 숫자가 아닙니다 프로그램을 종료합니다.\n");
	}
	else
	{
		Square(size);
	}
}

void Square(int size)
{
	int x = 1, y = 1;

	while (x <= size)
	{
		while (y <= size)
		{
			printf("* ");
			y += 1;
		}
		y = 1;
		printf("\n");
		x += 1;
	}
}