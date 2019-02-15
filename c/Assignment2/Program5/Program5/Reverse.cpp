#include <stdio.h>
void reverse_num(int n)
{
	long  reverse = 0, temp, rem;
	temp = n;
	while (n > 0)
	{
		rem = n% 10;
		reverse = reverse * 10 + rem;
		n /= 10;
	}
	printf("reverse of %d is = %ld \n", temp,reverse);
}

int main()
{
	long  num;
	printf("Enter the number\n");
	scanf_s("%ld", &num);
	reverse_num(num);
	getchar();
	return 0;
}