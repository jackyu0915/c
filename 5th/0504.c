#include<stdio.h>

int gcd(int i,int a[], int b[])
{
	int r;
	while ((r = a[i]%b[i]) != 0)
	{
		a[i] = b[i];
		b[i] = r;
	}
	return(b[i]);
}


main()
{
	int a[8] = { 24,1007,956,705,574,371,416,35 };
	int b[8] = { 60,631,772,201,262,763,1000,77 };
	int i;
	int c[8];
	for (i = 0; i <= 7; i++)
	{
		c[i] = gcd(i, a, b);
	}
	for (i = 0; i <= 7; i++)
	{
		printf("%d\t", c[i]);
	}

}