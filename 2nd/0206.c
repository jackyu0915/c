#include<stdio.h>

main ()
{
    float x,y;
	printf ("Please enter the coordinates of a point(x,y)\n");
	scanf("%f,%f",&x,&y);
	if(x>0)
	{
		if(y>0)
			printf("1");
		if(y<0)
			printf("4");
	}
	if(x<0)
	{
		if(y>0)
			printf("2");
		if(y<0)
			printf("3");
	}
	if(x=0)
		printf("5");
	if(y=0)
		printf("5");
}