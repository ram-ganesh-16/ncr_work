#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void delete_char(char *s, char a)
{
	int i,j=0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != a)
			s[j++] = s[i];
		
	}
	s[j] = '\0';
}
int main()
{
	char *s = (char*)malloc(20);
	char ch;
	printf("Enter string:");
	scanf_s("%[^\n]s", s, 20);
	printf("Enter char to remove from string:");
	scanf_s("%4c", &ch,1);
	delete_char(s, ch);
	printf("%s", s);
	
}