#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//state-capital
	char *s = (char*)malloc(20);
	char *token = (char*)malloc(20);
	char *target = (char*)malloc(20);
	char *capital = (char*)malloc(20);
	int i = 0, n = 0;
	int b=0, j=0;
	char str[20];
	FILE *fp = fopen("file4.txt", "w+");
	
	while (n<2)
	{
		printf("Enter state-capital\n");
		getchar();
		fflush(stdin);
		scanf_s("%[^\n]s", s, 20);
		n++;
		fputs(s, fp);
		fputs("\n", fp);
	}
	fclose(fp);
	FILE *f = fopen("file4.txt", "r+");
	printf("enter 1)to know the capital 2)to know the country name 3)to terminate");
	scanf_s("%d", &b);
	switch (b)
	{
	case 1:
		printf("enter either country or capital :\n");
		fflush(stdin);
		getchar();
		scanf_s("%[^\n]s", target, 20);
		
		while (j <2)
		{
	
			fgets(str, 20, f);
			token = strtok(str, "-");

			// Keep printing tokens while one of the 
			// delimiters present in str[]. 
			
				

			if (strcmp(token, target)==0)
			{
				capital = strtok(NULL, "-");
				printf("%s", capital);
			}
		}
		break;
	case 2:
		break;
	case 3:return -1;
		break;
	default:printf("select proper option");
	}
	getchar();
	return 0;
}