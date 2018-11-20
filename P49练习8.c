#include<stdio.h>
main()
{
	double x=2.0,y=1.0,z,m,sum=0;
	int n;
	for(n=1;n<=20;n++)
	{z=x/y;
	 sum+=z;
	 m=x;
	 x=x+y;
	 y=m;
	 
	}
	printf("前20项之和为：%f",sum);
}