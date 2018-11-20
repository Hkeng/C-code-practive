#include<stdio.h>
void main()
{
	int i,j,n,a[20][41];
	printf("输入行数n：\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<(2*n+1);j++)
		{
			if(j==n)
			{a[0][j]=1;}
			a[i][j]=0;
		}
	}
		for(i=1;i<n;i++)
		{
			for(j=1;j<2*n;j++)
				a[i][j]=a[i-1][j-1]+a[i-1][j+1];
		}
		printf("输出杨辉三角\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<(2*n+1);j++)
			{
				if(a[i][j]==0)
				{printf(" ");}
				if(a[i][j]!=0)
				{printf("%2d",a[i][j]);}
			}
			printf("\n");
		}
}