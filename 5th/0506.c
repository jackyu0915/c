#include<stdio.h>
#define N 4
#define M 5

int sumBorder(int a[N][M])
{
	int i = 0, j = 0,sum=0;
	for (i = 0; i < N ; i++)
	{
		for (j = 0; j < M ; j++)
		 if (i == 0 || i == N -1 || j == 0 || j == M - 1)
		 {
				sum = sum + a[i][j];
		 }
	}
	return sum;
}
main()
{
	int a[4][5] = { 3,6,4,6,1,8,3,1,3,2,4,7,1,2,7,2,9,5,3,3 };
	int s;
	s = sumBorder(a);
	printf("sum=%d\n", s);
}