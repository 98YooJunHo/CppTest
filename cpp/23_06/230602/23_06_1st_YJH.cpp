#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
	int playerMhp = 50;
	int playerhp = 50;
	int playeratk = 5;
	int loop = 0;
	char power = '0';
	srand(time(NULL));

	printf("****************************************\n");			// ����
	printf("****** �ɾ� �ٴϴ� ���谡 �̾߱� *******\n");				// ����
	printf("****************************************\n\n");			// �ΰ�
	printf("     ���� �Ϸ��� �ƹ� Ű�� ��������\n");
	_getch();

	while (1)										// �ݺ��� while
	{
		loop += 1;
		printf("\n\n       **** ���� ���� ���� *****\n");						// ���谡
		printf("       * ü��:%d/%d   ���ݷ�:%d *\n", playerhp, playerMhp, playeratk);	//  ����
		printf("       *************************\n\n");					//  ���

		printf("       ������������������������ ������������������������\n");
		printf("       �� ���� = q �� �� �ȱ� = w ��\n");
		printf("       ������������������������ ������������������������\n");
		printf("       ���� �Է��ϼ���-> ");
		power = _getch();									// ���� ���� Ȥ�� ���Ḧ ���� �ϳ��� Ű�Է� �ޱ�

		if (power == 'q' || power == 'Q')					// ���� ���� ���ǹ� if
		{
			printf("\n\n            ������ �����մϴ�\n       �÷��� ���ּż� �����մϴ�\n\n");
			break;
		}													// ���� ���� if()

		if (power == 'w' || power == 'W')					// �ȱ� ���ǹ� if
		{
			int Random = rand() % 100 + 1;					// 1 ~ 100 ������ ���� �� ����
			if (Random <= 30)								// ���� ���� 30������ �� �����ϴ� if (��)
			{
				printf("\n             �� ");
				Sleep(500);
				printf(" �� ");
				Sleep(500);
				printf(" �� ");
				Sleep(500);
				printf(" �� \n");
				printf("\n       ***** ������ �� �� ******\n");						
				printf("       *       ���Դϴ�        *\n");	
				printf("       *************************\n");
				printf("       ���� ����� �޾Ƶ��Դϴ�\n");
				printf("        �ִ� ü���� 1�����մϴ�\n");
				playerMhp += 1;
				continue;
			}												// �� if
			else if (Random <= 50)							// ���� ���� 31�̻� 50������ �� �����ϴ� if (��)
			{
				printf("\n             �� ");
				Sleep(500);
				printf(" �� ");
				Sleep(500);
				printf(" �� ");
				Sleep(500);
				printf(" �� \n");
				printf("\n       ***** ������ �� �� ******\n");						
				printf("       *       ���Դϴ�        *\n");	
				printf("       *************************\n");
				printf("    ���� �ν˵��� ã�� Į�� ���ϴ�\n");
				printf("           ���ݷ��� �����մϴ�\n");
				playeratk += 1;
				continue;
			}												// �� if()
			else											// ���� ���� 51�̻� 100������ �� �����ϴ� else (��)
			{
				printf("\n             �� ");
				Sleep(500);
				printf(" �� ");
				Sleep(500);
				printf(" �� ");
				Sleep(500);
				printf(" �� \n");
				printf("\n       ***** ������ �� �� ******\n");
				printf("       *       ���Դϴ�        *\n");
				printf("       *************************\n");


				switch ((rand() % 100 + 1)<41)				// 1 ~ 100 ������ ���� �������� �� 40 ���϶�� switch (1)
				{
				case 1:										// switch(1) �϶� ������ ���� ����
					{
						int monsterMhp = (28 + loop / 2), monsteratk = (4 + loop % 2);
						int monsterhp = monsterMhp;
						printf("\n         ���͸� �������ϴ�!!\n");
						printf("      ȭ�� �� ���Ϳ� �����մϴ�\n");
						Sleep(500);
						while (1)
						{
							printf("\n       ���Ϳ��� ���ݹ޾ҽ��ϴ�\n");
							playerhp -= monsteratk;							// �÷��̾��� ����ü��
							(playerhp < 0) ? playerhp = 0 : playerhp = playerhp;		
							printf("        ���� �� ü�� : %d/%d\n", playerhp, playerMhp);			// �÷��̾��� ����ü���� 0�̸��� ��� 0���� 0�̸��� �ƴҰ�� ����
							Sleep(500);
							if (playerhp <= 0)
							{
								printf("\n          ȭ�� �� ���Ϳ���\n        �׸� �װ� ���ҽ��ϴ�...\n");
								printf("\n\n            ������ �����մϴ�\n       �÷��� ���ּż� �����մϴ�\n\n");
								return 0;					//main�Լ� ����
							}

							printf("\n          ���͸� �����մϴ�\n");
							monsterhp -= playeratk;						// ������ ����ü��
							(monsterhp < 0) ? monsterhp = 0 : monsterhp = monsterhp;
							printf("      ���� ���� ü�� : %d/%d\n", monsterhp, monsterMhp);			// ������ ����ü���� 0�̸��� ��� 0���� 0�̸��� �ƴҰ�� ����
							Sleep(500);
							if (monsterhp <= 0)
							{
								printf("      ���͸� ����� ���ư��ϴ�\n");
								break;						// switch�� ������ while�� ����
							}

						}
						continue;							// switch�� �ٱ��� while���� ���������� ���ư�
					}										// case 1 ����
					default:
					{
						printf("        �� ���� �˴޻��� ���ð� \n            ü���� ȸ���մϴ�\n");
						int randomheal = rand() % 50 + 1;										// ���� 1 ~ 50 ���� ����
						playerhp += randomheal;									// �˴޻��� ���ǰ�� 1 ~ 50 ���� ȸ��
						(playerhp > playerMhp) ? playerhp = playerMhp : playerhp = playerhp;	// ����ü���� �ִ�ü���� ������� �ִ�ü�¼�ġ�� ����
						continue;							// switch�� �ٱ��� while���� ���������� ���ư�
					}
				}                                           // �� else()
			}
		}													// �ȱ� if()
		printf("\n         ���ǵ��� ���� ���Դϴ�\n         �ùٸ� ���� �Է��ϼ���\n");
		continue;
	}														// while()

	return 0;
}															// main()