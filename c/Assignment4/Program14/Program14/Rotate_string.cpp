#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rotate_string(char *s)
{
	int n = strlen(s);
	int i, j, p;
	char *temp = (char *)malloc(n*sizeof(char));
	for (i = 0; i < n; i++)
	{
		j = i;
		p = 0;
		while (s[j]!='\0')
		{
			temp[p] = s[j];
			p++;
			j++;
		}
		j = 0;
		while (j < i)
		{
			temp[p] = s[j];
			p++;
			j++;
		}
		printf("%s \n", temp);
	}

}
int main()
{
	char *s = (char*)malloc(20);
	printf("enter string:");
	scanf_s("%[^\n]s", s, 20);
	rotate_string(s);
	getchar();
	return 0;
}