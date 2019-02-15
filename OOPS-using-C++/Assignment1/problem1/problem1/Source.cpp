#include<iostream>
using namespace std;
class Tim{
	public:
		int sec;
		int hr;
		int min;
		Tim() {
			sec = 0;
			min = 0;
			hr = 0;
		}
		Tim(int a, int b, int c) {
			hr= a;
			min = b;
			sec = c;
		}
		void display() {
			cout << hr << ":" << min << ":" << sec;
		}
		Tim add(Tim t1, Tim t2) {
			Tim t3;
			t3.hr = 0;
			t3.min = 0;
			t3.sec = 0;
			if ((t2.sec + t1.sec) > 60) {
				t3.min += 1;
				t3.sec = (t2.sec + t1.sec)-60;
			}
			else {
				t3.sec = t2.sec + t1.sec;
			}
			if ((t2.min + t1.min) > 60) {
				t3.hr += 1;
				t3.min += (t2.min + t1.min)-60;
			}
			else {
				t3.min += t2.min + t1.min;
			}
			if ((t2.hr + t1.hr) > 24) {
				t3.hr+= 24 - (t2.hr + t1.hr);
			}
			else {
				t3.hr += t2.hr + t1.hr;
			}
			return t3;
		}
};
int main() {
	Tim t1(11,12,13);
	Tim t2(11,11,65);
	Tim t3;
	t3 = t3.add(t1, t2);
	t3.display();
	getchar();
	return 0;
}