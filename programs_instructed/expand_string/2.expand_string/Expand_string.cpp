#include<string.h>
#include<iostream>
using namespace std;
void expand_string(char *s1, char *s2)
{
	int i = 0,j=0;
	int c;
	int l = strlen(s1);
	if (s1[0] == '-'||s1[l-1]=='-')
		throw "cannot have hyphen at front or back";
	while ((c = s1[i++]) != '\0')
	{
		if (s1[i] == '-'&&s1[i + 1] == c)
		{
			s2[j++] = c;
			i = i + 2;

		}
		else if (s1[i] == '-'&&s1[i + 1] < c)
			throw "invalid expression";
		else if (s1[i] == '-'&&s1[i + 1] > c)
		{
			i++;
			while (c < s1[i])
			{
				s2[j++] = c++;
			}
		}
			
		else if (s1[i] == '-'&&s1[i + 1] == '-')
		{
			throw "cannot have two hyphens continuously";
		}
		else
			s2[j++] = c;
	}
	s2[j] = '\0';

}
int main()
{
	char *string1 = new char[20];
	char *string2 = new char[40];
	try
	{
		cout<<"Enter string 1:"<<endl;
		cin>> string1;
		expand_string(string1, string2);
		cout<<"Expanded string is:"<<endl;
		cout<<string2;
		delete[] string1;
		delete[] string2;
	}
	catch (const char*msg)
	{
		cout << msg;
	}
	getchar();
	getchar();
	return 0;
}