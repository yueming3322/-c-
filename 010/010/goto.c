#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("��ѭ��ִ�е�%d��\n", j);
			goto a;			//ֱ����ת����������λ�ã�������
							//ͬ��������ת������������ʵ������ѭ��������
							//һ����������ѭ��Ƕ��
		}
		printf("��ѭ������\n");
		printf("---------------------------\n");


	}
	a: printf("��ѭ������\n");
	return 0;
}
