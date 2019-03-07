#include<stdio.h>
#include<ctype.h>
#include<string.h>
void Expand(char *s1, char *s2)
{
	int i, k;//loop iterators
	int j = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != '-')//Finding out where the dash exists in the given input of string_1
			s2[j++] = s1[i];
		else
		{
			if (isdigit(s1[i - 1]))
				//In the given input of string_1 number of digits are checked 
			{
				for (k = s1[i - 1] - 47; k < s1[i + 1] - 48; k++)
					//ASCII range of numbers 0(48) to 9(57)
					s2[j++] = k + 48;
			}
			else if (s1[i - 1] >= 97 && s1[i - 1] <= 122) 
				//for expanding the lowercase alphabets
			{
				for (k = s1[i - 1] - 96; k < s1[i + 1] - 97; k++)
					s2[j++] = k + 97;
			}
			else
			{
				for (k = s1[i - 1] - 64; k < s1[i + 1] - 65; k++)
					//for expanding the uppercase alphabets(65-90)
					s2[j++] = k + 65;

			}
		}
	}
	s2[j] = '\0';
}
int main()
{

	char string_1[50], string_2[50];
	printf("Do enter string_1 for getting the required ouput: \n");
	//gets will be used for input of string_1
	gets(string_1);

	Expand(string_1, string_2);
	printf("Expanded output of String_1 is %s", string_2);
	getchar();
	return 0;
}