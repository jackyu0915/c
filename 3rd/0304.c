#include<stdio.h>
#include<math.h>

int sushu(int m)
{
	int i,k;
	k=(int)sqrt(m);
       for(i=2;i<=k;i++)
       {
		if(m%i==0)
			return 0;
	   }
	   if(i>k)
			return 1;
}
main()
{
	int n,x,y;
	for(n=90;n<=100;n++)
		for(x=3;x<n/2;x++)
		{
			if(sushu(x)==1)
			{
				y=n-x;
				if(sushu(y)==1)
					printf("%d=%d+%d\n",n,x,y);
			}
		}
}