#include<iostream>
using namespace std;
class Complex
{
	float real;
	float img;
public:
	Complex()
	{
		real = 0;
		img = 0;
	}
	Complex(float r)
	{
		real = img = r;
	}
	Complex(float a, float b)
	{
		real = a;
		img = b;
	}
	void add_complex(Complex &c1, Complex &c2)
	{
		real = c1.real + c2.real;
		img = c1.img + c2.img;
		cout << real << "+" << img<<"i"<<endl;
	}
	void mul_complex(Complex &c1, Complex &c2)
	{
		cout << ((c1.real*c2.real) - (c1.img*c2.img)) << "+" << ((c1.real)*(c2.img) + (c1.img)*(c2.real))<<"i";
	}
};
void main()
{
	Complex c1(9, 5), c2(4, 6), c3;
	c3.add_complex(c1, c2);
	c3.mul_complex(c1, c2);
}
