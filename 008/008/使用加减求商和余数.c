#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int num1;
//	int num2;
//	int i = 0;
//	printf("请输入 除数 和 被除数 ：\n");
//	scanf("%d %d", &num1, &num2);
//	
//	if (num1 == num2)
//	{
//		printf("1\n");
//	}
//	else if (num1 < num2)
//	{
//		printf("商为分数\n");
//	}
//	else
//	{
//		while (num1 > num2)
//		{
//			num1 = num1 - num2;
//			i++;
//		}
//		printf("%d\n", i+1);
//	}
//	
//	
//	
//
//	return 0;
//}



#include <stdio.h>

void divmod(int dividend, int divisor, int* quotient, int* remainder) {
    // 确保除数不是0，避免无限循环
    if (divisor == 0) {
        printf("Error: Division by zero\n");
        *quotient = 0;
        *remainder = dividend;
        return;
    }

    // 初始化商为0，余数为被除数
    *quotient = 0;
    *remainder = dividend;

    // 如果被除数小于除数，则商为0，余数为被除数
    while (*remainder >= divisor) {
        *remainder -= divisor; // 减去一次除数
        (*quotient)++;         // 商增加1
    }
}

int main() {
    int dividend, divisor, quotient, remainder;

    // 输入两个正整数
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // 计算商和余数
    divmod(dividend, divisor, &quotient, &remainder);

    // 输出结果
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}