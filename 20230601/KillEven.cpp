#include <stdio.h>
#include <iostream>

int SumEven(int num);

//int main()
//{
//	int number;
//	printf("���ڸ� �Է����ּ���(0~1000) : ");
//	scanf_s("%d", &number);
//
//	if (number> 1000 || number < 0)
//	{
//		printf("������ ��� ���� �Դϴ�. ���α׷��� �����մϴ�.\n");
//	}
//	else
//	{
//		printf("%d������ ¦���� ��� ���� ���� % d�Դϴ�.\n", number, SumEven(number));
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