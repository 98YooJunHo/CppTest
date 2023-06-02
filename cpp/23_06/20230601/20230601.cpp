#include <stdio.h>
#include <iostream>

using namespace std;

//int main()
//{
//	////정수형 데이터 타입들
//	//char charvalue = 'A';			//문자 하나를 저장하기 위한 데이터 타입
//	//short shortvalue = 10;			//int 보다 작은 수를 저장하기 위한 데이터 타입
//	//int intvalue = 100;				//가장 만만한 수를 저장하기 위한 데이터 타입
//	//long longvalue = 200;			//int가 커져서 이제 잘 안쓰는 데이터 타입
//	//long long longlongvalue = 1000; //int보다 큰 수를 저장하기 위한 데이터 타입
//	//
//	////실수형 데이터 타입들
//	//float floatvalue = 10.1;				// 가장 만만한 실수를 저장하기 위한 데이터 타입
//	//double doublevalue = 100.1;				//float 보다 큰 실수를 저장하기 위한 데이터 타입
//	//long double longdoublevalue = 200.1;	//double 보다 큰 실수를 저장하기 위한 데이터 타입
//
//	//printf("char 의 크기는? %d byte.\n", sizeof(charvalue));
//	//printf("short 의 크기는? %d byte.\n", sizeof(shortvalue));
//	//printf("int 의 크기는? %d byte.\n", sizeof(intvalue));
//	//printf("long 의 크기는? %d byte.\n", sizeof(longvalue));
//	//printf("longlong 의 크기는? %d byte.\n\n", sizeof(longlongvalue));
//
//	//printf("float 의 크기는? %d byte.\n", sizeof(floatvalue));
//	//printf("double 의 크기는? %d byte.\n", sizeof(doublevalue));
//	//printf("longdouble 의 크기는? %d byte.\n", sizeof(longdoublevalue));
//
//	////변수 선언부 {
//	//int result;
//	//int num1, num2;
//	//// }
//	//  
//	////// 같은 의미의 사용자 입력 받는 로직 {
//	////printf("정수 두 개를 입력해주세요(한 숫자 입력후 , 입력후 한 번 띄고 숫자입력) : ");
//	////scanf_s("%d, %d", &num1, &num2);
//	////// } 위 입력함수에서 %d 사이에 있는 문자대로 해야함
//	//
//	////사용자 입력 받는 로직 {
//	//printf("정수 one : ");
//	//scanf_s("%d", &num1);
//	//printf("정수 two : ");
//	//scanf_s("%d", &num2);
//	//// }
//
//	////실 연산 로직 / 플러스 연산 {
//	//result = num1 + num2;
//	//printf("%d + %d = %d\n", num1, num2, result);
//	//// }
//
//	//const float PI = 3.141592f; //끝에 f를 씀으로 float로 만듦
//
//	//char charvalue = 'B';
//
//	//printf("char 출력할 때는 C로 해보자 -> %c\n", charvalue);
//
//	//bool issame = ('A' == 65);
//	//printf("\n진짜로 같은가?? %d\n", issame);
//	//
//	//char someAlphabet = '1';
//	//bool isBigAlphabet = ('A' <= someAlphabet && someAlphabet <= 'Z');
//	//bool isSmallAlphabet = ('a' <= someAlphabet && someAlphabet <= 'z');
//	//bool isNumber = ('0' <= someAlphabet && someAlphabet <= '9');
//	//printf("\nsomeAlphabet은 대문자인가?? %d\n", isBigAlphabet);
//
//	//if (isBigAlphabet)
//	//{
//	//	printf("영문 대문자 입니다.\n");
//	//}					// if문은 조건식이 참이면 스코프 안의 내용을 진행하고, 거짓이면 건너뛴다.
//	//else if (isSmallAlphabet)
//	//{
//	//	printf("영문 소문자 입니다.\n");
//	//}
//	//else if (isNumber)
//	//{
//	//	printf("숫자 입니다.\n");
//	//}
//	//else
//	//{
//	//	printf("잘 모르겠습니다..\n");
//	//}					// 위의 조건식에서 참이 아닌, 다른 모든 경우 스코프 안의 내용을 진행한다.
//	int loopcount = 1;
//
//	while (388 >= loopcount)
//	{
//		printf("Hello World!! %d번째\n", loopcount);
//		loopcount += 1;
//	}					// loop: 루프 종료
//
//						// main 함수 종료
//	return 0;
//}						// main() (이런식으로 함수의 끝부분을 표시해주면 좋다)