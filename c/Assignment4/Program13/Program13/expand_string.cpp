#include<stdio.h>
#include<stdlib.h>
void expand_string(char *s1, char *s2)
{
	int i, j, c;
	i = j = 0;
	while ((c = s1[i++]) != '\0')
		if (s1[i] == '-' && s1[i + 1] >= c)
		{
			i++;
			while (c<s1[i])
				s2[j++] = c++;
		}
		else
			s2[j++] = c;

	s2[j] = '\0';
}
int main()
{
	char *s1 = (char*)malloc(20);
	char *s2 = (char*)malloc(30);
	printf("Enter string s1:");
	scanf_s("%[^\n]s", s1, 20);
	expand_string(s1, s2);
	printf("%s", s2);
	getchar();
	return 0;
}