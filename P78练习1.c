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
	printf("��������������");
	scanf("%d%d",&x,&y);
	printf("���Լ����%d,��С��������%d\n",max(x,y),min(x,y));
}