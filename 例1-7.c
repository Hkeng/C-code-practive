#include<stdio.h>
#include<stdlib.h>
int sum(int **A,int n)
{
	int i,j,s=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			s=s+A[i][j];
	return s;
}

void main()
{
	int **p,n,i,j;
	printf("输入方阵的阶数：");
	scanf("%d",&n);
	printf("输入方阵元素\n");
	p=(int **)malloc(n*sizeof(int *));
	for(i=0;i<n;i++)
		p[i]=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]:",i+1,j+1);
			scanf("%d",&p[i][j]);
		}
	printf("该方阵所有元素之和为：%d\n",sum(p,n));
	for(i=0;i<n;i++)
		free(p[i]);
	free(p);
}