#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *s=(char *)malloc(20);
    printf("Input a string to\n convert to upper case\n");
	scanf_s("%[^\n]s", s,20);
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'A'&&s[i] <= 'Z')
			s[i] = s[i] + 32;
		else if (s[i] >= 'a'&&s[i] <= 'z')
			s[i] = s[i] - 32;
		else
		{

		}
		printf("%c", s[i]);
		i++;
	}
	
	getchar();
	getchar();
	return  0;
}