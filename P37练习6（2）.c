#include<stdio.h>
void main()
{int a;
printf("输入成绩：");
scanf("%d",&a);
if(a<0||a>100)
printf("输入的成绩出错！\n");
else
{if(a>0&&a<60)
printf("成绩等级：E\n");
if(a>=60&&a<70)
printf("成绩等级：D\n");
if(a>=70&&a<=80)
printf("成绩等级：C\n");
if(a>=80&&a<90)
printf("成绩等级：B\n");
if(a>=90&&a<=100)
printf("成绩等级：A\n");
}
}