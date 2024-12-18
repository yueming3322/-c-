//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 10,20,30,40,50 };
//	int len = sizeof(arr) / sizeof(int);
//
//	int* p1 = arr;			//参与计算，退化为第一个指针,记录第一个元素的地址
//	int* p2 = &arr;
//
//	printf("%zu\n", sizeof(arr));		//在使用sizeof时不会退化，arr还是整体
//	printf("%zu\n", sizeof(&arr));
//	//int* p2 = &arr[0];
//
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", *p1++);
//		//p1++;
//	}
//
//
//
//	/*printf("%d\n", *p1);
//	printf("%d\n", *(p1 + 1));
//	printf("%d\n", *(p1 + 2));
//	printf("%d\n", *(p1 + 3));
//	printf("%d\n", *(p1 + 4));*/
//
//	/*printf("%p\n", p1);
//	printf("%p\n", p2);*/
//
//
//
//
//
//	return 0;
//}
//
