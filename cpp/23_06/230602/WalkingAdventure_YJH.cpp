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

	while (loop < 6)										// 반복문 while
	{
		power = '0';
		loop += 1;

		if (playerhp <= 0)									// 최우선 예외 처리 if
		{
			printf("\n****************************************\n\n");
			printf("\n\n\n            게임을 종료합니다\n");
			printf("       플레이 해주셔서 감사합니다\n\n\n");
			printf("\n****************************************\n\n");
			break;
		}													// 최우선 예외 처리 if()

		printf("\n****************************************\n\n");
		printf("       **** 현재 나의 상태 *****\n");						// 모험가
		printf("       * 체력:%d/%d   공격력:%d *\n", playerhp, playerMhp, playeratk);	//  상태
		printf("       *************************\n\n");					//  출력
		printf("       ┌──────────┐ ┌──────────┐\n");
		printf("       │ 종료 = q │ │ 걷기 = w │\n");
		printf("       └──────────┘ └──────────┘\n");
		printf("\n****************************************\n\n");
		printf("       값을 입력하세요-> ");
		power = _getch();									// 게임 실행 혹은 종료를 위한 하나의 키입력 받기
		system("cls");

		if (power == 'q' || power == 'Q')					// 게임 종료 조건문 if
		{
			printf("\n****************************************\n\n");
			printf("\n\n\n            게임을 종료합니다\n");
			printf("       플레이 해주셔서 감사합니다\n\n\n");
			printf("\n****************************************\n\n");
			break;
		}													// 게임 종료 if()

		if (power == 'w' || power == 'W')					// 걷기 조건문 걷기 if
		{
			int wrandom = rand() % 100 + 1;					// 1 ~ 100 사이의 랜덤 수를 길 랜덤에 저장

			if (wrandom <= 1 || loop == 100)				// 1 퍼센트 확률로 지옥에 진입
			{
				Hell();
				HellEvent();
				continue;
			}

			if (wrandom <= 30)								// 길 랜덤이 30이하일 때 실행하는 강 if
			{
				Forest();
				ForestEvent();
				continue;
			}												// 숲 if
			else if (wrandom <= 50)							// 길 랜덤이 31이상 50이하일 때 실행하는 강 if
			{
				River();
				RiverEvent();
				continue;
			}												// 강 if()
			else											// 길 랜덤이 51이상 100이하일 때 실행하는 산 else
			{
				Mountain();
				Battle(); // Battle 함수 실행 후 체력값을 받아서 현재 체력에 입력
				continue;
			}												// 산 else()
		}													// 걷기 if()
		
		printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");	// q와 w를 제외한
		printf("\n\n\n         올바르지 않은 값입니다\n");				// 키 입력 값
		printf("         올바른 값을 입력하세요\n\n\n");				//  예외 처리
		printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");	//    파트
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
	printf("****************************************\n");			// 게임
	printf("****** 걸어 다니는 모험가 이야기 *******\n");				// 시작
	printf("****************************************\n");			// 로고
	printf("****************************************\n");
	printf("****************************************\n\n");
	printf("     시작 하려면 아무 키나 누르세요\n");
	printf("\n****************************************\n\n");
	return 0;
}

