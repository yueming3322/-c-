#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//int main()
//{
//	//设置种子
//	srand(time(NULL));
//	//获取随机数
//	for (int i = 1; i <= 10; i++)
//	{
//		int num = rand();			//默认范围是0 ~ 32767
//		printf("%d\n", num);
//
//	}
//	//输出打印
//
//	return 0;
//}


int main()
{
	
	srand(time(NULL));
	
	for (int i = 1; i <= 10; i++)
	{
		//范围是1 - 100		//8 - 49
		// 把这个给范围变成包头不包尾，包左不包右的 1 - 101		//8 - 50
		// 拿尾巴 - 开头     101 - 1 =100	//50 - 8 = 42
		// 修改代码
		
		int num = rand() % 100 + 1;		// % 42 + 8;
							// 拿尾巴 - 开头     101 - 1 =100
		 						//开头

		printf("%d\n", num);

	}

	return 0;
}



