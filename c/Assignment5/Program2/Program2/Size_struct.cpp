#include<stdio.h>
struct student
{
	int roll_number;
	char name[4];
};
union stu
{
	int roll_number;
	char name[4];
};
	
int main()
{
	printf("size of struct is %d bytes \n", sizeof(struct student));
	printf("size of union is %d bytes", sizeof(union stu));
	getchar();
	return 0;
}