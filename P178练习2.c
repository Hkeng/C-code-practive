#include<stdio.h>
#include<stdlib.h>
#define NULL 0
struct student
{
	int num;
	char name[20];
	char sex;
	int age;
	struct student *next;
};
int n;
struct student *creat()
{
	struct student *head=0,*p1=0,*p2=0;
	n=0;
	p1=p2=(struct student *)malloc(sizeof(struct student));
	printf("请输入学号和姓名：");
	scanf("%d",&p1->num);
	gets(p1->name);
	printf("请输入性别和年龄：");
	p1->sex=getchar();
	scanf("%d",&p1->age);
	while(p1->num!=0)
	{
		n=n+1;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(sizeof(struct student));
		printf("请输入学号和姓名：");
		scanf("%d",&p1->num);
		gets(p1->name);
		printf("请输入性别和年龄：");
		p1->sex=getchar();
		scanf("%d",&p1->age);
	}
	p2->next=NULL;
	free(p1);
	return head;
}
void print(struct student *head)
{
	struct student *p;
	p=head;
	printf("\n现有的数据如下：\n");
	if(head==NULL)
		printf("数据为空！\n");
	else
		printf("共%d位学生\n",n);
		do
		{
			printf("学号：%-10d",p->num);
			printf("姓名：%-10s",p->name);
			printf("性别：%-5c年龄：%d\n",p->sex,p->age);
			p=p->next;
		}while(p!=NULL);
}
struct student *delet(int a,struct student *head)
{
	struct student *p1=0,*p2=0;
	p1=head;
	if(head!=NULL)
	{
		while((a!=p1->age)&&(p1->next!=NULL))
		{
			p2=p1;
			p1=p2->next;
		}
		if(a==p1->age)
		{
			if(p1==head)
				head=p1->next;
			else
				p2->next=p1->next;
			free(p1);
			n=n-1;
			if(p1->next!=NULL)
				head=delet(a,head);
		}
		else
			printf("未找到该年龄的学生。\n");
	
	}
	return head;
}
void main()
{
	struct student *head=0,*p1=0,*p2=0;
	int a,b;
	printf("输入学生的相关信息（当输入0时为结束输入）\n");
	head=creat();
	print(head);
	do{
		printf("\n输入要删除的年龄信息：");
		scanf("%d",&a);
		head=delet(a,head);
		print(head);
		printf("\n继续删除操作还是结束操作\n0、结束\t1、继续\n输入选项：");
		scanf("%d",&b);
	}while(b!=0);
	p1=head;
	while(p1!=NULL)
	{
		p2=p1;
		p1=p2->next;
		free(p2);
	}
	free(p1);
}
