#include <stdio.h>
#include <iostream>

using namespace std;

//int main()
//{
//	////������ ������ Ÿ�Ե�
//	//char charvalue = 'A';			//���� �ϳ��� �����ϱ� ���� ������ Ÿ��
//	//short shortvalue = 10;			//int ���� ���� ���� �����ϱ� ���� ������ Ÿ��
//	//int intvalue = 100;				//���� ������ ���� �����ϱ� ���� ������ Ÿ��
//	//long longvalue = 200;			//int�� Ŀ���� ���� �� �Ⱦ��� ������ Ÿ��
//	//long long longlongvalue = 1000; //int���� ū ���� �����ϱ� ���� ������ Ÿ��
//	//
//	////�Ǽ��� ������ Ÿ�Ե�
//	//float floatvalue = 10.1;				// ���� ������ �Ǽ��� �����ϱ� ���� ������ Ÿ��
//	//double doublevalue = 100.1;				//float ���� ū �Ǽ��� �����ϱ� ���� ������ Ÿ��
//	//long double longdoublevalue = 200.1;	//double ���� ū �Ǽ��� �����ϱ� ���� ������ Ÿ��
//
//	//printf("char �� ũ���? %d byte.\n", sizeof(charvalue));
//	//printf("short �� ũ���? %d byte.\n", sizeof(shortvalue));
//	//printf("int �� ũ���? %d byte.\n", sizeof(intvalue));
//	//printf("long �� ũ���? %d byte.\n", sizeof(longvalue));
//	//printf("longlong �� ũ���? %d byte.\n\n", sizeof(longlongvalue));
//
//	//printf("float �� ũ���? %d byte.\n", sizeof(floatvalue));
//	//printf("double �� ũ���? %d byte.\n", sizeof(doublevalue));
//	//printf("longdouble �� ũ���? %d byte.\n", sizeof(longdoublevalue));
//
//	////���� ����� {
//	//int result;
//	//int num1, num2;
//	//// }
//	//  
//	////// ���� �ǹ��� ����� �Է� �޴� ���� {
//	////printf("���� �� ���� �Է����ּ���(�� ���� �Է��� , �Է��� �� �� ��� �����Է�) : ");
//	////scanf_s("%d, %d", &num1, &num2);
//	////// } �� �Է��Լ����� %d ���̿� �ִ� ���ڴ�� �ؾ���
//	//
//	////����� �Է� �޴� ���� {
//	//printf("���� one : ");
//	//scanf_s("%d", &num1);
//	//printf("���� two : ");
//	//scanf_s("%d", &num2);
//	//// }
//
//	////�� ���� ���� / �÷��� ���� {
//	//result = num1 + num2;
//	//printf("%d + %d = %d\n", num1, num2, result);
//	//// }
//
//	//const float PI = 3.141592f; //���� f�� ������ float�� ����
//
//	//char charvalue = 'B';
//
//	//printf("char ����� ���� C�� �غ��� -> %c\n", charvalue);
//
//	//bool issame = ('A' == 65);
//	//printf("\n��¥�� ������?? %d\n", issame);
//	//
//	//char someAlphabet = '1';
//	//bool isBigAlphabet = ('A' <= someAlphabet && someAlphabet <= 'Z');
//	//bool isSmallAlphabet = ('a' <= someAlphabet && someAlphabet <= 'z');
//	//bool isNumber = ('0' <= someAlphabet && someAlphabet <= '9');
//	//printf("\nsomeAlphabet�� �빮���ΰ�?? %d\n", isBigAlphabet);
//
//	//if (isBigAlphabet)
//	//{
//	//	printf("���� �빮�� �Դϴ�.\n");
//	//}					// if���� ���ǽ��� ���̸� ������ ���� ������ �����ϰ�, �����̸� �ǳʶڴ�.
//	//else if (isSmallAlphabet)
//	//{
//	//	printf("���� �ҹ��� �Դϴ�.\n");
//	//}
//	//else if (isNumber)
//	//{
//	//	printf("���� �Դϴ�.\n");
//	//}
//	//else
//	//{
//	//	printf("�� �𸣰ڽ��ϴ�..\n");
//	//}					// ���� ���ǽĿ��� ���� �ƴ�, �ٸ� ��� ��� ������ ���� ������ �����Ѵ�.
//	int loopcount = 1;
//
//	while (388 >= loopcount)
//	{
//		printf("Hello World!! %d��°\n", loopcount);
//		loopcount += 1;
//	}					// loop: ���� ����
//
//						// main �Լ� ����
//	return 0;
//}						// main() (�̷������� �Լ��� ���κ��� ǥ�����ָ� ����)