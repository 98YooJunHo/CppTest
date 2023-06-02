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

	printf("****************************************\n");			// 게임
	printf("****** 걸어 다니는 모험가 이야기 *******\n");				// 시작
	printf("****************************************\n\n");			// 로고
	printf("     시작 하려면 아무 키나 누르세요\n");
	_getch();

	while (1)										// 반복문 while
	{
		loop += 1;
		printf("\n\n       **** 현재 나의 상태 *****\n");						// 모험가
		printf("       * 체력:%d/%d   공격력:%d *\n", playerhp, playerMhp, playeratk);	//  상태
		printf("       *************************\n\n");					//  출력

		printf("       ┌──────────┐ ┌──────────┐\n");
		printf("       │ 종료 = q │ │ 걷기 = w │\n");
		printf("       └──────────┘ └──────────┘\n");
		printf("       값을 입력하세요-> ");
		power = _getch();									// 게임 실행 혹은 종료를 위한 하나의 키입력 받기

		if (power == 'q' || power == 'Q')					// 게임 종료 조건문 if
		{
			printf("\n\n            게임을 종료합니다\n       플레이 해주셔서 감사합니다\n\n");
			break;
		}													// 게임 종료 if()

		if (power == 'w' || power == 'W')					// 걷기 조건문 if
		{
			int Random = rand() % 100 + 1;					// 1 ~ 100 사이의 랜덤 수 저장
			if (Random <= 30)								// 랜덤 수가 30이하일 때 실행하는 if (숲)
			{
				printf("\n             걸 ");
				Sleep(500);
				printf(" 어 ");
				Sleep(500);
				printf(" 간 ");
				Sleep(500);
				printf(" 다 \n");
				printf("\n       ***** 도착한 곳 은 ******\n");						
				printf("       *       숲입니다        *\n");	
				printf("       *************************\n");
				printf("       숲의 기운을 받아들입니다\n");
				printf("        최대 체력이 1증가합니다\n");
				playerMhp += 1;
				continue;
			}												// 숲 if
			else if (Random <= 50)							// 랜덤 수가 31이상 50이하일 때 실행하는 if (강)
			{
				printf("\n             걸 ");
				Sleep(500);
				printf(" 어 ");
				Sleep(500);
				printf(" 간 ");
				Sleep(500);
				printf(" 다 \n");
				printf("\n       ***** 도착한 곳 은 ******\n");						
				printf("       *       강입니다        *\n");	
				printf("       *************************\n");
				printf("    강의 부싯돌을 찾아 칼을 갑니다\n");
				printf("           공격력이 증가합니다\n");
				playeratk += 1;
				continue;
			}												// 강 if()
			else											// 랜덤 수가 51이상 100이하일 때 실행하는 else (산)
			{
				printf("\n             걸 ");
				Sleep(500);
				printf(" 어 ");
				Sleep(500);
				printf(" 간 ");
				Sleep(500);
				printf(" 다 \n");
				printf("\n       ***** 도착한 곳 은 ******\n");
				printf("       *       산입니다        *\n");
				printf("       *************************\n");


				switch ((rand() % 100 + 1)<41)				// 1 ~ 100 사이의 수를 생성했을 때 40 이하라면 switch (1)
				{
				case 1:										// switch(1) 일때 스코프 내부 실행
					{
						int monsterMhp = (28 + loop / 2), monsteratk = (4 + loop % 2);
						int monsterhp = monsterMhp;
						printf("\n         몬스터를 만났습니다!!\n");
						printf("      화가 난 몬스터와 전투합니다\n");
						Sleep(500);
						while (1)
						{
							printf("\n       몬스터에게 공격받았습니다\n");
							playerhp -= monsteratk;							// 플레이어의 현재체력
							(playerhp < 0) ? playerhp = 0 : playerhp = playerhp;		
							printf("        현재 내 체력 : %d/%d\n", playerhp, playerMhp);			// 플레이어의 현재체력이 0미만일 경우 0으로 0미만이 아닐경우 유지
							Sleep(500);
							if (playerhp <= 0)
							{
								printf("\n          화가 난 몬스터에게\n        그만 죽고 말았습니다...\n");
								printf("\n\n            게임을 종료합니다\n       플레이 해주셔서 감사합니다\n\n");
								return 0;					//main함수 종료
							}

							printf("\n          몬스터를 공격합니다\n");
							monsterhp -= playeratk;						// 몬스터의 현재체력
							(monsterhp < 0) ? monsterhp = 0 : monsterhp = monsterhp;
							printf("      현재 몬스터 체력 : %d/%d\n", monsterhp, monsterMhp);			// 몬스터의 현재체력이 0미만일 경우 0으로 0미만이 아닐경우 유지
							Sleep(500);
							if (monsterhp <= 0)
							{
								printf("      몬스터를 무찌르고 돌아갑니다\n");
								break;						// switch문 내부의 while문 종료
							}

						}
						continue;							// switch문 바깥의 while문의 시작점으로 돌아감
					}										// case 1 종료
					default:
					{
						printf("        산 속의 옹달샘을 마시고 \n            체력을 회복합니다\n");
						int randomheal = rand() % 50 + 1;										// 힐량 1 ~ 50 랜덤 지정
						playerhp += randomheal;									// 옹달샘을 마실경우 1 ~ 50 랜덤 회복
						(playerhp > playerMhp) ? playerhp = playerMhp : playerhp = playerhp;	// 현재체력이 최대체력을 넘을경우 최대체력수치로 고정
						continue;							// switch문 바깥의 while문의 시작점으로 돌아감
					}
				}                                           // 산 else()
			}
		}													// 걷기 if()
		printf("\n         정의되지 않은 값입니다\n         올바른 값을 입력하세요\n");
		continue;
	}														// while()

	return 0;
}															// main()