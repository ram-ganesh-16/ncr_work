#include<stdio.h>
struct time
{
	int minutes, seconds, hrs;
};
int main()
{
	time t1;
	printf("Enter the value for hour:");
	scanf_s("%d", &t1.hrs);
	printf("Enter the value for minute:");
	scanf_s("%d", &t1.minutes);
	printf("Enter the value for seconds:");
	scanf_s("%d",&t1.seconds);
	printf("Time is %02dH:%02dM:%02dS \n",t1.hrs,t1.minutes,t1.seconds);
	getchar();
	getchar();
	return 0;
}