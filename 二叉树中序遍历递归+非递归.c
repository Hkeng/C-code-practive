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
	printf("建立二叉树，输入结点对应的编号和值\n\n");
	printf("i,x = ");
	scanf("%d,%c",&i,&x);
	while(i != 0 && x != '$')
	  {
		q = (BTCHINALR *)malloc(sizeof(BTCHINALR));        /*建立一个新结点q*/
		q->data = x; 
		q->lchild = NULL;
		q->rchild = NULL;
		s[i] = q;                           /*q新结点地址存入s指针数组中*/
		if(i != 1)                          /*i = 1，q结点是根结点*/
		{
			j = i / 2;                        /*否则求q结点的双亲结点的编号j*/
			if(i % 2 == 0) 
				  s[j]->lchild = q;      /*q结点编号为偶数则挂在双亲结点j的左边*/
			else 
				s[j]->rchild = q;
		}           /*q结点编号为奇数则挂在双亲结点j的右边*/
	   printf("i,x = ");
	   scanf("%d,%c",&i,&x);
	}
	return  s[1];                          /*返回根结点地址*/
}


void inorder(BTCHINALR *bt)
/*中序遍历二叉树(递归算法)*/
{
	if(bt != NULL)
	{	
		inorder(bt->lchild);
		printf("%c  ",bt->data);
		inorder(bt->rchild);	
	}
}

void  inorder_notrecursive(BTCHINALR  *bt)
/*中序遍历二叉树(非递归算法)*/
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
		printf("\n中序遍历二叉树(递归按y键，非递归按n键):  ");
		scanf("%c",&ch);
		if(ch == 'y') 
			inorder(bt); 
		else 
			inorder_notrecursive(bt);
		printf("\n");
		printf("\n继续操作吗?(继续按1键，结束按0键):　　");
        scanf("%d",&i);
	}
	shifang(bt);
}