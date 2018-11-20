#include<stdio.h>
#include"math.h"
int isprime(int x)
{
	int a,b,k;
	a=1;k=sqrt(x);
	for(b=2;b<=k;b++)
	{if(x%b!=0)
	continue;
	a=0;}
	return a;
}
void main()
{
	int m,n;
	printf("输入一个整数：");
	scanf("%d",&m);
	n=isprime(m);
	if(n==1)
	printf("判断结果：%d是素数\n",m);
	else 
		printf("判断结果：%d是平数\n",m);
}