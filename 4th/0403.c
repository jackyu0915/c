#include<stdio.h>

void pr_rev(int x)
{
	if(x/10==0)
		printf("%d",x);
	else
	{
		int sum=1,m,i,x1;
		x1=x;
		while(x/10!=0)
		{
			sum=sum+1;
			x/=10;
		}
		printf("Î»Êý£º%d\n",sum);

		for(i=1;i<=sum;i++)
		{
			m=x1%10;
			x1=x1/10;
			printf("%d",m);
		}
	}
	printf("\n");
}

main()
{
	int x;
	printf("Please input a number\n");
	scanf("%d",&x);
	pr_rev(x);
}