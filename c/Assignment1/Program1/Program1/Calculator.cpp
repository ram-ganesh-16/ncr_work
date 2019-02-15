#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
void calc()
{
	int num1, num2;
	int b;
	printf("enter numbers:");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("\nenter the option 1:addition 2:subtraction 3:multiplication 4:divison \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &b);
	//printf("%s", b);
	switch (b)
	{
	case 1:add(num1, num2);
		break;
	case 2:sub(num1, num2);
		break;
	case 3:mul(num1, num2);
		break;
	case 4:div(num1, num2);
		break;
	default:printf("choose the given operation \n");
		break;
	}
}
int main()
{
	int choice;
	while (1)
	{
		calc();
		
		printf("\n enter 1 to continue or 0 to terminate \n");
		scanf("%d", &choice);
		if (choice == 0)
		{
			return 0;
		}
	}
	//printf("%c", b);
	fflush(stdin);
	fflush(stdout);
	getchar();
	getchar();
	return 0;
}
