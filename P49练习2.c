#include<stdio.h>
main()
{float x=100.0,y=100.0;
int n;
/*while(n<=10)
{x=x/2;y+=2*x;n++;}*/
for(n=1;n<=10;n++)
{x=x/2;
y+=2*x;
}
printf("�����߶�Ϊ%f",x);
printf("����%f��",y);
}