//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 1,2,3,4,5 };
//	int arr3[] = { 1,2,3,4,5,6,7,8,9 };
//
//	int num1 = sizeof(arr1) / sizeof(int);
//	int num2 = sizeof(arr2) / sizeof(int);
//	int num3 = sizeof(arr3) / sizeof(int);
//
//	int lenArr[3] = { num1,num2,num3 };
//	int* arr[3] = { arr1, arr2, arr3 };
//
//	int** p = arr;
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < lenArr[i]; j++)
//		{
//			printf("%d ", *(*p + j));
//
//
//		}
//		printf("\n");
//		p++;
//	}
//
//	return 0;
//}