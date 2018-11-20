#include<stdio.h>
main()
{int x,y,z;
for(y=1;y<=9;y++)
{for(x=1;x<=y;x++)
{z=x*y;
printf("%d*%d=%-2d  ",x,y,z);}
printf("\n");
}
}
