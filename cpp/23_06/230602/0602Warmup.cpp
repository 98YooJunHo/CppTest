#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int Discri();					//�������� ���� �Է� �޾Ƽ� ¦Ȧ���� �Ǻ��ϴ� �Լ�
void EDice(), NDice(), Critper60();
int Fight();

//int main()
//{
//	//int loopcount = 1;			//���� ī��Ʈ ����
//
//	//char userinput = '0';
//
//	//while (loopcount <= 1000)		//���� ī��Ʈ�� 10������ ������ �ݺ�
//	//{
//	//	if (loopcount == 1)
//	//	{
//	//		printf("[Ʃ�丮��] ���� ������ ������� �Ѵٸ� �̷�������\n");
//	//	}
//	//	
//	//	printf("[System] ����� �÷��̾� �Դϴ�. \n");
//	//	printf("������ �׼��� �Է��� �ּ��� : ");
//	//	scanf_s("%c", &userinput);
//
//	//	if (userinput == 'q' || userinput == 'Q')
//	//	{
//	//		printf("\n[System] ���α׷��� �����մϴ�.\n");
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		printf("\n[System] �ش� �Է��� ���ǵǾ� ���� �ʽ��ϴ�.\n");
//	//		loopcount += 1;
//	//		continue;
//	//	}
//
//	//}							// loop: ���� Ƚ�� �ݺ�
//	
//
//	/*EDice();
//
//	NDice();
//
//	Discri();*/
//
//	//Critper60();
//
//	Fight();
//
//	return 0;
//}										//main()

int Discri()
{
	int uinput;									//�������� ���ڸ� �Է¹��� ���� uinput����
	while (1)
	{
		printf("������ �Է����ּ��� (���Ḧ ���Ͻø� 0�� �Է����ּ���) : ");
		scanf_s("%d", &uinput);					//�������� ������ �Է¹޾Ƽ� ���� uinput���� ����

		if (uinput == 0)						//������ �Է°��� 0�� ���ٸ�
		{
			printf("\n���α׷��� �����մϴ�.\n");	//���α׷� ����
			break;
		}

		if (uinput % 2)					//�Է°��� 2�� ���� �������� 1�� ���ٸ�
		{
			printf("%d�� Ȧ�� �Դϴ�.\n\n",uinput);	//Ȧ�� ���
		}
		else							//�Է°��� 2�� ���� �������� 1�� �����ʴٸ�
		{
			printf("%d�� ¦�� �Դϴ�.\n\n",uinput);	//¦�� ���
		}
	}									//while()
	return 0;
}

void EDice()						//�ֻ��� �������
{
	int fdice, sdice;
	srand(time(NULL));

	fdice = rand() % 6 + 1;
	sdice = rand() % 6 + 1;

	printf("ù ��° �ֻ����� : %d, ", fdice);
	printf("�� ��° �ֻ����� : %d �̰�,\n", sdice);
	printf("�� �ֻ��� ���� ������ : %d �̰�, ", fdice + sdice);
	if ((fdice + sdice) % 2)
	{
		printf("Ȧ�� �Դϴ�.\n");
	}
	else
	{
		printf("¦�� �Դϴ�.\n");
	}

}

void NDice()						//�ֻ��� �븻���
{
	int fdice, sdice, userinput, sum;
	srand(time(NULL));
	printf("**************Ȧ ¦ ���߱⿡ ���Ű� ȯ���մϴ�**************\n\n");
	while (1)
	{
		printf("     ������������������������     ������������������������     ������������������������     \n");
		printf("     �� ���� = 0 ��     �� Ȧ�� = 1 ��     �� ¦�� = 2 ��     \n");
		printf("     ������������������������     ������������������������     ������������������������     \n");
		printf("���� �Է��ϼ��� -----------> ");
		scanf_s("%d", &userinput);

		if (userinput == 0)			//�Է°��� 0�̸� �����ϰ��ϴ� ���ǹ�
		{
			printf("\n���α׷��� �����մϴ�\n\n");
			printf("�ƹ�Ű�� �����ּ���...\n");
			_getch();
			break;
		}							//if()

		fdice = rand() % 6 + 1;
		sdice = rand() % 6 + 1;
		sum = fdice + sdice;

		if (userinput == 1)			//�Է°��� 1�̸� ���հ� ���Ͽ� Ȧ���� ������ ���� �ƴϸ� ������ ����ϴ� ���ǹ�
		{
			printf("ù ��° �ֻ����� : %d, ", fdice);
			printf("�� ��° �ֻ����� : %d �̰�,\n", sdice);
			printf("�� �ֻ��� ���� ������ : %d", sum);
			if (sum % 2)
			{
				printf("��(��) Ȧ���̹Ƿ� �����Դϴ�!\n\n");
				printf("*************************************************************\n\n");
				continue;
			}
			printf("��(��) ¦���̹Ƿ� �����Դϴ�.\n\n");
			printf("*************************************************************\n\n");
			continue;
		}							//if()

		if (userinput == 2)			//�Է°��� 2�̸� ���հ� ���Ͽ� ¦���� ������ ���� �ƴϸ� ������ ����ϴ� ���ǹ�
		{
			printf("ù ��° �ֻ����� : %d, ", fdice);
			printf("�� ��° �ֻ����� : %d �̰�,\n", sdice);
			printf("�� �ֻ��� ���� ������ : %d", sum);
			if ((sum % 2) == 0)
			{
				printf("��(��) ¦���̹Ƿ� �����Դϴ�!\n\n");
				printf("*************************************************************\n\n");
				continue;
			}
			printf("��(��) Ȧ���̹Ƿ� �����Դϴ�.\n\n");
			printf("*************************************************************\n\n");
			continue;
		}							//if()

		printf("\n�ùٸ��� ���� ���Դϴ�. ���α׷��� �����մϴ�.\n\n");
		printf("�ƹ�Ű�� �����ּ���...\n");
		_getch();
		break;
	}								//while()
}

