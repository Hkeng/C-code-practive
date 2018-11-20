#include<stdio.h>
void main()
{int s;
printf("输入成绩:");
scanf("%d",&s);
s=s>0&&s<=100?s/10:s;
switch(s)
{
case 10:
case  9:printf("成绩等级：A\n");break;
case  8:printf("成绩等级：B\n");break;
case  7:printf("成绩等级：C\n");break;
case  6:printf("成绩等级：D\n");break;
case  5:
case  4:
case  3:
case  2:
case  1:
case  0:printf("成绩等级：E\n");break;
default:printf("输入错误！\n");}
}