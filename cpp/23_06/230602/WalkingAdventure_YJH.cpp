#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int Battle(), Hell(), HellEvent();
int ForestEvent(), Forest();
int RiverEvent(), River();
int Mountain(), Start();

int loop = 0;
int playerMhp = 50;
int playeratk = 5;
int playerhp = playerMhp;
int pray = 0;

int main()
{
	char power = '0';
	srand(time(NULL));

	Start();
	power = _getch();
	system("cls");

	while (loop < 6)										// �ݺ��� while
	{
		power = '0';
		loop += 1;

		if (playerhp <= 0)									// �ֿ켱 ���� ó�� if
		{
			printf("\n****************************************\n\n");
			printf("\n\n\n            ������ �����մϴ�\n");
			printf("       �÷��� ���ּż� �����մϴ�\n\n\n");
			printf("\n****************************************\n\n");
			break;
		}													// �ֿ켱 ���� ó�� if()

		printf("\n****************************************\n\n");
		printf("       **** ���� ���� ���� *****\n");						// ���谡
		printf("       * ü��:%d/%d   ���ݷ�:%d *\n", playerhp, playerMhp, playeratk);	//  ����
		printf("       *************************\n\n");					//  ���
		printf("       ������������������������ ������������������������\n");
		printf("       �� ���� = q �� �� �ȱ� = w ��\n");
		printf("       ������������������������ ������������������������\n");
		printf("\n****************************************\n\n");
		printf("       ���� �Է��ϼ���-> ");
		power = _getch();									// ���� ���� Ȥ�� ���Ḧ ���� �ϳ��� Ű�Է� �ޱ�
		system("cls");

		if (power == 'q' || power == 'Q')					// ���� ���� ���ǹ� if
		{
			printf("\n****************************************\n\n");
			printf("\n\n\n            ������ �����մϴ�\n");
			printf("       �÷��� ���ּż� �����մϴ�\n\n\n");
			printf("\n****************************************\n\n");
			break;
		}													// ���� ���� if()

		if (power == 'w' || power == 'W')					// �ȱ� ���ǹ� �ȱ� if
		{
			int wrandom = rand() % 100 + 1;					// 1 ~ 100 ������ ���� ���� �� ������ ����

			if (wrandom <= 1 || loop == 100)				// 1 �ۼ�Ʈ Ȯ���� ������ ����
			{
				Hell();
				HellEvent();
				continue;
			}

			if (wrandom <= 30)								// �� ������ 30������ �� �����ϴ� �� if
			{
				Forest();
				ForestEvent();
				continue;
			}												// �� if
			else if (wrandom <= 50)							// �� ������ 31�̻� 50������ �� �����ϴ� �� if
			{
				River();
				RiverEvent();
				continue;
			}												// �� if()
			else											// �� ������ 51�̻� 100������ �� �����ϴ� �� else
			{
				Mountain();
				Battle(); // Battle �Լ� ���� �� ü�°��� �޾Ƽ� ���� ü�¿� �Է�
				continue;
			}												// �� else()
		}													// �ȱ� if()
		
		printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");	// q�� w�� ������
		printf("\n\n\n         �ùٸ��� ���� ���Դϴ�\n");				// Ű �Է� ��
		printf("         �ùٸ� ���� �Է��ϼ���\n\n\n");				//  ���� ó��
		printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");	//    ��Ʈ
		Sleep(1000);
		system("cls");
		continue;
	}
	return 0;
}															// main()

int Start()
{
	printf("\n****************************************\n\n");
	printf("****************************************\n");
	printf("****************************************\n");			// ����
	printf("****** �ɾ� �ٴϴ� ���谡 �̾߱� *******\n");				// ����
	printf("****************************************\n");			// �ΰ�
	printf("****************************************\n");
	printf("****************************************\n\n");
	printf("     ���� �Ϸ��� �ƹ� Ű�� ��������\n");
	printf("\n****************************************\n\n");
	return 0;
}

int Mountain()												// �� �����Լ�
{
	printf("\n****************************************\n\n");
	printf("\n            �� ");
	Sleep(500);
	printf(" �� ");
	Sleep(500);
	printf(" �� ");
	Sleep(500);
	printf(" �� \n");
	printf("\n       ***** ������ �� �� ******\n");
	printf("       *       ���Դϴ�        *\n");
	printf("       *************************\n\n");
	printf("\n****************************************\n\n");
	Sleep(1500);
	system("cls");
	return 0;
}