int Mountain()												// 산 입장함수
{
	printf("\n****************************************\n\n");
	printf("\n            걸 ");
	Sleep(500);
	printf(" 어 ");
	Sleep(500);
	printf(" 간 ");
	Sleep(500);
	printf(" 다 \n");
	printf("\n       ***** 도착한 곳 은 ******\n");
	printf("       *       산입니다        *\n");
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

	switch (battle40)							// 1 ~ 100 사이의 수를 생성했을 때 40 이하라면 switch (1)
	{
	case 1:													// switch(1) 일때 스코프 내부 실행
	{
		int monsterMhp = 20, monsteratk = 4;				// 몬스터의 최대체력, 공격력 선언 및 초기화
		monsterMhp += (loop / 2 + 5);						// (5 + 루프횟수/2)만큼 몬스터 최대체력 증가
		int monsterhp = monsterMhp;
		monsteratk += (loop / 3);
		int matkcrit = monsteratk * 2;
		int patkcrit = playeratk * 2;

		char battle = '0';

		printf("\n****************************************\n\n");
		printf("\n\n         몬스터를 만났습니다!!\n");
		printf("      화가 난 몬스터와 전투합니다\n");
		printf(" 전투를 시작 하려면 아무 키나 누르세요\n\n\n");
		printf("\n****************************************\n\n");
		battle = _getch();
		system("cls");
		while (1)
		{
			int mcrit = rand() % 100 + 1;					// 몬스터 크리 변수 1 ~ 100
			int pcrit = rand() % 100 + 1;					// 유저 크리 변수 1 ~ 100

			if (mcrit <= 5)									// 5퍼센트확률로 몬스터 크리티컬 공격
			{
				printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
				printf("             몬스터의 턴\n\n");
				printf("\n            !!크리티컬!!\n");
				printf("         %d의 피해를 받았습니다\n", matkcrit);
				playerhp -= matkcrit;							// 플레이어의 현재체력
				(playerhp < 0) ? playerhp = 0 : playerhp = playerhp;
				printf("         현재 내 체력 : %d/%d\n\n", playerhp, playerMhp);	// 플레이어의 현재체력이 0미만일 경우 0으로 0미만이 아닐경우 유지
				printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
				Sleep(1500);
				system("cls");
			}
			else 
			{
				printf("\n****************************************\n\n");
				printf("             몬스터의 턴\n\n");
				printf("\n       몬스터에게 공격받았습니다\n");
				printf("         %d의 피해를 입었습니다\n", monsteratk);
				playerhp -= monsteratk;							// 플레이어의 현재체력
				(playerhp < 0) ? playerhp = 0 : playerhp = playerhp;
				printf("         현재 내 체력 : %d/%d\n\n", playerhp, playerMhp);	// 플레이어의 현재체력이 0미만일 경우 0으로 0미만이 아닐경우 유지
				printf("\n****************************************\n\n");
				Sleep(1300);
				system("cls");
			}

			if (playerhp <= 0)								// 플레이어의 현재체력이 0이하일 경우 while 문 종료
			{
				printf("\n****************************************\n\n");
				printf("\n\n\n           화가 난 몬스터에게\n");
				printf("        그만 죽고 말았습니다...\n\n\n");
				printf("\n****************************************\n\n");
				Sleep(2000);
				system("cls");
				break;						
			}

			if (pcrit <= 15)								// 15퍼센트 확률로 유저 크리티컬 공격
			{
				printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
				printf("             모험가의 턴\n\n");
				printf("\n             !!크리티컬!!\n");
				printf("         %d의 피해를 입혔습니다\n", patkcrit);
				monsterhp -= patkcrit;						// 몬스터의 현재체력
				(monsterhp < 0) ? monsterhp = 0 : monsterhp = monsterhp;
				printf("        현재 몬스터 체력 : %d/%d\n\n", monsterhp, monsterMhp);		// 몬스터의 현재체력이 0미만일 경우 0으로 0미만이 아닐경우 유지
				printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
				Sleep(1500);
				system("cls");
			}
			else
			{
				printf("\n****************************************\n\n");
				printf("             모험가의 턴\n\n");
				printf("\n          몬스터를 공격합니다\n");
				printf("         %d의 피해를 입혔습니다\n", playeratk);
				monsterhp -= playeratk;						// 몬스터의 현재체력
				(monsterhp < 0) ? monsterhp = 0 : monsterhp = monsterhp;
				printf("        현재 몬스터 체력 : %d/%d\n\n", monsterhp, monsterMhp);		// 몬스터의 현재체력이 0미만일 경우 0으로 0미만이 아닐경우 유지
				printf("\n****************************************\n\n");
				Sleep(1300);
				system("cls");
			}

			if (monsterhp <= 0)							// 몬스터의 현재체력이 0이하일 경우 while 문 종료
			{
				printf("\n****************************************\n\n");
				printf("\n\n\n      몬스터를 무찌르고 돌아갑니다\n\n\n\n");
				printf("\n****************************************\n\n");
				Sleep(1500);
				system("cls");
				break;
			}
		}												// while(1)
		return 0;										// case 1이 끝날 때 Battle()종료
	}													// case 1:
	default:
	{
		int randomheal = rand() % playerMhp + 1;		// 힐량 1 ~ 최대체력수치 랜덤 지정
		printf("\n****************************************\n\n");
		printf("\n\n\n        산 속의 옹달샘을 마시고\n");
		printf("        %d만큼 체력을 회복합니다\n\n\n", randomheal);
		printf("\n****************************************\n\n");
		Sleep(1500);
		system("cls");
		playerhp += randomheal;							// 옹달샘을 마실경우 1 ~ 최대체력수치 랜덤 회복
		(playerhp > playerMhp) ? playerhp = playerMhp : playerhp = playerhp;	// 현재체력이 최대체력을 넘을경우 최대체력수치로 고정
		return 0		;								// default가 끝날 때 Battle()종료
	}													// default:
	}													// switch()
}

