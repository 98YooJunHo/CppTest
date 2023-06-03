#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int Battle(int playerhp, int playerMhp, int playeratk);
int ForestEvent(int playerMhp), Forest();
int RiverEvent(int playeratk), River();
int Mountain();

int loop = 0;

int main()
{
	int playerMhp = 50;
	int playeratk = 5;
	int playerhp = playerMhp;
	char power = '0';
	srand(time(NULL));

	printf("\n****************************************\n\n");
	printf("****************************************\n");
	printf("****************************************\n");			// ����
	printf("****** �ɾ� �ٴϴ� ���谡 �̾߱� *******\n");				// ����
	printf("****************************************\n");			// �ΰ�
	printf("****************************************\n");			
	printf("****************************************\n\n");
	printf("     ���� �Ϸ��� �ƹ� Ű�� ��������\n");
	printf("\n****************************************\n\n");
	power = _getch();
	system("cls");

	while (6)										// �ݺ��� while
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
			if (wrandom <= 30)								// �� ������ 30������ �� �����ϴ� �� if
			{
				Forest();
				playerMhp = ForestEvent(playerMhp);
				continue;
			}												// �� if
			else if (wrandom <= 50)							// �� ������ 31�̻� 50������ �� �����ϴ� �� if
			{
				River();
				playeratk = RiverEvent(playeratk);
				continue;
			}												// �� if()
			else											// �� ������ 51�̻� 100������ �� �����ϴ� �� else
			{
				Mountain();
				playerhp = Battle(playerhp, playerMhp, playeratk); // Battle �Լ� ���� �� ü�°��� �޾Ƽ� ���� ü�¿� �Է�
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

int Mountain()												// �� �����Լ�
{
	printf("\n****************************************\n\n");
	printf("\n             �� ");
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
	Sleep(1000);
	system("cls");
	return 0;
}

int Battle(int playerhp, int playerMhp, int playeratk)
{
	int battle = rand() % 100 + 1;
	bool battle40 = battle < 41;

	switch (battle40)						// 1 ~ 100 ������ ���� �������� �� 40 ���϶�� switch (1)
	{
	case 1:													// switch(1) �϶� ������ ���� ����
	{
		int monsterMhp = (25 + loop / 2), monsteratk = 4;	// ������ �ִ�ü��, ���ݷ� ���� �� �ʱ�ȭ
		int matkrandom = rand() % 100 + 1;					// 1 ~ 100 ���� �޾� ���Ͱ��ݷ����� Ȯ���� ����
		char battle = '0';
		if (matkrandom < 31)								// matkrandom�� 30���϶�� (30�ۼ�Ʈ)
		{
			monsteratk += 1;								// ���Ͱ��ݷ� + 1
		}
		int monsterhp = monsterMhp;
		printf("\n****************************************\n\n");
		printf("\n\n         ���͸� �������ϴ�!!\n");
		printf("      ȭ�� �� ���Ϳ� �����մϴ�\n");
		printf(" ������ ���� �Ϸ��� �ƹ� Ű�� ��������\n\n\n");
		printf("\n****************************************\n\n");
		battle = _getch();
		system("cls");
		while (1)
		{
			printf("\n****************************************\n\n");
			printf("\n\n\n       ���Ϳ��� ���ݹ޾ҽ��ϴ�\n");
			printf("         %d�� ���ظ� �Ծ����ϴ�\n",monsteratk);
			playerhp -= monsteratk;							// �÷��̾��� ����ü��
			(playerhp < 0) ? playerhp = 0 : playerhp = playerhp;
			printf("         ���� �� ü�� : %d/%d\n\n", playerhp, playerMhp);	// �÷��̾��� ����ü���� 0�̸��� ��� 0���� 0�̸��� �ƴҰ�� ����
			printf("\n****************************************\n\n");
			Sleep(1000);
			system("cls");
			if (playerhp <= 0)								// �÷��̾��� ����ü���� 0������ ��� while �� ����
			{
				printf("\n****************************************\n\n");
				printf("\n\n\n           ȭ�� �� ���Ϳ���\n");
				printf("        �׸� �װ� ���ҽ��ϴ�...\n\n\n");
				printf("\n****************************************\n\n");
				Sleep(1000);
				system("cls");
				break;						
			}

			printf("\n****************************************\n\n");
			printf("\n\n\n          ���͸� �����մϴ�\n");
			printf("         %d�� ���ظ� �������ϴ�\n",playeratk);
			monsterhp -= playeratk;						// ������ ����ü��
			(monsterhp < 0) ? monsterhp = 0 : monsterhp = monsterhp;
			printf("       ���� ���� ü�� : %d/%d\n\n", monsterhp, monsterMhp);		// ������ ����ü���� 0�̸��� ��� 0���� 0�̸��� �ƴҰ�� ����
			printf("\n****************************************\n\n");
			Sleep(1000);
			system("cls");
			if (monsterhp <= 0)							// ������ ����ü���� 0������ ��� while �� ����
			{
				printf("\n****************************************\n\n");
				printf("\n\n\n      ���͸� ����� ���ư��ϴ�\n\n\n\n");
				printf("\n****************************************\n\n");
				Sleep(1000);
				system("cls");
				break;
			}
		}												// while(1)
		return playerhp;								// case 1�� ���� �� playerhp ��ȯ
	}													// case 1:
	default:
	{
		int randomheal = rand() % playerMhp + 1;		// ���� 1 ~ �ִ�ü�¼�ġ ���� ����
		printf("\n****************************************\n\n");
		printf("\n\n\n        �� ���� �˴޻��� ���ð�\n");
		printf("        %d��ŭ ü���� ȸ���մϴ�\n\n\n", randomheal);
		printf("\n****************************************\n\n");
		Sleep(1000);
		system("cls");
		playerhp += randomheal;							// �˴޻��� ���ǰ�� 1 ~ �ִ�ü�¼�ġ ���� ȸ��
		(playerhp > playerMhp) ? playerhp = playerMhp : playerhp = playerhp;	// ����ü���� �ִ�ü���� ������� �ִ�ü�¼�ġ�� ����
		return playerhp;								// default�� ���� �� playerhp ��ȯ
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
	Sleep(1000);
	system("cls");
	return 0;
}

int ForestEvent(int playerMhp)
{
	int frandom = rand() % 100 + 1;				// 1~100������ �������� �� ������ ����
	if (frandom < 51)							// �� ������ 50���� ��� �ִ�ü�� + 1
	{
		printf("\n****************************************\n\n");
		printf("\n\n\n    �� ��ó�� ���ʸ� ã�� �Խ��ϴ�\n");
		printf("         �ִ�ü���� �����մϴ�\n\n\n");
		printf("\n****************************************\n\n");
		Sleep(1000);
		system("cls");
		return (playerMhp += 1);
	}
	printf("\n****************************************\n\n");
	printf("\n\n\n   �߷��� �����ص��� �ɾ� �޽��մϴ�\n\n\n\n");	// �� ������ 50���ϰ� �ƴ϶�� �޽�
	printf("\n****************************************\n\n");
	Sleep(1000);
	system("cls");
	return playerMhp;
}
int River()
{
	printf("\n****************************************\n\n");
	printf("\n             �� ");
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
	Sleep(1000);
	system("cls");
	return 0;
}

int RiverEvent(int playeratk)
{
	int rrandom = rand() % 100 + 1;				// 1~100������ �������� �� ������ ����
	if (rrandom < 51)							// �� ������ 50���� ��� ���ݷ� + 1
	{
		printf("\n****************************************\n\n");
		printf("\n\n\n  �� ��ó�� �ν˵��� ã�� Į�� ���ϴ�\n");
		printf("          ���ݷ��� �����մϴ�\n\n\n");
		printf("\n****************************************\n\n");
		Sleep(1000);
		system("cls");
		return (playeratk += 1);
	}
	printf("\n****************************************\n\n");
	printf("\n\n\n    ������ �ɾ� ��ġ�� �ѷ� ���ϴ�\n\n\n\n");	// �� ������ 50���ϰ� �ƴ϶�� ��ġ����
	printf("\n****************************************\n\n");
	Sleep(1000);
	system("cls");
	return playeratk;
}