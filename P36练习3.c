#include<stdio.h>
void main()
{
int a,b,z;
printf("������������:");
scanf("%d%d",&a,&b);
if(a>100&&b>100)
printf("�������Ϊ:%d\t%d\n",a,b);
else  {if(a>100&&b<100)
printf("�������Ϊ:%d\n",a);
else     {if(a<100&&b>100)
printf("�������Ϊ:%d\n",b);
else{if(a<100&&b<100)
z=a+b;
printf("�������Ϊ:%d\n",z);}
         } 
      }

} 