#include <stdio.h>

main()
{
	 int a,n;

	a=12;
	a+=a;
	printf("%d\n",a);

	a=12;
	a-=2;
	printf("%d\n",a);

	a=12;
	a*=2+3;
	printf("%d\n",a);

	a=12;
	a/=a+a;
	printf("%d\n",a);

	a=12;
	n=5;
	a%=(n%=2);
	printf("%d\n",a);

	a=12;
	a+=a-=a*=a;
	printf("%d\n",a);

}