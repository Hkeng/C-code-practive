#include<stdio.h>
void sort(int *p1,int *p2,int *p3)
{
	int t,u,v;
	if(*p1>*p2&&*p1>*p3)
	{
		if(*p3>*p2)
		{
			t=*p2;
			*p2=*p3;
			*p3=t;
		}
	}
	if(*p2>*p1&&*p2>*p3)
	{
		if(*p3>*p1)
		{
			u=*p1;
			*p1=*p2;
			*p2=*p3;
			*p3=*p1;
		}
		else
		{
			u=*p1;
			*p1=*p2;
			*p2=u;
		}
	}
	if(*p3>*p1&&*p3>*p2)
	{
		if(*p2>*p1)
		{
			v=*p1;
			*p1=*p3;
			*p3=v;
		}
		else
		{
			v=*p1;
			*p1=*p3;
			*p3=*p2;
			*p2=v;
		}
	}
}
main()
{
	int a,b,c,*p1,*p2,*p3;
	puts("输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	p1=&a;p2=&b;p3=&c;
	sort(p1,p2,p3);
	printf("%d,%d,%d",*p1,*p2,*p3);
}