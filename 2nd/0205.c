#include<stdio.h>

main ()
{
	int x,y,z;
	scanf("Please input three number\n");
	scanf("%d%d%d",&x,&y,&z);
	if (x>y)
	{
		if(y>z)
			printf("%d%d%d",z,y,x);
		if(x<z)
			printf("%d%d%d",y,x,z);
		else
			printf("%d%d%d",y,z,x);
		
	}
	if(x<y)
	{
		if(y<z)
			printf("%d%d%d",x,y,z);
		if(x>z)
			printf("%d%d%d",z,x,y);
		else
			printf("%d%d%d",x,z,y);
	}
}