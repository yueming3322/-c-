#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	for (int i = 0; i < 3; i++)
	{
		char* rightUsername = "zhangsan";
		char* rightPassword = "1234qwer";
		printf("�������û�����\n");
		char Username[100];
		scanf("%s", &Username);
		printf("���������룺\n");
		char Password[100];
		scanf("%s", &Password);

		//printf("%s\n", Username);
		//printf("%s\n", Password);
		if (!strcmp(Username, rightUsername) && !strcmp(Password, rightPassword))
		{
			printf("��¼�ɹ�����\n");
			break;
		}
		else
		{
			if (i == 2)
			{
				printf("�û�%s�ѱ�����������ϵ����Ա", Username);
			}
			else
			{
				printf("��¼ʧ��,��ʣ��%d�λ���\n", 2 - i);
				printf("\n");
				printf("\n");
			}
		}


	}


	return 0;
}


