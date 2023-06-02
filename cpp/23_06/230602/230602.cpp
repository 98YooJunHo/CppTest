#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void SC(), Loop(), Rand(), Pm3();

//int main()
//{
//	//loop();
//
//	//SC();
//
//	//Rand();
//
//	//Pm3();
//
//	return 0;
//}								// main()

void SC()						// switch/case 문
{
	char userinput = '0';
	printf("UserInput : ");
	userinput = _getch();		// 하나의 키입력을 받아서 userinput에 대입

	printf("\n\n");

	switch (userinput)				
	{
	case 'a':					// userinput이 'a'일경우
		printf("이것은 가위\n");	
		break;
	case 'b':					// userinput이 'b'일경우
		printf("이것은 바위\n");
		break;
	case 'c':					// userinput이 'c'일경우
		printf("이것은 보\n");
		break;
	default:					// userinput이 그외의 키입력일경우
		printf("처리되지 않은 예외 입력입니다. \n");
		break;
	}
	printf("프로그램을 종료합니다. \n");
	printf("\npress any key...\n");
	_getch();					// 종료직전 하나의 키입력을 받도록 유예
}

void Loop()
{
	int loopcount = 1;			//루프 카운트 선언

	while (loopcount <= 10)		//루프 카운트가 10이하일 때까지 반복
	{
		if (loopcount == 7)
		{
			loopcount += 1;
			continue;
		}
		printf("이것은 무조건 출력되는 문장이다. loopcount : %d\n", loopcount);
		loopcount += 1;
	}							// loop: 일정 횟수 반복
}

void Rand()						// random 이해하기
{
	srand(time(NULL));					// seed number 변경 srand()는 rand() 함수의 키 값을 바꿔주는 함수

	int randomnumber1, randomnumber2, randomnumber3 = 0;
	randomnumber1 = rand();		// rand() 함수를 사용하여 랜덤값을 받는다
	randomnumber2 = rand();
	randomnumber3 = rand();

	printf("입력받은 값은 %d 입니다. \n", randomnumber1);
	printf("입력받은 값은 %d 입니다. \n", randomnumber2);
	printf("입력받은 값은 %d 입니다. \n", randomnumber3);

}

void Pm3()
{
	int randomnumber = 0;
	const int MAX_DICE_VALUE = 6;
	srand(time(NULL));


	printf("주사위 프로그램 \n");
	_getch();
	printf("컴퓨터가 뽑은 3개의 주사위 값 -> ");
	
	for (int i = 0; i < 3; i += 1)
	{
		randomnumber = (rand() % MAX_DICE_VALUE) + 1;
		printf("%d ", randomnumber);
		Sleep(1000);
	}
	Sleep(1000);
	printf("\n\n");
	printf("프로그램 종료\n");
}

void Pm5()
{

}