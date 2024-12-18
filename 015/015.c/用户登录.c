#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	for (int i = 0; i < 3; i++)
	{
		char* rightUsername = "zhangsan";
		char* rightPassword = "1234qwer";
		printf("请输入用户名：\n");
		char Username[100];
		scanf("%s", &Username);
		printf("请输入密码：\n");
		char Password[100];
		scanf("%s", &Password);

		//printf("%s\n", Username);
		//printf("%s\n", Password);
		if (!strcmp(Username, rightUsername) && !strcmp(Password, rightPassword))
		{
			printf("登录成功！！\n");
			break;
		}
		else
		{
			if (i == 2)
			{
				printf("用户%s已被锁定，请联系管理员", Username);
			}
			else
			{
				printf("登录失败,还剩下%d次机会\n", 2 - i);
				printf("\n");
				printf("\n");
			}
		}


	}


	return 0;
}


