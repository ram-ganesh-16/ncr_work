#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h.>

int main() {
	int n;
	printf("enter size of array");
	scanf_s("%d", &n);
	int *arr = (int *)malloc(n * sizeof(int));
	printf("\nenter elements:");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	int p = 0, q = n - 1;
	while (p < q)
	{
		if (arr[p] < 0)
		{
			p++;
		}
		if (arr[q] > 0)
		{
			q--;
		}
		if (p<q && arr[p] > 0 && arr[q] < 0)
		{
			int t = arr[p];
			arr[p] = arr[q];
			arr[q] = t;
			p++;
			q--;
		}
	}
	printf("\n");
	for (int z = 0; z < n; z++)
	{
		printf("%d", arr[z]);
	}
	getchar();
	getchar();
	return 0;
}