#include<stdio.h>
void main()
{int a;
printf("����ɼ���");
scanf("%d",&a);
if(a<0||a>100)
printf("����ĳɼ�����\n");
else
{if(a>0&&a<60)
printf("�ɼ��ȼ���E\n");
if(a>=60&&a<70)
printf("�ɼ��ȼ���D\n");
if(a>=70&&a<=80)
printf("�ɼ��ȼ���C\n");
if(a>=80&&a<90)
printf("�ɼ��ȼ���B\n");
if(a>=90&&a<=100)
printf("�ɼ��ȼ���A\n");
}
}