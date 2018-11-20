#include<stdio.h>
int A=0,B=0,C=0,D=0,E=0;
double pjf(int a,int b,int c,int d,int e)
{
	double z;
	z=(a+b+c+d+e)/5.0;
	return z;
}

void m(int a,int b,int c,int d,int e)
{
	double pa,pb,pc,pd,pe;
	pa=A/10.0;pb=B/10.0;pc=C/10.0;pd=D/10.0;pe=E/10.0;
	printf("每门课平均分为：%.2f %.2f %.2f %.2f %.2f",pa,pb,pc,pd,pe);
}
void main()
{
	int a,b,c,d,e,x,y;
		for(x=1;x<=10;x++)
		{	
		printf("输入第%d位学生的5科成绩：",x);
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		A+=a;B+=b;C+=c;D+=d;E+=e;
		printf("第%d位学生的平均分为%0.3f\n",x,pjf(a,b,c,d,e));
		}
	m(a,b,c,d,e);
}
