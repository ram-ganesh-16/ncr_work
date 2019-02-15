#include<stdio.h>
int main()
{
	int i, j, k, l;

	for (j = 1; j <= 5; j++)
	{

		for (i = 5; i>j; i--)
		{
			printf(" ");
		}
		for (k = j; k>0; k--)
		{
			printf("%d", k);
		}
		for (l = 2; l <= j; l++)
		{
			printf("%d", l);
		}
		printf("\n");
	}
	getchar();
	return 0;
}