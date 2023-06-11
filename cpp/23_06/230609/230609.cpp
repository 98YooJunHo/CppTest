#include <stdio.h>
#include <iostream>

void Am11();

int main()
{
	Am11();
}

void Am11()
{
	int userInput = -1;
	printf("원하는 크기만큼 배열을 만들겠음. 크기를 입력하시오 : ");
	scanf_s("%d", &userInput);

	int numbers[10] = { 0, };
	int* numbers2 = new int[userInput];			// 힙에 배열 할당

	for (int i = 0; i < userInput; i++)
	{
		numbers2[i] = 1 + i;
	}

	for (int i = 0; i < userInput; i++)
	{
		printf("i값 : %d\n", numbers2[i]);
	}
	printf("\n");
	
	// 프로그램 종료시에 할당해제해야함
	delete[] numbers2;
}