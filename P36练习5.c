#include<stdio.h>
void main()
{int x,y,z;
printf("输入三个整数:");
scanf("%d%d%d",&x,&y,&z);
if(x>y&&x>z)
{if(y>z)
printf("正序：%d,%d,%d\n",z,y,x);
else printf("正序：%d,%d,%d\n",y,z,x);}
if(y>x&&y>z)
{if(x>z)
printf("正序：%d,%d,%d\n",z,x,y);
else printf("正序：%d,%d,%d\n",x,z,y);}
if(z>x&&z>y)
{if(x>y)
printf("正序：%d,%d,%d\n",y,x,z);
else printf("正序：%d,%d,%d\n",x,y,z);}
}