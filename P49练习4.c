#include<stdio.h>
main()
{
	int x,y=1;
	long s=0;
	for(x=1;x<=20;x++)
		{y*=x;
		s+=y;}
	printf("1!+2!+3!+бн+19!+20!=%ld\n",s);
}