#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int Discri();					//유저에게 수를 입력 받아서 짝홀수를 판별하는 함수
void EDice(), NDice(), Critper60();
int Fight();

//int main()
//{
//	//int loopcount = 1;			//루프 카운트 선언
//
//	//char userinput = '0';
//
//	//while (loopcount <= 1000)		//루프 카운트가 10이하일 때까지 반복
//	//{
//	//	if (loopcount == 1)
//	//	{
//	//		printf("[튜토리얼] 만약 게임을 만들려고 한다면 이런식으로\n");
//	//	}
//	//	
//	//	printf("[System] 당신은 플레이어 입니다. \n");
//	//	printf("수행할 액션을 입력해 주세요 : ");
//	//	scanf_s("%c", &userinput);
//
//	//	if (userinput == 'q' || userinput == 'Q')
//	//	{
//	//		printf("\n[System] 프로그램을 종료합니다.\n");
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		printf("\n[System] 해당 입력은 정의되어 있지 않습니다.\n");
//	//		loopcount += 1;
//	//		continue;
//	//	}
//
//	//}							// loop: 일정 횟수 반복
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
	int uinput;									//유저에게 숫자를 입력받을 변수 uinput선언
	while (1)
	{
		printf("정수를 입력해주세요 (종료를 원하시면 0을 입력해주세요) : ");
		scanf_s("%d", &uinput);					//유저에게 정수를 입력받아서 변수 uinput에게 대입

		if (uinput == 0)						//유저의 입력값이 0과 같다면
		{
			printf("\n프로그램을 종료합니다.\n");	//프로그램 종료
			break;
		}

		if (uinput % 2)					//입력값을 2로 나눈 나머지가 1과 같다면
		{
			printf("%d는 홀수 입니다.\n\n",uinput);	//홀수 출력
		}
		else							//입력값을 2로 나눈 나머지가 1과 같지않다면
		{
			printf("%d는 짝수 입니다.\n\n",uinput);	//짝수 출력
		}
	}									//while()
	return 0;
}

void EDice()						//주사위 이지모드
{
	int fdice, sdice;
	srand(time(NULL));

	fdice = rand() % 6 + 1;
	sdice = rand() % 6 + 1;

	printf("첫 번째 주사위는 : %d, ", fdice);
	printf("두 번째 주사위는 : %d 이고,\n", sdice);
	printf("두 주사위 눈의 총합은 : %d 이고, ", fdice + sdice);
	if ((fdice + sdice) % 2)
	{
		printf("홀수 입니다.\n");
	}
	else
	{
		printf("짝수 입니다.\n");
	}

}

