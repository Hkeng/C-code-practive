#include<stdio.h>
unsigned a,b,c;
void moveleft(unsigned a,int n)
{
	b=a<<(16-n);
	c=a>>n;
	c=b|c;
	printf("���ƺ����Ϊ��%o\n",c);
}
void moveright(unsigned a,int n)
{
	b=a>>(16-n);
	c=a<<n;
	c=b|c;
	printf("���ƺ����Ϊ��%o\n",c);
}
void main()
{
	int n;
	printf("����һ������");
	scanf("%o",&a);
	printf("����Ҫ�ƶ���λ��(+:<<  -:>>):");
	scanf("%d",&n);
	if(n>0)
		moveleft(a,n);
	else
		moveright(a,-n);
}