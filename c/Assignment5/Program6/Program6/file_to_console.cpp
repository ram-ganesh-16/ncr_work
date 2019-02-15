#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main()
{
	FILE *f = fopen("file1.txt", "r");
	char ch;
	if (f == NULL)
	{
		printf("Cannot open file \n");
		return 0;
	}
	char line[100];
	while (fgets(line,100,f) != NULL)
	{
		printf("%s", line);
		
	}
	fclose(f);
	getchar();
	return 0;
}