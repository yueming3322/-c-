//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void swap(void* p1, void* p2, int len)
//{
//	char* pc1 = p1;
//	char* pc2 = p2;
//
//	char temp = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		char temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//
//		pc1++;
//		pc2++;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	short b = 20;
//
//	int* p1 = &a;
//	short* p2 = &b;
//
//	printf("%d\n", *p1);
//	printf("%d\n", *p2);
//
//	//char* p3 = p1;		//进行了强转换，	char* p3 = (char*)p1;
//	//void没有任何类型，他可以接受任意类型的指针记录的内存地址
//
//	void* p3 = p1;
//	void* p4 = p2;			//不会有任何warning
//
//	//缺点：void类型指针，无法获取变量里面的数据，也不能进行加，减的计算
//
//	int c = 100;
//	int d = 200;		//无论什么类型都能交换
//
//	swap(&c, &d, 4);
//	printf("c= %d,d=%d\n", c, d);
//
//	return 0;
//}
//