int Forest()
{
	printf("\n****************************************\n\n");
	printf("\n            걸 ");
	Sleep(500);
	printf(" 어 ");
	Sleep(500);
	printf(" 간 ");
	Sleep(500);
	printf(" 다 \n");
	printf("\n       ***** 도착한 곳 은 ******\n");
	printf("       *       숲입니다        *\n");
	printf("       *************************\n\n");
	printf("\n****************************************\n\n");
	Sleep(1500);
	system("cls");
	return 0;
}

int ForestEvent()
{
	int frandom = rand() % 100 + 1;				// 1~100사이의 랜덤수를 강 랜덤에 저장
	if (pray == 0)
	{
		if (frandom < 56 || frandom > 50)
		{
			printf("\n****************************************\n\n");
			printf("\n\n\n       숲의 요정의 기도를 받습니다\n");
			printf("       \"부디 악마를 물리쳐 주세요\"\n\n\n");
			printf("\n****************************************\n\n");
			Sleep(1500);
			system("cls");
			pray = 1;
			return 0;
		}
	}

	if (frandom < 51)							// 숲 랜덤이 50이하 라면 최대체력 + 1
	{
		printf("\n****************************************\n\n");
		printf("\n\n\n    숲 근처의 약초를 찾아 먹습니다\n");
		printf("        최대체력이 3증가합니다\n\n\n");
		printf("\n****************************************\n\n");
		Sleep(1500);
		system("cls");
		playerMhp += 3;
		return 0;
	}
	printf("\n****************************************\n\n");
	printf("\n\n\n   잘려진 나무밑동에 앉아 휴식합니다\n");	// 숲 랜덤이 50이하가 아니라면 휴식
	printf("        10만큼 체력을 회복합니다\n\n\n");
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
	printf("\n            걸 ");
	Sleep(500);
	printf(" 어 ");
	Sleep(500);
	printf(" 간 ");
	Sleep(500);
	printf(" 다 \n");
	printf("\n       ***** 도착한 곳 은 ******\n");
	printf("       *       강입니다        *\n");
	printf("       *************************\n\n");
	printf("\n****************************************\n\n");
	Sleep(1500);
	system("cls");
	return 0;
}

int RiverEvent()
{
	int rrandom = rand() % 100 + 1;				// 1~100사이의 랜덤수를 강 랜덤에 저장
	if (rrandom < 51)							// 강 랜덤이 50이하 라면 공격력 + 1
	{
		printf("\n****************************************\n\n");
		printf("\n\n\n  강 근처의 부싯돌을 찾아 칼을 갑니다\n");
		printf("         공격력이 2증가합니다\n\n\n");
		printf("\n****************************************\n\n");
		Sleep(1500);
		system("cls");
		playeratk += 2;
		return 0;
	}
	printf("\n****************************************\n\n");
	printf("\n\n\n    강가에 앉아 경치를 둘러 봅니다\n\n\n\n");	// 강 랜덤이 50이하가 아니라면 경치구경
	printf("\n****************************************\n\n");
	Sleep(1500);
	system("cls");
	return 0;
}