int Battle()
{
	int battle = rand() % 100 + 1;
	bool battle40 = battle < 41;

	switch (battle40)							// 1 ~ 100 ������ ���� �������� �� 40 ���϶�� switch (1)
	{
	case 1:													// switch(1) �϶� ������ ���� ����
	{
		int monsterMhp = 20, monsteratk = 4;				// ������ �ִ�ü��, ���ݷ� ���� �� �ʱ�ȭ
		monsterMhp += (loop / 2 + 5);						// (5 + ����Ƚ��/2)��ŭ ���� �ִ�ü�� ����
		int monsterhp = monsterMhp;
		monsteratk += (loop / 3);
		int matkcrit = monsteratk * 2;
		int patkcrit = playeratk * 2;

		char battle = '0';

		printf("\n****************************************\n\n");
		printf("\n\n         ���͸� �������ϴ�!!\n");
		printf("      ȭ�� �� ���Ϳ� �����մϴ�\n");
		printf(" ������ ���� �Ϸ��� �ƹ� Ű�� ��������\n\n\n");
		printf("\n****************************************\n\n");
		battle = _getch();
		system("cls");
		while (1)
		{
			int mcrit = rand() % 100 + 1;					// ���� ũ�� ���� 1 ~ 100
			int pcrit = rand() % 100 + 1;					// ���� ũ�� ���� 1 ~ 100

			if (mcrit <= 5)									// 5�ۼ�ƮȮ���� ���� ũ��Ƽ�� ����
			{
				printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
				printf("             ������ ��\n\n");
				printf("\n            !!ũ��Ƽ��!!\n");
				printf("         %d�� ���ظ� �޾ҽ��ϴ�\n", matkcrit);
				playerhp -= matkcrit;							// �÷��̾��� ����ü��
				(playerhp < 0) ? playerhp = 0 : playerhp = playerhp;
				printf("         ���� �� ü�� : %d/%d\n\n", playerhp, playerMhp);	// �÷��̾��� ����ü���� 0�̸��� ��� 0���� 0�̸��� �ƴҰ�� ����
				printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
				Sleep(1500);
				system("cls");
			}
			else 
			{
				printf("\n****************************************\n\n");
				printf("             ������ ��\n\n");
				printf("\n       ���Ϳ��� ���ݹ޾ҽ��ϴ�\n");
				printf("         %d�� ���ظ� �Ծ����ϴ�\n", monsteratk);
				playerhp -= monsteratk;							// �÷��̾��� ����ü��
				(playerhp < 0) ? playerhp = 0 : playerhp = playerhp;
				printf("         ���� �� ü�� : %d/%d\n\n", playerhp, playerMhp);	// �÷��̾��� ����ü���� 0�̸��� ��� 0���� 0�̸��� �ƴҰ�� ����
				printf("\n****************************************\n\n");
				Sleep(1300);
				system("cls");
			}

			if (playerhp <= 0)								// �÷��̾��� ����ü���� 0������ ��� while �� ����
			{
				printf("\n****************************************\n\n");
				printf("\n\n\n           ȭ�� �� ���Ϳ���\n");
				printf("        �׸� �װ� ���ҽ��ϴ�...\n\n\n");
				printf("\n****************************************\n\n");
				Sleep(2000);
				system("cls");
				break;						
			}

			if (pcrit <= 15)								// 15�ۼ�Ʈ Ȯ���� ���� ũ��Ƽ�� ����
			{
				printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
				printf("             ���谡�� ��\n\n");
				printf("\n             !!ũ��Ƽ��!!\n");
				printf("         %d�� ���ظ� �������ϴ�\n", patkcrit);
				monsterhp -= patkcrit;						// ������ ����ü��
				(monsterhp < 0) ? monsterhp = 0 : monsterhp = monsterhp;
				printf("        ���� ���� ü�� : %d/%d\n\n", monsterhp, monsterMhp);		// ������ ����ü���� 0�̸��� ��� 0���� 0�̸��� �ƴҰ�� ����
				printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
				Sleep(1500);
				system("cls");
			}
			else
			{
				printf("\n****************************************\n\n");
				printf("             ���谡�� ��\n\n");
				printf("\n          ���͸� �����մϴ�\n");
				printf("         %d�� ���ظ� �������ϴ�\n", playeratk);
				monsterhp -= playeratk;						// ������ ����ü��
				(monsterhp < 0) ? monsterhp = 0 : monsterhp = monsterhp;
				printf("        ���� ���� ü�� : %d/%d\n\n", monsterhp, monsterMhp);		// ������ ����ü���� 0�̸��� ��� 0���� 0�̸��� �ƴҰ�� ����
				printf("\n****************************************\n\n");
				Sleep(1300);
				system("cls");
			}

			if (monsterhp <= 0)							// ������ ����ü���� 0������ ��� while �� ����
			{
				printf("\n****************************************\n\n");
				printf("\n\n\n      ���͸� ����� ���ư��ϴ�\n\n\n\n");
				printf("\n****************************************\n\n");
				Sleep(1500);
				system("cls");
				break;
			}
		}												// while(1)
		return 0;										// case 1�� ���� �� Battle()����
	}													// case 1:
	default:
	{
		int randomheal = rand() % playerMhp + 1;		// ���� 1 ~ �ִ�ü�¼�ġ ���� ����
		printf("\n****************************************\n\n");
		printf("\n\n\n        �� ���� �˴޻��� ���ð�\n");
		printf("        %d��ŭ ü���� ȸ���մϴ�\n\n\n", randomheal);
		printf("\n****************************************\n\n");
		Sleep(1500);
		system("cls");
		playerhp += randomheal;							// �˴޻��� ���ǰ�� 1 ~ �ִ�ü�¼�ġ ���� ȸ��
		(playerhp > playerMhp) ? playerhp = playerMhp : playerhp = playerhp;	// ����ü���� �ִ�ü���� ������� �ִ�ü�¼�ġ�� ����
		return 0		;								// default�� ���� �� Battle()����
	}													// default:
	}													// switch()
}

