#include<stdio.h>
#define sum 100
int main()
{
	printf("sum is :%d",sum);
	#ifdef sum
	printf("sum is defined ");
	#endif 
		return 0;
	getchar();
	getchar();
	return 0;
}