//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	srand(time(NULL));
//	int all = 0;
//	for (int i = 0; i < len; i++)
//	{ 
//		int num = rand() % 100 + 1;		//范围是 1 - 100
//		arr[i] = num;
//		all = all + arr[i];
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("数组随机数第%d个:%d\n",i+1,arr[i]);
//		all = all + arr[i];			//这条代码完全可以放到上面的循环完成
//	}
//	printf("数值随机数和为：%d\n", all);
//	return 0;
//}
//
