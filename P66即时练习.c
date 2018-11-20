#include<stdio.h>
int i,j;
void input(char *xm[10],float a[10],float b[10],float c[10])
{
	for(i=0;i<10;i++)
	{
		printf("姓名：");
		scanf("%s",xm[i]);
		printf("3科成绩：");
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
		printf("姓名:%s\n",xm[i]);
		printf("3科成绩分别为:%.f %.f %.f\t",a[i],b[i],c[i]);
		printf("总分:%.2f\n",sum[i]);
	}
}
void main()
{
	char name[10][20],*xm[10];
	float a[10],b[10],c[10],sum[10]={0};
	for(i=0;i<10;i++)
	{xm[i]=name[i];}
	printf("输入10个学生的姓名和3科成绩\n");
	input(xm,a,b,c);
	for(i=0;i<10;i++)
		sum[i]=a[i]+b[i]+c[i];
	sort(xm,a,b,c,sum);
	printf("\n按总分的从高到低排序后输出为\n");
	output(xm,a,b,c,sum);
}
