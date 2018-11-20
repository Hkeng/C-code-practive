#include<stdio.h>
void main()
{
	void scan(int *a,int n);
	void chuli(int *a,int n);
	void print(int *a,int n);
	int s[10],*p=&s;
	printf("输入10个整数：\n");
	scan(p,10);
	chuli(p,10);
	printf("对换后输出为：\n");
	print(p,10);
	printf("\n");
}
void scan(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",a+i);
}
void chuli(int *a,int n)
{
	int min,max,i,j,k,t;
	min=max=0;
	for(i=0;i<n;i++)
	{
		if(*(a+min)>*(a+i))
			min=i;
		if(*(a+max)<*(a+i))
			max=i;
	}
	switch(min!=n-1)
	{
	case 1:{j=*(a+max);*(a+max)=*(a+n-1);*(a+n-1)=j;t=*(a+min);*(a+min)=*a;*a=t;};break;	
	case 0:{t=*(a+min);*(a+min)=*a;*a=t;j=*(a+max);*(a+max)=*(a+n-1);*(a+n-1)=j;};break;
	}
	if(*(a+n-1)<*a)
	{
		k=*(a+n-1);
		*(a+n-1)=*a;
		*a=k;
	}
}
void print(int *a,int n)
{
	int i;
	for(i=0;i<10;i++)
		printf("%3d",*(a+i));
}