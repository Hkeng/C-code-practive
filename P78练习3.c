#include<stdio.h>
#include<math.h>
int shijinzhi(long i)
{
	int m,n,s=0;
	for(m=0;i!=0;m++)
	{
		n=i%10;
		s+=n*pow(2,m);
		i=i/10;
	}
	return s;
}

void main()
{
	long e;
	printf("输入一个二进制数：");
	scanf("%ld",&e);
	printf("二进制%ld转换成十进制为:%d\n",e,shijinzhi(e));
}