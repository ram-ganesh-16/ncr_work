#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h.>
void sumofn(int *arr, int len,int tar) {
	for (int i = 0; i < len; i++)
	{
		int sum = 0;
		for (int j = i; j < len; j++)
		{
			sum = sum + arr[j];
			if (sum == tar)
			{
				printf("\n %d \n %d", i, j);
				break;
			}
		}
	}
	return;
}
int main() {
	int n,tar;
	printf("enter size of array");
	scanf_s("%d", &n);
	printf("\nenter target of array");
	scanf_s("%d", &tar);
	int *arr = (int *)malloc(n * sizeof(int));
	printf("\nenter elements:");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	int sum = 0;
    sumofn(arr,n,tar);
	getchar();
	getchar();
	return 0;
}
