#include<stdio.h>
int isoushu(int a)
{
	int m;
	if(a%2!=0)
		m=0;
	else m=1;
	return m;
}

void main()
{
	int x,y;
	printf("输入整数：");
	scanf("%d",&x);
	y=isoushu(x);
	if(y==1)
		printf("%d是偶数。",x);
	else
		printf("%d是单数。",x);
}