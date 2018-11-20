#include<stdio.h>
#define M 2
#define N 3
void input(int b[M][N])
{
	int i,j;
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&b[i][j]);
}
void output(int (*p)[N])
{
	int i,j;
	for(i=0;i<M;i++)
	{	for(j=0;j<N;j++)
			printf("%-5d",*(*(p+i)+j));//printf("%-5d",p[i][j]);
	printf("\n");}
}
void main()
{
	int a[M][N];
	input(a);
	output(a);
}