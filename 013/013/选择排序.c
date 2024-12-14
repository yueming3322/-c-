#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[] = { 3,5,2,1,4 };
	int len = sizeof(arr) / sizeof(int);

	for (int i = 0; i < len - 1; i++)
	{
		//第一轮：i = 0 j = 1 2 3 4
		//第一轮：i = 1 j = 2 3 4
		//第一轮：i = 2 j = 3 4
		//第一轮：i = 3 j = 4
		//
		//
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);

	}
	return 0;
}



