#include<stdio.h>
void main()
{
	int i,j=0;
	char c1[100],c2[100],c;
	printf("����һ�������ֺ���ĸ��ɵ��ַ���:\n");
	scanf("%s",c1);
	for(i=0;i<100;i++)
	{
		if(c1[i]>='0'&&c1[i]<='9')
		{
			c2[j]=c1[i];j++;
		}
	}
	c2[j]='\0';
	for(j=0;j<99;j++)
		for(i=0;i<99-j;i++)
		{
			if(c2[i]<c2[i+1])
			{
				c=c2[i];
				c2[i]=c2[i+1];
				c2[i+1]=c;
			}
		}
	printf("����ַ���������ú������\n%s\n",c2);
}