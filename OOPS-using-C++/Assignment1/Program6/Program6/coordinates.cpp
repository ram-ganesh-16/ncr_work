#include<iostream>
#include<math.h>
using namespace std;
class Point
{
	int x, y;
public:
	void get_coordinates()
	{
		cout << "\n Enter coordinates: ";
		cin >> x;
		cin >> y;
	}
	friend void distance(Point p1,Point p2);
};
void distance(Point p1, Point p2)
{
	float distance;
	distance = ((p2.x - p1.x)*(p2.x - p1.x)) + ((p2.y - p1.y)*(p2.y - p1.y));
	cout << "\n Distance between the said points: %.4f" << sqrt(distance)<<endl;
}
int main()
{
	Point p,p1, p2;
	p1.get_coordinates();
	p2.get_coordinates();
	distance(p1, p2);
	system("pause");
}