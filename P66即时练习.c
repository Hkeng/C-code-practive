#include<stdio.h>
int i,j;
void input(char *xm[10],float a[10],float b[10],float c[10])
{
	for(i=0;i<10;i++)
	{
		printf("������");
		scanf("%s",xm[i]);
		printf("3�Ƴɼ���");
		scanf("%f %f %f",&a[i],&b[i],&c[i]);
	}
}
void sort(char *xm[10],float a[10],float b[10],float c[10],float sum[10])
{
	int k;
	char *n;
	float A,B,C,s;
	for(i=0;i<9;i++)
	{
		k=i;
		for(j=i+1;j<10;j++)
			if(sum[k]<sum[j])
				k=j;
		if(k!=i)
		{
			s=sum[i];sum[i]=sum[k];sum[k]=s;
			n=xm[i];xm[i]=xm[k];xm[k]=n;
			A=a[i];a[i]=a[k];a[k]=A;
			B=b[i];b[i]=b[k];b[k]=B;
			C=c[i];c[i]=c[k];c[k]=C;
		}
	}
}
void output(char *xm[10],float a[10],float b[10],float c[10],float sum[10])
{
	for(i=0;i<10;i++)
	{
		printf("����:%s\n",xm[i]);
		printf("3�Ƴɼ��ֱ�Ϊ:%.f %.f %.f\t",a[i],b[i],c[i]);
		printf("�ܷ�:%.2f\n",sum[i]);
	}
}
void main()
{
	char name[10][20],*xm[10];
	float a[10],b[10],c[10],sum[10]={0};
	for(i=0;i<10;i++)
	{xm[i]=name[i];}
	printf("����10��ѧ����������3�Ƴɼ�\n");
	input(xm,a,b,c);
	for(i=0;i<10;i++)
		sum[i]=a[i]+b[i]+c[i];
	sort(xm,a,b,c,sum);
	printf("\n���ֵܷĴӸߵ�����������Ϊ\n");
	output(xm,a,b,c,sum);
}
