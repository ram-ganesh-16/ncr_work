#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int count(int n) {
	int count = 0;
	while (n != 0)
	{
		n /= 10;
		++count;
	}
	return count;
}

int rotate(int val, int b, int c) {
	int other;
	int res = 0;
	long int rem = val % (int)(pow(10, c - b));
	res = (rem*(int)pow(10, b)) + (val / (int)(pow(10, c - b)));
	return res;
}

int main() {
	printf("enter a number");
	int n = 0;
	scanf_s("%d", &n);
	printf("enter a number of digits to be rotated");
	int b = 0;
	scanf_s("%d", &b);
	int j = count(n);
	n = rotate(n, b, j);
	printf("\n%d rotated number", n);
	getchar();
	getchar();
	return 0;
}