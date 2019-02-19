#include<iostream>
using namespace std;
class Complex
{
	int real, img;
public:
	Complex()
	{
		real = 0;
		img = 0;
	}
	Complex(int val)
	{
		real = img = val;
	}
	Complex(int a, int b)
	{
		real = a;
		img = b;
	}

	Complex(Complex &c1, Complex &c2)
	{
		real = c1.real + c2.real;
		img = c1.img + c2.img;
	}
	Complex mul(Complex &c1, Complex &c2)
	{
		Complex temp;
		temp.real = c1.real*c2.real - c1.img*c2.img;
		temp.img = c1.real*c2.img + c1.img*c2.real;
		return temp;
	}
	void display_complex()
	{
		cout << "\n" << real << "+i" << img << endl;
	}

};

int main()
{
	Complex c1(1, 2), c2(2, 3);
	Complex c3, c4(c1, c2);
    c4.display_complex();
	c3 = c3.mul(c1, c2);
	c3.display_complex();
	system("pause");
	return 0;
}