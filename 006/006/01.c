#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("请输入长 宽 高");
//	double a;
//	double b;
//	double c;
//	scanf("%lf %lf %lf",&a,&b,&c);
//	printf("A面面积:%.2lf\n", a * b);
//	printf("B面面积:%.2lf\n", b * c);
//	printf("C面面积:%.2lf\n", a * c);
//	printf("长方体体积:%.2lf", a * b * c);
//
//
//	return 0;
//}


//int main()
//{
//	printf("请输入整数:\n");
//	int num;
//	scanf("%d", &num);
//
//
//	printf("个位数：%d\n", num % 10);
//	printf("十位数：%d\n", num / 10 % 10);
//	printf("百位数：%d\n", num / 100 % 10);
//
//	return 0;
//}


//int main()
//{
//	short s1 = 10;
//	short s2 = 20;
//	short result = (short)(s1 + s2);
//	printf("%d\n", result);
//	printf("%d\n",sizeof((short)(s1 + s2)));
//	//强转为short类型
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 'a');
//	printf("%d\n", 'A');
//	printf("%d\n", '0');
//	printf("%d\n", 'F');
//	//ASCLL可以直接写出来跑
//	return 0;
//}


//int main()
//{
//	int i = 10;
//	int j = 5;
//	int k = i++ + ++i - --j - i--;
// 	
//	//win		11		11 -  4   11  = 7
//	//mac    10 + 12  -  4  -  12  =  6
//
//	printf("%d\n", k);;
//
//	//windows: 7
//	//前缀优先于后缀
//	//前缀统一自增/自减，再把结果拿出来用
//	//int i = 10;
//	// ++i + ++i;
//	// 12	  12   =    24
//	// 后缀统一先用，等整个表达式中变量用完了，再进行自增
//	// int i = 10;
//	//i++ + i++;
//	//10  +  10  = 20
//	
//	
//	//mac、Linux: 6
//	//前缀和后缀的优先级是一样的
//	//从左到右依次计算的
//	//每一个前缀和后缀都是一个独立的个体
//	//int i = 10;
//	//++i + ++i;
//	// 11 +  12  = 23;
//	//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int k1 = a++ + a++;
//	int k2 = ++a + ++a;
//	int k3 = ++a + a++;
//	int k4 = a++ + ++a;
//
//	printf("%d\n", k1);//20
//	printf("%d\n", k2);//28
//	printf("%d\n", k3);//30
//	printf("%d\n", k4);//34
//
//	return 0;
//}

