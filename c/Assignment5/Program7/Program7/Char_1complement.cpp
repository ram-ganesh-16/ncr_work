#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *data = (char*)malloc(1);
	char *data1 = (char*)malloc(1);
	int i = 0;
	int d;
	FILE *fp = fopen("file2.txt", "r+");
	printf("enter data:");
	scanf_s("%s", data,20);
	//fprintf(fp, "%s", data);
	while (data[i] != '\0')
	{
		d = (int)data[i];
		data1[i] = ~(d);
		
		i++;
	}
	printf("\n %s", data1);
	getchar();
	getchar();
	return 0;
}