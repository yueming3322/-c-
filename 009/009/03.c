#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{										//��1-100֮���һ���ܱ�3��5��������
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
//		if (i % 3 == 0 && i % 5 == 0)		//�൱��ѷ��������ĸ�����Ȼ�����ִ��ѭ��
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
//		{								//�������г���
//			continue;
//		}
//		printf("�ڳԵ�%d������\n", i);
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
	//�žų˷���

	return 0;
}
