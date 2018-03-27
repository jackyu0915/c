#include<stdio.h>
#define MIN2(a,b) a<b?a:b
#define MIN4(w,x,y,z) MIN2(w,x)<MIN2(y,z)?MIN2(w,x):MIN2(y,z)
main()
{
	int w,x,y,z,minv;
	printf("Please input four number\n");
	scanf("%d%d%d%d",&w,&x,&y,&z);
	minv=MIN4(w,x,y,z);
	printf("The minimum number is:%d\n",minv);
}