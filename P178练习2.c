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
	printf("������ѧ�ź�������");
	scanf("%d",&p1->num);
	gets(p1->name);
	printf("�������Ա�����䣺");
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
		printf("������ѧ�ź�������");
		scanf("%d",&p1->num);
		gets(p1->name);
		printf("�������Ա�����䣺");
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
	printf("\n���е��������£�\n");
	if(head==NULL)
		printf("����Ϊ�գ�\n");
	else
		printf("��%dλѧ��\n",n);
		do
		{
			printf("ѧ�ţ�%-10d",p->num);
			printf("������%-10s",p->name);
			printf("�Ա�%-5c���䣺%d\n",p->sex,p->age);
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
			printf("δ�ҵ��������ѧ����\n");
	
	}
	return head;
}
void main()
{
	struct student *head=0,*p1=0,*p2=0;
	int a,b;
	printf("����ѧ���������Ϣ��������0ʱΪ�������룩\n");
	head=creat();
	print(head);
	do{
		printf("\n����Ҫɾ����������Ϣ��");
		scanf("%d",&a);
		head=delet(a,head);
		print(head);
		printf("\n����ɾ���������ǽ�������\n0������\t1������\n����ѡ�");
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
