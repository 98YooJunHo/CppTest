#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>

int main()
{
    int cards[52] = { 0, };
    char cardPatterns_Spade[8] = "♠";
    char cardPatterns_Diamond[8] = "◇";
    char cardPatterns_Heart[8] = "♡";
    char cardPatterns_Clover[8] = "♣";

    for (int i = 0; i < 52; i += 1)
    {
        cards[i] = i + 1;
    }

    srand(time(NULL));

    int randomcard;
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
        randomcard = rand() % 52;
        int cardNumber = randomcard % 13 + 1;

        switch (randomcard / 13)
        {
        case 0:
        {
            printf("%s / ", cardPatterns_Spade);
            break;
        }
        case 1:
        {
            printf("%s / ", cardPatterns_Diamond);
            break;
        }
        case 2:
        {
            printf("%s / ", cardPatterns_Heart);
            break;
        }
        case 3:
        {
            printf("%s / ", cardPatterns_Clover);
            break;
        }
        default:
            printf("오류");
            break;
        }

        if (cardNumber == 1)
        {
            printf("A\n");
            continue;
        }
        else if (cardNumber == 11)
        {
            printf("J\n");
            continue;
        }
        else if (cardNumber == 12)
        {
            printf("Q\n");
            continue;
        }
        else if (cardNumber == 13)
        {
            printf("K\n");
            continue;
        }

        printf("%d\n", cardNumber);
    }
}
