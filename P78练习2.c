#include<stdio.h>
#include<math.h>
void ssf(int n)
{
	int k,i,m=1;
	k=sqrt(n);
	for(i=2;i<=k;i++)
	{
		if(n%i!=0)
			continue;
			m=0;	
	}
	if(m==1)
	printf("%d是素数！",n);
	else
	printf("%d不是素数！",n);
}

void main()
{
	int x;
	printf("输入一个整数：");
	scanf("%d",&x);
	ssf(x);
}