#include<stdio.h>
void main()
{int x,y,z;
printf("������������:");
scanf("%d%d%d",&x,&y,&z);
if(x>y&&x>z)
{if(y>z)
printf("����%d,%d,%d\n",z,y,x);
else printf("����%d,%d,%d\n",y,z,x);}
if(y>x&&y>z)
{if(x>z)
printf("����%d,%d,%d\n",z,x,y);
else printf("����%d,%d,%d\n",x,z,y);}
if(z>x&&z>y)
{if(x>y)
printf("����%d,%d,%d\n",y,x,z);
else printf("����%d,%d,%d\n",x,y,z);}
}