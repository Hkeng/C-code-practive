#include<stdio.h>
void main()
{
	int a[20],i,j,t;
	puts("����20�����֣�");
	for(i=0;i<20;i++)
		scanf("%d",&a[i]);
	for(j=0;j<19;j++)
		for(i=0;i<19-j;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	puts("��������Ϊ��");
	for(i=0;i<20;i++)
		printf("%-5d",a[i]);
	printf("\n");
}