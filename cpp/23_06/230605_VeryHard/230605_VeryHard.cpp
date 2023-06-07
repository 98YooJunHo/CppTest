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
    int x = 0, zeroSpot = 0, i = 0;
    char movedirection = '0';
	char formove = '0';

	for (x = 0; x < 5; x += 1)
	{
		board[x] = '*';
		board[0] = '0';
	}
		
	while(1)
	{
		system("cls");
		for (i = 0; i < 5; i += 1)
		{
			printf("%c", board[i]);
		}
		i = 0;
		printf("\n방향키를 입력하세요 (a 왼쪽, d 오른쪽, q 종료)\n");
		movedirection = _getch();
		if (movedirection == 'q' || movedirection == 'Q')
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}

		if (movedirection == 'd' || movedirection == 'D')
		{
			if(zeroSpot > 3)
			{
				for (zeroSpot; zeroSpot > 0; zeroSpot -= 1)
				{
					formove = board[zeroSpot];
					board[zeroSpot] = board[zeroSpot - 1];
					board[zeroSpot - 1] = formove;
				}
				zeroSpot = 0;
			}
			else 
			{
				formove = board[zeroSpot + 1];
				board[zeroSpot + 1] = board[zeroSpot];
				board[zeroSpot] = formove;
				zeroSpot += 1;
			}
			continue;
		}
		
		if (movedirection == 'a' || movedirection == 'A')
		{
			if (zeroSpot < 1)
			{
				for (zeroSpot; zeroSpot < 4; zeroSpot += 1)
				{
					formove = board[zeroSpot];
					board[zeroSpot] = board[zeroSpot + 1];
					board[zeroSpot + 1] = formove;
				}
				zeroSpot = 4;
			}
			else
			{
				formove = board[zeroSpot - 1];
				board[zeroSpot - 1] = board[zeroSpot];
				board[zeroSpot] = formove;
				zeroSpot -= 1;
			}
			continue;
		}
		printf("올바른 방향키를 입력하세요\n");
		Sleep(1000);
		continue;
	}
}