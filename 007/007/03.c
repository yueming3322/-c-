#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("���������ڼ���\n");
//	int week;
//	scanf("%d", &week);
//	
//	switch (week)
//	{
//		case 1:
//			printf("one");
//			break;
//		case 2:									//break����������ѭ���ģ��ж�
//			printf("two");						//case����ֻ�����ַ����������������Ǳ���
//			break;								//case��ֵ�����ظ�
//		case 3:									//default�������������ƥ�䣬ִ�иô�������
//			printf("three");						//����д������λ�ã������ǿ��Բ�д
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
//			printf("û���������");
//	}
//
//	return 0;
//}


//int main()
//{
//	printf("�������Ӧ�·ݣ�\n");
//	int month;
//	scanf("%d", &month);
//
//	switch (month)
//	{
//	case 12:
//	case 1:
//	case 2:
//		printf("����\n");
//		break;
//	case 3:
//	case 4:											//case��͸ֻ�����´��������ϴ�
//	case 5:
//		printf("����\n");
//		break;
//	case 6:
//	case 7:
//	case 8:
//		printf("�ļ�\n");
//		break;
//	case 9:
//	case 10:
//	case 11:
//		printf("�＾\n");
//		break;
//	default:
//		printf("û���������");
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
//		for(��ʼ�����٣������ж����ڣ�������������)
//		{
//			ѭ�������ܣ�						��һ��ִ��˳��٢ڢܢ�
//		}										�ڶ���ִ��˳��ڢܢ�
//		//for��ʽ								...
//												���һ�΢�
//	*/
//
//	for (int i = 1; i <= 5; i++)
//	{
//		printf("�������\n");
//
//	}
//
//	int i = 0;
//	while (i < 10)
//	{
//		printf("����ɵ��\n");
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
//		//�жϣ�ֻ�е�ǰ������ż��ʱ�Ž����ۼ�
//		if (i % 2 == 0)
//		{
//			sum = sum + i;
//		}
//											//��ż����
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
		//�жϣ�ֻ�е�ǰ����������ʱ�Ž����ۼ�
		if (i % 2 == !0)
		{
			sum = sum + i;
		}
													//��������
	}

	printf("%d\n", sum);

	return 0;
}





