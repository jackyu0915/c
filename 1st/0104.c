#include <stdio.h>

main()
{
	int i=7,j=9,m,n;

	m=++i;
	n=j++;
	printf("%d,%d,%d,%d\n",i,j,m,n);
}