#include<stdio.h>
struct Date
{
	int d, m, y;
};
 const int monthDays[12] = { 31, 28, 31, 30, 31, 30,
31, 31, 30, 31, 30, 31 };
int count_Leap(Date d)
{
	int years = d.y;
	if (d.m <= 2)
		years--;
	return years / 4 - years / 100 + years / 400;
}
int Diff_dates(Date dt1, Date dt2)
{
	long int n1 = dt1.y * 365 + dt1.d;
	for (int i = 0; i<dt1.m - 1; i++)
		n1 += monthDays[i];
	n1 += count_Leap(dt1);

	long int n2 = dt2.y * 365 + dt2.d;
	for (int i = 0; i<dt2.m - 1; i++)
		n2 += monthDays[i];
	n2 += count_Leap(dt2);

	return (n2 - n1);
}
int main()
{
	Date d1, d2;
	printf("Enter the value for years:");
	scanf_s("%d", &d1.y);
	printf("Enter the value for months:");
	scanf_s("%d", &d1.m);
	printf("Enter the value for days:");
	scanf_s("%d", &d1.d);
	printf("Enter the value for years:");
	scanf_s("%d", &d2.y);
	printf("Enter the value for months:");
	scanf_s("%d", &d2.m);
	printf("Enter the value for days:");
	scanf_s("%d", &d2.d);
	printf("Difference between two dates is :%ld", Diff_dates(d1, d2));
	getchar();
	return 0;
}

