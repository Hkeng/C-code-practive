#include<stdio.h>
#include<stdlib.h>
void main()
{
	void maxmin(int *A,int n,int *max,int *min);
	int *a,n,i,max,min;
	printf("输入数组长度：");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	printf("输入数组元素\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	maxmin(a,n,&max,&min);
	printf("该数组中最大元素为%3d,最小元素为%3d。\n",max,min);
	free(a);
}
void maxmin(int *A,int n,int *max,int *min)
{
	int i;
	*max=*min=A[0];
	for(i=1;i<n;i++)
	{
		if(A[i]>*max)
			*max=A[i];
		if(A[i]<*min)
			*min=A[i];
	}
}
