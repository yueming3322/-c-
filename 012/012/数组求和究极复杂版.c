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
//		{							//判断是否有重复的数字
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
//		int num = rand() % 100 + 1;		//范围是 1 - 100
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
//		printf("第%d个数值为：%d\n",i,arr[i]);
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
//	printf("数组的和为：%d\n", all);
//	printf("数组的平均数为：%d\n", rec);
//	printf("比平均值小的有 %d 个数\n", count);
//
//	return 0;
//}
