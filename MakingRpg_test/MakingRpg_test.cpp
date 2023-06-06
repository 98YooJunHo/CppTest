#include <time.h>   // time()함수 사용을 위해 선언
#include <conio.h>  // _getch()사용을 위해 선언
#include <stdio.h>  
#include <stdlib.h> // 자료형변환, 난수생성을 위해 선언
#include <iostream>
#include <windows.h> // system("cls)사용을 위해 선언

void Size_Screen();
void Print_Error();
char Print_GameStart();
void Print_GameEnd();
void Print_GameStart_Start(), Print_GameStart_Quit();
char Print_RollStat(int str, int dex, int wis, int con);
void Print_RollStat_Roll(int str, int dex, int wis, int con), Print_RollStat_Start(int str, int dex, int wis, int con);
void Print_RollStat_Quit(int str, int dex, int wis, int con);
char Print_GameLobby(char map[30][45]);

int Roll_CharacterStat(int* str, int* dex, int* wis, int* con);


int main()
{
    char power = '0';
    char map[30][45] = {'0',};
    int str = 7, dex = 7, wis = 7, con = 7;

    Print_GameLobby(map);


}
void Size_Screen()
{
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
}

// 화면 출력 함수
void Print_Error()
{
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                 올바른 값을 입력하세요                                 !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!                                                                                        !\n");
    printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    Sleep(1300);
    system("cls");
}
void Print_GameEnd()
{
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                   게임을 종료합니다                                    \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
}
char Print_GameStart()
{
    char power = '0';
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("      |￣￣￣￣￣￣￣￣|   |￣|    |￣|   |￣￣￣￣￣￣￣￣|                             \n");
    printf("       ￣￣￣|  |￣￣￣    |  |    |  |   |  |￣￣￣￣￣￣￣                              \n");
    printf("             |  |          |  |    |  |   |  |                                         \n");
    printf("             |  |          |  |    |  |   |  |                                       \n");
    printf("             |  |          |   ￣￣   |   |   ￣￣￣￣￣￣￣|                          \n");
    printf("             |  |          |  |￣￣|  |   |  |￣￣￣￣￣￣￣                       \n");
    printf("             |  |          |  |    |  |   |  |                                     \n");
    printf("             |  |          |  |    |  |   |  |                                      \n");
    printf("             |  |          |  |    |  |   |   ￣￣￣￣￣￣￣|                        \n");
    printf("             ￣￣          ￣￣    ￣￣   ￣￣￣￣￣￣￣￣￣                         \n");
    printf("                          |￣￣￣￣￣￣\\     |￣￣￣￣￣￣\\     /￣￣￣￣￣￣\\    \n");
    printf("                          | |￣￣￣￣\\  \\    | |￣￣￣￣\\  \\   /  /￣￣￣￣\\  \\    \n");
    printf("                          | |         | |    | |         | |  |  |          \\  \\  \n");
    printf("                          | |         | |    | |         | |  |  |           |  |    \n");
    printf("                          | |        /  /    | |        /  /  |  |           ￣￣   \n");
    printf("                          |  ￣￣￣￣  /     |  ￣￣￣￣  /   |  |     |￣￣￣￣|   \n");
    printf("                          | |￣￣\\  \\￣      | |￣￣￣￣￣    |  |     ￣￣￣/  |  \n");
    printf("                          | |     \\  \\       | |              |  |          /  /   \n");
    printf("                          | |      \\  \\      | |               \\  \\        /  /     \n");
    printf("                          | |       \\  \\     | |                \\  ￣￣￣￣  /       \n");
    printf("                          ￣         ￣￣     ￣                 ￣￣￣￣￣￣           \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                      ┌────────────────┐            ┌────────────────┐                  \n");
    printf("                      │  시작하기 = s  │            │  종료하기 = q  │                  \n");
    printf("                      └────────────────┘            └────────────────┘                  \n");
    printf("                                                                                          \n");
    power = _getch();
    system("cls");
    return power;
}
void Print_GameStart_Start()
{
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("      |￣￣￣￣￣￣￣￣|   |￣|    |￣|   |￣￣￣￣￣￣￣￣|                             \n");
    printf("       ￣￣￣|  |￣￣￣    |  |    |  |   |  |￣￣￣￣￣￣￣                              \n");
    printf("             |  |          |  |    |  |   |  |                                         \n");
    printf("             |  |          |  |    |  |   |  |                                       \n");
    printf("             |  |          |   ￣￣   |   |   ￣￣￣￣￣￣￣|                          \n");
    printf("             |  |          |  |￣￣|  |   |  |￣￣￣￣￣￣￣                       \n");
    printf("             |  |          |  |    |  |   |  |                                     \n");
    printf("             |  |          |  |    |  |   |  |                                      \n");
    printf("             |  |          |  |    |  |   |   ￣￣￣￣￣￣￣|                        \n");
    printf("             ￣￣          ￣￣    ￣￣   ￣￣￣￣￣￣￣￣￣                         \n");
    printf("                          |￣￣￣￣￣￣\\     |￣￣￣￣￣￣\\     /￣￣￣￣￣￣\\    \n");
    printf("                          | |￣￣￣￣\\  \\    | |￣￣￣￣\\  \\   /  /￣￣￣￣\\  \\    \n");
    printf("                          | |         | |    | |         | |  |  |          \\  \\  \n");
    printf("                          | |         | |    | |         | |  |  |           |  |    \n");
    printf("                          | |        /  /    | |        /  /  |  |           ￣￣   \n");
    printf("                          |  ￣￣￣￣  /     |  ￣￣￣￣  /   |  |     |￣￣￣￣|   \n");
    printf("                          | |￣￣\\  \\￣      | |￣￣￣￣￣    |  |     ￣￣￣/  |  \n");
    printf("                          | |     \\  \\       | |              |  |          /  /   \n");
    printf("                          | |      \\  \\      | |               \\  \\        /  /     \n");
    printf("                          | |       \\  \\     | |                \\  ￣￣￣￣  /       \n");
    printf("                          ￣         ￣￣     ￣                 ￣￣￣￣￣￣           \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                      ┌────────────────┐            ┌────────────────┐                  \n");
    printf("                      │▶ 시작하기 = s ◀│            │  종료하기 = q  │                  \n");
    printf("                      └────────────────┘            └────────────────┘                  \n");
    printf("                                                                                          \n");
    Sleep(1300);
    system("cls");
}
void Print_GameStart_Quit()
{
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("      |￣￣￣￣￣￣￣￣|   |￣|    |￣|   |￣￣￣￣￣￣￣￣|                             \n");
    printf("       ￣￣￣|  |￣￣￣    |  |    |  |   |  |￣￣￣￣￣￣￣                              \n");
    printf("             |  |          |  |    |  |   |  |                                         \n");
    printf("             |  |          |  |    |  |   |  |                                       \n");
    printf("             |  |          |   ￣￣   |   |   ￣￣￣￣￣￣￣|                          \n");
    printf("             |  |          |  |￣￣|  |   |  |￣￣￣￣￣￣￣                       \n");
    printf("             |  |          |  |    |  |   |  |                                     \n");
    printf("             |  |          |  |    |  |   |  |                                      \n");
    printf("             |  |          |  |    |  |   |   ￣￣￣￣￣￣￣|                        \n");
    printf("             ￣￣          ￣￣    ￣￣   ￣￣￣￣￣￣￣￣￣                         \n");
    printf("                          |￣￣￣￣￣￣\\     |￣￣￣￣￣￣\\     /￣￣￣￣￣￣\\    \n");
    printf("                          | |￣￣￣￣\\  \\    | |￣￣￣￣\\  \\   /  /￣￣￣￣\\  \\    \n");
    printf("                          | |         | |    | |         | |  |  |          \\  \\  \n");
    printf("                          | |         | |    | |         | |  |  |           |  |    \n");
    printf("                          | |        /  /    | |        /  /  |  |           ￣￣   \n");
    printf("                          |  ￣￣￣￣  /     |  ￣￣￣￣  /   |  |     |￣￣￣￣|   \n");
    printf("                          | |￣￣\\  \\￣      | |￣￣￣￣￣    |  |     ￣￣￣/  |  \n");
    printf("                          | |     \\  \\       | |              |  |          /  /   \n");
    printf("                          | |      \\  \\      | |               \\  \\        /  /     \n");
    printf("                          | |       \\  \\     | |                \\  ￣￣￣￣  /       \n");
    printf("                          ￣         ￣￣     ￣                 ￣￣￣￣￣￣           \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                      ┌────────────────┐            ┌────────────────┐                  \n");
    printf("                      │  시작하기 = s  │            │▶ 종료하기 = q ◀│                  \n");
    printf("                      └────────────────┘            └────────────────┘                  \n");
    printf("                                                                                          \n");
    Sleep(1300);
    system("cls");
}
char Print_RollStat(int str, int dex, int wis, int con)
{
    char power = '0';
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                              캐릭터의 초기 스탯을 설정합니다                               \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("              ┌───────────────────────┐            ┌───────────────────────┐              \n");
    printf("              │                       │            │                       │              \n");
    printf("                         힘:%d                                민첩:%d                    \n",str, dex);
    printf("              │                       │            │                       │              \n");
    printf("              └───────────────────────┘            └───────────────────────┘              \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("              ┌───────────────────────┐            ┌───────────────────────┐              \n");
    printf("              │                       │            │                       │              \n");
    printf("                        지력:%d                               체력:%d                     \n",con, wis);
    printf("              │                       │            │                       │              \n");
    printf("              └───────────────────────┘            └───────────────────────┘              \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("        ┌─────────────────────┐   ┌─────────────────────┐   ┌─────────────────────┐       \n");
    printf("        │                     │   │                     │   │                     │       \n");
    printf("        │      재설정: r      │   │     게임시작: s     │   │     게임종료: q     │       \n");
    printf("        │                     │   │                     │   │                     │       \n");
    printf("        └─────────────────────┘   └─────────────────────┘   └─────────────────────┘       \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    power = _getch();
    system("cls");
    return power;
}
void Print_RollStat_Roll(int str, int dex, int wis, int con)
{
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                              캐릭터의 초기 스탯을 설정합니다                               \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("              ┌───────────────────────┐            ┌───────────────────────┐              \n");
    printf("              │                       │            │                       │              \n");
    printf("                         힘:%d                                민첩:%d                    \n", str, dex);
    printf("              │                       │            │                       │              \n");
    printf("              └───────────────────────┘            └───────────────────────┘              \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("              ┌───────────────────────┐            ┌───────────────────────┐              \n");
    printf("              │                       │            │                       │              \n");
    printf("                        지력:%d                               체력:%d                     \n", con, wis);
    printf("              │                       │            │                       │              \n");
    printf("              └───────────────────────┘            └───────────────────────┘              \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("        ┌─────────────────────┐   ┌─────────────────────┐   ┌─────────────────────┐       \n");
    printf("        │                     │   │                     │   │                     │       \n");
    printf("        │     ▶재설정: r◀     │   │     게임시작: s     │   │     게임종료: q     │       \n");
    printf("        │                     │   │                     │   │                     │       \n");
    printf("        └─────────────────────┘   └─────────────────────┘   └─────────────────────┘       \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    Sleep(1000);
    system("cls");
}
void Print_RollStat_Start(int str, int dex, int wis, int con)
{
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                              캐릭터의 초기 스탯을 설정합니다                               \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("              ┌───────────────────────┐            ┌───────────────────────┐              \n");
    printf("              │                       │            │                       │              \n");
    printf("                         힘:%d                                민첩:%d                    \n", str, dex);
    printf("              │                       │            │                       │              \n");
    printf("              └───────────────────────┘            └───────────────────────┘              \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("              ┌───────────────────────┐            ┌───────────────────────┐              \n");
    printf("              │                       │            │                       │              \n");
    printf("                        지력:%d                               체력:%d                     \n", con, wis);
    printf("              │                       │            │                       │              \n");
    printf("              └───────────────────────┘            └───────────────────────┘              \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("        ┌─────────────────────┐   ┌─────────────────────┐   ┌─────────────────────┐       \n");
    printf("        │                     │   │                     │   │                     │       \n");
    printf("        │      재설정: r      │   │    ▶게임시작: s◀    │   │     게임종료: q     │       \n");
    printf("        │                     │   │                     │   │                     │       \n");
    printf("        └─────────────────────┘   └─────────────────────┘   └─────────────────────┘       \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    Sleep(1000);
    system("cls");
}
void Print_RollStat_Quit(int str, int dex, int wis, int con)
{
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                              캐릭터의 초기 스탯을 설정합니다                               \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("              ┌───────────────────────┐            ┌───────────────────────┐              \n");
    printf("              │                       │            │                       │              \n");
    printf("                         힘:%d                                민첩:%d                    \n", str, dex);
    printf("              │                       │            │                       │              \n");
    printf("              └───────────────────────┘            └───────────────────────┘              \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("              ┌───────────────────────┐            ┌───────────────────────┐              \n");
    printf("              │                       │            │                       │              \n");
    printf("                        지력:%d                               체력:%d                     \n", con, wis);
    printf("              │                       │            │                       │              \n");
    printf("              └───────────────────────┘            └───────────────────────┘              \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    printf("        ┌─────────────────────┐   ┌─────────────────────┐   ┌─────────────────────┐       \n");
    printf("        │                     │   │                     │   │                     │       \n");
    printf("        │      재설정: r      │   │     게임시작: s     │   │    ▶게임종료: q◀    │       \n");
    printf("        │                     │   │                     │   │                     │       \n");
    printf("        └─────────────────────┘   └─────────────────────┘   └─────────────────────┘       \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    Sleep(1000);
    system("cls");
}
char Print_GameLobby(char map[30][45])
{
    int x, y;
    char maptile = 'O';
    for ( y = 0; y < 30; y += 1)
    {
        for ( x = 0; x < 45; x += 1)
        {
            map[y][x] = maptile;
            printf("%c ", map[y][x]);
        }
        x = 0;
        printf("\n");
    }
    return '0';
}

// 캐릭터 스탯 지정 함수
int Roll_CharacterStat(int* str, int* dex, int* wis, int* con)
{
    int stat[4] = { 0, };
    int randomstat = 0;
    int allstatsum = 0;
    srand(time(NULL));

    while (1)
    {
        allstatsum = 0;
        for (int i = 0; i < 4; i += 1)
        {
            randomstat = rand() % 7 + 4;
            stat[i] = randomstat;
            allstatsum += randomstat;
        }
        if (allstatsum == 28)
        {
            break;
        }
        continue;
    }
    
    *str = stat[0];
    *dex = stat[1];
    *wis = stat[2];
    *con = stat[3];
    return 0;
}
