#include<stdio.h>

double her(int n,float x)
{
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 2*x;
	}
	else
		return 2*x*her(n-1,x)-2*(n-1)*her(n-2,x);
}
int main()
{
	int n;
	double x,y;
	printf("ÇëÊäÈën,x\n");
	scanf("%d,%lf",&n,&x);
	y=her(n,x);
	printf("%.2lf\n",y);
}