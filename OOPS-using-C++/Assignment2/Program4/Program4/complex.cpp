#include<iostream>
using namespace std;
class Complex
{
	float real;
	float img;
public:
	Complex()
	{
		real = img = 0;
	}
	Complex(float x, float y)
	{
		real = x;
		img = y;
	}
	Complex(const Complex &c2)
	{
		real = c2.real;
		img = c2.img;
	}
	Complex operator+(Complex c)
	{
		Complex res;
		res.real = real + c.real;
		res.img = img + c.img;
		return res;
	}
	Complex operator-(Complex c2)
	{
		Complex res;
		res.real = real - c2.real;
		res.img = img - c2.img;
		return res;

	}
	Complex operator++(void)//prefix
	{
		real++;
		img++;
		return (*this);
	}
	Complex operator++(int)
	{
		Complex res;
		res.real = real++;
		res.img = img++;
		return  res;

	}
	/*Complex operator-(Complex c)
	{
		real = ((-1 * c.real));
		img = ((-1 * c.img));
		return  (*this);
	}*/
	void operator - (void)
	{
		real = -real;
		img = -img;
	}
	void display()
	{
		cout << "\nresult:" << real << "+i" << img << endl;
	}
	Complex operator,(Complex c)
	{
		Complex temp;
		temp.real = c.real;
		temp.img = c.img;
		return temp;
	}
	friend istream & operator>>(istream &in, Complex &s);
	friend ostream & operator<<(ostream &out, Complex &s);
	/*Complex operator=(Complex c)
	{
		Complex res;
		res.real = c.real;
		res.img = c.img;
		return res;
	}*/
};
istream & operator>>(istream &in, Complex &s)
{
	cout << "\n Enter Real and imaginary values : ";
	in >> s.real;
	in >> s.img;
	return in;
}
ostream & operator<<(ostream &out, Complex &s)
{
	out << "\nresult:" << s.real << "+i" << s.img << endl;;
	return out;
}
int main()
{
	Complex c1(2, 3), c2(4, 5),c4,c5;
	Complex c3;
	c3 = c1 + c2;
	c3.display();
	c3 = c2 - c1;
	c3.display();
	cin >> c4;
	cout << c4;
	c5 = (c1, c2, c3, c4);
	//c5 = c4;
	c5.display();
	/*c3 = c1++;
	c3.display();
	c3 = ++c1;
	c3.display();
	-c1;
	c1.display();*/
	cout << "\n";
	system("pause");
}