#include<iostream>
using namespace std;
class time
{
	int hrs, ms, secs;
public:
	time()
	{
		hrs = 0;
		ms = 0;
		secs = 0;
	}
	time(int h, int m, int s)
	{
		hrs = h;
		ms = m;
		secs = s;
	}
	time add(time &t1)
	{
		time t3;
		int min, sec;
		t3.hrs = t1.hrs + hrs;
		min = t1.ms + ms;
		if (min >= 60)
		{
			t3.hrs++;
			t3.ms = min - 60;
		}
		sec = t1.secs + secs;
		if (sec >= 60)
		{
			t3.ms++;
			t3.secs = sec - 60;
		}
		return t3;
	}
	void dispaly()
	{
		cout << hrs << ":" << ms << ":" << secs;
	}
};
int main()
{
	time t1(1, 35, 30), t2(1, 30, 30), t3;
	t3 = t1.add(t2);
	t3.dispaly();
	getchar();
	return 0;
}