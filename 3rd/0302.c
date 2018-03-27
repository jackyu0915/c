#include<stdio.h>
main()
{
	int a,b,c,d,x,i,sum;
	x=1000;
	sum=0;
	i=1;
	for(x=1000;x<=9999;x++)
	{
			a=x%10;
	        b=(x/10)%10;
	        c=(x/100)%10;
	        d=x/1000;
	        if(a==d && b==c)
		    {
			    printf("%d ",x);
			    sum++;
				i++;
		    }
		    if(i==7)
		    {
				printf("\n");
				i=1;
		    }
		
	}
	printf("the sum of these numberis:%d\n",sum);
}