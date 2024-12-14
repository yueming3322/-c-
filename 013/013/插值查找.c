//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int binarySearch(int arr[], int len, int num)
//{
//	int min = 0;
//	int max = len - 1;
//	while (min <= max)
//	{
//		//int mid = (min + max) / 2;
//		//printf("%d\n", (arr[max] - arr[min]));
//		int mid = min + (num - arr[min]) * (max - min) / (arr[max] - arr[min]);
//		printf("%d\n", mid);
//		if (arr[mid] < num)
//		{
//			min = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			max = mid - 1;
//		}
//		else
//		{
//			//printf("%d\n", mid);
//
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 7,23,79,81,103,127,131,147 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int num;
//	scanf("%d", &num);
//	int index = binarySearch(arr, len, num);
//	if (index == -1)
//	{
//		printf("所求数字不在数组范围内\n");
//	}
//	else
//	{
//		printf("数字在数组第%d个\n", index + 1);
//	}
//
//	return 0;
//}
//
//
