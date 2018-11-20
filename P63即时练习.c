#include<stdio.h>
#define jc(x,s) s=1;for(i=1;i<=x;i++) s=s*i
void main()
{
	int r,t,m,n,i;
	float j1,j2,j3,j4,j;
	printf("输入4个阶乘的值：");
	scanf("%d%d%d%d",&r,&t,&m,&n);
	jc(r,j1);
	jc(t,j2);
	jc(m,j3);
	jc(n,j4);
	j=(j1+j2)/(j3-j4);
	printf("%f\n",j);
}