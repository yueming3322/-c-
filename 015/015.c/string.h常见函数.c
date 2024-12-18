//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* str1 = "好abc";
//	char str2[100] = "Abc"; 
//	char str3[5] = { 'q','w','e','r','\0'};
//
//	printf("--------------------------strlen(长度)------------------------\n");
//	//细节：不计算\0
//	//在Windows中，一个中文两字节
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	int len3 = strlen(str3);
//
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	printf("%d\n", len3);
//
//	printf("--------------------------strcat(拼接)------------------------\n");
//	//细节:把第二个字符串全部内容，拷贝到第一个末尾
//	//			前提1：第一个字符串必须是能被修改的
//	//			前提2：第一个字符串中剩余的空间可以容纳拼接的字符串
//	strcat(str2,str3);
//	printf("%s\n",str2);		//abcdqwer
//	printf("%s\n",str3);		//qwer
//
//	printf("--------------------------strcpy(拷贝)------------------------\n");
//	//细节:把第二个字符串全部内容，拷贝到第一个中，并把原先的覆盖了
//	//			前提1：第一个字符串必须是能被修改的
//	//			前提2：第一个字符串中剩余的空间可以容纳拼接的字符串
//	strcpy(str2,str3);
//	printf("%s\n",str2);
//	printf("%s\n",str3);
//
//	printf("--------------------------strcmp(比较)------------------------\n");
//	//细节：在比较的时候，要求顺序和内容完全一样，才叫做字符串一样
//	//完全一样：0
//	//只要有一个不一样：非0
//	int res = strcmp(str1, str2);
//	printf("%d\n", res);
//
//	printf("--------------------------strlwr(变小写)------------------------\n");
//	//只能转换英文的大小写 A->a
//	_strlwr(str2);
//	printf("%s\n",str2);
//
//
//	printf("--------------------------strupr(变大写)------------------------\n");
//
//	_strupr(str2);
//	printf("%s\n", str2);
//
//	return 0;
//}
//
//
//
