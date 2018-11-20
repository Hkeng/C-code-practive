#include<stdio.h>
double pow(int a,int b)
{double z=1;
	int i;
	if(b==0)
		z=1;
	else if(b<0)
	{for(i=1;i<=-b;i++)
	{z/=a;}}
	else 
	{for(i=1;i<=b;i++)
	{z*=a;}}
	return z;
}

void main()
{double m;
	int x,y;
	printf("输入底数x和指数y：");
	scanf("%d%d",&x,&y);
	m=pow(x,y);
	printf("x^y=%f",m);
}