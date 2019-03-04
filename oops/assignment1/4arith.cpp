#include<iostream>
using namespace std;
inline int add(int a, int b)
{
	return(a + b);
}
inline int sub(int a, int b)
{
	return(a - b);
}
inline int mul(int a, int b)
{
	return(a * b);
}
inline int divi(int a, int b)
{
	return(a / b);
}
inline int mod(int a, int b)
{
	return(a % b);
}
void main()
{
	int a, b;
	cout << "enter two numbers";
	cin >> a >> b;
	cout << "\nsum is " << add(a, b);
	cout << "\nsub is " << sub(a, b);
	cout << "\nmul is " << mul(a, b);
	cout << "\ndiv is " << divi(a, b);
	cout << "\nmod is " << mod(a, b);
}