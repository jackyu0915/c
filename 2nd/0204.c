#include<stdio.h>
#include<ctype.h>

main ()
{
	float x,y;
	scanf("Please input the number of x\n");
	scanf("%f",&x);
	if(x<=2.5)
		y=1.5*x+7.5;
	else
		y=9.32*x-34.2;
	printf("%f\n",y);
}