#include<iostream>
using namespace std;
class Polar
{
	float r, th;
public:
	static int obj_count;
	Polar(int radius,int theta)
	{
		r = radius;
		th = theta;
		obj_count++;
	}
};
int Polar::obj_count = 0;
int main()
{
	Polar p(5.5, 3.14 / 2);
	Polar p1(5.0, 3.14 / 2);
	Polar p2(5.5, 3.14 / 2);
	cout << "\n Number of active objects in the cls are: " << Polar::obj_count << endl;
	system("pause");
	return 0;
}