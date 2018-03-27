#include<stdio.h>
#include<math.h>
int isprime(int x)
{
	int i,k;
	k=(int)sqrt(x);
    for(i=2;i<=k;i++)
    {
		if(x%i==0)
			return 0;
	}
	   if(i>k)
			return 1;
}
int main()
{
	int x,i,o,sum;
	i=1;
	sum=0;
	for(x=100;x<=200;x++)
	{
		o=isprime(x);
		if(o==1)
		{
			printf("%d\t",x);
			i++;
			sum++;
		}
		if(i==9)
		{
			printf("\n");
			i=1;
		}
	}
	printf("\nthe sum of prime number is:%d\n",sum);
}