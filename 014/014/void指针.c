//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void swap(void* p1, void* p2, int len)
//{
//	char* pc1 = p1;
//	char* pc2 = p2;
//
//	char temp = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		char temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//
//		pc1++;
//		pc2++;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	short b = 20;
//
//	int* p1 = &a;
//	short* p2 = &b;
//
//	printf("%d\n", *p1);
//	printf("%d\n", *p2);
//
//	//char* p3 = p1;		//������ǿת����	char* p3 = (char*)p1;
//	//voidû���κ����ͣ������Խ����������͵�ָ���¼���ڴ��ַ
//
//	void* p3 = p1;
//	void* p4 = p2;			//�������κ�warning
//
//	//ȱ�㣺void����ָ�룬�޷���ȡ������������ݣ�Ҳ���ܽ��мӣ����ļ���
//
//	int c = 100;
//	int d = 200;		//����ʲô���Ͷ��ܽ���
//
//	swap(&c, &d, 4);
//	printf("c= %d,d=%d\n", c, d);
//
//	return 0;
//}
//
