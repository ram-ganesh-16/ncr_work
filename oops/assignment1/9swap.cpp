#include<iostream>
using namespace std;
class swap1
{

public:
	
	void swap_fun(int i, int j)
	{
		i = i + j;
		j = i - j;
		i = i - j;
		cout <<"values in function "<< i << " " << j<<endl;
	}
	void swap_funs(int &i, int &j)
	{
		i = i + j;
		j = i - j;
		i = i - j;
		cout << "values in function " <<i << " " << j << endl;
		
	}
};
void main()
{
	swap1 s1;
	int a, b,ch;
	cout << "enter a and b values"<<endl;
	cin >> a >> b;
	cout << "\n" << "1 for call by value" << " 2 for call by reference";
	cin >> ch;
	switch (ch)
	{
	case 1:
		s1.swap_fun(a,b);
		break;
	case 2:
		s1.swap_funs(a, b);
		break;
	default:
		cout << "enter a valid choice";

	}
	cout << "values in main "<< a << " " << b;
}