//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int countA = 0;
//
//	for (int i = 2; i <= 100; i++)
//	{
//		int count = 0;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				count++;
//				break;					//提高效率
//			}
//		}
//		if (count == 0)
//		{
//			countA++;
//			printf("%d是质数\n", i);
//		}
//		else
//		{
//			printf("%d不是质数\n", i);
//		}
//	}
//	printf("%d\n", countA++);					//区间质数的个数
//	return 0;
//}