#include<stdio.h>
#include<math.h>

main (void)
{
	double a,b,c,disc,x1,x2,p,q;
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	p=-b/(2*a);
	q=sqrt(disc)/(2*a);
	x1=p+q;
	x2=p-q;
	printf("x1=%6.2lf\n",x1);
	printf("x2=%6.2lf\n",x2);
	return 0;
}