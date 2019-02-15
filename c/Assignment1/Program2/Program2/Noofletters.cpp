#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<malloc.h>
int main()
{
	char *c = (char*)malloc(20 * sizeof(char));
	int i = 0, d;
	int nol = 0, nod = 0, nob = 0, nota = 0;
	printf("enter string:\n");
	scanf_s("%[^\n]", c, 20);
	getchar();
	printf("string is: %s\n", c);
	while (c[i] != '\0')
	{
		if ((c[i] >= 'A'&&c[i] <= 'Z') || (c[i] >= 'a'&&c[i] <= 'z'))
			nol++;
		else if ((c[i] >= '0'&&c[i] <= '9'))
			nod++;
		else if (c[i] == ' ')
			nob++;
		else
			nota++;
		i++;
	}
	printf("no of letters :%d\n", nol);
	printf("no of digits :%d\n", nod);
	printf("no of blanks :%d\n", nob);
	printf("no of tabs :%d\n", nota);
	getchar();
	//scanf_s("%2d", &d);

	getchar();
}