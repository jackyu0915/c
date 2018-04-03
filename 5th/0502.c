#include<stdio.h>
#include<math.h>

double input(int n,double a[])
{
	int i;
	for (i = 1; i <= n; i++)
	{
		scanf("%lf", &a[i]);
	}
}

double aver(int n,double a[])
{
	int i;
	double sum=0;
	for (i = 1; i <= n; i++)
	{
		sum = sum + a[i];
	}
	return sum/n;
}
double stddev(int n,double a[])
{
	int i;
	double s=0,m;
	m = aver(n, a);
	for (i = 1; i <= n; i++)
	{
		s = (a[i] -m)*(a[i]-m) + s;
	}
	s = sqrt(s / n);
	return s;
}
main()
{
	double a[1000];
	int n;
	printf("please input the number n:\n");
	scanf("%d", &n);
	input(n,a);
	stddev(n, a);
	printf("The standard deviation=%lf\n", stddev(n, a));
}