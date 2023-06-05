#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <windows.h>

void Veryhard();

int main()
{
	Veryhard();
    return 0;
}

void Veryhard()
{
    char board[5] = { '0', };
    int x = 0, y = 0;
    char movedirection = '0';

	while(1)
	{
		system("cls");
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
		printf("\n방향키를 입력하세요 (a 왼쪽, d 오른쪽, q 종료)\n");
		movedirection = _getch();
		if (movedirection == 'q' || movedirection == 'Q')
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		if (movedirection == 'd' || movedirection == 'D')
		{
			(y > 3) ? y = 0 : y += 1;
			continue;
		}
		else if (movedirection == 'a' || movedirection == 'A')
		{
			(y < 1) ? y = 4 : y -= 1;
			continue;
		}
		printf("올바른 방향키를 입력하세요\n");
		Sleep(1000);
		continue;
	}
}