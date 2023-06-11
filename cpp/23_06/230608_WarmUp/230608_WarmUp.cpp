#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

using namespace std;

void Sort(int* ptrArray, int arraySize);
void Bubble(int* ptrArray, int arraySize);
void Swap(int* firstNumber, int* secondNumber);
void Insert(int* ptrArray, int arraySize);

void Move();
void PtrMove(char* map[], int mapSize);

int main()
{
    /*char power = '0';
    int numbers[300] = { 0, };
    int numbersSize = (sizeof(numbers) / sizeof(int));
    printf("숫자를 입력해주세요.(최대300개) space를 하면 다음 숫자 입력입니다.\n");
    printf("q 입력 후 엔터를 누르면 숫자 입력을 종료합니다.\n");
    
    for (int i = 0; i < numbersSize; i++)
    {
        scanf_s("%d", &numbers[i]);
        scanf_s("%c", &power);
        if (power == 'q' || power == 'Q')
        {
            break;
        }
    }*/

    //Sort(numbers, numbersSize);

    //Bubble(numbers, numbersSize);

    /*Insert(numbers, numbersSize);*/
    
    Move();
}

void Swap(int* firstNumber, int* secondNumber)
{
    int temp = 0;
    temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}

void Sort(int* ptrArray, int arraySize)
{
    srand(time(NULL));
    int numberCount = 0;

    printf("\n선택정렬되기 전 배열은\n");

    for (int i = 0; i < arraySize; i++)
    {
        if (*(ptrArray + i) != 0)
        {
            numberCount += 1;
            printf("%d ", *(ptrArray+i));
        }
    }

    printf("\n\n");

    for (int i = 0; i < numberCount; i++)
    {
        for (int j = 0; j < numberCount - i; j++)
        {
            if (*(ptrArray + i) != 0)
            {
                if (*(ptrArray + i) > *(ptrArray + i + j))
                {
                    Swap((ptrArray + i), (ptrArray + i + j));
                }
            }
        }
    }

    printf("선택정렬된 배열은\n");

    for (int i = 0; i < numberCount; i++)
    {
        printf("%d ", *(ptrArray + i));
    }
    printf("\n\n");
}

void Bubble(int* ptrArray, int arraySize)
{
    srand(time(NULL));
    int numberCount = 0;

    printf("\n버블정렬되기 전 배열은\n");

    for (int i = 0; i < arraySize; i++)
    {
        if (*(ptrArray + i) != 0)
        {
            numberCount += 1;
            printf("%d ", *(ptrArray + i));
        }
    }

    printf("\n\n");

    for (int i = 1; i < numberCount; i++)
    {
        for (int j = 0; j < numberCount - i; j++)
        {
            if (*(ptrArray + j) != 0)
            {
                if (*(ptrArray + j) > *(ptrArray + j +1))
                {
                    
                     Swap((ptrArray + j), (ptrArray + j +1));
                    
                }
            }
            //j = numberCount;
        }
        //i = numberCount;
    }

    printf("버블정렬된 배열은\n");

    for (int i = 0; i < numberCount; i++)
    {
        printf("%d ", *(ptrArray + i));
    }
    printf("\n\n");
}

void Insert(int* ptrArray, int arraySize)
{
    srand(time(NULL));
    int numberCount = 0;

    printf("\n삽입정렬되기 전 배열은\n");

    for (int i = 0; i < arraySize; i++)
    {
        if (*(ptrArray + i) != 0)
        {
            numberCount += 1;
            printf("%d ", *(ptrArray + i));
        }
    }

    printf("\n\n");

    int count = 0;

    for (int i = 1; i < numberCount; i++)
    {
        count += 1;
        for (int j = 0; j < i; j++)
        {
            if (*(ptrArray + i) != 0)
            {
                if (*(ptrArray + i-j-1) > *(ptrArray + i-j))
                {
                    Swap((ptrArray + i-j-1), (ptrArray + i-j));
                }
            }
            //j = numberCount;
        }
        //i = numberCount;
        printf("%d회차 삽입정렬된 배열은\n", count);

        for (int i = 0; i < numberCount; i++)
        {
            printf("%d ", *(ptrArray + i));
        }
        printf("\n\n");
    }

    /*printf("삽입정렬된 배열은\n");

    for (int i = 0; i < numberCount; i++)
    {
        printf("%d ", *(ptrArray + i));
    }
    printf("\n\n");*/
}

void Move()
{
    char userInput = '0';
    char map_[6][6] = { 0, };
    int userX = 2;
    int userY = 2;

    for (int y = 0; y < 6; y++)
    {
        for (int x = 0; x < 6; x++)
        {
            map_[y][x] = '#';
        }
    }

    for (int y = 1; y < 5; y++)
    {
        for (int x = 1; x < 5; x++)
        {
            if (x == 2 && y == 2)
            {
                map_[y][x] = '0';
                continue;
            }

            map_[y][x] = '*';
        }
    }
    
    while (1)
    {
        system("cls");
        for (int y = 0; y < 6; y++)
        {
            for (int x = 0; x < 6; x++)
            {
                printf("%c ", map_[y][x]);
            }
            printf("\n");
        }
        printf("\n");
        printf("w 위로이동, s 아래로이동, a 왼쪽으로이동, d 오른쪽으로이동\n");
        printf("종료 q\n");
        userInput = _getch();
        
        if (userInput == 'q' || userInput == 'Q')
        {
            break;
        }

        if (userInput == 'w' || userInput == 'W')
        {
            if (userY - 1 < 1)
            {
                printf("벽으로 막혀 지나갈 수 없습니다.\n");
                Sleep(700);
                userY = 1;
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
            if (userY + 1 > 4)
            {
                printf("벽으로 막혀 지나갈 수 없습니다.\n");
                Sleep(700);
                userY = 4;
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
            if (userX - 1 < 1)
            {
                printf("벽으로 막혀 지나갈 수 없습니다.\n");
                Sleep(700);
                userX = 1;
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY][userX-1];
            map_[userY][userX-1] = temp;
            userX -= 1;
            continue;
        }

        if (userInput == 'd' || userInput == 'D')
        {
            if (userX + 1 > 4)
            {
                printf("벽으로 막혀 지나갈 수 없습니다.\n");
                Sleep(700);
                userX = 4;
                continue;
            }
            char temp = '0';
            temp = map_[userY][userX];
            map_[userY][userX] = map_[userY][userX+1];
            map_[userY][userX+1] = temp;
            userX += 1;
            continue;
        }

        printf("올바른 값을 입력하세요\n");
        Sleep(1000);
        continue;
    }
}
