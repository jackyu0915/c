#include <stdio.h>

main()
{
	int a=2,b=3;
	float x=3.5,y=2.5,z;

	z=(float)(a+b)/2+(int)x%(int)y;
	printf("%f/n",z);
}