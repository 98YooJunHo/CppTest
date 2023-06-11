#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void Swap(int* firstNumber, int* secondNumber);
void Move(int mapSize);
void MoveHard(int mapSize);

int main()
{
    int userNum = 0;
    printf("배열의 크기를 입력해주세요 : \n");
    scanf_s("%d", &userNum);    

    if (userNum > 15)
    {
        return 0;
    }

    /*Move(userNum);*/

    MoveHard(userNum);

}

void Swap(int* firstNumber, int* secondNumber)
{
    int temp = 0;
    temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}

void Move(int mapSize)
{
    srand(time(NULL));
    int map_[15][15] = { 0, };
    map_[mapSize][mapSize];
    int clearMap_[15][15] = { 0, };
    clearMap_[mapSize][mapSize];
    char userInput = '0';
    int userX = 0;
    int userY = 0;
    int mapx[225] = { 0, };
    mapx[mapSize];
    int* ptrmapx = mapx;

    for (int i = 0; i < (mapSize * mapSize); i++)
    {
        mapx[i] = i;
    }

    for (int i = 0; i < ((mapSize * mapSize) - 1); i++)
    {
        clearMap_[i / mapSize][i % mapSize] = i + 1;
    }

    int randomIdx1 = 0;
    int randomIdx2 = 0;

    srand(time(NULL));
    for (int i = 0; i < 100000; i++)
    {
        randomIdx1 = rand() % (mapSize * mapSize);
        randomIdx2 = rand() % (mapSize * mapSize);
        Swap(&mapx[randomIdx1], &mapx[randomIdx2]);
    }


    for (int i = 0; i < (mapSize * mapSize); i++)
    {
        map_[i/mapSize][i%mapSize] = *(ptrmapx + i);
    }

    for (int y = 0; y < mapSize; y++)
    {
        for (int x = 0; x < mapSize; x++)
        {
            if (map_[y][x] == 0)
            {
                userY = y;
                userX = x;
            }
        }
    }

    while (1)
    {
        int sameNumber = 0;
        system("cls");
        for (int y = 0; y < mapSize; y++)
        {
            for (int x = 0; x < mapSize; x++)
            {
                printf("%3d ", map_[y][x]);
            }
            printf("\n");
        }
        printf("\n");
        printf("w 위로이동, s 아래로이동, a 왼쪽으로이동, d 오른쪽으로이동\n");
        printf("종료 q\n");
        userInput = _getch();
        
        for (int y = 0; y < mapSize; y++)
        {
            for (int x = 0; x < mapSize; x++)
            {
                if (map_[y][x] == clearMap_[y][x])
                {
                    sameNumber += 1;
                }
            }
        }

        if (sameNumber == (mapSize * mapSize))
        {
            system("cls");
            printf("\n\n클리어!\n\n");
            Sleep(1000);
            break;
        }


        if (userInput == 'q' || userInput == 'Q')
        {
            break;
        }

        if (userInput == 'w' || userInput == 'W')
        {
            if (userY - 1 < 0)
            {
                printf("벽으로 막혀 지나갈 수 없습니다.\n");
                Sleep(700);
                userY = 0;
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY - 1][userX];
            map_[userY - 1][userX] = temp;
            userY -= 1;
            continue;
        }

        if (userInput == 's' || userInput == 'S')
        {
            if (userY + 1 > (mapSize-1))
            {
                printf("벽으로 막혀 지나갈 수 없습니다.\n");
                Sleep(700);
                userY = (mapSize - 1);
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY + 1][userX];
            map_[userY + 1][userX] = temp;
            userY += 1;
            continue;
        }

        if (userInput == 'a' || userInput == 'A')
        {
            if (userX - 1 < 0)
            {
                printf("벽으로 막혀 지나갈 수 없습니다.\n");
                Sleep(700);
                userX = 0;
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY][userX - 1];
            map_[userY][userX - 1] = temp;
            userX -= 1;
            continue;
        }

        if (userInput == 'd' || userInput == 'D')
        {
            if (userX + 1 > (mapSize - 1))
            {
                printf("벽으로 막혀 지나갈 수 없습니다.\n");
                Sleep(700);
                userX = (mapSize - 1);
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY][userX + 1];
            map_[userY][userX + 1] = temp;
            userX += 1;
            continue;
        }

        printf("올바른 값을 입력하세요\n");
        Sleep(1000);
        continue;
    }
}

