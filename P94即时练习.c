#include<stdio.h>
void main()
{
	char c[100][100];
	int i,j,n;
	printf("����߳�����n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=' ';
			c[0][j]=c[n-1][j]=c[i][0]=c[i][n-1]='*';
		}
	}
	printf("���������ͼ��\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%2c",c[i][j]);
		printf("\n");
	}
}