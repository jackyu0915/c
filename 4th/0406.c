#include<stdio.h>
#include<math.h>
#define SQUARE(x) x*x
#define DISTANCE(a,b) sqrt(SQUARE(a)+SQUARE(b))

main()
{
	double x1,x2,y1,y2,dist;
	printf("please input two point x1,y1,x2,y2\n");
	scanf("%lf,%lf,%lf,%lf",&x1,&y1,&x2,&y2);
	dist=DISTANCE(abs(x1-x2),abs(y1-y2));
	printf("The distance of this two point:%lf\n",dist);

}