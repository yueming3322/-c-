#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//int main()
//{
//	register int num = 3;
//	//���飺3�ŵ��Ĵ����С�������ݴ���ʹ�ÿ���ʹ��
//	return 0;
//}

//#define NUM 100
//����
//#define ADD(x,y) ((x)+(y))
//#define�����Զ����   ���滻
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
	//&a;//ȡ��ַ������
	//printf("%p\n",&a);		//%p��ӡ��ַ
	int* p = &a;				//*˵��p��ָ��
	//p����ָ�����

	//����a=10����ô10�ĵ�ַ��0x0012ff40��
	//��ôp= 0x0012ff40

	//�ڴ浥Ԫ
	//���-����ַ-����ַҲ����Ϊָ��
	//���ָ�루��ַ���ı�������ָ�������

	char ch = 'w';
	char* pc = &ch;

	return 0;
}



