#include <stdio.h>
#include <iostream>
using namespace std;

//void YJH(int age), Hp(int heal), CriticalHit(float damage); // main 함수보다 먼저 내가 만든 함수가 이런 모양이다 라고 알려주는 역할
//void Plus(int num1, int num2), Minus(int num1, int num2);
//void Multiply(int num1, int num2), Divide(float num1, float num2);
//void Mod(int num1, int num2);

void RSP()
{
	int rsp = 0, Crsp = 2;
	printf("가위바위보게임에 오신걸 환영합니다.\n");
	printf("가위:1, 바위:2, 보:3입니다.\n");
	printf("가위,바위,보 중 하나를 내주세요:");
	scanf_s("%d", &rsp);
	(rsp == 3) ? printf("\n승리!\n\n") : (rsp == 2) ? printf("\n무승부\n\n") : (rsp == 1) ? printf("\n패배!\n\n") : printf("\n정의되지않은 가위바위보입니다.\n\n");
}

int main()
{
	/*int inputnumber = 0;
	printf("숫자 값을 입력해주세요 ->");
	scanf_s("%d", &inputnumber);

	printf("inputnumber의 값은? %d\n", inputnumber);*/


	//int number = 10; //integer가 정수다, 그러니 정수를 저장하기 위한
	///*데이터 타입으로 줄임말인 int를 썼다.*/
	//float number1 = 1.6; //float가 실수다 소수점이 움직이는 것처럼 보여서(부동소수점)
	//// result = result + 1;
	//// result += 1; 위 식과 왼쪽의 식은 같음
	//int num1 = 9, num2 = 2;
	////++이 뒤에 붙으면 후위 연산자(연산을 마지막에 하겠다), ++이 앞에 붙으면 전위 연산자(연산을 맨처음에 하겠다)

	//printf("숫자를 출력하겠음 %d\n", number);
	//printf("숫자를 출력하겠음 %f\n\n", number1);

	//YJH(26);

	RSP();

	//CriticalHit(177);

	///*c++에서 main함수는 무조건 있어야한다
	//프로그램은 main함수에서부터 시작한다.*/
	///*int number = 0;
	//printf("number 변수를 찍어볼까?: %d \n\n", number);
	//return 0;*/

	//Plus(9, 2);
	//Minus(9, 2);
	//Multiply(9, 2);
	//Divide(2, 9);
	//Mod(9, 2);

	//int num1 = 10, num2 = 12;
	//int result1, result2, result3;

	//result1 = num1 == num2; //참 거짓 논리식
	//result2 = num1 <= num2;
	//result3 = num1 > num2;

	//printf("Result1 결과는 %d\n", result1);
	//printf("Result2 결과는 %d\n", result2);
	//printf("Result3 결과는 %d\n", result3);

	/*int num1 = 10, num2 = 12, result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2 > 12);
	result3 = (!num1);

	printf("result1: %d\n", result1);
	printf("result2: %d\n", result2);
	printf("result3: %d\n", result3);*/

	/*Hp(100000000);
	Hp(10);*/

	/*int age = 30;
	bool boolresult;

	boolresult = (age < 20) ? true : false;

	printf("Boolresult는 어떤 값? %d\n", boolresult);*/
	//cout << boolresult << endl;

	return 0;
	//최대피 50 힐량을 입력받아서 힐받은후의 총피를 출력해라 현재피는 20이다 .

}
//ctrl+k +c 전부 주석처리 ctrl+k +u 전부 사용처리
//void Hp(int heal)
//{
//	int maxhp = 50;
//	int currenthp = 20;
//	printf("힐 받은 체력은 %d입니다.\n", ((currenthp + heal) > maxhp) ? maxhp : currenthp + heal);
//}
//
//void YJH(int age)
//{
//	printf("이름은 유준호입니다.\n나이는 %d살 입니다.\n전화번호는 010-6848-4212입니다.\n\n", age);
//}
//
//void CriticalHit(float damage)
//{
//	float crit = damage * 1.5;
//	printf("크리티컬! %f!!\n\n", crit);
//}
//
//void Plus(int num1, int num2)
//{
//	printf("%d와 %d를 더한 값은 %d입니다.\n", num1, num2, num1 + num2);
//}
//
//void Minus(int num1, int num2)
//{
//	printf("%d와 %d를 뺀 값은 %d입니다.\n", num1, num2, num1 - num2);
//}
//
//void Multiply(int num1, int num2)
//{
//	printf("%d와 %d를 곱한 값은 %d입니다.\n", num1, num2, num1 * num2);
//}
//
//void Divide(float num1, float num2)
//{
//	printf("%f와 %f를 나눈 값은 %f입니다.\n", num1, num2, num1 / num2);
//}
//
//void Mod(int num1, int num2)
//{
//	printf("%d와 %d를 나눈후의 나머지는 %d입니다.\n", num1, num2, num1 % num2);
//}