//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int contains(int arr[], int len, int num)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] == num)
//		{							//�ж��Ƿ����ظ�������
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	srand(time(NULL));
//	int all = 0;
//	for (int i = 0; i < len; )
//	{
//		int num = rand() % 100 + 1;		//��Χ�� 1 - 100
//		int flag = contains(arr, len, num);
//		if (!flag)
//		{
//			arr[i] = num;
//			i++;
//		}
//		//arr[i] = num;
//		//all = all + arr[i];
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("��%d����ֵΪ��%d\n",i,arr[i]);
//		all = all + arr[i];
//	}
//	int rec = all / len;
//	int count = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] < rec)
//		{
//			count++;
//		}
//	}
//	
//	printf("����ĺ�Ϊ��%d\n", all);
//	printf("�����ƽ����Ϊ��%d\n", rec);
//	printf("��ƽ��ֵС���� %d ����\n", count);
//
//	return 0;
//}
