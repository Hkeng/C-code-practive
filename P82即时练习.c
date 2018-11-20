#include<stdio.h>
void main()
{
	int a[10],i,A=0;
	float v;
	printf("ÊäÈë10¸öÊı×Ö\n");
	for(i=0;i<=9;i++)
	{scanf("%d",&a[i]);
	A+=a[i];
	}
	for(i=0;i<=9;i++)
	{
		v=A/10;
		if(a[i]>v)
		printf("%d\n",a[i]);
	}
}