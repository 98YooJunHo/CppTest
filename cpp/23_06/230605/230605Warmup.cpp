#include <stdio.h>
#include <iostream>
#include <conio.h>

int Gugudan();
void Quest_0605();

int main()
{
	//Gugudan();
	Quest_0605();
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
void Quest_0605()
{
	char board[5] = {'0',};
	int x = 0, y = 0;

	for (y = 0; y < 5; y += 1)
	{
		for (x = 0; x < 5; x += 1)
		{
			board[x] = '*';

			if (x == y)
			{
				board[x] = '0';
			}

			printf("%c", board[x]);
		}
		x = 0;
		printf("   아무키나 눌러주세요");
		_getch();
		printf("\n");
	}
}