#include<stdio.h>
#define PI 3.14
main()
{
int h;
float r,c,s1,s2,v1,v2;
printf("半径:");
scanf("%f",&r);
printf("高:");
scanf("%d",&h);
c=2*PI*r;
s1=PI*(r*r);
s2=4*PI*(r*r);
v1=4.0/3*PI*(r*r*r);
v2=PI*(r*r)*h;
printf("圆周长c=%-6.2f\n圆面积s1=%-6.2f\n圆球表面积s2=%-6.2f\n圆球体积v1=%-6.2f\n圆柱体积v2=%-6.2f\n",c,s1,s2,v1,v2);
} 