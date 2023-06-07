#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void Am10();
void Am11();
void Am11WarmupNormal();
void Pm3();
void RealSwap(char* fchar, char* schar);
void Swap(char fchar, char schar);
void Pm4();
void Shuffle();
void RealShuffle(int* firstNumber, int* secondNumber);
void Lottery();


int main()
{

    /*char str[10] = "Hello";
    Swap(str[0], str[4]);
    printf("%s\n", str);
    RealSwap(&str[0], &str[4]);
    printf("%s\n", str);*/
    //Pm3();
    //Pm4();
    
    Lottery();

}

void Am10()
{
    char string_[15] = "Good morning!\n";
    char stringCopy[16] = { 0, };
    char string2_[] = "Good morning!\n";
    int numbers[10] = { 0, };

    bool isNullSameZero = false;
    if (0 == '\0')
    {
        isNullSameZero = true;
    }
    else
    {
        isNullSameZero = false;
    }
    printf("Null은 0과 같은 값인가? : %d\n", isNullSameZero);

    char string3[4];
    string3[0] = 'H';
    string3[1] = 'I';
    string3[2] = '!';
    string3[3] = '\0';

    printf("%s", string3);
    printf("\n");

    printf("문자열 배열의 크기%d\n", sizeof(string_));
    printf("문자열 배열2의 크기 %d\n", sizeof(string2_));
    printf("정수형 배열의 크기 %d\n", sizeof(numbers));
    printf("정수형 배열의 길이 %d\n", sizeof(numbers) / sizeof(int));
}

void Am11()
{
    char str[300] = { 0, };
    printf("문자열을 입력하시오(200자 이내로) : ");
    cin >> str;

    printf("제대로 입력을 받았는지? -> %s", str);
}

int lcount = 0;

void Am11WarmupNormal()
{
    char str[300] = { 0, };
    printf("문자열을 입력하시오(200자 이내로) : ");
    cin >> str;
    int count = 0;
    int lcount = 0;

    for (int i = 0; i < 300; i += 1)
    {
        if(str[i] >= 1 && str[i] <= 127)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                if ((count % 2) == 1)
                {
                    str[i] += 32;
                }
                count += 1;
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                if ((count % 2) == 0)
                {
                    str[i] -= 32;
                }
                count += 1;
            }
            lcount += 1;
        }
    }
    printf("대소대소대소 변환 -> %s\n", str);

    /*printf("변환 후 좌우 반전 -> ");
    for (int i = 299; i >= 0; i -= 1)
    {
        printf("%c", str[i]);
    }
    printf("\n");*/

    char rstr[300] = {0, };
    for (int i = 0; i < lcount; i += 1)
    {
        rstr[i] = str[(lcount - 1 - i)];
    }                                       //%s의 경우 NULL값을 만나면 종료함 그래서 lcount로 받은 문자수를 측정하고
    printf("변환 후 좌우 반전 -> %s\n", rstr); //-1을 해서 NULL값을 지워줌 -1을 하는 이유는 엔터를 치면서 NULL값이 들어감
}

void Pm3()
{
    char str[10] = "Hello";
    char space = 0;

    (str[0], str[4]) = (str[4], str[0]);

    space = str[0];
    str[0] = str[4];
    str[4] = space;

    printf("%s", str);
}

void RealSwap(char* fchar,char* schar)
{
    char space = 0;
    space = *fchar;
    *fchar = *schar;
    *schar = space;

    printf("%c %c\n", *fchar, *schar);
}

void Swap(char fchar, char schar)
{
    char space = 0;
    space = fchar;
    fchar = schar;
    schar = space;

    printf("%c %c\n", fchar, schar);
}

void Pm4()
{
    //포인터 직접 쳐보기
    int number = 100;
    int* ptrNumber = &number;
    printf("number변수의 주소는 : %p, 할당된 값은 : %d\n", &number, number);
    printf("ptrNumber변수의 주소는 : %p, 할당된 값은 : %p,\n 역참조한 값 : %d\n", &ptrNumber, ptrNumber,*ptrNumber);
}

void Shuffle()
{   
    // { 배열의 선언과 초기화
    int numbers[10] = { 0, };
    for (int i = 0; i < 10; i += 1)
    {
        numbers[i] = i + 1;
    }
    // } 배열의 선언과 초기화

    // { 배열의 출력
    printf("Shuffle 하기 전\n\n");
    for (int i = 0; i < 10; i += 1)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    // } 배열의 출력

    //{ 셔플 로직
    const int shuffleCount = 200;
    srand(time(NULL));
    int randomIdx1 = 0, randomIdx2 = 0;

    for (int i = 0; i < shuffleCount; i += 1)
    {
        randomIdx1 = rand() % 10 + 1;
        randomIdx2 = rand() % 10 + 1;
        RealShuffle(&numbers[randomIdx1], &numbers[randomIdx2]);
    }
    printf("\n");
    // } 셔플 로직

    // { 배열의 출력
    printf("Shuffle 한 후\n\n");
    for (int i = 0; i < 10; i += 1)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    // } 배열의 출력
}

void RealShuffle(int* firstNumber, int* secondNumber)
{
    int temp = 0;
    temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;

}

void Lottery()
{
    int lotteryNumber[45] = { 0, };
    for (int i = 0; i < 45; i += 1)
    {
        lotteryNumber[i] = i + 1;
    }

    const int shuffleCount = 10000000;
    srand(time(NULL));
    int randomIdx1 = 0, randomIdx2 = 0;

    for (int i = 0; i < shuffleCount; i += 1)
    {
        randomIdx1 = rand() % 45;
        randomIdx2 = rand() % 45;
        RealShuffle(&lotteryNumber[randomIdx1], &lotteryNumber[randomIdx2]);
    }

    printf("로또 1등 당첨 번호는?\n");
    for (int i = 0; i < 6; i += 1)
    {
        printf("%d ", lotteryNumber[i]);
        Sleep(500);
    }
    printf("\n");
}
