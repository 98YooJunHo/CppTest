#include <stdio.h>
#include <iostream>

using namespace std;

void Simhwa(int num1, int num2, int num3), yzPlusx(int num1, int num2, int num3), math();
void Carea(int x), IsSpecial(char Alpha), IsSpecialH(char Alpha), NIsSpecialH();
float FCarea(int x);

//int main()
//{
//	/*int rad;
//	printf("반지름을 입력해주세요 : ");
//	scanf_s("%d", &rad);
//	printf("원의 넓이는 %f입니다.", FCarea(rad));*/
//	//Carea(rad);
//
//	/*int x, y, z;
//	printf("정수 3개를 입력해주세요: ");
//	scanf_s("%d, %d, %d", &x, &y, &z);
//	yzPlusx(x, y, z);
//	Simhwa(x, y, z);*/
//	//math();
//
//	/*char message;
//	printf("문자를 입력하세요 : ");
//	scanf_s("%c", &message);
//	IsSpecial(message);
//	IsSpecialH(message);*/
//	//NIsSpecialH();
//	
//	//int num = 1;
//	//while (num < 11)
//	//{
//	//	printf("현재 %d번째 루프를 돌고 있습니다.\n", num);
//	//	num += 1; // num = num + 1;
//	//}
//
//	MakeSquare();
//
//	return 0;
//}

void yzPlusx(int num1, int num2, int num3)
{
	int result = num1 + (num2 * num3);
	printf("%d + %d * %d = %d입니다.\n", num1, num2, num3, result);
}

void Simhwa(int num1, int num2, int num3)
{
	int result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("(%d - %d) * (%d + %d) * (%d %% %d) = %d입니다.\n", num1, num2, num2, num3, num3, num1, result);
}

void math()
{
	int x, y, z, result;
	printf("정수 3개를 입력해주세요: ");
	scanf_s("%d, %d, %d", &x, &y, &z);
	result = x + y * z;
	
	printf("%d + %d * %d = %d입니다.\n", x, y, z, result);
}

void Carea(int x)
{
	const float PI = 3.141592f;
	float result = PI * x * x;
	printf("원의 넓이는 %f입니다.\n", result);
}

float FCarea(int x)
{
	const float PI = 3.141592f;
	float result = PI * x * x;
	return result;
}

void IsSpecial(char Alpha)
{
	bool isBigAlphabet = ('A' <= Alpha && Alpha <= 'Z');
	bool isSmallAlphabet = ('a' <= Alpha && Alpha <= 'z');
	printf("\n이지모드\n");
	(isBigAlphabet == isSmallAlphabet) ? printf("입력하신 문자는 특수 문자입니다.\n\n") : printf("입력하신 문자는 알파벳 대문자 혹은 소문자입니다.\n\n");
}

void IsSpecialH(char Alpha)
{
	bool isBigAlphabet = ('A' <= Alpha && Alpha <= 'Z');	//알파벳대문자인경우 1 아니면 0
	bool isSmallAlphabet = ('a' <= Alpha && Alpha <= 'z');	//알파벳소문자인경우 1 아니면 0
	bool isNumber = ('0' <= Alpha && Alpha <= '9');			//숫자이면 1 아니면 0
	printf("하드모드\n");
	printf("%s",(isBigAlphabet == 1) ? "입력하신 문자는 알파벳 대문자입니다.\n\n" : 
				(isSmallAlphabet == 1)? "입력하신 문자는 알파벳 소문자입니다.\n\n" : 
				(isNumber == 1)? "입력하신 문자는 숫자입니다.\n\n": "입력하신 문자는 특수문자입니다.\n\n");
}

void NIsSpecialH()
{
	char Alpha;
	printf("문자를 입력하세요 : ");
	scanf_s("%c", &Alpha);
	bool isBigAlphabet = ('A' <= Alpha && Alpha <= 'Z');	//알파벳대문자인경우 1 아니면 0
	bool isSmallAlphabet = ('a' <= Alpha && Alpha <= 'z');	//알파벳소문자인경우 1 아니면 0
	bool isNumber = ('0' <= Alpha && Alpha <= '9');			//숫자이면 1 아니면 0
	printf("하드모드\n");
	printf("%s",(isBigAlphabet == 1) ? "입력하신 문자는 알파벳 대문자입니다.\n\n" :
				(isSmallAlphabet == 1) ? "입력하신 문자는 알파벳 소문자입니다.\n\n" :
				(isNumber == 1) ? "입력하신 문자는 숫자입니다.\n\n" : "입력하신 문자는 특수문자입니다.\n\n");
}