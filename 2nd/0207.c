#include<stdio.h>
#include<ctype.h>
main ()
{
    char x;
	printf("«Î ‰»Îøº∫Àµ»º∂£®A~E£©\n");
	scanf("%c",&x);
	x=toupper(x);
	if(x==65)
		printf("90~100\n");
	
	if(x==66)
		printf("80~89\n");
	
	if(x==67)
		printf("70~79\n");

	if(x==68)
		printf("60~69\n");
	
	if(x==69)
		printf("0~59\n");
}