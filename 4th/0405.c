#include<stdio.h>
int fun(int a);
int main()
{
	int a=2,i;
	for(i=0;i<3;i++)
		printf("%4d",fun(a));
}
int fun(int a)
{
	int b=0;
	static int c=3;
	b++;
	c++;
	return(a+b+c);
}