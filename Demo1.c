#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//二分查找算法

int main0101()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个整型数组
	int sz = sizeof(arr) / sizeof(arr[0]);//求数组长度
	int left = 0, right = sz-1;
	printf("输入要查找的数字：");
	int key;
	scanf("%d", &key);
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid]>key)
		{
			right = mid-1;
		}
		else if (arr[mid]<key)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标为：%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("找不到\n");
	}
	return 0;
}