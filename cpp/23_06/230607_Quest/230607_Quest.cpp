#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>

int main()
{
    char cardNumber[13][3] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    char cardPatterns[4][8] = { "♠", "◆", "♥", "♣" };

    srand(time(NULL));
    char power = '0';

    while (1)
    {
        printf("q입력시 종료\n");
        power = _getch();
        system("cls");
        if (power == 'q')
        {
            break;
        }
        int number = rand() % 13;
        int pattern = rand() % 4;

        if (number == 9)
        {
            printf("┌───────────┐\n");
            printf("│ %s %s     │\n", cardPatterns[pattern], cardNumber[number]);
            printf("│           │\n");
            printf("│           │\n");
            printf("│           │\n");
            printf("│           │\n");
            printf("│           │\n");
            printf("│      %s %s│\n", cardPatterns[pattern], cardNumber[number]);
            printf("└───────────┘\n");
        }
        else
        {
            printf("┌───────────┐\n");
            printf("│ %s %s      │\n", cardPatterns[pattern], cardNumber[number]);
            printf("│           │\n");
            printf("│           │\n");
            printf("│           │\n");
            printf("│           │\n");
            printf("│           │\n");
            printf("│       %s %s│\n", cardPatterns[pattern], cardNumber[number]);
            printf("└───────────┘\n");
        }
        continue;
    }
}
