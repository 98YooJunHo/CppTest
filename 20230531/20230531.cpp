#include <stdio.h>
#include <iostream>
using namespace std;

//void YJH(int age), Hp(int heal), CriticalHit(float damage); // main �Լ����� ���� ���� ���� �Լ��� �̷� ����̴� ��� �˷��ִ� ����
//void Plus(int num1, int num2), Minus(int num1, int num2);
//void Multiply(int num1, int num2), Divide(float num1, float num2);
//void Mod(int num1, int num2);

void RSP()
{
	int rsp = 0, Crsp = 2;
	printf("�������������ӿ� ���Ű� ȯ���մϴ�.\n");
	printf("����:1, ����:2, ��:3�Դϴ�.\n");
	printf("����,����,�� �� �ϳ��� ���ּ���:");
	scanf_s("%d", &rsp);
	(rsp == 3) ? printf("\n�¸�!\n\n") : (rsp == 2) ? printf("\n���º�\n\n") : (rsp == 1) ? printf("\n�й�!\n\n") : printf("\n���ǵ������� �����������Դϴ�.\n\n");
}

int main()
{
	/*int inputnumber = 0;
	printf("���� ���� �Է����ּ��� ->");
	scanf_s("%d", &inputnumber);

	printf("inputnumber�� ����? %d\n", inputnumber);*/


	//int number = 10; //integer�� ������, �׷��� ������ �����ϱ� ����
	///*������ Ÿ������ ���Ӹ��� int�� ���.*/
	//float number1 = 1.6; //float�� �Ǽ��� �Ҽ����� �����̴� ��ó�� ������(�ε��Ҽ���)
	//// result = result + 1;
	//// result += 1; �� �İ� ������ ���� ����
	//int num1 = 9, num2 = 2;
	////++�� �ڿ� ������ ���� ������(������ �������� �ϰڴ�), ++�� �տ� ������ ���� ������(������ ��ó���� �ϰڴ�)

	//printf("���ڸ� ����ϰ��� %d\n", number);
	//printf("���ڸ� ����ϰ��� %f\n\n", number1);

	//YJH(26);

	RSP();

	//CriticalHit(177);

	///*c++���� main�Լ��� ������ �־���Ѵ�
	//���α׷��� main�Լ��������� �����Ѵ�.*/
	///*int number = 0;
	//printf("number ������ ����?: %d \n\n", number);
	//return 0;*/

	//Plus(9, 2);
	//Minus(9, 2);
	//Multiply(9, 2);
	//Divide(2, 9);
	//Mod(9, 2);

	//int num1 = 10, num2 = 12;
	//int result1, result2, result3;

	//result1 = num1 == num2; //�� ���� ����
	//result2 = num1 <= num2;
	//result3 = num1 > num2;

	//printf("Result1 ����� %d\n", result1);
	//printf("Result2 ����� %d\n", result2);
	//printf("Result3 ����� %d\n", result3);

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

	printf("Boolresult�� � ��? %d\n", boolresult);*/
	//cout << boolresult << endl;

	return 0;
	//�ִ��� 50 ������ �Է¹޾Ƽ� ���������� ���Ǹ� ����ض� �����Ǵ� 20�̴� .

}
//ctrl+k +c ���� �ּ�ó�� ctrl+k +u ���� ���ó��
//void Hp(int heal)
//{
//	int maxhp = 50;
//	int currenthp = 20;
//	printf("�� ���� ü���� %d�Դϴ�.\n", ((currenthp + heal) > maxhp) ? maxhp : currenthp + heal);
//}
//
//void YJH(int age)
//{
//	printf("�̸��� ����ȣ�Դϴ�.\n���̴� %d�� �Դϴ�.\n��ȭ��ȣ�� 010-6848-4212�Դϴ�.\n\n", age);
//}
//
//void CriticalHit(float damage)
//{
//	float crit = damage * 1.5;
//	printf("ũ��Ƽ��! %f!!\n\n", crit);
//}
//
//void Plus(int num1, int num2)
//{
//	printf("%d�� %d�� ���� ���� %d�Դϴ�.\n", num1, num2, num1 + num2);
//}
//
//void Minus(int num1, int num2)
//{
//	printf("%d�� %d�� �� ���� %d�Դϴ�.\n", num1, num2, num1 - num2);
//}
//
//void Multiply(int num1, int num2)
//{
//	printf("%d�� %d�� ���� ���� %d�Դϴ�.\n", num1, num2, num1 * num2);
//}
//
//void Divide(float num1, float num2)
//{
//	printf("%f�� %f�� ���� ���� %f�Դϴ�.\n", num1, num2, num1 / num2);
//}
//
//void Mod(int num1, int num2)
//{
//	printf("%d�� %d�� �������� �������� %d�Դϴ�.\n", num1, num2, num1 % num2);
//}