void MoveHard(int mapSize)
{
    srand(time(NULL));
    int map_[15][15] = { 0, };
    map_[mapSize][mapSize];
    int clearMap_[15][15] = { 0, };
    clearMap_[mapSize][mapSize];
    char userInput = '0';
    int userX = mapSize - 1;
    int userY = mapSize - 1;
    

    for (int i = 0; i < ((mapSize * mapSize) - 1); i++) // 맵 크기 3일 경우
    {                                                   // 1 2 3
        clearMap_[i/mapSize][i%mapSize] = i+1;          // 4 5 6
        map_[i / mapSize][i % mapSize] = i + 1;         // 7 8 0 이런 식이 되도록 값 대입
    }

    int randomMove = 0;

    srand(time(NULL));


    for (int i = 0; i < 100000; i++)
    {
        randomMove = rand() % 4;
        
        if (randomMove == 0) // 0일경우 위로 이동
        {
            if (userY - 1 < 0)
            {
                userY = 0;
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY - 1][userX];
            map_[userY - 1][userX] = temp;
            userY -= 1;
        }

        if (randomMove == 1) // 1일경우 아래로 이동
        {
            if (userY + 1 > (mapSize - 1))
            {
                userY = (mapSize - 1);
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY + 1][userX];
            map_[userY + 1][userX] = temp;
            userY += 1;
        }

        if (randomMove == 2) // 2일경우 오른쪽으로 이동
        {
            if (userX + 1 > (mapSize - 1))
            {
                userX = (mapSize - 1);
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY][userX + 1];
            map_[userY][userX + 1] = temp;
            userX += 1;
        }

        if (randomMove == 3) // 3일경우 왼쪽으로 이동
        {
            if (userX - 1 < 0)
            {
                userX = 0;
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY][userX - 1];
            map_[userY][userX - 1] = temp;
            userX -= 1;
        }
    }


    for (int i = 0; i < mapSize; i++)
    {
        if (userX + 1 > (mapSize - 1))
        {
            userX = (mapSize - 1);
            continue;
        }
        char temp = '0';
        temp = map_[userY][userX];
        map_[userY][userX] = map_[userY][userX + 1];
        map_[userY][userX + 1] = temp;
        userX += 1;
    }

    for (int i = 0; i < mapSize; i++)
    {
        if (userY + 1 > (mapSize - 1))
        {
            userY = (mapSize - 1);
            continue;
        }
        char temp = '0';
        temp = map_[userY][userX];
        map_[userY][userX] = map_[userY + 1][userX];
        map_[userY + 1][userX] = temp;
        userY += 1;

    }
    


    while (1)
    {
        int sameNumber = 0;
        system("cls");
        for (int y = 0; y < mapSize; y++)
        {
            for (int x = 0; x < mapSize; x++)
            {
                printf("%3d ", map_[y][x]);
            }
            printf("\n");
        }
        printf("\n");
        printf("0을 움직이는 슬라이드 퍼즐입니다\n");
        printf("w 위로이동, s 아래로이동, a 왼쪽으로이동, d 오른쪽으로이동\n");
        printf("종료 q\n");
        userInput = _getch();

        for (int y = 0; y < mapSize; y++)
        {
            for (int x = 0; x < mapSize; x++)
            {
                if (map_[y][x] == clearMap_[y][x])
                {
                    sameNumber += 1;
                }
            }
        }

        if (sameNumber == (mapSize * mapSize))
        {
            system("cls");
            printf("\n\n클리어!\n\n");
            Sleep(1000);
            break;
        }


        if (userInput == 'q' || userInput == 'Q')
        {
            break;
        }

        if (userInput == 'w' || userInput == 'W')
        {
            if (userY - 1 < 0)
            {
                printf("벽으로 막혀 지나갈 수 없습니다.\n");
                Sleep(700);
                userY = 0;
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY - 1][userX];
            map_[userY - 1][userX] = temp;
            userY -= 1;
            continue;
        }

        if (userInput == 's' || userInput == 'S')
        {
            if (userY + 1 > (mapSize - 1))
            {
                printf("벽으로 막혀 지나갈 수 없습니다.\n");
                Sleep(700);
                userY = (mapSize - 1);
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY + 1][userX];
            map_[userY + 1][userX] = temp;
            userY += 1;
            continue;
        }

        if (userInput == 'a' || userInput == 'A')
        {
            if (userX - 1 < 0)
            {
                printf("벽으로 막혀 지나갈 수 없습니다.\n");
                Sleep(700);
                userX = 0;
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY][userX - 1];
            map_[userY][userX - 1] = temp;
            userX -= 1;
            continue;
        }

        if (userInput == 'd' || userInput == 'D')
        {
            if (userX + 1 > (mapSize - 1))
            {
                printf("벽으로 막혀 지나갈 수 없습니다.\n");
                Sleep(700);
                userX = (mapSize - 1);
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY][userX + 1];
            map_[userY][userX + 1] = temp;
            userX += 1;
            continue;
        }

        printf("올바른 값을 입력하세요\n");
        Sleep(1000);
        continue;
    }
}
