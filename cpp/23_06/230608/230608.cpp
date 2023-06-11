#include <iostream>

void ArrayFunc(int* ptrArray, int arraySize);
void Am10();
void Pm4();

int main()
{
    //Am10();

    Pm4();
}

void Am10()
{
    int numbers[10] = { 0, };
    for (int i = 0; i < 10; i += 1)
    {
        numbers[i] = (i + 1)*10;
    }

    for (int i = 0; i < 10; i += 1)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int* ptrNumber = &numbers[2];
    
    printf("numbers가 들고 있는 값 = %p\n", &numbers); // 포인터에 참조된 주소값에 + 1하면 포인터가 알아서 옆칸의 주소를 가져온다
    printf("numbers[0]의 주소 값 = %p\n", &numbers[0]); // 포인터에 참조된 주소값에 + 1하면 포인터가 알아서 옆칸의 주소를 가져온
    printf("3번째 자리에 있는 값 + 1 = %d\n", *(ptrNumber + 1)); // 포인터에 참조된 주소값에 + 1하면 포인터가 알아서 옆칸의 주소를 가져온다
    printf("\n\n");

    printf("배열의 크기 %d\n\n", sizeof(numbers));

    ArrayFunc(numbers,(sizeof(numbers)/sizeof(int)));
}

void ArrayFunc(int* ptrArray, int arraySize)
{
    printf("함수에서 찍어본 numbers의 사이즈 %d\n\n", sizeof(ptrArray));
    for (int i = 0; i < arraySize; i++)
    {
        printf("ptrAttray[%d] 역참조 값 : %d\n", i, *(ptrArray+i));
        //printf("ptrAttray + 1 주소의 역참조 값 : %d\n", *(ptrArray + i));
    }
}

void Pm4()
{
    // 다차원 배열
    char char_[25] = { 0, };
    char char2_[5][5] = { 0, };

    for (int i = 0; i < 25; i++)
    {
        char_[i] = '*';
    }

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (x == 2 && y == 2)
            {
                char2_[y][x] = '0';
                continue;
            }

            char2_[y][x] = '*';
        }
    }

    //char2_[2][2] = '0';

    // 출력 부분
    /*for (int i = 0; i < 25; i++)
    {
        printf("%c ", char_[i]);

        if (i % 5 == 4)
        {
            printf("\n");
        }
    }*/

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("%c ", char2_[y][x]);
        }
        printf("\n");
    }
    printf("\n");

}