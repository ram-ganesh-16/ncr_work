#include<stdio.h>
int main()
{
	int n,sum=0;
	int min = 1000, max =-1;
	printf("enter number");
	scanf_s("%d", &n);
	if (n < 0)
		printf("enter positive values");
	else
	{
		while (n > 0)
		{
			sum = sum + n;
			if (n < min)
				min = n;
			if (n > max)
				max = n;
			printf("enter number");
			scanf_s("%d", &n);
		}
		getchar();
		printf("\nMin value:%d", min);
		printf("\nMax value:%d", max);
		printf("\nSum value:%d", sum);
	}
	getchar();
	return 0;


}