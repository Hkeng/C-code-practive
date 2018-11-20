#include<stdio.h>
void main()
{
	int a[10];
	int *p,i;
	for(p=a;p<(a+10);p++)
	{
		printf("p=%d,*p=",p);
		scanf("%d",p);
	}
	printf("\n");
	for(p=a;p<(a+10);p++)
		printf("p=%d,*p=%d\n",p,*p);
	printf("\n");
}