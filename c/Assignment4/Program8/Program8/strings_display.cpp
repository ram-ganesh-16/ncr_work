#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, r;
	printf("no of strings to enter:");
	scanf_s("%d", &n);
	r = n;

	char **s = (char**)malloc(n * sizeof(char*));
	for (i = 0; i < n; i++)
	{
		s[i] = (char*)malloc(20);
	}
	i = 0;
	while (n > 0)
	{
		printf("enter string:");
		getchar();
		scanf_s("%[^\n]s", s[i], 20);
		i++;
		n--;
	}

	for (i = 0; i < r; i++)
	{
		printf("\n %s", s[i]);
	}
	free(s);
	getchar();
	getchar();
	return 0;
}