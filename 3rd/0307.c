#include<stdio.h>

int fact(int n)
{
	int i,sum;
	sum=1;
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	return sum;
}
int com(int m,int r)
{
	int x;
	x=fact(m)/(fact(r)*fact(m-r));
	return x;
}
int main()
{
	int a;
	a=com(4,2);
	printf("C(4,2)=%d\n",a);
	a=com(6,4);
	printf("C(6,4)=%d\n",a);
	a=com(8,7);
	printf("C(8,7)=%d\n",a);
}