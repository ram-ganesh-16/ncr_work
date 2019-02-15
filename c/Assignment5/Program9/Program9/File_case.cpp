#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *s = (char*)malloc(100);
	int i = 0;
	printf("Enter string :");
	scanf_s("%[^\n]s", s, 20);
	FILE *fp = fopen("file3.txt", "w+");
	while (s[i] != '\0')
	{
		if (s[i] >= 'A'&&s[i] <= 'Z')
			s[i] = s[i] + 32;
		else if (s[i] >= 'a'&&s[i] <= 'z')
			s[i] = s[i] - 32;
		else
		{
			s[i] = s[i];
		}
		fprintf(fp, "%c", s[i]);
		i++;
	}
		fputs("is", fp);
		printf("%ld \n", ftell(fp));
		getchar();
		fseek(fp, 5, SEEK_SET);
		//printf("seek position %ld \n", fseek(fp, -2, SEEK_END));
		fputs("is", fp);
		fclose(fp);
		getchar();
	getchar();
	return 0;
}