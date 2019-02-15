#include <stdio.h>
#include <math.h>
int convertBinaryToDecimal(long long n);
long long convertDecimalToBinary(int n);

int main()
{
	int ch;
	long long n;
	int num;
	while (1)
	{
		printf("\nEnter the option : 1) binary to decimal 2) decimal to binary :");
		scanf_s("%d", &ch);
		switch (ch)
		{
		case 1:

			printf("Enter a binary number: ");
			scanf_s("%lld", &n);
			printf("\n Decimal value of %lld is : %d", n, convertBinaryToDecimal(n));
			break;
		case 2:
			printf("Enter a decimal number: ");
			scanf_s("%d", &num);
			printf("\nBinary Value of %d is : %lld", num, convertDecimalToBinary(num));
			break;
		default:
			printf("\n Enter the correct option");
		}
		printf("\n If you want to terminate Enter ZERO else Any Number:");
			scanf_s("%d", &ch);
			if (ch == 0)
			{
				getchar();
				return 0;

			}

	}
	
	return 0;
}

int convertBinaryToDecimal(long long n)
{
	int decimalNumber = 0, i = 0, remainder;
	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		decimalNumber += remainder*pow(2, i);
		++i;
	}
	return decimalNumber;
}
long long convertDecimalToBinary(int n)
{
	long long binaryNumber = 0;
	int remainder, i = 1, step = 1;

	while (n != 0)
	{
		remainder = n % 2;
		n /= 2;
		binaryNumber += remainder*i;
		i *= 10;
	}
	return binaryNumber;
}