#include<stdio.h>
main()
{
	int x,y,n,m;
	printf("����2��������\n");
	scanf("%d%d",&x,&y);
	if(x>y)
	{m=x;n=y;}
	else 
	{m=y;n=x;}
	while(x%m!=0||y%m!=0)
	{m--;}
	while(n%x!=0||n%y!=0)
	{n++;}
	printf("���Լ����%d	��С��������%d\n",m,n);
}