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

	printf("���簢���� ����� �Է����ּ��� (3~10���̷� �Է����ּ���) : ");
	scanf_s("%d", &size);
	if (size > 10 || size < 3)
	{
		printf("3~10 ������ ���ڰ� �ƴմϴ� ���α׷��� �����մϴ�.\n");
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