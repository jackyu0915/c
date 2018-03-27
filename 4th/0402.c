#include<stdio.h>
void printTriangle(int n)
{
	int i=1,m=1,x=1;
	for(i=1;i<=n;i++)
	{
		for(m=0;m<=i;m++)
		{
			printf(" ");
		}
		for(x=1;x<=n-i+1;x++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("please input n\n");
	scanf("%d",&n);
	printTriangle(n);
}