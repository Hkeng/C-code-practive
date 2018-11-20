#include<stdio.h>
int max(int a,int b)
{
	int n,m;
		if(a>b)
	{m=a;n=b;}
	else 
	{m=b;n=a;}
	while(a%m!=0||b%m!=0)
	{m--;}
	return m;
}

int min(int a,int b)
{	
	int n;
		n=a*b/max(a,b);
	return n;
}
 
void main()
{
	int x,y;
	printf("输入两个整数：");
	scanf("%d%d",&x,&y);
	printf("最大公约数：%d,最小公倍数：%d\n",max(x,y),min(x,y));
}