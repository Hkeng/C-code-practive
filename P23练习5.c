#include<stdio.h>
main()
{
 int m,n,x,y,z;
printf("输入一个三位数:\n");
scanf("%d",&m);
n=m/100;
y=m%10;
x=m-n*100-y;
z=n+y*100+x;
printf("反序数为：%d\n",z);
}