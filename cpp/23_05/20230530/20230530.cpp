#include <iostream>
#include <stdio.h> /* "��ó����"(���� ��(��)�� ����,�� �տ� #����) ���ù�, ������: c���� �ۼ��� �ڵ带 
��ǻ�Ͱ� ������ �� �ִ� ����� �����ϴ� ���� ������, �װ� �ϴ� �� �����Ϸ�, ����(< >)���δ� ��� ����(�Ӹ��� ��ġ�ؼ�), 
���� ���� �ּ� �ۼ� �Ұ�, ������� ���ο� �Լ��� �ִ� */
using namespace std;

void MyNewPrint(int number) // �Լ��� �ڵ�� ���´�. (1�ܰ�, �Լ��� ����)
{
	printf("�Է� ���� %d�Դϴ�.\n", number);
}

int PlusTwoNumbers(int number1, int number2) // �Լ�: ��ǻ�Ϳ��� ����ϴ� ��
{
	printf("�Է� ���� %d, %d �Դϴ�.\n", number1, number2);

	return number1 + number2;
}

int MultiplyThreeNumbers(int number1, int number2, int number3)
{
	printf("�Է� ���� %d, %d, %d �Դϴ�.\n", number1, number2, number3);

	return number1 * number2 * number3;
}

/* void MutiplyThreeNumbers(int number1, int number2, int number3)
* {
*       printf("�Է� ���� %d, %d, %d �Դϴ�.\n", number1, number2, number3);
*		int mul = number1 * number2 * number3;
*		printf("�� ���� ���� %d �Դϴ�.\n", mul);
* }
*/

int main() 
{
	int number = 10;

	cout << "Hello World!!" << endl; // cout << "Hello World!!\n"�� ����
	printf("Hello world!!\n");

	printf("Hello world!!\n");
	printf("Hello world!!\n");
	printf("Hello world!! %d \n\n\n", number - 2);

	MyNewPrint(100); // ������ �Լ��� ����ϴ� �ٿ��� �Լ��� �θ���. (call,2�ܰ�,�Լ��� ȣ��), ���ڵ� ������ (3�ܰ�,������ ����)
	
	printf("�� ���� ���� %d �Դϴ�.\n\n", PlusTwoNumbers(5, 7)); /*�Լ������� %d�� �� �������� ���⼭�� %d�� �ϳ��� ����,
	�Լ��� ���� �ϳ��� ��ȯ�Ѵ�.*/

	printf("�� ���� ���� %d �Դϴ�.\n\n", MultiplyThreeNumbers(5, 7, 9));

	return 0; //return�� ������ ���� �Լ��� ����ȴ�.
	// comment �ּ� �� ������ ���α׷��� ������ ���� �ʴ´�.
	// ���� �ʿ��� ���ڸ� ������� ������ �ȴ�.

	// �� �� �ּ��̶�� �Ѵ�.
	
	/*
	�̰� ���� �� �ּ��̶�� �Ѵ�.
	�� ���ε��� 
	���α׷��� ������ ���� �ʴ´�.
	�Լ�: ��ȣ�� ������.
	ctrl + l ���� �����, home, end ������ �Ǿ� �ǳ�, ctrl + ����Ű �ܾ��, ctrl + c �� �� ����
	shift + alt + ����Ű ������ ������ ���� ��밡��, �ٹٲ� ����(���� ����, escape sequence) "\n"
	*/
}	