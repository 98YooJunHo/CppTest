#include <stdio.h>
#include <iostream>

using namespace std;

void Simhwa(int num1, int num2, int num3), yzPlusx(int num1, int num2, int num3), math();
void Carea(int x), IsSpecial(char Alpha), IsSpecialH(char Alpha), NIsSpecialH();
float FCarea(int x);

//int main()
//{
//	/*int rad;
//	printf("�������� �Է����ּ��� : ");
//	scanf_s("%d", &rad);
//	printf("���� ���̴� %f�Դϴ�.", FCarea(rad));*/
//	//Carea(rad);
//
//	/*int x, y, z;
//	printf("���� 3���� �Է����ּ���: ");
//	scanf_s("%d, %d, %d", &x, &y, &z);
//	yzPlusx(x, y, z);
//	Simhwa(x, y, z);*/
//	//math();
//
//	/*char message;
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf_s("%c", &message);
//	IsSpecial(message);
//	IsSpecialH(message);*/
//	//NIsSpecialH();
//	
//	//int num = 1;
//	//while (num < 11)
//	//{
//	//	printf("���� %d��° ������ ���� �ֽ��ϴ�.\n", num);
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
	printf("%d + %d * %d = %d�Դϴ�.\n", num1, num2, num3, result);
}

void Simhwa(int num1, int num2, int num3)
{
	int result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("(%d - %d) * (%d + %d) * (%d %% %d) = %d�Դϴ�.\n", num1, num2, num2, num3, num3, num1, result);
}

void math()
{
	int x, y, z, result;
	printf("���� 3���� �Է����ּ���: ");
	scanf_s("%d, %d, %d", &x, &y, &z);
	result = x + y * z;
	
	printf("%d + %d * %d = %d�Դϴ�.\n", x, y, z, result);
}

void Carea(int x)
{
	const float PI = 3.141592f;
	float result = PI * x * x;
	printf("���� ���̴� %f�Դϴ�.\n", result);
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
	printf("\n�������\n");
	(isBigAlphabet == isSmallAlphabet) ? printf("�Է��Ͻ� ���ڴ� Ư�� �����Դϴ�.\n\n") : printf("�Է��Ͻ� ���ڴ� ���ĺ� �빮�� Ȥ�� �ҹ����Դϴ�.\n\n");
}

void IsSpecialH(char Alpha)
{
	bool isBigAlphabet = ('A' <= Alpha && Alpha <= 'Z');	//���ĺ��빮���ΰ�� 1 �ƴϸ� 0
	bool isSmallAlphabet = ('a' <= Alpha && Alpha <= 'z');	//���ĺ��ҹ����ΰ�� 1 �ƴϸ� 0
	bool isNumber = ('0' <= Alpha && Alpha <= '9');			//�����̸� 1 �ƴϸ� 0
	printf("�ϵ���\n");
	printf("%s",(isBigAlphabet == 1) ? "�Է��Ͻ� ���ڴ� ���ĺ� �빮���Դϴ�.\n\n" : 
				(isSmallAlphabet == 1)? "�Է��Ͻ� ���ڴ� ���ĺ� �ҹ����Դϴ�.\n\n" : 
				(isNumber == 1)? "�Է��Ͻ� ���ڴ� �����Դϴ�.\n\n": "�Է��Ͻ� ���ڴ� Ư�������Դϴ�.\n\n");
}

void NIsSpecialH()
{
	char Alpha;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &Alpha);
	bool isBigAlphabet = ('A' <= Alpha && Alpha <= 'Z');	//���ĺ��빮���ΰ�� 1 �ƴϸ� 0
	bool isSmallAlphabet = ('a' <= Alpha && Alpha <= 'z');	//���ĺ��ҹ����ΰ�� 1 �ƴϸ� 0
	bool isNumber = ('0' <= Alpha && Alpha <= '9');			//�����̸� 1 �ƴϸ� 0
	printf("�ϵ���\n");
	printf("%s",(isBigAlphabet == 1) ? "�Է��Ͻ� ���ڴ� ���ĺ� �빮���Դϴ�.\n\n" :
				(isSmallAlphabet == 1) ? "�Է��Ͻ� ���ڴ� ���ĺ� �ҹ����Դϴ�.\n\n" :
				(isNumber == 1) ? "�Է��Ͻ� ���ڴ� �����Դϴ�.\n\n" : "�Է��Ͻ� ���ڴ� Ư�������Դϴ�.\n\n");
}