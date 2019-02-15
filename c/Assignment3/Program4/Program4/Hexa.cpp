#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num, choice, res;
	printf("enter number ");
	scanf_s("%x", &num);
	while (1)
	{
		printf("\n Enter 1)ones compliment 2)masking 3)bit shifting 4)exit\n ");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:	res = (num ^ 0xFFFF);
			printf("\n ones compliment of %x is : %x", num, res);
			break;
		case 2:res = (num & 0x00FF);
			printf("\n after masking with 00FF the result is : %x", res);
			break;
		case 3:res = (num >> 2);
			printf("\n after shifting the bits result is : %x", res);
			break;
		case 4:
			getchar();
			exit;
			return 0;
			break;
		default:printf("\n enter any given option");
		}
	}
}
	