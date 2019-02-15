#include<stdio.h>
#include<stdlib.h>
int replace(char *s)
{
	int i = 0,count=0;
	while (s[i]!='\0')
	{
		if (s[i] == ' ')
		{
			s[i] = '-';
			count++;
		}
		printf("%c", s[i]);
		i++;
	}
	return count;

}
int main()
{
	char *s = (char*)malloc(20);
	int n;
	printf("enter string:\n");
	scanf_s("%[^\n]s", s, 20);
	n=replace(s);
	printf("\n no of spaces: %d", n);
	getchar();
	getchar();
	return 0;
}