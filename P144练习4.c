#include<stdio.h>
void zz(int (*q)[3],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=1;j<3;j++)
		{t=*(*(q+i)+j);
		*(*(q+i)+j)=*(*(q+j)+i);
		*(*(q+j)+i)=t;}
}
void main()
{
	int a[3][3],i,j,(*p)[3];
	printf("输入3X3矩阵内各个元素\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	p=a;
	zz(p,3);
	printf("矩阵转置后输出\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%3d",*(*(p+i)+j));
		printf("\n");
	}
}