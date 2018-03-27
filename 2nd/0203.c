#include<stdio.h>
#include<ctype.h>

main ()
{
	char a,b,c;
	printf("Please enter three letters\n");
	scanf("%c,%c,%c",&a,&b,&c);
	a=tolower(a);
	b=tolower(b);
	c=tolower(c);
	printf("%c%c%c",a,b,c);
}