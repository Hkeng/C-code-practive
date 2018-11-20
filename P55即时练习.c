#include<stdio.h>
int max(int x,int y,int z)
{
	if(x>y&&x>z)
		return x;
	else if(y>x&&y>z)
		return y;
	else return z;
}

void main()
{
	int a,b,c;
	printf("输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	printf("最大的数为：%d",max(a,b,c));
}