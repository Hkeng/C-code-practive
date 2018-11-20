#include<stdio.h>
void main()
{int a,b,c,max;
printf("输入三个整数:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
max=a;
if(b>a&&b>c)
max=b;
if(c>a&&c>b)
max=c;
printf("输出数字:%d\n",max);


}