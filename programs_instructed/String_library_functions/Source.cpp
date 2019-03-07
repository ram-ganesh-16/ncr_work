#include<stdio.h>

void strcpy(char *str2, char *str1)
{
	while (*str1)
	{
		*str2 = *str1;
		*str2++;
		*str1++;
	}
	*str2 = '\0';
}
void strcat(char *str1, char *str2)
{
	while (*str1)
	{
		*str1++;
	}
	while (*str2)
	{
		*str1 = *str2;
		*str2++;
		*str1++;
	}
	*str1 = '\0';
	*str2 = '\0';
}
int strcmp(char *str1, char *str2)
{
	char *a, *b;
	a = str1, b = str2;
	while (*str1++ == *str2++)
	{
		if ((*str1) == '\0')
			return 0;
	}
	if ((*a - *b) > 0)
		return 1;
	else
		return -1;
}
void strrev(char *str)
{
	char *p, *q, ch;
	p = str; q = str;
	int length, i;
	for (length = 0; str[length] != '\0'; ++length);

	for (i = 0; i < length - 1; i++)
		q++;
	for (i = 0; i<length / 2; i++)
	{
		ch = *p;
		*p = *q;
		*q = ch;
		p++;
		q--;
	}
}
int main()
{
	char string1[50], string2[50];
	int value, result;
	printf("Enter the string i.e to been used for further expressions:\n");
	gets_s(string1);
	printf("Enter your choice\n1.strrev\n2.strcpy\n3.strcat\n4.strcmp\n");
	scanf_s("%d", &value);
	switch (value)
	{
	case 1:strrev(string1);
		printf("%s ", string1);
		break;
	case 2:strcpy(string2, string1);
		printf("%s ", string2);
		break;
	case 3:printf("Enter the string2\n"); 
		scanf_s("%s",string2,10);
		strcat(string1, string2); printf("%s", string1);
		break;
	case 4:printf("Enter the second string for comparing:\n");
		scanf_s("%s",string2,50);
		result = strcmp(string1, string2);
		if (result == 0)
			printf("equal");
		else if (result == 1)
			printf("%s is greater than %s", string1, string2);
		else if (result == -1)
			printf("%s is less than %s", string1, string2);
		break;
	}
	return 0;
}