#include<stdio.h>
#include<stdlib.h>
/*����ṹ�洢�ṹ����*/
typedef struct CLinkList
{	
	int data;
	struct CLinkList *next;
}node;


//��ʼ������

void ds_init(node **pNode)
{	
	int item;
	node *temp;
	node *target;
	printf("������ڵ��ֵ������0��ɳ�ʼ����\n");
	while(1)
	{	
		scanf("%d",&item);
		fflush(stdin);

		if(item==0)
			return;
		if(*pNode==NULL)     //ѭ������ֻ��һ���ڵ�
		{	
			*pNode=(node*)malloc(sizeof(struct CLinkList));
			if(!(*pNode))
				exit(0);
			(*pNode)->data=item;
			(*pNode)->next=*pNode;
		}
		else
		{	
			for(target=(*pNode);target->next!=(*pNode);target=target->next)   //�ҵ����һ���ڵ�
				;
			temp=(node*)malloc(sizeof(struct CLinkList));
			if(!temp)
				exit(0);

			temp->data=item;
			temp->next=*pNode;
			target->next=temp;
		}
	}
}


/*����ڵ�*/
void ds_insert(node **pNode,int i)
{	
	node *temp;
	node *target;
	node *p;
	int item;
	int j=1;

	printf("������Ҫ����ڵ��ֵ��");
	scanf("%d",&item);

	if(i==1)
	{	
		temp=(node*)malloc(sizeof(struct CLinkList));
		if(!temp)
			exit(0);
		temp->data=item;
		for(target=(*pNode);target->next!=(*pNode);target=target->next)   //�ҵ����һ���ڵ�
				;
		temp->next=(*pNode);
		target->next=temp;
		*pNode=temp;
	}
	else
	{	
		target=*pNode;
		for(;j<(i-1);j++)
		{	
			target=target->next;
		}
		temp=(node*)malloc(sizeof(struct CLinkList));
		if(!temp)
			exit(0);
		temp->data=item;
		p=target->next;
		target->next=temp;
		temp->next=p;

	}
}

/*ɾ���ڵ�*/
void ds_delete(node **pNode,int i)
{	
	node *target;
	node *temp;
	int j=1;
	if(i==1)
	{	
		for(target=(*pNode);target->next!=(*pNode);target=target->next)   //�ҵ����һ���ڵ�
				;
		temp=*pNode;
		*pNode=(*pNode)->next;
		target->next=*pNode;
		free(temp);

	}
	else
	{	
		target=*pNode;
		for(;j<(i-1);j++)
		{	
			target=target->next;
		}
		temp=target->next;
		target->next=temp->next;
		free(temp);
	}
}


/*���ؽڵ�����λ��*/
int ds_search(node *pNode,int elem)
{	
	node *target;
	int i=1;
	for(target=pNode;target->data!=elem&&target->next!=pNode;i++)
	{	
		target=target->next;
	}
	//if(target->next==pNode)
	//	return 0;
	//else
		return i;
	
}
/*����*/
void ds_traverse(node *pNode)
{	
	node *temp;
	temp=pNode;
	printf("�����е�Ԫ��\n");
	do
	{	
		printf("%-3d",temp->data);
	}while((temp=temp->next)!=pNode);
	printf("\n");

}

main()
{	
	node *pHead=NULL;
	char opp;
	int find;

	printf("1.��ʼ������\n\n2.����ڵ�\n\n3.ɾ���ڵ�\n\n4.���ؽڵ�λ��\n\n5.��������\n\n0.�˳�\n\n��ѡ����Ĳ���\n");


	while(opp!='0')
	{	
		scanf("%c",&opp);
		switch(opp)
		{	
			case '1':
				ds_init(&pHead);
				printf("\n");
				ds_traverse(pHead);
				break;
			case '2':
				printf("��������Ҫ����ڵ��λ�ã�");
				scanf("%d",&find);
				ds_insert(&pHead,find);
				printf("��λ��%d����ֵ��\n",find);
				ds_traverse(pHead);
				printf("\n");
				break;
			case '3':
				printf("��������Ҫɾ���Ľڵ��λ�ã�");
				scanf("%d",&find);
				ds_delete(&pHead,find);
				printf("\n");
				break;
			case '4':
				printf("��Ҫ����Ԫ�ؽڵ��ֵ��");
				scanf("%d",&find);
				printf("Ԫ��%d����λ�ã�%d\n",find,ds_search(pHead,find));
				printf("\n");
				break;
			case '5':
				ds_traverse(pHead);
				printf("\n");
				break;
			case '0':
				exit(0);
		}
	}
}