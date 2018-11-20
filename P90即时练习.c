#include<stdio.h>
void main()
{
	int i,j,k;
	long lSum;
	int c[3][2]={0};
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int b[4][2]={{1,2},{3,4},{5,6},{7,8}};
	/*嵌套循环计算结果矩阵（m*p）的每个元素*/
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
		{
			/*按照矩阵乘法的规则计算结果矩阵的i*j元素*/
			lSum=0;
			for(k=0;k<4;k++)
				lSum+=a[i][k]*b[k][j];
				c[i][j]=lSum;
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
			{	printf(" %5d",c[i][j]);}
			printf("\n");
		}
}