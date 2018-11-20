#include<stdio.h>
void main()
{
	int *p,i,a[10];
	p=a;
	printf("%d\n",p);
	for(i=0;i<10;i++)
		scanf("%d",p++);
	printf("%d\n",p);
	p=a;
	for(i=0;i<10;i++,p++)
		printf("p=%d,*p=%d\n",p,*p);
}