void NDice()						//주사위 노말모드
{
	int fdice, sdice, userinput, sum;
	srand(time(NULL));
	printf("**************홀 짝 맞추기에 오신걸 환영합니다**************\n\n");
	while (1)
	{
		printf("     ┌──────────┐     ┌──────────┐     ┌──────────┐     \n");
		printf("     │ 종료 = 0 │     │ 홀수 = 1 │     │ 짝수 = 2 │     \n");
		printf("     └──────────┘     └──────────┘     └──────────┘     \n");
		printf("값을 입력하세요 -----------> ");
		scanf_s("%d", &userinput);

		if (userinput == 0)			//입력값이 0이면 종료하게하는 조건문
		{
			printf("\n프로그램을 종료합니다\n\n");
			printf("아무키나 눌러주세요...\n");
			_getch();
			break;
		}							//if()

		fdice = rand() % 6 + 1;
		sdice = rand() % 6 + 1;
		sum = fdice + sdice;

		if (userinput == 1)			//입력값이 1이면 총합과 비교하여 홀수가 맞으면 정답 아니면 오답을 출력하는 조건문
		{
			printf("첫 번째 주사위는 : %d, ", fdice);
			printf("두 번째 주사위는 : %d 이고,\n", sdice);
			printf("두 주사위 눈의 총합은 : %d", sum);
			if (sum % 2)
			{
				printf("은(는) 홀수이므로 정답입니다!\n\n");
				printf("*************************************************************\n\n");
				continue;
			}
			printf("은(는) 짝수이므로 오답입니다.\n\n");
			printf("*************************************************************\n\n");
			continue;
		}							//if()

		if (userinput == 2)			//입력값이 2이면 총합과 비교하여 짝수가 맞으면 정답 아니면 오답을 출력하는 조건문
		{
			printf("첫 번째 주사위는 : %d, ", fdice);
			printf("두 번째 주사위는 : %d 이고,\n", sdice);
			printf("두 주사위 눈의 총합은 : %d", sum);
			if ((sum % 2) == 0)
			{
				printf("은(는) 짝수이므로 정답입니다!\n\n");
				printf("*************************************************************\n\n");
				continue;
			}
			printf("은(는) 홀수이므로 오답입니다.\n\n");
			printf("*************************************************************\n\n");
			continue;
		}							//if()

		printf("\n올바르지 못한 값입니다. 프로그램을 종료합니다.\n\n");
		printf("아무키나 눌러주세요...\n");
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
		printf("1~10까지의 랜덤 수를 입력하여 5이상일 경우 크리입니다.\n");
		printf("종료를 원하시면 q를, 아니면 데미지를 입력하세요 (0보다 큰 수를 입력하세요) : ");
		scanf_s("%d", &damage);
		scanf_s("%c", &exit);
		float critical = damage * 1.5;

		int critper = (rand() % 10 + 1);

		if (exit == 'q' || exit == 'Q')
		{
			printf("\n프로그램을 종료합니다. \n\n");
			break;
		}

		if (damage > 0)
		{
			if (critper > 4)
			{
				printf("\n랜덤 수는 %d이므로 ", critper);
				printf("크리티컬 %.1f!!\n\n", critical);
				continue;
			}
			printf("\n랜덤 수는 %d이므로 ", critper);
			printf("기본 데미지 %d\n\n", damage);
			continue;
		}
		printf("\n올바르지 못한 값입니다. 프로그램을 종료합니다. \n\n");
		break;
	}
}

int Fight()
{
	printf("1:1 대결에 오신걸 환영합니다.");
	
	int php, ehp;
	int patk, eatk;
	char button;

	while (1)
	{
		printf("\n========================");
		printf("\n나의 체력을 입력하세요 : ");
		scanf_s("%d", &php);
		printf("적의 체력을 입력하세요 : ");
		scanf_s("%d", &ehp);
		printf("나의 공격력을 입력하세요 : ");
		scanf_s("%d", &patk);
		printf("적의 공격력을 입력하세요 : ");
		scanf_s("%d", &eatk);

		if (php <= 0 || ehp <= 0 || patk <= 0 || eatk <= 0)
		{
			printf("체력과 공격력 모두 0이상의 값을 입력하세요. 프로그램을 종료합니다.");
			return 0;
		}

		while (1)
		{
			char useract = '0';


			if (php <= 0)
			{
				printf("플레이어 사망... \n");
				break;
			}

			if (ehp <= 0)
			{
				printf("적 사망! \n");
				break;
			}

			printf("     ┌──────────┐     ┌──────────┐     ┌──────────┐     \n");
			printf("     │ 종료 = q │     │ 공격 = a │     │ 도망 = r │     \n");
			printf("     └──────────┘     └──────────┘     └──────────┘     \n");
			printf("값을 입력하세요 -----------> ");
			useract = _getch();


			if (useract == 'q' || useract == 'Q')
			{
				printf("\n프로그램을 종료합니다. \n\n");
				return 0;
			}
			
			if (useract == 'a' || useract == 'A')
			{
				printf("\n공격 실행. \n");
				ehp -= patk;
				php -= eatk;
				printf("적의 hp : %d, 나의 hp: %d\n\n", ehp, php);
				continue;
			}

			if (useract == 'r' || useract == 'R')
			{
				printf("\n도망. \n");
				break;
			}

			("정의되지 않은 입력입니다. 게임을 종료합니다.");
			break;
		}

		printf("게임을 다시 플레이 하고 싶으시면 r을, 종료하고 싶으시면 아무키나 입력해주세요.");
		button = _getch();

		if (button == 'r' || button == 'R')
		{
			continue;
		}

		break;
	}
	return 0;
}