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
	printf("����10��ѧ����������ݣ�\nѧ��     ����     3�Ƴɼ�\n");
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
	printf("����ѧ��3�ſ���ƽ���ɼ��ֱ�Ϊ��\n");
	for(i=0;i<10;i++)
	{
		printf("%d   %s   %.2f\n",stu->num,stu->name,aver[i]);
		if(max<aver[i])
		{
			max=aver[i];
			zg=&stu[i];
		}
	}
	printf("��߷ֵ�ѧ��������Ϊ��\n");
	printf("ѧ�ţ�%d   ������%s   3�ſεĳɼ���",zg->num,zg->name);
	for(j=0;j<3;j++)
		printf("%.f  ",zg->score[j]);
	printf("  ƽ��������%.2f\n",max);
}