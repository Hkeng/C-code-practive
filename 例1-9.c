#include<stdio.h>
void main()
{
	int n,i,j,k,l,m,x;
	printf("���������ڼ�����һ������������ĸ�λ����֮��,���λ��Ϊ��λ\n");
	printf("����һ����������");
	scanf("%d",&n);
	while(n>99999||n<0)
	{
		printf("������Χ��\n");
		printf("����һ����������");
		scanf("%d",&n);
	}
	m=n/10000;
	l=n/1000-m*10;
	k=n/100-l*10-m*100;
	j=n/10-k*10-l*100-m*1000;
	i=n%10;
	x=i+j+k+l+m;
	printf("���������ĸ�λ����֮��Ϊ��%d\n",x);
}