# include<stdio.h>
main()
{
int a;
float b,z;
printf("单价：");
scanf("%f",&b);
printf("数量：");
scanf("%d",&a);
z=a*b;
printf("金额：%.2f元\n",z);
}