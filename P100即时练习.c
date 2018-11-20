#include<stdio.h>
void zhuanzhi(int b1[5],int b2[5],int b3[5],int b4[5])
{
	int b[4][5],c[5][4];
	int i,j;
	for(i=0;i<5;i++)
	{
		b[0][i]=b1[i];
		b[1][i]=b2[i];
		b[2][i]=b3[i];
		b[3][i]=b4[i];
	}
	printf("4个一维数组转换为二维数组输出如下：\n");
	for(j=0;j<4;j++)
	{	
		for(i=0;i<5;i++)
		{
			printf("%-3d",b[j][i]);
			c[i][j]=b[j][i];
		}
		printf("\n");
	}
	printf("转置后输出：\n");
	for(j=0;j<5;j++)
	{	
		for(i=0;i<4;i++)
			printf("%-3d",c[j][i]);
		printf("\n");
	}
}
void main()
{
	int i,a1[5]={1,2,3,4,5},a2[5]={6,7,8,9,10},a3[5]={11,12,13,14,15},a4[5]={16,17,18,19,20};
	printf("原4个一维数组为：\na1:1 2 3 4 5 \na2:6 7 8 9 10\na3:11 12 13 14 15\na4:16 17 18 19 20\n");
	zhuanzhi(a1,a2,a3,a4);
}