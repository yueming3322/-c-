#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int num1;
//	int num2;
//	int i = 0;
//	printf("������ ���� �� ������ ��\n");
//	scanf("%d %d", &num1, &num2);
//	
//	if (num1 == num2)
//	{
//		printf("1\n");
//	}
//	else if (num1 < num2)
//	{
//		printf("��Ϊ����\n");
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
    // ȷ����������0����������ѭ��
    if (divisor == 0) {
        printf("Error: Division by zero\n");
        *quotient = 0;
        *remainder = dividend;
        return;
    }

    // ��ʼ����Ϊ0������Ϊ������
    *quotient = 0;
    *remainder = dividend;

    // ���������С�ڳ���������Ϊ0������Ϊ������
    while (*remainder >= divisor) {
        *remainder -= divisor; // ��ȥһ�γ���
        (*quotient)++;         // ������1
    }
}

int main() {
    int dividend, divisor, quotient, remainder;

    // ��������������
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // �����̺�����
    divmod(dividend, divisor, &quotient, &remainder);

    // ������
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}