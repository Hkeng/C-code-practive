/*#include<stdio.h>
void main()
{
	int a[3],*p,i,j,t;
	p=a;
	printf("��������������\n");
	for(i=0;i<3;i++)
		scanf("%d",&p[i]);
	for(j=0;j<2;j++)
		for(i=0;i<2-j;i++)
			if(p[i]<p[i+1])
			{	
				t=p[i];
				p[i]=p[i+1];
				p[i+1]=t;
			}
	printf("��������Ϊ��\n");
	for(i=0;i<3;i++)
		printf("%-5d",p[i]);
}*/
#include<stdio.h>
void main()
{
	int a[3],*p,i,j,t;
	p=a;
	printf("��������������\n");
	for(i=0;i<3;i++)
		scanf("%d",p+i);
	for(j=0;j<2;j++)
	{	
		for(i=0;i<2-j;i++)
		{
			if(*(p+i)<*(p+i+1))
			{	
				t=*(p+i);
				*(p+i)=*(p+i+1);
				*(p+i+1)=t;
			}
		}
	}
	printf("��������Ϊ��\n");
	for(i=0;i<3;i++)
		printf("%-5d",*(p+i));
}
