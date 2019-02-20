#include<iostream>
using namespace std;
template <class T,class T1=int>
int Lsearch(T *a, T ele,T1 n) {
	for (int i = 0; i < n; i++) {
		if (a[i] == ele) {
			return i;
		}
	}
	return 0;
}
template<>
int Lsearch(char *a, char ele, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] == ele) {
			return i;
		}
	}
	return 0;
}
int main() {
	int arrInt[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int ele = 5;
	int k = Lsearch(arrInt, ele, 10);
	cout << "int:" << k;
	float arrFloat[5] = { 1.1,2.2,3.3,4.4,5.5 };
	float elem = 3.3;
	int j = Lsearch(arrFloat, elem, 5.00f);
	cout << "float:" << j;
	char a[7] = {'s','u','s','h','m','a'};
	char eleme = 'h';
	int l = Lsearch<char>(a, eleme, 7);
	cout << "explicit specialization:" << l;
	getchar();
	return 0;
}