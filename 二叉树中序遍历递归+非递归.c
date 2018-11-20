#include  <stdio.h>
#include  <malloc.h>

#define  DATATYPE2  char
typedef  struct  node1 
{  
	DATATYPE2  data;
	struct  node1  *lchild, *rchild;
}BTCHINALR;

BTCHINALR  * createbt( )
{
	BTCHINALR *q;
	struct node1 *s[50];
	int j,i;
	char x;
	printf("�������������������Ӧ�ı�ź�ֵ\n\n");
	printf("i,x = ");
	scanf("%d,%c",&i,&x);
	while(i != 0 && x != '$')
	  {
		q = (BTCHINALR *)malloc(sizeof(BTCHINALR));        /*����һ���½��q*/
		q->data = x; 
		q->lchild = NULL;
		q->rchild = NULL;
		s[i] = q;                           /*q�½���ַ����sָ��������*/
		if(i != 1)                          /*i = 1��q����Ǹ����*/
		{
			j = i / 2;                        /*������q����˫�׽��ı��j*/
			if(i % 2 == 0) 
				  s[j]->lchild = q;      /*q�����Ϊż�������˫�׽��j�����*/
			else 
				s[j]->rchild = q;
		}           /*q�����Ϊ���������˫�׽��j���ұ�*/
	   printf("i,x = ");
	   scanf("%d,%c",&i,&x);
	}
	return  s[1];                          /*���ظ�����ַ*/
}


void inorder(BTCHINALR *bt)
/*�������������(�ݹ��㷨)*/
{
	if(bt != NULL)
	{	
		inorder(bt->lchild);
		printf("%c  ",bt->data);
		inorder(bt->rchild);	
	}
}

void  inorder_notrecursive(BTCHINALR  *bt)
/*�������������(�ǵݹ��㷨)*/
{
	BTCHINALR  *q,  *s[20];
	int  top = 0;
	int  bool = 1;

	q = bt;
	do {
		while(q != NULL)
        {
			top ++; 
			s[top] = q;
			q = q->lchild; 
		}
		if(top == 0)  
			bool = 0;
		else 
		{ 
		  q = s[top];   
		  top --;
	      printf("%c  ",q->data); 
		  q = q->rchild;
		}
		}while(bool);
 }

void shifang(BTCHINALR *bt)
{
	BTCHINALR *p;
	p=bt;
	if(bt!=NULL)
	{
		shifang(p->lchild);
		shifang(p->rchild);
		free(p);
	}
}

main( )
{ 
	BTCHINALR  *bt;
	char ch;
	int i;

	bt = createbt(); i = 1;
	while(i)
	{
		printf("\n�������������(�ݹ鰴y�����ǵݹ鰴n��):  ");
		scanf("%c",&ch);
		if(ch == 'y') 
			inorder(bt); 
		else 
			inorder_notrecursive(bt);
		printf("\n");
		printf("\n����������?(������1����������0��):����");
        scanf("%d",&i);
	}
	shifang(bt);
}