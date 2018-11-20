#include<stdio.h>
void main()
{
int a,b,z;
printf("输入两个整数:");
scanf("%d%d",&a,&b);
if(a>100&&b>100)
printf("输出数字为:%d\t%d\n",a,b);
else  {if(a>100&&b<100)
printf("输出数字为:%d\n",a);
else     {if(a<100&&b>100)
printf("输出数字为:%d\n",b);
else{if(a<100&&b<100)
z=a+b;
printf("输出数字为:%d\n",z);}
         } 
      }

} 