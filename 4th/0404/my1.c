#include<stdio.h>
int fact(int);
main()
{
	int n,sum=0,i;
	printf("«Î ‰»În:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum+=fact(i);
	printf("sum=%d\n",sum);
}