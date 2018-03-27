#include<stdio.h>
#include<math.h>

main ()
{
	float x1,y1,x2,y22,dist;
	printf("请依次输入两个点的横坐标和纵坐标,中间用逗号隔开\n");
	scanf("%f,%f,%f,%f",&x1,&y1,&x2,&y22);
	dist=sqrt((x1-x2)*(x1-x2)+(y1-y22)*(y1-y22));
	printf("The distance of the two point=%.2lf",dist);


}