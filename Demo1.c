#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ֲ����㷨

int main0101()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����һ����������
	int sz = sizeof(arr) / sizeof(arr[0]);//�����鳤��
	int left = 0, right = sz-1;
	printf("����Ҫ���ҵ����֣�");
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
			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}