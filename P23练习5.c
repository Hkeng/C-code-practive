#include<stdio.h>
main()
{
 int m,n,x,y,z;
printf("����һ����λ��:\n");
scanf("%d",&m);
n=m/100;
y=m%10;
x=m-n*100-y;
z=n+y*100+x;
printf("������Ϊ��%d\n",z);
}