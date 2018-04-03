#include<stdio.h>
#include<time.h>
#include <stdlib.h>
main()
{
	int  a[10000];
	int i, sma=0, big=0,n;
	srand(time(NULL));
	printf("please input the number n\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a[i] = rand() % 10 +1;
		if (a[i] <= 5)
			sma++;
		else
			big++;
	}
	printf("The number from 1 to 5:%d\n", sma);
	printf("the number from 6 to 10:%d\n", big);
}