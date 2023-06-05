#include <stdio.h>
#include <iostream>
#include <conio.h>

void Quest_0605();

int main()
{
	Quest_0605();
	return 0;
}

void Quest_0605()
{
	char board[5] = { '0', };
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