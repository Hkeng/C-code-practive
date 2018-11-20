#include<stdio.h>
void main()
{int a,b,c,max;
printf("输入三个整数：");
scanf("%d%d%d",&a,&b,&c);
max=a>b?a:b;
max=max>c?max:c;
printf("最大的数为：%d",max);

}