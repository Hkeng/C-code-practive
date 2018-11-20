#include<stdio.h>
#include<string.h>
void main()
{
	void sort(char *q[],int n);
	char s[3][50],*p[3]={s[0],s[1],s[2]};
	int i;
	printf("输入3个字符串:\n");
	for(i=0;i<3;i++)
		gets(s[i]);
	sort(p,3);
	printf("3个字符串由小到大顺序输出为:\n");
	for(i=0;i<3;i++)
		printf("%s\n",p[i]);
}
void sort(char *q[],int n)
{
	int i,j,k;
	char *c;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(q[k],q[j])>0)
				k=j;
			if(k!=i)
			{
				c=q[i];
				q[i]=q[k];
				q[k]=c;
			}
		}
	}
}