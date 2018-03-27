#include<stdio.h>
#include<math.h>
main()
{
	double pi,x;
	int n,y;
	n=1;
	pi=0;
	for(n=1;;n++)
	{
		y=pow(-1,n+1);
		x=4*(double)(y)/(2*n-1);
		pi=pi+x;
		if(fabs(x)<(1e-6)) break;
		
	}
	printf("pi=%f\n",pi);
}