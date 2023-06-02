#include <stdio.h>
#include <iostream>

int SumEven(int num);

//int main()
//{
//	int number;
//	printf("숫자를 입력해주세요(0~1000) : ");
//	scanf_s("%d", &number);
//
//	if (number> 1000 || number < 0)
//	{
//		printf("범위를 벗어난 숫자 입니다. 프로그램을 종료합니다.\n");
//	}
//	else
//	{
//		printf("%d이하의 짝수를 모두 더한 값은 % d입니다.\n", number, SumEven(number));
//	}
//
//	return 0;
//}

//int SumEven(int num)
//{
//	int odd = 1;
//	int result = 0;
//
//	while (odd <= (num / 2))
//	{
//		result += (2 * odd);
//		odd += 1;
//	}
//
//	return result;
//}

int SumEven(int num)
{
	int odd = 1;
	int result = 0;

	for (odd; odd <= (num / 2); odd++)
	{
		result += (2 * odd);
	}

	return result;
}