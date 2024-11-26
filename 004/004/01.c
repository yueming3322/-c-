#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//int main()
//{
//	register int num = 3;
//	//建议：3放到寄存器中。如果数据大量使用可以使用
//	return 0;
//}

//#define NUM 100
//常量
//#define ADD(x,y) ((x)+(y))
//#define还可以定义宏   宏替换
//int main()
//{
//	//printf("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n",n);
//	//int arr[NUM] = { 0 };
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}

int main()
{

	int a = 10;
	//&a;//取地址操作符
	//printf("%p\n",&a);		//%p打印地址
	int* p = &a;				//*说明p是指针
	//p就是指针变量

	//假设a=10，那么10的地址是0x0012ff40；
	//那么p= 0x0012ff40

	//内存单元
	//编号-》地址-》地址也被称为指针
	//存放指针（地址）的变量就是指针变量。

	char ch = 'w';
	char* pc = &ch;

	return 0;
}