int Hell()
{
	printf("\n****************************************\n\n");
	printf("\n            걸 ");
	Sleep(500);
	printf(" 어 ");
	Sleep(500);
	printf(" 간 ");
	Sleep(500);
	printf(" 다 \n");
	printf("\n             썩 좋지 못한\n");
	printf("            기분이 듭니다...\n\n\n");
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
	printf("\n\n\n         지옥의 악마를 마주합니다\n\n\n\n");
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
		int dcrit = rand() % 100 + 1;					// 악마 크리 변수 1 ~ 100
		int pcrit = rand() % 100 + 1;					// 유저 크리 변수 1 ~ 100

		if (dcrit <= 1)									// 1퍼센트확률로 악마 크리티컬 공격
		{
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			printf("              악마의 턴\n\n");
			printf("\n            !!크리티컬!!\n");
			printf("       %d의 피해를 받았습니다\n", datkcrit);
			playerhp -= datkcrit;							// 플레이어의 현재체력
			(playerhp < 0) ? playerhp = 0 : playerhp = playerhp;
			printf("          현재 내 체력 : %d/%d\n\n", playerhp, playerMhp);	// 플레이어의 현재체력이 0미만일 경우 0으로 0미만이 아닐경우 유지
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			Sleep(2000);
			system("cls");
		}
		else
		{
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			printf("              악마의 턴\n\n");
			printf("\n        악마에게 공격받았습니다\n");
			printf("         %d의 피해를 입었습니다\n", devilatk);
			playerhp -= devilatk;							// 플레이어의 현재체력
			(playerhp < 0) ? playerhp = 0 : playerhp = playerhp;
			printf("         현재 내 체력 : %d/%d\n\n", playerhp, playerMhp);	// 플레이어의 현재체력이 0미만일 경우 0으로 0미만이 아닐경우 유지
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			Sleep(1300);
			system("cls");
		}

		if (playerhp <= 0)								// 플레이어의 현재체력이 0이하일 경우 while 문 종료
		{
			printf("\n****************************************\n\n");
			printf("\n\n\n            지옥의 악마에게\n");
			printf("        그만 죽고 말았습니다...\n\n\n");
			printf("\n****************************************\n\n");
			Sleep(2000);
			system("cls");
			break;
		}

		if (pcrit <= pcritper)								// 15퍼센트 확률로 유저 크리티컬 공격
		{
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			printf("             모험가의 턴\n\n");
			printf("\n             !!크리티컬!!\n");
			printf("    크리티컬!! %d의 피해를 입혔습니다\n", patkcrit);
			devilhp -= patkcrit;						// 악마의 현재체력
			(devilhp < 0) ? devilhp = 0 : devilhp = devilhp;
			printf("        현재 악마 체력 : %d/%d\n\n", devilhp, devilMhp);		// 악마의 현재체력이 0미만일 경우 0으로 0미만이 아닐경우 유지
			printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
			Sleep(1500);
			system("cls");
		}
		else
		{
			printf("\n****************************************\n\n");
			printf("             모험가의 턴\n\n");
			printf("\n           악마를 공격합니다\n");
			printf("         %d의 피해를 입혔습니다\n", playeratk);
			devilhp -= playeratk;						// 악마의 현재체력
			(devilhp < 0) ? devilhp = 0 : devilhp = devilhp;
			printf("        현재 악마 체력 : %d/%d\n\n", devilhp, devilMhp);		// 몬스터의 현재체력이 0미만일 경우 0으로 0미만이 아닐경우 유지
			printf("\n****************************************\n\n");
			Sleep(1300);
			system("cls");
		}

		if (devilhp <= 0)							// 악마의 현재체력이 0이하일 경우 while 문 종료
		{
			printf("\n****************************************\n\n");
			printf("\n\n\n       악마를 무찌르고 돌아갑니다\n\n\n\n");
			printf("\n****************************************\n\n");
			Sleep(1500);
			system("cls");
			break;
		}
	}
	return 0;
}