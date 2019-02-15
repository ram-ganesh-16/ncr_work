#include<stdio.h>
void reverse(int val)
{
	int k = val;
	int l = val;
	int res = k & 0x00FF;
	res = res << 8;
	int res1 = l & 0xFF00;
	res1 = res1 >> 8;
	printf("rev value is :%x", res1 | res);
	getchar();
}
void rotate(int val)
{
	int l = val;
	int h = val;
	l = l & 0x000F;
	int i = l << 12;
	h= h >> 4;
	int j = h & 0x0FFF;
	printf("%x", h |i );
	getchar();
}
int main()
{
	int val = 0xCAFE;
	int i,c = 0;
	for (i = 1; i <= 4; i++)
	{
		if ((val >> i) & 1)
			c++;
	}
	if (c >= 3)
		printf("yes it has atleast 3 bits of 1\n");
	else
		printf("no\n");
	reverse(val);
	rotate(val);
	getchar();
	return 0;

}