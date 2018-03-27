#include<stdio.h>

int gcd(int x,int y)
{
	int m,n,i;
	m=(x<y)?x:y;
	for(i=m;i>=2;i--)
	{
		if(x%i==0 && y%i==0)
		{
           return i;
		   break;
		}

	}
}
int main()
{
	int x,y;
	printf("please input two number(x,y):\n");
	scanf("%d,%d",&x,&y);
	x=gcd(x,y);
	printf("the biggest commom number of x and y is:%d\n",x);
}