#include <iostream>
#include <stdio.h> /* "전처리기"(제일 위(앞)에 있음,맨 앞에 #붙음) 지시문, 컴파일: c언어로 작성한 코드를 
컴퓨터가 이해할 수 있는 기계어로 번역하는 것이 컴파일, 그걸 하는 게 컴파일러, 꺾쇠(< >)내부는 헤더 파일(머리에 위치해서), 
꺾쇠 내부 주석 작성 불가, 헤더파일 내부에 함수가 있다 */
using namespace std;

void MyNewPrint(int number) // 함수를 코드로 적는다. (1단계, 함수의 정의)
{
	printf("입력 값은 %d입니다.\n", number);
}

int PlusTwoNumbers(int number1, int number2) // 함수: 컴퓨터에게 명령하는 것
{
	printf("입력 값은 %d, %d 입니다.\n", number1, number2);

	return number1 + number2;
}

int MultiplyThreeNumbers(int number1, int number2, int number3)
{
	printf("입력 값은 %d, %d, %d 입니다.\n", number1, number2, number3);

	return number1 * number2 * number3;
}

/* void MutiplyThreeNumbers(int number1, int number2, int number3)
* {
*       printf("입력 값은 %d, %d, %d 입니다.\n", number1, number2, number3);
*		int mul = number1 * number2 * number3;
*		printf("세 수의 곱은 %d 입니다.\n", mul);
* }
*/

int main() 
{
	int number = 10;

	cout << "Hello World!!" << endl; // cout << "Hello World!!\n"과 동일
	printf("Hello world!!\n");

	printf("Hello world!!\n");
	printf("Hello world!!\n");
	printf("Hello world!! %d \n\n\n", number - 2);

	MyNewPrint(100); // 실제로 함수를 사용하는 줄에서 함수를 부른다. (call,2단계,함수의 호출), 인자도 전달함 (3단계,인자의 전달)
	
	printf("두 수의 합은 %d 입니다.\n\n", PlusTwoNumbers(5, 7)); /*함수에서는 %d가 두 개이지만 여기서는 %d가 하나인 이유,
	함수는 값을 하나만 반환한다.*/

	printf("세 수의 곱은 %d 입니다.\n\n", MultiplyThreeNumbers(5, 7, 9));

	return 0; //return을 만나는 순간 함수는 종료된다.
	// comment 주석 이 라인은 프로그램에 영향을 주지 않는다.
	// 내가 필요한 글자를 마음대로 적으면 된다.

	// 한 줄 주석이라고 한다.
	
	/*
	이걸 여러 줄 주석이라고 한다.
	이 라인들은 
	프로그램에 영향을 주지 않는다.
	함수: 괄호가 존재함.
	ctrl + l 라인 지우기, home, end 라인의 맨앞 맨끝, ctrl + 방향키 단어도약, ctrl + c 한 줄 복사
	shift + alt + 방향키 내리면 여러줄 동시 사용가능, 줄바꿈 문자(개행 문자, escape sequence) "\n"
	*/
}	