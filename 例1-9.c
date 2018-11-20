#include<stdio.h>
void main()
{
	int n,i,j,k,l,m,x;
	printf("本程序用于计算任一输入的正整数的各位数字之和,最大位数为万位\n");
	printf("输入一个正整数：");
	scanf("%d",&n);
	while(n>99999||n<0)
	{
		printf("超出范围！\n");
		printf("输入一个正整数：");
		scanf("%d",&n);
	}
	m=n/10000;
	l=n/1000-m*10;
	k=n/100-l*10-m*100;
	j=n/10-k*10-l*100-m*1000;
	i=n%10;
	x=i+j+k+l+m;
	printf("该正整数的各位数字之和为：%d\n",x);
}