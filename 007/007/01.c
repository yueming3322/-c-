//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//int main()
//{
//	//+=
//	//����ߺ��ұ߽�����ӣ������ֵ����ߣ����ұ�û���κ�Ӱ��
//
//	int a = 10;
//	int b = 20;
//	a += b;
//	printf("%d\n", a);//30
//	printf("%d\n", b);//20
//
//	//-= *= /= %=
//	//��Щ��������һ��
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
//	//�ж������Ƿ�Ϊ0���Ӷ��������������Ƿ�Ϊż����
//
//
//	int num = 200;
//	printf("%d\n", num <= 100);
//	//�ж��Ƿ���ڵ���100
//
//
//	int pay = 100;
//	int money = 200;
//	printf("%d\n", pay <= money);
//	//�ж��Ƿ�Ǯ֧��
//
//
//	return 0;
//}


//int main()
//{
//	//&& ��  һ����������������
//	//|| ��  �������������Ų�����
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
//	//��ȡ��
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
//	printf("������һ����λ����\n");
//	scanf("%d", &num);
//	printf("%d\n", num);
//	
//
//	int ge = num % 10;
//	int shi = num / 10 % 10;
//
//	//�жϸ�λ��ʮλ������7
//
//	printf("%d\n", ge != 7 && shi != 7);
//	
//
//	return 0;
//}


//int main()
//{
//	//�жϲ��ܰ���7Ҳ������7�ı���
//
//	int num;
//	printf("������һ����λ����\n");
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
//	//��ϵ���ʽ? ���ʽ: ���ʽ2;
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



