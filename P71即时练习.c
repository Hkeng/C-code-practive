#include<stdio.h>
double pow(float a,int b)
{
	double c;
	if (b==0)
		c=1;
	else if(b<0)
		c=1.0/(pow(a,-b-1)*a);
	else
		c=pow(a,b-1)*a;
	return c;
}

void main()
{
	float x;double z;
	int y;
	printf("输入底数x和指数y\n");
	scanf("%f%d",&x,&y);
	z=pow(x,y);
	printf("%f^%d=%f\n",x,y,z);
}