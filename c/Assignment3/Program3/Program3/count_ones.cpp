#include<stdio.h>
int main()
{
	int num,c=0;
	char ch;
	int choice;
	int i = 0;
	while (1)
	{
		printf("\n Enter the choice :\n 1) To find the number of ones in an integer \n 2) To find the number of ones in a character : ");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			c = 0;
			printf("Enter the number:");
			scanf_s("%d", &num);
			for (i = 0; i < 32; i++)
			{
				if (num & 1)
					c++;
				num = num >> 1;

			}
			printf("\n number of ones in %d is : %d", num, c);
			getchar();
			break;
		case 2:
			c = 0;
			printf("Enter the character:");
			getchar();
			scanf_s("%c", &ch);
			num = ch;
			for (i = 0; i < 8; i++)
			{
				if (num & 1)
					c++;
				num = num >> 1;

			}
			printf("\n number of ones in %d is : %d", num, c);
			getchar();
			break;
		default:printf("\n Enter the correct choice:");
		}
		printf("\n Enter 0 to terminate else enter any number:");
		scanf_s("%d", &choice);
		if (choice == 0)
		{
			getchar();
			return 0;
		}
	}
	getchar();
	return 0;
	
}