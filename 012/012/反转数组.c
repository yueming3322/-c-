//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//
//void printArr(int arr[], int len);
//
//int main()
//{
//	int arr[5] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//	for (int i = 0; i < len; i++)
//	{
//		printf("请录入第%d个元素\n", i + 1);
//		scanf("%d", &arr[i]);
//	}
//	printf("--------------------\n");
//
//	printArr(arr, len);
//	
//	//反转数组
//	int i = 0;
//	int j = len - 1;
//	while (i < j)
//	{
//		int temp = arr[i];
//		arr[i] = arr[j];			//反转对调
//		arr[j] = temp;				//赋值temp
//									
//		i++;
//		j--;
//
//	}
//	printf("--------------------\n");
//	printArr(arr, len);
//
//	return 0;
//}
//
//void printArr(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//
//
