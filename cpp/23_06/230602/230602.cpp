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

void SC()						// switch/case ��
{
	char userinput = '0';
	printf("UserInput : ");
	userinput = _getch();		// �ϳ��� Ű�Է��� �޾Ƽ� userinput�� ����

	printf("\n\n");

	switch (userinput)				
	{
	case 'a':					// userinput�� 'a'�ϰ��
		printf("�̰��� ����\n");	
		break;
	case 'b':					// userinput�� 'b'�ϰ��
		printf("�̰��� ����\n");
		break;
	case 'c':					// userinput�� 'c'�ϰ��
		printf("�̰��� ��\n");
		break;
	default:					// userinput�� �׿��� Ű�Է��ϰ��
		printf("ó������ ���� ���� �Է��Դϴ�. \n");
		break;
	}
	printf("���α׷��� �����մϴ�. \n");
	printf("\npress any key...\n");
	_getch();					// �������� �ϳ��� Ű�Է��� �޵��� ����
}

void Loop()
{
	int loopcount = 1;			//���� ī��Ʈ ����

	while (loopcount <= 10)		//���� ī��Ʈ�� 10������ ������ �ݺ�
	{
		if (loopcount == 7)
		{
			loopcount += 1;
			continue;
		}
		printf("�̰��� ������ ��µǴ� �����̴�. loopcount : %d\n", loopcount);
		loopcount += 1;
	}							// loop: ���� Ƚ�� �ݺ�
}

void Rand()						// random �����ϱ�
{
	srand(time(NULL));					// seed number ���� srand()�� rand() �Լ��� Ű ���� �ٲ��ִ� �Լ�

	int randomnumber1, randomnumber2, randomnumber3 = 0;
	randomnumber1 = rand();		// rand() �Լ��� ����Ͽ� �������� �޴´�
	randomnumber2 = rand();
	randomnumber3 = rand();

	printf("�Է¹��� ���� %d �Դϴ�. \n", randomnumber1);
	printf("�Է¹��� ���� %d �Դϴ�. \n", randomnumber2);
	printf("�Է¹��� ���� %d �Դϴ�. \n", randomnumber3);

}

void Pm3()
{
	int randomnumber = 0;
	const int MAX_DICE_VALUE = 6;
	srand(time(NULL));


	printf("�ֻ��� ���α׷� \n");
	_getch();
	printf("��ǻ�Ͱ� ���� 3���� �ֻ��� �� -> ");
	
	for (int i = 0; i < 3; i += 1)
	{
		randomnumber = (rand() % MAX_DICE_VALUE) + 1;
		printf("%d ", randomnumber);
		Sleep(1000);
	}
	Sleep(1000);
	printf("\n\n");
	printf("���α׷� ����\n");
}

void Pm5()
{

}