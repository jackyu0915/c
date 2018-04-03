#include<stdio.h>
#define N 4
void fsum(int a[N][N],int i,int j,int b[2])
{
	b[0] = b[1] = 0;
	int x = 0,y=0;
	for (x = 0; x < N; x++)
	{
		b[0] = a[x][j]+b[0];
	}
	for (y = 0; y < N; y++)
	{
		b[1] = a[i][y]+b[1];
	}
}
main()
{
	int a[N][N] = { 3,6,4,6,8,3,1,3,4,7,1,2,2,9,5,3 };
	int i, j;
	int b[2];
	printf("Please input i,j\n");
	scanf("%d%d", &i, &j);
	fsum(a, i, j, b);
	printf("b[0]=%d,b[1]=%d\n", b[0], b[1]);
}