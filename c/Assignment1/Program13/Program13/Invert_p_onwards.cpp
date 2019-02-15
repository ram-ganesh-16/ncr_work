#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int rotateponwards(int n, int p, int b) {
	int num = ((1 << p) - 1) ^ ((1 << (b - 1)) - 1);
	return (n ^ num);
}
int main() {
	printf("Enter a number:");
	int n;
	scanf_s("%d", &n);
	printf("Enter a position:");
	int p;
	scanf_s("%d", &p);
	printf("Enter a number of bits:");
	int b;
	scanf_s("%d", &b);
	int k = rotateponwards(n, p, b);
	printf("\n%d inverted result ", k);
	getchar();
	getchar();
	return 0;
}