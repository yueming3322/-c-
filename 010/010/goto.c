#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("内循环执行第%d次\n", j);
			goto a;			//直接跳转到程序任意位置！！！！
							//同样可以跳转到代码最上面实现无限循环！！！
							//一般用于跳出循环嵌套
		}
		printf("内循环结束\n");
		printf("---------------------------\n");


	}
	a: printf("外循环结束\n");
	return 0;
}
