#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//int main()
//{
//	//��������
//	srand(time(NULL));
//	//��ȡ�����
//	for (int i = 1; i <= 10; i++)
//	{
//		int num = rand();			//Ĭ�Ϸ�Χ��0 ~ 32767
//		printf("%d\n", num);
//
//	}
//	//�����ӡ
//
//	return 0;
//}


int main()
{
	
	srand(time(NULL));
	
	for (int i = 1; i <= 10; i++)
	{
		//��Χ��1 - 100		//8 - 49
		// ���������Χ��ɰ�ͷ����β�����󲻰��ҵ� 1 - 101		//8 - 50
		// ��β�� - ��ͷ     101 - 1 =100	//50 - 8 = 42
		// �޸Ĵ���
		
		int num = rand() % 100 + 1;		// % 42 + 8;
							// ��β�� - ��ͷ     101 - 1 =100
		 						//��ͷ

		printf("%d\n", num);

	}

	return 0;
}



