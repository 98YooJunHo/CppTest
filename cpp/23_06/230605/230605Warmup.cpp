#include <stdio.h>
#include <iostream>
#include <conio.h>

int Gugudan();
void des();

int main()
{
	//Gugudan();
	des();
	return 0;
}

int Gugudan()
{	
	int linecount[9] = { 0, };
	int numbers[9] = { 0, };
	int x = 0, y = 0;

	for (x = 0; x < 9; x += 1)
	{
		numbers[x] = x + 1;
		for (y = 0; y < 9; y += 1)
		{
			linecount[y] = y + 1;
			printf("%d * %d = %d\n", numbers[x], linecount[y], numbers[x] * linecount[y]);
		}
		printf("\n");
		y = 0;
	}
	return 0;
}
void des() 
{
	char board[5] = {'0',};

	for (int i = 0; i < 5; i++) 
	{
		int j = 0;
		int count = 0;
		board[i] = '*';
		for (j = 0; j < 5; j++)
		{
			if (j == count)
			{
				board[i] = '0';
			}
			printf("%c", board[j]);
		}
		count += 1;
		printf("아무키나 입력하세요\n");
		_getch();
	}
}