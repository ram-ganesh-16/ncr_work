#include<stdio.h>
enum operation{addition=1,subtraction,mul,division};
struct complex
{
	int real, img;
};
int main()
{
	enum operation p;
	complex a, b, c;
	//int d;
	printf("enter real and imaginary numbers:");
	scanf_s("%d%d", &a.real, &a.img);
	printf("enter real and imaginary numbers:");
	scanf_s("%d%d", &b.real, &b.img);
	printf("enter choice");
	scanf_s("%d", &p);
	switch (p)
	{
	case addition :	c.real = a.real + b.real;
			c.img = a.img + b.img;
			printf("\naddition of complex numbers is %d+i%d ", c.real, c.img);
		break;
	case subtraction:	c.real = a.real - b.real;
						c.img = a.img - b.img;
						printf("\n subtraction of complex numbers is %d-i%d ", c.real, c.img);
						break;
	case mul:			 c.real = a.real*b.real - a.img*b.img;
						c.img = a.img*b.real + a.real*b.img;
						printf("\n multiplication of complex numbers is %d*i%d ", c.real, c.img);
						break;
	/*case division:	c.real = a.real /b.real;
						c.img = a.img /b.img;
						printf("\n division of complex numbers is %d/i%d ", c.real, c.img);
						break;*/
	default:			printf("choose correct option");

	}
	getchar();
	getchar();
	return 0;
}