#include <time.h>       // time()함수 사용을 위해 선언
#include <conio.h>      // _getch()사용을 위해 선언
#include <stdio.h>  
#include <stdlib.h>     // 자료형변환, 난수생성을 위해 선언
#include <iostream>
#include <windows.h>    // system("cls)사용을 위해 선언

void Print_Error();
void Print_GameEnd();

char Print_GameStart();
void Print_GameStart_Start();
void Print_GameStart_Quit();
char Print_RollStat(int str, int dex, int wis, int con);
void Print_RollStat_Roll(int str, int dex, int wis, int con);
void Print_RollStat_Start(int str, int dex, int wis, int con);
void Print_RollStat_Quit(int str, int dex, int wis, int con);

int Roll_CharacterStat(int* str, int* dex, int* wis, int* con);

int main()                                                  // !main
{
    char keyinput = '0';                                        // 키 입력 설정 및 초기화
    int str = 7, dex = 7, wis = 7, con = 7;                     // 초기 스탯 설정 및 초기화

    keyinput = Print_GameStart();

    if (keyinput == 'q' || keyinput == 'Q')                 // 게임 종료 if
    {
        Print_GameStart_Quit();
        Print_GameEnd();
        return 0;                                               // 메인함수 종료
    }                                                       // 게임 종료 if()
    
    if (keyinput == 's' || keyinput == 'S')                 // 게임 시작 if
    {
        Print_GameStart_Start();
        
        while (1)                                           // !초기 스탯 설정 부
        {
            keyinput = '0';                                     // 키 입력 받기전 초기화

            keyinput = Print_RollStat(str, dex, wis, con);

            if (keyinput == 'q' || keyinput == 'Q')         // 스탯 설정 중 게임 종료 if
            {
                Print_RollStat_Quit(str, dex, wis, con);        
                Print_GameEnd();
                return 0;                                       // 메인함수 종료
            }                                               // 스탯 설정 중 게임 종료 if()
            
            if (keyinput == 'r' || keyinput == 'R')         // 스탯 재설정 if
            {
                Print_RollStat_Roll(str, dex, wis, con);          
                Roll_CharacterStat(&str, &dex, &wis, &con);     // 스탯 재설정후 값 대입
                continue;                                       // 재설정후 while로 복귀
            }                                               // 스탯 재설정 if()

            if (keyinput == 's' || keyinput == 'S')         // 스탯 설정완료후 스탯재설정 탈출 if
            {
                Print_RollStat_Start(str,dex,wis,con);
                break;
            }                                               // 스탯 재설정 탈출 if()
            Print_Error();                                      // 스탯 재설정 중 q,r,s 제외한 다른 값 입력시
            continue;                                           // 다시 키 입력 받으러 while로 복귀
        }                                                   // !초기 스탯 설정부 종료
        


    }                                                       // 게임 시작 if()

    Print_Error();                                              // main함수 시작후 게임 시작도, 종료도 아닌 다른 값 입력시
    main();                                                     // 에러 출력 후 main 함수로 복귀
}                                                           // main()

// 올바르지 못한 키입력 화면 출력 함수
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

// 화면 출력 함수 모음
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
    printf("                      ┌──────────────────┐          ┌──────────────────┐              \n");
    printf("                      │   시작하기 = s   │          │   종료하기 = q   │               \n");
    printf("                      └──────────────────┘          └──────────────────┘               \n");
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
    printf("                      ┌──────────────────┐          ┌──────────────────┐              \n");
    printf("                      │ ▶시작하기 = s◀ │          │   종료하기 = q   │               \n");
    printf("                      └──────────────────┘          └──────────────────┘               \n");
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
    printf("                      ┌──────────────────┐          ┌──────────────────┐              \n");
    printf("                      │   시작하기 = s   │          │ ▶종료하기 = q◀ │               \n");
    printf("                      └──────────────────┘          └──────────────────┘               \n");
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
    printf("        │    ▶재설정: r◀    │   │     게임시작: s     │   │     게임종료: q     │       \n");
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
    printf("        │      재설정: r      │   │   ▶게임시작: s◀   │   │     게임종료: q     │       \n");
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
    printf("        │      재설정: r      │   │     게임시작: s     │   │   ▶게임종료: q◀   │       \n");
    printf("        │                     │   │                     │   │                     │       \n");
    printf("        └─────────────────────┘   └─────────────────────┘   └─────────────────────┘       \n");
    printf("                                                                                          \n");
    printf("                                                                                          \n");
    Sleep(1000);
    system("cls");
}

// 캐릭터 스탯 주사위 돌리기
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
