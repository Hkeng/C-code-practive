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
	printf("���������");
	scanf("%d",&m);
	printf("���뱻������");
	scanf("%d",&n);
	printf("�������Ϊ��%d\n",max_common_factor(m,n));
}