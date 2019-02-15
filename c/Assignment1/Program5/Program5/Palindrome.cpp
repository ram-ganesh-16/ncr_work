#include<stdio.h>
void Ispalindrome(int n)
{
	int temp = n;
	int rem = 0;
	int rev_num = 0;
	while (n!=0)
	{
		rem = n % 10;
		rev_num = rev_num* 10 + rem;
		n = n / 10;

	}
	if (rev_num == temp)
		printf("%d is palindrome", rev_num);
	else
		printf("%d is not a palindrome", rev_num);
	getchar();
}
int main()
{
	int n;
	printf("enter number:");
	scanf_s("%d", &n);
	Ispalindrome(n);
	getchar();
	return 0;
}