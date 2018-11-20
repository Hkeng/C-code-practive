#include<stdio.h>
unsigned a,b,c;
void moveleft(unsigned a,int n)
{
	b=a<<(16-n);
	c=a>>n;
	c=b|c;
	printf("左移后的数为：%o\n",c);
}
void moveright(unsigned a,int n)
{
	b=a>>(16-n);
	c=a<<n;
	c=b|c;
	printf("右移后的数为：%o\n",c);
}
void main()
{
	int n;
	printf("输入一个数：");
	scanf("%o",&a);
	printf("输入要移动的位数(+:<<  -:>>):");
	scanf("%d",&n);
	if(n>0)
		moveleft(a,n);
	else
		moveright(a,-n);
}