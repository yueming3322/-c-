#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{										//在1-100之间第一个能被3和5整除的数
//		if (i % 3 == 0 && i % 5 == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//
//	}
//
//	return 0;
//}


//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0 && i % 5 == 0)		//相当与把符合条件的给跳过然后继续执行循环
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	for (int i = 1; i <= 5; i++)
//	{
//		if (i == 3)
//		{								//第三个有虫子
//			continue;
//		}
//		printf("在吃第%d个包子\n", i);
//
//	}
//
//	return 0;
//}


//int main()
//{
//	for (int a = 1; a <= 3; a++)
//	{
//		for (int i = 1; i <= 5; i++)
//	{
//		printf("*");
//		
//	}
//		printf("\n");
//
//
//	}
//	return 0;
//}


//int main()
//{
//	for (int i = 1; i <= 5; i++)
//	{
//		for (int a = i; a <= 5; a++)
//		{
//			printf("*");
//			
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (int i = 1; i <= 5; i++)
//	{
//		for (int a = 1; a <= i; a++)
//		{
//			printf("*");
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d * %d = %d\t", j, i, i * j);
		
		}
		printf("\n");
	}
	//九九乘法表

	return 0;
}
