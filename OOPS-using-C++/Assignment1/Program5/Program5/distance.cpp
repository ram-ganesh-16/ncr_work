#include<iostream>
using namespace std;
class Ditance2;
class Distance1
{
public:
	float mrs, cms;
public:
	void get_distance()
	{
		cout << "\n Enter data in mrs and cms: "; 
		cin >> mrs;
     	cin>>cms;
	}
	friend void sum(Distance1 d1, Ditance2 d2);
};
class Ditance2
{
private:
	float feets, inches;
public:
	void get_distance()
	{
		cout << "\n Enter data in feets and inches: ";
		cin >> feets;
		cin >> inches;
	}
	friend void sum(Distance1 d1, Ditance2 d2);
};
void sum(Distance1 d1, Ditance2 d2)
{
	int m_c, i_c, f_c;
	i_c = d2.inches*0.24;
	f_c = d2.feets*0.30;
	m_c = d1.mrs * 100;
	int  ans, m, c, f, in;
	ans = (d1.cms + m_c) + (i_c + f_c);
	m = ans / 100;
	c = ans % 100;
	cout << "\n ------------------------------------------------------------------";
	cout << "\n Sum in Meters & Centimeters         =  " << m << " mtrs & " << c << " cms";
	f = m / 0.30;
	in = c / 2.54;
	cout << "\n Sum in Feets & Inches               =  " << f << " feets & " << in << " inches \n";
}
int main()
{
	Distance1 d1;
	Ditance2 d2;
	d1.get_distance();
	d2.get_distance();
	sum(d1, d2);
	system("pause");
	return 0;
}