#include<stdio.h>
void main()
{
int x,y,z,t;
printf("输入三个数字：");
scanf("%d%d%d",&x,&y,&z);
if(x>y)
t=x,x=y,y=t;
if(x>z)
t=z,z=x,x=t;
if(y>z)
t=y,y=z,z=t;
printf("%d,%d,%d",x,y,z);
}
