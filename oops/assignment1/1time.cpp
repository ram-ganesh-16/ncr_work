#include<iostream>
using namespace std;
class time
{
	int hr;
	int min;
	int sec;
public:
	time()
	{
		hr= 0;
		min = 0;
		sec = 0;
	}
	time(int h, int m, int s)
	{
		hr = h;
		min = m;
		sec = s;
	}
	void dis_time()
	{
		cout << hr << ":" << min << ":" << sec;

	}
	void add_time(time &t1, time &t2)
	{
		hr = t1.hr + t2.hr;
		min = t1.min + t2.min;
		sec = t1.sec + t2.sec;
		if (sec >= 60)
		{
			min++;
			sec = sec - 60;
		}
		if (min >= 60)
		{
			hr++;
			min = min - 60;
		}
		if (hr > 23)
		{
			hr = 0;
		}

	}
};
void main()
{
	time t1(10, 20, 30), t2(10, 10, 40), t3;
	t3.add_time(t1, t2);
	t3.dis_time();
}