void Critper60()
{
	int damage = 0;
	char exit = '0';
	srand(time(NULL));
	while (1)
	{
		damage = 0;
		printf("1~10������ ���� ���� �Է��Ͽ� 5�̻��� ��� ũ���Դϴ�.\n");
		printf("���Ḧ ���Ͻø� q��, �ƴϸ� �������� �Է��ϼ��� (0���� ū ���� �Է��ϼ���) : ");
		scanf_s("%d", &damage);
		scanf_s("%c", &exit);
		float critical = damage * 1.5;

		int critper = (rand() % 10 + 1);

		if (exit == 'q' || exit == 'Q')
		{
			printf("\n���α׷��� �����մϴ�. \n\n");
			break;
		}

		if (damage > 0)
		{
			if (critper > 4)
			{
				printf("\n���� ���� %d�̹Ƿ� ", critper);
				printf("ũ��Ƽ�� %.1f!!\n\n", critical);
				continue;
			}
			printf("\n���� ���� %d�̹Ƿ� ", critper);
			printf("�⺻ ������ %d\n\n", damage);
			continue;
		}
		printf("\n�ùٸ��� ���� ���Դϴ�. ���α׷��� �����մϴ�. \n\n");
		break;
	}
}

int Fight()
{
	printf("1:1 ��ῡ ���Ű� ȯ���մϴ�.");
	
	int php, ehp;
	int patk, eatk;
	char button;

	while (1)
	{
		printf("\n========================");
		printf("\n���� ü���� �Է��ϼ��� : ");
		scanf_s("%d", &php);
		printf("���� ü���� �Է��ϼ��� : ");
		scanf_s("%d", &ehp);
		printf("���� ���ݷ��� �Է��ϼ��� : ");
		scanf_s("%d", &patk);
		printf("���� ���ݷ��� �Է��ϼ��� : ");
		scanf_s("%d", &eatk);

		if (php <= 0 || ehp <= 0 || patk <= 0 || eatk <= 0)
		{
			printf("ü�°� ���ݷ� ��� 0�̻��� ���� �Է��ϼ���. ���α׷��� �����մϴ�.");
			return 0;
		}

		while (1)
		{
			char useract = '0';


			if (php <= 0)
			{
				printf("�÷��̾� ���... \n");
				break;
			}

			if (ehp <= 0)
			{
				printf("�� ���! \n");
				break;
			}

			printf("     ������������������������     ������������������������     ������������������������     \n");
			printf("     �� ���� = q ��     �� ���� = a ��     �� ���� = r ��     \n");
			printf("     ������������������������     ������������������������     ������������������������     \n");
			printf("���� �Է��ϼ��� -----------> ");
			useract = _getch();


			if (useract == 'q' || useract == 'Q')
			{
				printf("\n���α׷��� �����մϴ�. \n\n");
				return 0;
			}
			
			if (useract == 'a' || useract == 'A')
			{
				printf("\n���� ����. \n");
				ehp -= patk;
				php -= eatk;
				printf("���� hp : %d, ���� hp: %d\n\n", ehp, php);
				continue;
			}

			if (useract == 'r' || useract == 'R')
			{
				printf("\n����. \n");
				break;
			}

			("���ǵ��� ���� �Է��Դϴ�. ������ �����մϴ�.");
			break;
		}

		printf("������ �ٽ� �÷��� �ϰ� �����ø� r��, �����ϰ� �����ø� �ƹ�Ű�� �Է����ּ���.");
		button = _getch();

		if (button == 'r' || button == 'R')
		{
			continue;
		}

		break;
	}
	return 0;
}