int Forest()
{
	printf("\n****************************************\n\n");
	printf("\n            �� ");
	Sleep(500);
	printf(" �� ");
	Sleep(500);
	printf(" �� ");
	Sleep(500);
	printf(" �� \n");
	printf("\n       ***** ������ �� �� ******\n");
	printf("       *       ���Դϴ�        *\n");
	printf("       *************************\n\n");
	printf("\n****************************************\n\n");
	Sleep(1500);
	system("cls");
	return 0;
}

int ForestEvent()
{
	int frandom = rand() % 100 + 1;				// 1~100������ �������� �� ������ ����
	if (pray == 0)
	{
		if (frandom < 56 || frandom > 50)
		{
			printf("\n****************************************\n\n");
			printf("\n\n\n       ���� ������ �⵵�� �޽��ϴ�\n");
			printf("       \"�ε� �Ǹ��� ������ �ּ���\"\n\n\n");
			printf("\n****************************************\n\n");
			Sleep(1500);
			system("cls");
			pray = 1;
			return 0;
		}
	}

	if (frandom < 51)							// �� ������ 50���� ��� �ִ�ü�� + 1
	{
		printf("\n****************************************\n\n");
		printf("\n\n\n    �� ��ó�� ���ʸ� ã�� �Խ��ϴ�\n");
		printf("        �ִ�ü���� 3�����մϴ�\n\n\n");
		printf("\n****************************************\n\n");
		Sleep(1500);
		system("cls");
		playerMhp += 3;
		return 0;
	}
	printf("\n****************************************\n\n");
	printf("\n\n\n   �߷��� �����ص��� �ɾ� �޽��մϴ�\n");	// �� ������ 50���ϰ� �ƴ϶�� �޽�
	printf("        10��ŭ ü���� ȸ���մϴ�\n\n\n");
	printf("\n****************************************\n\n");
	Sleep(1500);
	system("cls");
	playerhp += 10;
	(playerhp > playerMhp) ? playerhp = playerMhp : playerhp = playerhp;
	return 0;
}

int River()
{
	printf("\n****************************************\n\n");
	printf("\n            �� ");
	Sleep(500);
	printf(" �� ");
	Sleep(500);
	printf(" �� ");
	Sleep(500);
	printf(" �� \n");
	printf("\n       ***** ������ �� �� ******\n");
	printf("       *       ���Դϴ�        *\n");
	printf("       *************************\n\n");
	printf("\n****************************************\n\n");
	Sleep(1500);
	system("cls");
	return 0;
}

int RiverEvent()
{
	int rrandom = rand() % 100 + 1;				// 1~100������ �������� �� ������ ����
	if (rrandom < 51)							// �� ������ 50���� ��� ���ݷ� + 1
	{
		printf("\n****************************************\n\n");
		printf("\n\n\n  �� ��ó�� �ν˵��� ã�� Į�� ���ϴ�\n");
		printf("         ���ݷ��� 2�����մϴ�\n\n\n");
		printf("\n****************************************\n\n");
		Sleep(1500);
		system("cls");
		playeratk += 2;
		return 0;
	}
	printf("\n****************************************\n\n");
	printf("\n\n\n    ������ �ɾ� ��ġ�� �ѷ� ���ϴ�\n\n\n\n");	// �� ������ 50���ϰ� �ƴ϶�� ��ġ����
	printf("\n****************************************\n\n");
	Sleep(1500);
	system("cls");
	return 0;
}

