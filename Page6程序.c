#include<stdio.h>
int max_common_factor(int m,int n)
{
	int r;
	r=m%n;
	while(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	return n;
}

void main()
{
	int m,n;
	printf("输入除数：");
	scanf("%d",&m);
	printf("输入被除数：");
	scanf("%d",&n);
	printf("最大公因子为：%d\n",max_common_factor(m,n));
}