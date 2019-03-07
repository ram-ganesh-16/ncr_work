#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
//String reverse program
void str_reverse(char *input, char *output)
{
	int length = strlen(input);
	int i = 0, j = 0;
	for (i = (length - 1); i >= 0; i--)
	{
		*(output + j) = *(input + i);
		j++;
	}
	*(output + j) = '\0';
}
//String copy 
void str_copy(char *input, char *output)
{
	int i = 0, j = 0;
	while (*(input + i) != '\0')
	{
		*(output + j) = *(input + i);
		i++;
		j++;
	}
	*(output + j) = '\0';
}
//String concatenation
void str_cat(char *input1, char *input2)
{
	int length = strlen(input2);
	int l = strlen(input1);
	int i = 0;
	while (*(input2 + i) != '\0')
	{
		*(input1 + l) = *(input2 + i);
		l++;
		i++;
	}
	*(input1 + l) = '\0';
}
//string compares
void str_compare(char *input1, char *input2)
{
	int l1 = strlen(input1);
	int l2 = strlen(input2);
	int i = 0;
	if (l1 > l2)
		printf("NOT EQUAL");
	else if (l1 < l2)
		printf("NOT EQUAL");
	else
	{
		while (*(input1 + i) != '\0')
		{
			if (*(input1 + i) == *(input2 + i))
				i++;
			else
			{
				printf("NOT EQUAL");
				return;
			}
		}
		printf("%s and %s :EQUAL", input1, input2);
	}
}
int main()
{
	char *string1 = (char*)malloc(MAX);
	char *string2 = (char*)malloc(MAX);
	int choice = 0;
	while (1)
	{
		printf("\n\nEnter \n 0:EXIT \n 1.Reverse \n 2.Copy \n 3.Concatnate \n 4.Comparison : \n");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:printf("Enter string to be reversed :\n");
			getchar();
			scanf_s("%[^\n]s", string1, MAX);
			str_reverse(string1, string2);
			printf("Reversed string :%s ", string2);
			break;
		case 2:printf("Enter string to be copied :\n");
			getchar();
			scanf_s("%[^\n]s", string1, MAX);
			str_copy(string1, string2);
			printf("Copied string :%s", string2);
			break;
		case 3:printf("Enter first string :\n");
			getchar();
			scanf_s("%[^\n]s", string1, MAX);
			printf("Enter second string :\n");
			getchar();
			scanf_s("%[^\n]s", string2, MAX);
			str_cat(string1, string2);
			printf("\n Concatnated string :%s", string1);
			break;
		case 4:printf("Enter first string :\n");
			getchar();
			scanf_s("%[^\n]s", string1, MAX);
			printf("Enter second string :\n");
			getchar();
			scanf_s("%[^\n]s", string2, MAX);
			str_compare(string1, string2);
			break;
		case 0:
			free(string1);
			free(string2);
			getchar();
			return 0;
		default:
			printf("\nINVALID CHOICE \n");
		}
	}

	return 0;
}