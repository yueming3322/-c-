//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//
//	short age = 20;
//	int high = 180;
//	float weight = 55.5;
//	int a = 1;
//	printf("a=%d\n",a);
//
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//
//	scanf("%d %d" ,&num1,&num2);//scanf 是一个输入函数，printf是输出
//	
//	int sum = num1 + num2;
//
//	printf("%d\n",sum);
//
//	return 0;}


//#include <stdio.h>
//
//extern int a;
//
//void test( )
//{
//
//	printf("test-->%d\n",a);
//}
//
//
//
// int main(void)
// {	
//	 test();
//
//	{
//		printf("a=%d\n", a);
//
//	}
//
//	printf("a=%d\n",a);
//
//	return 0;
// }
//






//int main()
//{
//	///*30;
//	//3.14;
//	//"w";
//	//"abc";*/
//	//const int a = 10;
//	////a = 20;
//
//	const int n = 10;
//
//	int arr[10] = { 0 };
//
//	printf("n=%d\n", n);
//
//	return 0;
//}
//

//#define max 100
//#define STR "abcd"


//
//int main()
//{
//	printf("%s\n", STR);
//	/*int a = max;
//	printf("%d\n", a);*/
//
//	return 0;
//}
//
////
//enum Color
//{
//	RED,
//	BLUE,
//	GREEN
//
//
//};
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//
//int main()
//{
//	enum Color c = RED;
//	printf("c=%d\n",c);
//
//	return 0;
//}
//
//int main()
//{
//	
//	
//	/*char ch = "w";
//	"abcdf";*/
//	//char arr1[] = "abcdf";//   \0
//	//char arr2[] = { 'a','b','c','\0'};
//	//  
//	////printf("%s\n", arr1);
//	////printf("%s\n", arr2);
//	////int len = strlen("abc");
//	//printf("%d\n", strlen(arr1));
//	//printf("%d\n", strlen(arr2));
//	//	
//	/*int	arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);*/
//
//
//
//	return 0;
//


//
//int main()
//{
//	printf("abcd\0fd");
//
//	return 0;
//}



//int main()
//{
//	/*printf("%s\n","(are you ok??)");
//	printf("%c\n",'\'');*/
//	/*printf("abcdf\n");
//	printf("\"");*/
//	/*printf("abcd\\0ef");*/
//	//printf("c:\\test\\test.c");
//	//printf("\a\a\a\a\a\a");
//	//printf("%c\n", '\130');
//	//printf("%c\n", '\x63');
//	//printf("%d\n",strlen("qwer t"));
//	//printf("%d\n", strlen("c:\test\628\trst.c"));
//	printf("%d\n", strlen("c:\test\628\trst.c"));
//
//
//
//	return 0;
//}




//int main()
//{
//	//int a = 10;
//	//创建指针变量p，并赋值为NULL
//	int* p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入学习\n");
//	printf("要好好学习吗(1/0)? ");
//	scanf("%d",&input);
//	if (input == 1)
//	{
//		printf("好office\n");
//
//	}
//	else
//	{
//		printf("考红薯\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("加入学习\n");
//
//	while (line<20000)
//	{
//		printf("写代码%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好office\n");
//	}
//
//	else
//	{
//		printf("继续加油\n");
//	}
//
//
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//
//int main()
//{
//
//	int n1 = 0;
//	int n2 = 0;
//
//	scanf("%d %d", &n1, &n2);
//
//	int sum = Add(n1,n2);
//	int t1 = 100;
//	int t2 = 300;
//	int ret = Add(t1, t2);
//	printf("%d\n",sum);
//	printf("%d\n",ret);
//
//	return 0;
//
//
//}





//int main()
//{
//	//int a = 10;
//	//int b = 11;
//	//int c = 12;
//	////0~9
//	//int d 
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	
//	/*printf("%d\n", arr[8]);
//	printf("%d\n", arr[8]);*/
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i = i + 1;
//
//	}
//
//
//
//	return 0;
//}
// 
//
//#include <stdio.h>

//int main() {
//    for (int i = 2; i > 0; i--) {
//        for (int j = 5; j > 0; j--) {
//            printf(" ");
//        }
//        printf("**\n");
//    }   
//
//
//    return 0;
//}
//

 
//#include <stdio.h>
//int main()
//{
//	//int a = 7 / 2;    //整数除法
//	//printf("%d\n", a);
//	float a = 7 / 2.0;    //浮点
//	int b = 7 % 2;   //取模（余数）//取模两端必须是整数
//	printf("%.1f\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = -10;
//	int b = -a;
//	
//	
//	printf("%d\n",b);
//	
//
//	return 0;
//}


#include <stdio.h>

int main()
{
	/*int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);*/

	int arr[10] = { 0 };
	printf("%d\n",sizeof(arr));  //40 计算的是整个数组的大小，单位是字节
	printf("%d\n",sizeof(arr[0]));
	printf("%d\n",sizeof(arr) / sizeof(arr[0]));


	return 0;
}
