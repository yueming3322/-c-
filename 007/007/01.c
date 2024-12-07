//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//int main()
//{
//	//+=
//	//把左边和右边进行相加，结果赋值给左边，对右边没有任何影响
//
//	int a = 10;
//	int b = 20;
//	a += b;
//	printf("%d\n", a);//30
//	printf("%d\n", b);//20
//
//	//-= *= /= %=
//	//这些都和上面一样
//	a *= b;
//	printf("%d\n", a);//600
//	printf("%d\n", b);//20
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", a % 2 == 0);
//	//判断余数是否为0，从而看这个这个整数是否为偶数。
//
//
//	int num = 200;
//	printf("%d\n", num <= 100);
//	//判断是否大于等于100
//
//
//	int pay = 100;
//	int money = 200;
//	printf("%d\n", pay <= money);
//	//判断是否够钱支付
//
//
//	return 0;
//}


//int main()
//{
//	//&& 与  一个不成立都不成立
//	//|| 或  两个都不成立才不成立
//	printf("%d\n", 1 && 1);
//	printf("%d\n", 0 && 0);
//	printf("%d\n", 1 && 0);
//	printf("%d\n", 0 && 1);
//	printf("---------------\n");
//
//
//	printf("%d\n", 1 || 1);
//	printf("%d\n", 0 || 0);
//	printf("%d\n", 1 || 0);
//	printf("%d\n", 0 || 1);
//	printf("-------------\n");
//
//	//！取反
//	printf("%d", !1);//0
//	printf("%d", !0);//1
//
//
//
//	return 0;
//}


//int main()
//{
//	int num;
//	printf("请输入一个两位数：\n");
//	scanf("%d", &num);
//	printf("%d\n", num);
//	
//
//	int ge = num % 10;
//	int shi = num / 10 % 10;
//
//	//判断个位和十位不能是7
//
//	printf("%d\n", ge != 7 && shi != 7);
//	
//
//	return 0;
//}


//int main()
//{
//	//判断不能包含7也不能是7的倍数
//
//	int num;
//	printf("请输入一个两位数：\n");
//	scanf("%d", &num);
//	printf("%d\n", num);
//	int ge = num % 10;
//	int shi = num / 10 % 10;
//	printf("%d\n", ge != 7 && shi != 7 && num % 7 != 0);
//
//	return 0;
//}


//int main()
//{
//	/*int a = 1, b = 5;
//	a > 0 && ++b;
//	printf("a=%d,b=%d\n", a, b);*/
//
//	int a = 1, b = 5;
//	a > 10 && ++b;
//	printf("x=%d,y=%d\n", a, b);//1,5
//
//	return 0;
//}


//int main()
//{
//
//	//关系表达式? 表达式: 表达式2;
//	int a = 20;
//	int b = 10;
//	int c = a > b ? a : b;
//	printf("%d\n", c);
//
//	printf("%d\n", a > b ? a : b);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 40;
//	int c = 30;
//
//	int temp = a > b ? a : b;
//	int max = temp > c ? temp : c;
//	printf("%d\n",max);
//	//
//	printf("%d\n", (a > b ? a : b) > (b > c ? b : c) ? (a > b ? a : b) : (b > c ? b : c));
//
//
//
//	return 0;
//}


//int main()
//{
//	/*int num = 17;
//	num >= 0 ? num : -num;
//	printf("%d\n", num);
//	
//	num %= 3;
//	printf("%d\n", num);
//
//	num *= 10;
//	printf("%d\n", num);*/
//	int num = -17;
//	//num = num >= 0 ? num : -num, num %= 3, num *= 10;
//	printf("%d\n", (num = num >= 0 ? num : -num, num %= 3, num *= 10));
//	return 0;
//}



