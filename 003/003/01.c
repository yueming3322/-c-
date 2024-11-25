#define _CRT_SECURE_NO_WARNINGS 1

//typedef unsigned int unit;//重新定义unsigned函数名
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//
//typedef Add int QaQ;
//
//
//
//
//int main()
//{
//	unsigned int num = 0;
//	unit num2 = 1;
//	struct Node n;
//	Node n2;
//
//	return 0;
//}


//#include <stdio.h>
//
//void test()				//void不需要返回
//{
//	static int a = 1;  //没有static就输出10个2，因为每次出循环都要销毁a。而static修饰了int a
//	a++;               //使他的生理周期变得和程序一样长。
//	print("%d", a);
//
//}
//int main()
//{
//	int 1 = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int g_val = 2022;
//别的地方使用需要extern声明一下

//假设用static修饰int后就变私有了，外部没法使用。

#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;

	int z = Add(a, b);
	printf("%d\n", z);

	return 0;
}
