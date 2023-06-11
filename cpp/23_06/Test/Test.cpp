#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main()
{
    int map_[6][6] = { 0, };
    char userInput = '0';
    int userX = 0;
    int userY = 0;
    int mapx[36] = { 0, };
    int* ptrmapx = mapx;

    for (int i = 0; i < 36; i++)
    {
        mapx[i] = i + 1;
    }
    std::cout << "Hello World!\n";
}

