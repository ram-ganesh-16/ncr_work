#include<string.h>
#include<iostream>
using namespace std;
#define MAX 128
void expand_string(char *s1, char *s2)
{
	int i = 0,j=0;
	int c;
	int l = strlen(s1);
	if (s1[0] == '-'||s1[l-1]=='-')
		// if it is given -a- it will display the following error
		throw "Hyphen cannot be at both front and back";
	while ((c = s1[i++]) != '\0')
	{
		//if it is given a-a it will display just a
		if (s1[i] == '-'&&s1[i + 1] == c)
		{
			s2[j++] = c;
			i = i + 2;

		}
		else if (s1[i] == '-'&&s1[i + 1] < c)
			//if it is given f-a it will thrown an invalid expression as error
			throw "invalid expression";
		else if (s1[i] == '-'&&s1[i + 1] > c)
		{
			//if it is c-z it will print from c to z
			i++;
			while (c < s1[i])
			{
				s2[j++] = c++;
			}
		}
			
		else if (s1[i] == '-'&&s1[i + 1] == '-')
		{
			//if it is -- it will display the following error
			throw "cannot have two hyphens continuously";
		}
		else
			s2[j++] = c;
	}
	s2[j] = '\0';

}
int main()
{
	char *string1 = new char[MAX];
	char *string2 = new char[MAX];
	try
	{
		cout<<"Enter string :"<<"\n";
		cin>> string1;
		expand_string(string1, string2);
		cout<<"Expanded string is:"<<endl;
		cout<<string2;
		delete[] string1;
		delete[] string2;
	}
	catch (const char*msg)
	{
		// the error thrown will be displayed her
		cout << msg;
	}
	system("pause");

	return 0;
}