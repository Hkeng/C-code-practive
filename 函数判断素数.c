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
	printf("����һ��������");
	scanf("%d",&m);
	n=isprime(m);
	if(n==1)
	printf("�жϽ����%d������\n",m);
	else 
		printf("�жϽ����%d��ƽ��\n",m);
}