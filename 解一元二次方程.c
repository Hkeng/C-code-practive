#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float det,x1,x2;
	printf("方程ax^2+bx+c=0\n");
	printf("输入a,b,c的值\n");
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	det=b*b-4*a*c;
	if(det<0)
		printf("方程%dx^2+%dx+%d=0d无解\n",a,b,c);
	else
	{
		if(det>0)
		{
			printf("方程%dx^2+%dx+c=0有两个不一样的根\n",a,b,c);
			x1=(-b+sqrt(det))/(2.0*a);
			x2=(-b-sqrt(det))/(2.0*a);
			printf("x1=%.4f,x2=%.4f\n",x1,x2);
		}
		if(det==0)
		{
			printf("方程%dx^2+%dx+c=0有一个根\n",a,b,c);
			x1=(-b+sqrt(det))/(2.0*a);
			printf("x=%.4f\n",x1);
		}
	}
}

