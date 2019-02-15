#include<stdio.h>
#include<stdlib.h>
void delete_string(char *s1, char *s2)
{
	int i, j, k;
	k = 0;

	for (i = 0; s1[i] != '\0'; ++i)
	{
		for (j = 0; (s1[i] != s2[j]) && s2[j] != '\0'; ++j)
			;
		if (s2[j] == '\0')
			s1[k++] = s1[i];
	}

	s1[k] = '\0';
}
int main()
{
	char *s1 = (char*)malloc(20);
	char *s2 = (char*)malloc(20);
	printf("enter string 1:");
	scanf_s("%[^\n]s", s1, 20);
	getchar();
	printf("enter string 2:");
	scanf_s("%[^\n]s", s2, 20);
	delete_string(s1, s2);
	printf("%s", s1);
	getchar();
	getchar();
	return 0;
}