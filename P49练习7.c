#include<stdio.h>
main()
{
	int x,y;
	for(x=1;x<=4;x++)
	{for(y=1;y<=4-x;y++)
		{printf(" ");}
	 for(y=1;y<=2*x-1;y++)
		{printf("*");}
		 printf("\n");
	}
	for(x=5;x<=7;x++)
	{for(y=1;y<=x-4;y++)
		{printf(" ");}
	 for(y=1;y<=x-3*(x-5);y++)
		{printf("*");}
		printf("\n");
	}
}