#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int largest(int *array,int n)
{
	int currlarge,i;
	currlarge=array[0];
	for(i=0;i<n;i++)
		if(array[i]>currlarge)
			currlarge=array[i];
	return currlarge;
}
void main()
{
	int *a;
	int i,j,n;
	printf("�������鳤��:");
	scanf("%d",&i);
	printf("��������Ԫ�أ�\n");
	a=(int *)malloc(sizeof(int)*i);
	for(j=0;j<i;j++)
	{
		scanf("%d",&n);
		a[j]=n;
	}
	printf("���������Ԫ��Ϊ��%d\n",largest(a,i));
	free(a);
}