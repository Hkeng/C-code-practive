#include<stdio.h>
#define N 3
void main()
{
	int a[N][N],i,j,sum=0;
	printf("输入矩阵内的元素\n");
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			if(i==j||i+j==N-1)
		sum+=a[i][j];
	printf("矩阵对角线元素之和为：%d\n",sum);
}
