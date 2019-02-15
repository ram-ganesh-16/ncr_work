# include<stdio.h> 
int getSum(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}

int main()
{
	int n;
	printf("enter number");
	scanf_s("%d", &n);
	printf(" %d ", getSum(n));
	getchar();
	return 0;
}
