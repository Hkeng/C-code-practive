#include<stdio.h>
void main()
{int s;
printf("����ɼ�:");
scanf("%d",&s);
s=s>0&&s<=100?s/10:s;
switch(s)
{
case 10:
case  9:printf("�ɼ��ȼ���A\n");break;
case  8:printf("�ɼ��ȼ���B\n");break;
case  7:printf("�ɼ��ȼ���C\n");break;
case  6:printf("�ɼ��ȼ���D\n");break;
case  5:
case  4:
case  3:
case  2:
case  1:
case  0:printf("�ɼ��ȼ���E\n");break;
default:printf("�������\n");}
}