int Hell()
{
	printf("\n****************************************\n\n");
	printf("\n            �� ");
	Sleep(500);
	printf(" �� ");
	Sleep(500);
	printf(" �� ");
	Sleep(500);
	printf(" �� \n");
	printf("\n             �� ���� ����\n");
	printf("            ����� ��ϴ�...\n\n\n");
	printf("\n****************************************\n\n");
	Sleep(2500);
	system("cls");

	printf("\n");
	for (int i = 0; i < 40; i += 1)
	{
		printf("!");
		Sleep(50);
	}
	printf("\n\n");
	printf("\n\n\n         ������ �Ǹ��� �����մϴ�\n\n\n\n");
	printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
	Sleep(2000);
	system("cls");
	return 0;
}

int HellEvent()
{
	int devilMhp = 100, devilatk = 10;
	devilMhp += loop;
	devilatk += (loop/2);
	int devilhp = devilMhp;
	int datkcrit = devilatk * 100;
	int patkcrit = playeratk * 2;
	int pcritper = 15;
	if (pray == 1)
	{
		patkcrit = playeratk * 3;
		pcritper = 30;
	}

	while (1)
	{
		int dcrit = rand() % 100 + 1;					// �Ǹ� ũ�� ���� 1 ~ 100
		int pcrit = rand() % 100 + 1;					// ���� ũ�� ���� 1 ~ 100

		if (dcrit <= 1)									// 1�ۼ�ƮȮ���� �Ǹ� ũ��Ƽ�� ����
		{
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			printf("              �Ǹ��� ��\n\n");
			printf("\n            !!ũ��Ƽ��!!\n");
			printf("       %d�� ���ظ� �޾ҽ��ϴ�\n", datkcrit);
			playerhp -= datkcrit;							// �÷��̾��� ����ü��
			(playerhp < 0) ? playerhp = 0 : playerhp = playerhp;
			printf("          ���� �� ü�� : %d/%d\n\n", playerhp, playerMhp);	// �÷��̾��� ����ü���� 0�̸��� ��� 0���� 0�̸��� �ƴҰ�� ����
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			Sleep(2000);
			system("cls");
		}
		else
		{
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			printf("              �Ǹ��� ��\n\n");
			printf("\n        �Ǹ����� ���ݹ޾ҽ��ϴ�\n");
			printf("         %d�� ���ظ� �Ծ����ϴ�\n", devilatk);
			playerhp -= devilatk;							// �÷��̾��� ����ü��
			(playerhp < 0) ? playerhp = 0 : playerhp = playerhp;
			printf("         ���� �� ü�� : %d/%d\n\n", playerhp, playerMhp);	// �÷��̾��� ����ü���� 0�̸��� ��� 0���� 0�̸��� �ƴҰ�� ����
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			Sleep(1300);
			system("cls");
		}

		if (playerhp <= 0)								// �÷��̾��� ����ü���� 0������ ��� while �� ����
		{
			printf("\n****************************************\n\n");
			printf("\n\n\n            ������ �Ǹ�����\n");
			printf("        �׸� �װ� ���ҽ��ϴ�...\n\n\n");
			printf("\n****************************************\n\n");
			Sleep(2000);
			system("cls");
			break;
		}

		if (pcrit <= pcritper)								// 15�ۼ�Ʈ Ȯ���� ���� ũ��Ƽ�� ����
		{
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			printf("             ���谡�� ��\n\n");
			printf("\n             !!ũ��Ƽ��!!\n");
			printf("    ũ��Ƽ��!! %d�� ���ظ� �������ϴ�\n", patkcrit);
			devilhp -= patkcrit;						// �Ǹ��� ����ü��
			(devilhp < 0) ? devilhp = 0 : devilhp = devilhp;
			printf("        ���� �Ǹ� ü�� : %d/%d\n\n", devilhp, devilMhp);		// �Ǹ��� ����ü���� 0�̸��� ��� 0���� 0�̸��� �ƴҰ�� ����
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			Sleep(1500);
			system("cls");
		}
		else
		{
			printf("\n****************************************\n\n");
			printf("             ���谡�� ��\n\n");
			printf("\n           �Ǹ��� �����մϴ�\n");
			printf("         %d�� ���ظ� �������ϴ�\n", playeratk);
			devilhp -= playeratk;						// �Ǹ��� ����ü��
			(devilhp < 0) ? devilhp = 0 : devilhp = devilhp;
			printf("        ���� �Ǹ� ü�� : %d/%d\n\n", devilhp, devilMhp);		// ������ ����ü���� 0�̸��� ��� 0���� 0�̸��� �ƴҰ�� ����
			printf("\n****************************************\n\n");
			Sleep(1300);
			system("cls");
		}

		if (devilhp <= 0)							// �Ǹ��� ����ü���� 0������ ��� while �� ����
		{
			printf("\n****************************************\n\n");
			printf("\n\n\n       �Ǹ��� ����� ���ư��ϴ�\n\n\n\n");
			printf("\n****************************************\n\n");
			Sleep(1500);
			system("cls");
			break;
		}
	}
	return 0;
}