#include<stdio.h>
#define N 7
void output(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}

int  deleteElement(int a[], int n, int x)
{
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] != x)
		{
			a[j] = a[i];
			j++;
		}
	}
	return j;
}

main()
{
	int a[N] = { 9,5,6,7,8,5,7 }, x, n;
	n = N;
	output(a, n);
	printf("Please input x(the numbeer you want to delete)\n");
	scanf("%d", &x);
	n=deleteElement(a, n, x);
	printf("n=%d\n", n);
	output(a, n);

}