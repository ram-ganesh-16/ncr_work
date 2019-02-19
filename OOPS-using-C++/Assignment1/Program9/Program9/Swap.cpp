#include<iostream>
using namespace std;
class Swap
{
    public:
		int x;
		Swap()
		{
			x = 0;
		}
		Swap(int val)
		{
			x = val;
		}
	void swap2(Swap &s1,Swap &s2)
	{
		int temp;
		temp = s1.x;
		s1.x = s2.x;
		s2.x = temp;
		cout << "\nswapped values: " << s1.x << "\t" << s2.x;
	}
	void swap1(Swap s1, Swap s2)
	{
		int temp;
		temp = s1.x;
		s1.x = s2.x;
		s2.x = temp;
		cout << "\nswapped values: " << s1.x << "\t" << s2.x;
	}
	

};
int main()
{
	int x, y, n;
	cout << "enter two values to be swapped\n";
	cin >> x >> y;
	cout << "\nfor CALL BY VALUE press1";
	Swap s, s1(x), s2(y);
	cout << "\nfor CALL BY REFERENCE press2";
	cin >> n;
	switch (n)
	{
	case 1:

		cout << "\nCALL BY VALUE";
		cout << "\nvalues before swap " << x << "\t" << y;
		s.swap1(s1, s2);
		cout << "\nafter swap outside of function (valu)  " << s1.x << s2.x;
		break;
	case 2:
		cout << "\nCALL BY REFERENCE";
		cout << "\nvalue before swap  " << x << y;
		s.swap2(s1, s2);
		cout << "\nafter swap outside of function (reference) " << s1.x << s2.x;
		break;
	}
	system("pause");
	return 0;
}