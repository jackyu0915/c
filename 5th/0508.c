#include<stdio.h>
int main()
{
	char ch;
	printf("ÇëÊäÈëÒ»´®×Ö·û´®\n");
	int sz = 0,dx=0,xx=0,kg=0,qt=0;
	while ((ch = getchar()) != '\n')
	{
		if (ch >= '0'&&ch <= '9')
			sz++;
		else if (ch >= 'a'&&ch <= 'z')
			xx++;
		else if (ch >= 'A'&&ch <= 'Z')
			dx++;
		else if (ch == ' ')
			kg++;
		else
			qt++;

	}
	printf("sz=%d,dx=%d,xx=%d,kg=%d,qt=%d\n", sz,dx,xx,kg,qt);
	return 0;
}