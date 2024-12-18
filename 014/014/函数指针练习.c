#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}
int subtract(int num1, int num2)
{
	return num1 - num2;
}
int mutiply(int num1, int num2)
{
	return num1 * num2;
}
int divide(int num1, int num2)
{
	return num1 / num2;
}

int main()
{
	/*int a = 10;
	int b = 20;
	int choose = 1;*/
	int (*arr[4])(int, int) = { add,subtract,mutiply,divide };
	printf("请输入两个数字参与计算\n");
	int num1;
	int num2;
	scanf("%d %d", &num1, &num2);
	int choose;
	printf("请选择运算符号{1加，2减，3乘，4除}\n");
	scanf("%d", &choose);

	int res = (arr[choose - 1])(num1, num2);
	printf("%d\n", res);



	return 0;
}
