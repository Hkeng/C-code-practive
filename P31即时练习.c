#include<stdio.h>
main()
{
char  x;
x=getchar();
if(x>='a'&&x<='z')
x=x-32;
printf("%c\n",x);
}
