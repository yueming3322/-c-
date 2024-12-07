#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("请输入星期几：\n");
//	int week;
//	scanf("%d", &week);
//	
//	switch (week)
//	{
//		case 1:
//			printf("one");
//			break;
//		case 2:									//break是用来打破循环的，中断
//			printf("two");						//case后面只能是字符或者整数，不能是变量
//			break;								//case后值不能重复
//		case 3:									//default：所以情况都不匹配，执行该处的内容
//			printf("three");						//可以写在任意位置，甚至是可以不写
//			break;
//		case 4:
//			printf("four");
//			break;
//		case 5:
//			printf("5");
//			break;
//		case 6:
//			printf("6");
//			break;
//		case 7:
//			printf("7");
//			break;
//		default:
//			printf("没有这个星期");
//	}
//
//	return 0;
//}


//int main()
//{
//	printf("请输入对应月份：\n");
//	int month;
//	scanf("%d", &month);
//
//	switch (month)
//	{
//	case 12:
//	case 1:
//	case 2:
//		printf("冬季\n");
//		break;
//	case 3:
//	case 4:											//case穿透只能往下穿不能往上穿
//	case 5:
//		printf("春季\n");
//		break;
//	case 6:
//	case 7:
//	case 8:
//		printf("夏季\n");
//		break;
//	case 9:
//	case 10:
//	case 11:
//		printf("秋季\n");
//		break;
//	default:
//		printf("没有这个季节");
//	}
//
//	return 0;
//
//
//
//
//	return 0;
//}


//int main()
//{
//	/*
//		for(初始化语句①；条件判断语句②；条件控制语句③)
//		{
//			循环体语句④；						第一次执行顺序①②④③
//		}										第二次执行顺序②④③
//		//for格式								...
//												最后一次②
//	*/
//
//	for (int i = 1; i <= 5; i++)
//	{
//		printf("你真贱啊\n");
//
//	}
//
//	int i = 0;
//	while (i < 10)
//	{
//		printf("你真傻逼\n");
//		i++;
//
//	}
//	return 0;
//}


//int main()
//{
//	int sum = 0;
//
//	for (int i = 1; i <= 5; i++)
//	{
//		sum = i + sum;
//
//	}
//
//	printf("%d\n", sum);//15
//
//
//	return 0;
//}


//int sum = 0;
//
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		//判断，只有当前数字是偶数时才进行累加
//		if (i % 2 == 0)
//		{
//			sum = sum + i;
//		}
//											//求偶数和
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


int sum = 0;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		//判断，只有当前数字是奇数时才进行累加
		if (i % 2 == !0)
		{
			sum = sum + i;
		}
													//求奇数和
	}

	printf("%d\n", sum);

	return 0;
}





