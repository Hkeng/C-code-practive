#include<stdio.h>
struct date
{
	int num;
	char name[20];
	float score[3];
};
void main()
{
	struct date stu[10],*zg;
	float aver[10],sum[10]={0},max;
	int i,j;
	printf("输入10个学生的相关数据：\n学号     姓名     3科成绩\n");
	for(i=0;i<10;i++)
	{
		scanf("%d%s",&stu[i].num,stu[i].name);
		for(j=0;j<3;j++)
		{
			scanf("%f",&stu[i].score[j]);
			sum[i]+=stu[i].score[j];
		}
		aver[i]=sum[i]/3;
	}
	max=aver[0];
	zg=&stu[0];
	printf("各个学生3门课总平均成绩分别为：\n");
	for(i=0;i<10;i++)
	{
		printf("%d   %s   %.2f\n",stu->num,stu->name,aver[i]);
		if(max<aver[i])
		{
			max=aver[i];
			zg=&stu[i];
		}
	}
	printf("最高分的学生的数据为：\n");
	printf("学号：%d   姓名：%s   3门课的成绩：",zg->num,zg->name);
	for(j=0;j<3;j++)
		printf("%.f  ",zg->score[j]);
	printf("  平均分数：%.2f\n",max);
}