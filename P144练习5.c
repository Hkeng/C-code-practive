#include<stdio.h>
static float sum[4];
void aver1(float (*p)[5],int n)
{
	int i;
	float pjf,sum=0;
	for(i=0;i<n;i++)
		sum+=*(*(p+i));
	pjf=sum/n;
	printf("\n第一门课的平均分为：%.2f\n",pjf);
}

void bjg(float (*p)[5],int n,char *q[4])
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		k=sum[i]=0;
		for(j=0;j<5;j++)
		{
			sum[i]+=*(*(p+i)+j);
			if(*(*(p+i)+j)<60)
				k++;
		}
		if(k>=2)
		{
			printf("学号：%s\n",q[i]);
			printf("各科成绩:\t");
			for(j=0;j<5;j++)
				printf("%.1f\t",*(*(p+i)+j));
			printf("平均成绩：%.2f\n",sum[i]/5);
		}
	}
}

void search(float (*p)[5],int n,char *q[4])
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		t=0;
		for(j=0;j<5;j++)
		{
			if(*(*(p+i)+j)>85)
				t++;
			if(t==5||sum[i]/5>90)
			{
				printf("学号：%s\n",q[i]);
				printf("各科成绩:\t");
				for(j=0;j<5;j++)
					printf("%.1f\t",*(*(p+i)+j));
				printf("平均成绩：%.2f\n",sum[i]/5);
			}		
		}
	}	
}

void main()
{
	float cj[4][5],(*p)[5];
	int i,j;
	char xh[4][20],*q[4]={xh[0],xh[1],xh[2],xh[3]};
	p=cj;
	printf("输入4位学生的学号和5科成绩\n");
	for(i=0;i<4;i++)
	{
		scanf("%s",q[i]);
		for(j=0;j<5;j++)
			scanf("%f",*(p+i)+j);
	}
	aver1(p,4);
	printf("\n两门及以上不及格者：\n");
	bjg(p,4,q);
	printf("\n平均成绩在90分以上或全部课程成绩在85分以上的学生：\n");
	search(p,4,q);
}