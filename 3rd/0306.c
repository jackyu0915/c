#include<stdio.h>
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
int main()
{
	
	int i,n,sum;
	printf("please int put a number:");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+fact(i);
		printf("%d\n",fact(i));
	}
	printf("sum=%d\n",sum);
}