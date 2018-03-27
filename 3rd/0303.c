#include<stdio.h>
main()
{
	int a,b,c,d,x,i,sum;
	x=1;
	sum=0;
	i=1;
	for(x=1;x<=599;x++)
	{
			a=x%10;
	        b=(x/10)%10;
	        c=x/100;
			d=x%3;
	        if(d==0&&(a==5||b==5||c==5))
		    {
			    printf("%d ",x);
			    sum++;
				i++;
		    }
		    if(i==9)
		    {
				printf("\n");
				i=1;
		    }
		
	}
	printf("\nthe sum of these numberis:%d\n",sum);
}