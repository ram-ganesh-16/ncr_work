#include<stdio.h>

void strcpy(char *s2, char *s1)
{
	while (*s1)
	{
		*s2 = *s1;
		*s2++;
		*s1++;
	}
	*s2 = '\0';
}
void strcat(char *s1, char *s2)
{
	while (*s1)//till end of main string
	{
		*s1++;
	}
	while (*s2)
	{
		*s1 = *s2;
		*s2++;
		*s1++;
	}
	*s1 = '\0';
}
int strcmp(char *s1, char *s2)
{
	char *a, *b;
	a = s1, b = s2;
	while (*s1++ == *s2++)
	{
		if ((*s1) == '\0')
			return 0;
	}
	//*s1--; *s2--;
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
	char s[50], s2[50];
	int c, res;
	printf("enter string\n");
	//scanf_s("%s", s);//main string
	gets_s(s);
	printf("enter choice 1.strrev 2.strcpy 3.strcat 4.strcmp\n");
	scanf_s("%d", &c);
	switch (c)
	{
	case 1:strrev(s); printf("%s ", s);
		break;
	case 2:strcpy(s2, s); printf("%s ", s2);
		break;
	case 3:printf("enter string2\n"); scanf_s("%s", s2);
		strcat(s, s2); printf("%s", s);
		break;
	case 4:printf("enter string2\n"); scanf_s("%s", s2);
		res = strcmp(s, s2);
		if (res == 0)
			printf("equal");
		else if (res == 1)
			printf("%s is greater than %s", s, s2);
		else if (res == -1)
			printf("%s is less than %s", s, s2);
		break;
	}
	return 0;
}