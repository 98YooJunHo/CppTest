#include <stdio.h>
#include <iostream>

using namespace std;

void Simhwa(int num1, int num2, int num3), yzPlusx(int num1, int num2, int num3), math();
void Carea(int x);

int main()
{
	int rad;
	printf("반지름을 입력해주세요 : ");
	scanf_s("%d", &rad);
	Carea(rad);

	/*int x, y, z;
	printf("정수 3개를 입력해주세요: ");
	scanf_s("%d, %d, %d", &x, &y, &z);
	yzPlusx(x, y, z);
	Simhwa(x, y, z);*/
	//math();

	return 0;
}

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