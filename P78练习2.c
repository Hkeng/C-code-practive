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
	printf("%d��������",n);
	else
	printf("%d����������",n);
}

void main()
{
	int x;
	printf("����һ��������");
	scanf("%d",&x);
	ssf(x);
}