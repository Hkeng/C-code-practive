#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stu
{
	int num;
	char name[20];
	float score[3];
	float ave;
}student[5],students[5];
void main()
{
	FILE *fp;
	struct stu *s,*x;
	float sum[5]={0};
	int i,j;
	s=student;
	printf("����5��ѧ������Ϣ\n");
	printf("ѧ��	����	���ſεĳɼ�\n");
	for(i=0;i<5;i++,s++)
	{
		scanf("%d%s",&s->num,s->name);
		for(j=0;j<3;j++)
		{
			scanf("%f",&s->score[j]);
			sum[i]+=s->score[j];
		}
		s->ave=sum[i]/3;
	}
	s=student;
	x=students;
	if((fp=fopen("d:\\FILETEST\\stud.txt","rt+"))==NULL)
	{
		printf("Cannot open file strike any key exit!");
		getch();
		exit(1);
	}
	fwrite(s,sizeof(struct stu),5,fp);
	rewind(fp);
	fread(x,sizeof(struct stu),5,fp);
	printf("\nѧ��\t����\t���ſεĳɼ�\t\tƽ����\n");
	for(i=0;i<5;i++,x++)
	{
		printf("%d\t%s\t",x->num,x->name);
		for(j=0;j<3;j++)
			printf("%.1f  ",x->score[j]);
		printf("\t%0.1f",x->ave);
		printf("\n");
	}
	fclose(fp);
}