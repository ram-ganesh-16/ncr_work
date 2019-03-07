#include<string>
#include<iostream>
using namespace std;
int evaluate(string);
bool areParanthesisBalanced(string);
int main() 
{
	string expression;
	cout << "Enter Expression : \n";
	cin >> expression;
	if (areParanthesisBalanced(expression))
	{
		cout << "Result is : "<< evaluate(expression) << "\n";
	}
	else
	{
		cout << "\nInvalid Expression" << endl;
		system("pause");
		return 0;
	}
	system("pause");
	return 0;
}

