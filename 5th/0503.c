#include<stdio.h>
#define N 6

void select_sort(int a[], int n)
{
	int i, j, p, t;
	for (i = 0; i < n - 1; i++)
	{
		p = i;
		for (j = i + 1; j < n; j++)
		
			if (a[j] < a[p])
				p = j;
		if (p != i)
			{
				t = a[p];
				a[p] = a[i];
				a[i] = t;
			}
	}
}
main()
{
	int a[N], i;
	printf("Please input %d number:\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	select_sort(a, N);
	printf("sorted:\n");
	for (i = 0; i < N; i++)
		printf("%d\t", a[i]);
	printf("\n");
}